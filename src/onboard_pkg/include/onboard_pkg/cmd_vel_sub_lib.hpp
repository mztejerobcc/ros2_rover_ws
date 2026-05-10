#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "onboard_pkg/rvr_usb_interface_lib.hpp"
#include "rvr_msgs/msg/command_velocities.hpp"

class CmdVelSubscriber : public rclcpp::Node {
private:
  void topic_callback(const rvr_msgs::msg::CommandVelocities & msg);
  rclcpp::Subscription<rvr_msgs::msg::CommandVelocities>::SharedPtr subscription_;

  rvrUsbInterface serial;

public:
  CmdVelSubscriber();
};