#include "data_processor/data_pub_lib.hpp"

DataProcessor::DataProcessor() : dt(0.01), offsets(0.05, -0.01, 0.00), 
                                 a_bias(0.00, 0.00, 0.00),
                                 gravity(0.00, 0.00, 9.81),
                                 angle(0.00, 0.00, 0.00),
                                 omega(0.00, 0.00, 0.00),
                                 a_body(0.00, 0.00, 0.00),
                                 v_body(0.00, 0.00, 0.00),
                                 r_body(0.00, 0.00, 0.00),
                                 a_global(0.00, 0.00, 0.00),
                                 v_global(0.00, 0.00, 0.00),
                                 r_global(0.00, 0.00, 0.00) {};

DataProcessor::~DataProcessor() {};

Eigen::Vector3d DataProcessor::R_b_to_g(Eigen::Vector3d state, double theta) {
            Eigen::Matrix3d R;
            R << cos(theta), -sin(theta), 0,
                        sin(theta), cos(theta), 0,
                        0, 0, 1;
            return R * state;
        }

void DataProcessor::updateStates() {
            // Correct acceleration using offsetsa and biases
            a_body = a_body - (omega / dt).cross(offsets) - omega.cross(omega.cross(offsets)) - a_bias - gravity;

            // Update states
            v_body = v_body + a_body * dt;
            r_body = r_body + v_body * dt;
            angle = angle + omega * dt;

            r_global = R_b_to_g(r_body, angle[2]);

        // TODO: Implement method for finding initial angle offsets using gravity measurements
        // TODO: Implement high pass filter for IMU (e.g. a_smooth = alpha * (a_smooth + a_body - a_body_prev))
        }

void DataProcessor::ReceiveData(const rvr_msgs::msg::RoverData & msg) {
    this->a_body[0] = msg.a_imu.x;
    this->a_body[1] = msg.a_imu.y;
    this->a_body[2] = msg.a_imu.z;

    this->omega[0]= msg.w_imu.x;
    this->omega[1]= msg.w_imu.y;
    this->omega[2]= msg.w_imu.z;
}

void DataProcessor::ProcessData() {
    updateStates();
    std::this_thread::sleep_for(std::chrono::duration<float>(dt));
}

float DataProcessor::GetXGlobalIMU() {
    return r_global[0];
};
float DataProcessor::GetYGlobalIMU() {
    return r_global[1];
};
float DataProcessor::GetYawGlobalIMU() {
    return angle[2];
};