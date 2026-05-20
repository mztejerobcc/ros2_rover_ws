#include "data_processor/rvr_data_sub_lib.hpp"

using std::placeholders::_1;

RvrDataSubscriber::RvrDataSubscriber() : Node("rvr_data_subscriber") {
  subscription_ = this->create_subscription<rvr_msgs::msg::RoverData>(
    "/rvr_data", 10, std::bind(&RvrDataSubscriber::topic_callback, this, _1));
  }

void RvrDataSubscriber::topic_callback(const rvr_msgs::msg::RoverData & msg) {
  RCLCPP_INFO(this->get_logger(), "Received: '%f, %f, %f'", msg.a_imu.x, msg.a_imu.y, msg.a_imu.z);
}