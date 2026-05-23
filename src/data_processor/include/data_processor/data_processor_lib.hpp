#ifndef DATA_PROCESSOR_HPP
#define DATA_PROCESSOR_HPP

#include <chrono>
#include <thread>
#include <Eigen/Dense>

#include "rvr_msgs/msg/rover_data.hpp" // get data from subscriber
#include "rvr_msgs/msg/pos_data.hpp"

class DataProcessor {
    private:

        /*
        This class is meant to estimate position and heading angle using IMU data and
        wheel encoder data individually. No sensor fusion is currently being implemented.
        */

        float dt;

        Eigen::Vector3d offsets; // TODO: find actual offsets!
        Eigen::Vector3d a_bias; // TODO: find actual imu bias
        Eigen::Vector3d gravity;

        Eigen::Vector3d angle;
        Eigen::Vector3d omega;

        Eigen::Vector3d a_body;
        Eigen::Vector3d v_body;
        Eigen::Vector3d r_body;

        Eigen::Vector3d a_global;
        Eigen::Vector3d v_global;
        Eigen::Vector3d r_global;

        // strictly use for xy-plane where pitch and roll are assumed to be zero
        Eigen::Vector3d R_b_to_g(Eigen::Vector3d state, double theta);

        void updateStates();

    public:

        DataProcessor();
        ~DataProcessor();

        void ReceiveData(const rvr_msgs::msg::RoverData & msg);
        void ProcessData();

        // Getters
        float GetXGlobalIMU();
        float GetYGlobalIMU();
        float GetYawGlobalIMU();

        float GetXGlobalWE();
        float GetYGlobalWE();
        float GetYawGlobalWE();
};

#endif