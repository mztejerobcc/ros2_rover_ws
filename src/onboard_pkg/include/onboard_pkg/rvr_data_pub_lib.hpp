#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "onboard_pkg/rvr_usb_interface_lib.hpp"

#include "rvr_msgs/msg/rover_data.hpp"

class RoverDataPublisher : public rclcpp::Node {
  private:
    // default 
    void timer_callback();
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<rvr_msgs::msg::RoverData>::SharedPtr publisher_;
    size_t count_;

    rvrUsbInterface serial; // create an object for serial communication through USB

  public:
    RoverDataPublisher();
};