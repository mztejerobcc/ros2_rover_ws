#ifndef DATA_PUB_LIB_HPP
#define DATA_PUB_LIB_HPP

#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "data_processor/data_processor_lib.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"
#include <nav_msgs/msg/odometry.hpp>

class DataProcessorPublisher : public rclcpp::Node
{
private:
  // default
  void timer_callback();
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr publisher_;

  std::shared_ptr<DataProcessor> dp; // create a shared object for data processing

public:
  DataProcessorPublisher(std::shared_ptr<DataProcessor> dp);
};

#endif