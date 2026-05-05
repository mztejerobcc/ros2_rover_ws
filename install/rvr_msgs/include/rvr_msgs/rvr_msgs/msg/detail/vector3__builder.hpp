// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rvr_msgs:msg/Vector3.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__VECTOR3__BUILDER_HPP_
#define RVR_MSGS__MSG__DETAIL__VECTOR3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rvr_msgs/msg/detail/vector3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rvr_msgs
{

namespace msg
{

namespace builder
{

class Init_Vector3_z
{
public:
  explicit Init_Vector3_z(::rvr_msgs::msg::Vector3 & msg)
  : msg_(msg)
  {}
  ::rvr_msgs::msg::Vector3 z(::rvr_msgs::msg::Vector3::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rvr_msgs::msg::Vector3 msg_;
};

class Init_Vector3_y
{
public:
  explicit Init_Vector3_y(::rvr_msgs::msg::Vector3 & msg)
  : msg_(msg)
  {}
  Init_Vector3_z y(::rvr_msgs::msg::Vector3::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vector3_z(msg_);
  }

private:
  ::rvr_msgs::msg::Vector3 msg_;
};

class Init_Vector3_x
{
public:
  Init_Vector3_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector3_y x(::rvr_msgs::msg::Vector3::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector3_y(msg_);
  }

private:
  ::rvr_msgs::msg::Vector3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rvr_msgs::msg::Vector3>()
{
  return rvr_msgs::msg::builder::Init_Vector3_x();
}

}  // namespace rvr_msgs

#endif  // RVR_MSGS__MSG__DETAIL__VECTOR3__BUILDER_HPP_
