#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rvr_msgs/msg/rover_data.hpp"

class RvrDataSubscriber : public rclcpp::Node {
private:
  void topic_callback(const rvr_msgs::msg::RoverData & msg);
  rclcpp::Subscription<rvr_msgs::msg::RoverData>::SharedPtr subscription_;
public:
  RvrDataSubscriber();
};