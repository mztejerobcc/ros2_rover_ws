#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "controller/usb_interface_lib.hpp"

#include "rvr_msgs/msg/command_velocities.hpp"

class RemoteControlPublisher : public rclcpp::Node
{
private:
  // default
  void timer_callback();
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<rvr_msgs::msg::CommandVelocities>::SharedPtr publisher_;
  size_t count_;

  usbInterface serial; // create an object for serial communication through USB

public:
  RemoteControlPublisher();
};
