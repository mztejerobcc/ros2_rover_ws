#include "data_processor/data_pub_lib.hpp"
using namespace std::chrono_literals;

DataProcessorPublisher::DataProcessorPublisher(std::shared_ptr<DataProcessor> dp)
: Node("imu_odom_publisher"), dp(dp)
{
  imu_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("imu_odom", 10);
  enc_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("enc_odom", 10);
  
  timer_ = this->create_wall_timer(
    10ms, std::bind(&DataProcessorPublisher::publish_all, this)
  );
}

void DataProcessorPublisher::imu_callback()
{
  auto imu_marker = visualization_msgs::msg::Marker();
  this->dp->ProcessImuData();

  // Get processed position and yaw from data processor
  float x_imu = this->dp->GetXGlobalIMU();
  float y_imu = this->dp->GetYGlobalIMU();
  float yaw_imu = this->dp->GetYawGlobalIMU();

  // Create marker
  imu_marker.header.frame_id = "map";
  imu_marker.header.stamp = this->now();
  imu_marker.ns = "imu";
  imu_marker.id = 0;
  imu_marker.type = visualization_msgs::msg::Marker::CUBE;
  imu_marker.action = visualization_msgs::msg::Marker::ADD;

  // Set position
  imu_marker.pose.position.x = x_imu;
  imu_marker.pose.position.y = y_imu;
  imu_marker.pose.position.z = 0.0;

  // Convert yaw to quaternion
  double imu_cos_yaw = cos(yaw_imu / 2.0);
  double imu_sin_yaw = sin(yaw_imu / 2.0);

  imu_marker.pose.orientation.x = 0.0;
  imu_marker.pose.orientation.y = 0.0;
  imu_marker.pose.orientation.z = imu_sin_yaw;
  imu_marker.pose.orientation.w = imu_cos_yaw;

  // Set scale
  imu_marker.scale.x = 5;  // length
  imu_marker.scale.y = 3;  // width
  imu_marker.scale.z = 2;  // height

  // Set color
  imu_marker.color.r = 1.0;
  imu_marker.color.g = 0.0;
  imu_marker.color.b = 0.0;
  imu_marker.color.a = 1.0;

  // Lifetime (0 = forever)
  imu_marker.lifetime.sec = 0;
  imu_marker.lifetime.nanosec = 0;

  // Log message (helps user see data in real time)
  RCLCPP_INFO(
    this->get_logger(), "Publishing Pos: '%f, %f, %f'", imu_marker.pose.position.x, imu_marker.pose.position.y, yaw_imu);

  // publish message
  imu_publisher_->publish(imu_marker);
}

void DataProcessorPublisher::enc_callback()
{
  auto enc_marker = visualization_msgs::msg::Marker();
  this->dp->ProcessImuData();

  // Get processed position and yaw from data processor
  float x_enc = this->dp->GetXGlobalEnc();
  float y_enc = this->dp->GetYGlobalEnc();
  float yaw_enc = this->dp->GetYawGlobalEnc();

  // Create marker
  enc_marker.header.frame_id = "map";
  enc_marker.header.stamp = this->now();
  enc_marker.ns = "encoder";
  enc_marker.id = 1;
  enc_marker.type = visualization_msgs::msg::Marker::CUBE;
  enc_marker.action = visualization_msgs::msg::Marker::ADD;

  // Set position
  enc_marker.pose.position.x = x_enc;
  enc_marker.pose.position.y = y_enc;
  enc_marker.pose.position.z = 0.0;

  // Convert yaw to quaternion
  double enc_cos_yaw = cos(yaw_enc / 2.0);
  double enc_sin_yaw = sin(yaw_enc / 2.0);

  enc_marker.pose.orientation.x = 0.0;
  enc_marker.pose.orientation.y = 0.0;
  enc_marker.pose.orientation.z = enc_sin_yaw;
  enc_marker.pose.orientation.w = enc_cos_yaw;

  // Set scale
  enc_marker.scale.x = 5;  // length
  enc_marker.scale.y = 3;  // width
  enc_marker.scale.z = 2;  // height

  // Set color
  enc_marker.color.r = 1.0;
  enc_marker.color.g = 1.0;
  enc_marker.color.b = 0.0;
  enc_marker.color.a = 1.0;

  // Lifetime (0 = forever)
  enc_marker.lifetime.sec = 0;
  enc_marker.lifetime.nanosec = 0;

  // Log message (helps user see data in real time)
  RCLCPP_INFO(
    this->get_logger(), "Publishing Pos: '%f, %f, %f'", enc_marker.pose.position.x, enc_marker.pose.position.y, yaw_enc);

  // publish message
  enc_publisher_->publish(enc_marker);
}

void DataProcessorPublisher::publish_all() {
  imu_callback();
  enc_callback();
}