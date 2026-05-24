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

#include "geometry_msgs/msg/point.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "visualization_msgs/msg/marker.hpp"

class DataProcessorPublisher : public rclcpp::Node
{
private:
  // default
  void imu_callback();
  void enc_callback();
  void publish_all();
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr imu_publisher_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr enc_publisher_;

  std::shared_ptr<DataProcessor> dp; // create a shared object for data processing

public:
  DataProcessorPublisher(std::shared_ptr<DataProcessor> dp);
};

#endif