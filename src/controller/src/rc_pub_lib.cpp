#include "controller/rc_pub_lib.hpp"

using namespace std::chrono_literals;

RemoteControlPublisher::RemoteControlPublisher()
: Node("remote_control_publisher"), count_(0)
{
  publisher_ = this->create_publisher<rvr_msgs::msg::CommandVelocities>("cmd_velocities", 10);
  timer_ = this->create_wall_timer(
    10ms, std::bind(&RemoteControlPublisher::timer_callback, this)
  );
}

void RemoteControlPublisher::timer_callback()
{
  auto message = rvr_msgs::msg::CommandVelocities();

  std::string line = this->serial.usbRead();
  this->serial.parseData(line);

  // store each updated command velocity into message
  message.v1 = this->serial.getV1();
  message.v2 = this->serial.getV2();
  message.v3 = this->serial.getV3();
  message.v4 = this->serial.getV4();

  // Log message (helps user see data in real time)
  // RCLCPP_INFO(
  //   this->get_logger(), "Publishing: '%f, %f, %f, %f'", message.v1, message.v2, message.v3,
  //   message.v4);

  // publish message
  publisher_->publish(message);
}
