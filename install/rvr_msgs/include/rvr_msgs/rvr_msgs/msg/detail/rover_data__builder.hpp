// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rvr_msgs:msg/RoverData.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__ROVER_DATA__BUILDER_HPP_
#define RVR_MSGS__MSG__DETAIL__ROVER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rvr_msgs/msg/detail/rover_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rvr_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverData_w_imu
{
public:
  explicit Init_RoverData_w_imu(::rvr_msgs::msg::RoverData & msg)
  : msg_(msg)
  {}
  ::rvr_msgs::msg::RoverData w_imu(::rvr_msgs::msg::RoverData::_w_imu_type arg)
  {
    msg_.w_imu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rvr_msgs::msg::RoverData msg_;
};

class Init_RoverData_a_imu
{
public:
  explicit Init_RoverData_a_imu(::rvr_msgs::msg::RoverData & msg)
  : msg_(msg)
  {}
  Init_RoverData_w_imu a_imu(::rvr_msgs::msg::RoverData::_a_imu_type arg)
  {
    msg_.a_imu = std::move(arg);
    return Init_RoverData_w_imu(msg_);
  }

private:
  ::rvr_msgs::msg::RoverData msg_;
};

class Init_RoverData_v_wheel
{
public:
  explicit Init_RoverData_v_wheel(::rvr_msgs::msg::RoverData & msg)
  : msg_(msg)
  {}
  Init_RoverData_a_imu v_wheel(::rvr_msgs::msg::RoverData::_v_wheel_type arg)
  {
    msg_.v_wheel = std::move(arg);
    return Init_RoverData_a_imu(msg_);
  }

private:
  ::rvr_msgs::msg::RoverData msg_;
};

class Init_RoverData_d_wheel
{
public:
  Init_RoverData_d_wheel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverData_v_wheel d_wheel(::rvr_msgs::msg::RoverData::_d_wheel_type arg)
  {
    msg_.d_wheel = std::move(arg);
    return Init_RoverData_v_wheel(msg_);
  }

private:
  ::rvr_msgs::msg::RoverData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rvr_msgs::msg::RoverData>()
{
  return rvr_msgs::msg::builder::Init_RoverData_d_wheel();
}

}  // namespace rvr_msgs

#endif  // RVR_MSGS__MSG__DETAIL__ROVER_DATA__BUILDER_HPP_
