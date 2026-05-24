#include "data_processor/data_pub_lib.hpp"

DataProcessor::DataProcessor() : dt(0.01), W(16e-2),
                                 offsets(0.05, -0.01, 0.00), 
                                 a_bias(0.00, 0.00, 0.00),
                                 gravity(0.00, 0.00, 9.81),
                                 angle_imu(0.00, 0.00, 0.00),
                                 omega_imu(0.00, 0.00, 0.00),
                                 a_body_imu(0.00, 0.00, 0.00),
                                 v_body_imu(0.00, 0.00, 0.00),
                                 r_body_imu(0.00, 0.00, 0.00),
                                 a_global_imu(0.00, 0.00, 0.00),
                                 v_global_imu(0.00, 0.00, 0.00),
                                 r_global_imu(0.00, 0.00, 0.00),
                                 angle_enc(0.00, 0.00, 0.00),
                                 omega_enc(0.00, 0.00, 0.00),
                                 a_body_enc(0.00, 0.00, 0.00),
                                 v_body_enc(0.00, 0.00, 0.00),
                                 r_body_enc(0.00, 0.00, 0.00),
                                 a_global_enc(0.00, 0.00, 0.00),
                                 v_global_enc(0.00, 0.00, 0.00),
                                 r_global_enc(0.00, 0.00, 0.00) {};

DataProcessor::~DataProcessor() {};

Eigen::Vector3d DataProcessor::R_b_to_g(Eigen::Vector3d state, double theta) {
            Eigen::Matrix3d R;
            R << cos(theta), -sin(theta), 0,
                        sin(theta), cos(theta), 0,
                        0, 0, 1;
            return R * state;
        }

void DataProcessor::updateImuStates() {
            // Correct acceleration using offsetsa and biases
            a_body_imu = a_body_imu - (omega_imu / dt).cross(offsets) - omega_imu.cross(omega_imu.cross(offsets)) - a_bias - gravity;

            // Update states
            v_body_imu = v_body_imu + a_body_imu * dt;
            r_body_imu = r_body_imu + v_body_imu * dt;
            angle_imu = angle_imu + omega_imu * dt;

            r_global_imu = R_b_to_g(r_body_imu, angle_imu[2]);

        // TODO: Implement method for finding initial angle offsets using gravity measurements
        // TODO: Implement high pass filter for IMU (e.g. a_smooth = alpha * (a_smooth + a_body - a_body_prev))
        }

void DataProcessor::updateEncStates() {
    r_global_enc = R_b_to_g(r_body_enc, angle_enc[2]);
}

void DataProcessor::ReceiveImuData(const rvr_msgs::msg::RoverData & msg) {
    this->a_body_imu[0] = msg.a_imu.x;
    this->a_body_imu[1] = msg.a_imu.y;
    this->a_body_imu[2] = msg.a_imu.z;

    this->omega_imu[0] = msg.w_imu.x;
    this->omega_imu[1] = msg.w_imu.y;
    this->omega_imu[2] = msg.w_imu.z;
}

void DataProcessor::ReceiveEncData(const rvr_msgs::msg::RoverData & msg) {
    float d_r = (msg.d_wheel.wheel1 + msg.d_wheel.wheel2) / 2.0;
    float d_l = (msg.d_wheel.wheel3 + msg.d_wheel.wheel4) / 2.0;
    float d = (d_r + d_l) / 2.0;

    float d_angle = (d_r - d_l) / W;
    float psi = this->angle_enc[2] + d_angle;

    this->r_body_enc[0] += d * cos(psi);
    this->r_body_enc[1] += d * sin(psi);

    this->angle_enc[2] += d_angle;
}

void DataProcessor::ProcessImuData() {
    updateImuStates();
    std::this_thread::sleep_for(std::chrono::duration<float>(dt));
}

void DataProcessor::ProcessEncData() {
    updateEncStates();
    std::this_thread::sleep_for(std::chrono::duration<float>(dt));
}

float DataProcessor::GetXGlobalIMU() {
    return r_global_imu[0];
};
float DataProcessor::GetYGlobalIMU() {
    return r_global_imu[1];
};
float DataProcessor::GetYawGlobalIMU() {
    return angle_imu[2];
};

float DataProcessor::GetXGlobalEnc() {
    return r_global_enc[0];
};
float DataProcessor::GetYGlobalEnc() {
    return r_global_enc[1];
};
float DataProcessor::GetYawGlobalEnc() {
    return angle_enc[2];
};