// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rvr_msgs:msg/Wheel4.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__WHEEL4__BUILDER_HPP_
#define RVR_MSGS__MSG__DETAIL__WHEEL4__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rvr_msgs/msg/detail/wheel4__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rvr_msgs
{

namespace msg
{

namespace builder
{

class Init_Wheel4_wheel4
{
public:
  explicit Init_Wheel4_wheel4(::rvr_msgs::msg::Wheel4 & msg)
  : msg_(msg)
  {}
  ::rvr_msgs::msg::Wheel4 wheel4(::rvr_msgs::msg::Wheel4::_wheel4_type arg)
  {
    msg_.wheel4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rvr_msgs::msg::Wheel4 msg_;
};

class Init_Wheel4_wheel3
{
public:
  explicit Init_Wheel4_wheel3(::rvr_msgs::msg::Wheel4 & msg)
  : msg_(msg)
  {}
  Init_Wheel4_wheel4 wheel3(::rvr_msgs::msg::Wheel4::_wheel3_type arg)
  {
    msg_.wheel3 = std::move(arg);
    return Init_Wheel4_wheel4(msg_);
  }

private:
  ::rvr_msgs::msg::Wheel4 msg_;
};

class Init_Wheel4_wheel2
{
public:
  explicit Init_Wheel4_wheel2(::rvr_msgs::msg::Wheel4 & msg)
  : msg_(msg)
  {}
  Init_Wheel4_wheel3 wheel2(::rvr_msgs::msg::Wheel4::_wheel2_type arg)
  {
    msg_.wheel2 = std::move(arg);
    return Init_Wheel4_wheel3(msg_);
  }

private:
  ::rvr_msgs::msg::Wheel4 msg_;
};

class Init_Wheel4_wheel1
{
public:
  Init_Wheel4_wheel1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wheel4_wheel2 wheel1(::rvr_msgs::msg::Wheel4::_wheel1_type arg)
  {
    msg_.wheel1 = std::move(arg);
    return Init_Wheel4_wheel2(msg_);
  }

private:
  ::rvr_msgs::msg::Wheel4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rvr_msgs::msg::Wheel4>()
{
  return rvr_msgs::msg::builder::Init_Wheel4_wheel1();
}

}  // namespace rvr_msgs

#endif  // RVR_MSGS__MSG__DETAIL__WHEEL4__BUILDER_HPP_
