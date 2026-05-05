#include "rvr_msgs/msg/rover_data.hpp" // get data from subscriber

class DataProcessor:
    private:

        /*
        This class is meant to estimate position and heading angle using IMU data and
        wheel encoder data individually. No sensor fusion is currently being implemented.
        */
    
        // Note: some of these variable might be created and destroyed within the
        // function they are used in.

        // Time variables
        float dt;
        float t_total;

        // IMU data
        float ax_imu;
        float ay_imu;

        float wx_imu;
        float wy_imu;

        // Estimated values from IMU data
        float vx_imu;
        float vy_imu;

        float x_imu;
        float y_imu;

        float yaw_imu;

        // Wheel Encoder data
        float d_w1;
        float d_w2;
        float d_w3;
        float d_w4;

        float v_w1;
        float v_w2;
        float v_w3;
        float v_w4;

        // Estimated values from wheel encoder data
        float x_w;
        float y_w;

        float yaw_w;

        // Estimated global values
        float x_global_imu;
        float y_global_imu;
        float yaw_global_imu; // should not be affected by frame conversion

        float x_global_we;
        float y_global_we;
        float yaw_global_we; // should not be affected by frame conversion

    public:
        void ImuPosEstimate(float ax, float ay, float az); // updates imu position variables
        void WheelEncoderEstimate(float d1, float d2, float d3, float d4); // updates wheel encoder position variables
        void BodyToGlobal(float x, float y, float z); // updatess global variables

        // Getters
        float GetXGlobalIMU();
        float GetYGlobalIMU();
        float GetYawGlobalIMU();

        float GetXGlobalWE();
        float GetYGlobalWE();
        float GetYawGlobalWE();