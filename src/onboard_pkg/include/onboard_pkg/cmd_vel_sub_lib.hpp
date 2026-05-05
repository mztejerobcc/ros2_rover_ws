#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rvr_msgs/msg/command_velocities.hpp"

class CmdVelSubscriber : public rclcpp::Node {
private:
  void topic_callback(const rvr_msgs::msg::CommandVelocities & msg) const;
  rclcpp::Subscription<rvr_msgs::msg::CommandVelocities>::SharedPtr subscription_;

public:
  CmdVelSubscriber();
};