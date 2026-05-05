#include "onboard_pkg/rvr_data_pub_lib.hpp"

using namespace std::chrono_literals;

RoverDataPublisher::RoverDataPublisher() : Node("remote_control_publisher"), count_(0) {
  publisher_ = this->create_publisher<rvr_msgs::msg::RoverData>("rvr_data", 10);
  timer_ = this->create_wall_timer(
        10ms, std::bind(&RoverDataPublisher::timer_callback, this)
  );
}

void RoverDataPublisher::timer_callback()
{
  auto message = rvr_msgs::msg::RoverData();

  std::string line = serial.usbRead();
  serial.parseData(line);

  // store each updated command velocity into message
  message.d_wheel.wheel1 = serial.getD1();
  message.d_wheel.wheel2 = serial.getD2();
  message.d_wheel.wheel3 = serial.getD3();
  message.d_wheel.wheel4 = serial.getD4();

  message.v_wheel.wheel1 = serial.getV1();
  message.v_wheel.wheel2 = serial.getV2();
  message.v_wheel.wheel3 = serial.getV3();
  message.v_wheel.wheel4 = serial.getV4();

  message.a_imu.x = serial.getAX();
  message.a_imu.y = serial.getAY();
  message.a_imu.z = serial.getAZ();

  message.w_imu.x = serial.getWX();
  message.w_imu.y = serial.getWY();
  message.w_imu.z = serial.getWZ();

  // Log message (helps user see data in real time)
  RCLCPP_INFO(this->get_logger(), "Publishing d: '%f, %f, %f, %f'", message.d_wheel.wheel1, message.d_wheel.wheel2, message.d_wheel.wheel3, message.d_wheel.wheel4);
  RCLCPP_INFO(this->get_logger(), "Publishing v: '%f, %f, %f, %f'", message.v_wheel.wheel1, message.v_wheel.wheel2, message.v_wheel.wheel3, message.v_wheel.wheel4);
  RCLCPP_INFO(this->get_logger(), "Publishing a: '%f, %f, %f'", message.a_imu.x, message.a_imu.y, message.a_imu.z);
  RCLCPP_INFO(this->get_logger(), "Publishing w: '%f, %f, %f'", message.w_imu.x, message.w_imu.y, message.w_imu.z);
  
  // publish message
  publisher_->publish(message);
}