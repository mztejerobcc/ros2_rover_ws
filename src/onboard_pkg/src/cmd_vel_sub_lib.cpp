#include "onboard_pkg/cmd_vel_sub_lib.hpp"

using std::placeholders::_1;

CmdVelSubscriber::CmdVelSubscriber() : Node("cmd_vel_subscriber") {
  subscription_ = this->create_subscription<rvr_msgs::msg::CommandVelocities>(
    "/cmd_velocities", 10, std::bind(&CmdVelSubscriber::topic_callback, this, _1));
  }

void CmdVelSubscriber::topic_callback(const rvr_msgs::msg::CommandVelocities & msg) {
  this->serial.setCmdVel(msg.v1, msg.v2, msg.v3, msg.v4);
  this->serial.usbWrite();
  RCLCPP_INFO(this->get_logger(), "Received: '%f, %f, %f, %f'", msg.v1, msg.v2, msg.v3, msg.v4);
}