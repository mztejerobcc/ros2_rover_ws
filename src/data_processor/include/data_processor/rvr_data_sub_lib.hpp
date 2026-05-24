#ifndef DATA_SUB_LIB_HPP
#define DATA_SUB_LIB_HPP

#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rvr_msgs/msg/rover_data.hpp"
#include "data_processor/data_pub_lib.hpp"

class RvrDataSubscriber : public rclcpp::Node {
private:
  void topic_callback(const rvr_msgs::msg::RoverData & msg);
  rclcpp::Subscription<rvr_msgs::msg::RoverData>::SharedPtr subscription_;

  std::shared_ptr<DataProcessor> dp; // create a shared object for data processing
public:
  RvrDataSubscriber(std::shared_ptr<DataProcessor> dp);
};

#endif