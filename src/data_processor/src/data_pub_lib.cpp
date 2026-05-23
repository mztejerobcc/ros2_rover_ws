#include "data_processor/data_pub_lib.hpp"
using namespace std::chrono_literals;

DataProcessorPublisher::DataProcessorPublisher(std::shared_ptr<DataProcessor> dp)
: Node("data_processor_publisher"), dp(dp)
{
  publisher_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("odom", 10);
  timer_ = this->create_wall_timer(
    10ms, std::bind(&DataProcessorPublisher::timer_callback, this)
  );
}

void DataProcessorPublisher::timer_callback()
{
  auto message = geometry_msgs::msg::PoseStamped();
  this->dp->ProcessData();

  // message.header.stamp = this->get_clock()->now();
  // message.header.frame_id = "odom";
  // message.child_frame_id = "base_link";

  // store each updated command velocity into message
  message.pose.position.x = this->dp->GetXGlobalIMU();
  message.pose.position.y = this->dp->GetYGlobalIMU();
  message.pose.position.z = 0.0;

  // convert to quarernion for Foxglove message type
  // 3Blue1Brown explanation: https://www.youtube.com/watch?v=zjMuIxRvygQ
  double yaw = this->dp->GetYawGlobalIMU();
  // double pitch = 0.0;
  // double roll = 0.0;

  double cos_yaw = cos(yaw / 2.0);
  double sin_yaw = sin(yaw / 2.0);
  // double cos_pitch = cos(pitch / 2.0);
  // double sin_pitch = sin(pitch / 2.0);
  // double cos_roll = cos(roll / 2.0);q
  // double sin_roll = sin(roll / 2.0);

  message.pose.orientation.x = 0.0;
  message.pose.orientation.y = 0.0;
  message.pose.orientation.z = sin_yaw;
  message.pose.orientation.w = cos_yaw;

  // Log message (helps user see data in real time)
  RCLCPP_INFO(
    this->get_logger(), "Publishing Pos: '%f, %f, %f'", message.pose.position.x, message.pose.position.y, yaw);

  // publish message
  publisher_->publish(message);
}