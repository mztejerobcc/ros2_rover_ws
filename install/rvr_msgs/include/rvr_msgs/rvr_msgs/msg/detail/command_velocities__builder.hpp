// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rvr_msgs:msg/CommandVelocities.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__BUILDER_HPP_
#define RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rvr_msgs/msg/detail/command_velocities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rvr_msgs
{

namespace msg
{

namespace builder
{

class Init_CommandVelocities_v4
{
public:
  explicit Init_CommandVelocities_v4(::rvr_msgs::msg::CommandVelocities & msg)
  : msg_(msg)
  {}
  ::rvr_msgs::msg::CommandVelocities v4(::rvr_msgs::msg::CommandVelocities::_v4_type arg)
  {
    msg_.v4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rvr_msgs::msg::CommandVelocities msg_;
};

class Init_CommandVelocities_v3
{
public:
  explicit Init_CommandVelocities_v3(::rvr_msgs::msg::CommandVelocities & msg)
  : msg_(msg)
  {}
  Init_CommandVelocities_v4 v3(::rvr_msgs::msg::CommandVelocities::_v3_type arg)
  {
    msg_.v3 = std::move(arg);
    return Init_CommandVelocities_v4(msg_);
  }

private:
  ::rvr_msgs::msg::CommandVelocities msg_;
};

class Init_CommandVelocities_v2
{
public:
  explicit Init_CommandVelocities_v2(::rvr_msgs::msg::CommandVelocities & msg)
  : msg_(msg)
  {}
  Init_CommandVelocities_v3 v2(::rvr_msgs::msg::CommandVelocities::_v2_type arg)
  {
    msg_.v2 = std::move(arg);
    return Init_CommandVelocities_v3(msg_);
  }

private:
  ::rvr_msgs::msg::CommandVelocities msg_;
};

class Init_CommandVelocities_v1
{
public:
  Init_CommandVelocities_v1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandVelocities_v2 v1(::rvr_msgs::msg::CommandVelocities::_v1_type arg)
  {
    msg_.v1 = std::move(arg);
    return Init_CommandVelocities_v2(msg_);
  }

private:
  ::rvr_msgs::msg::CommandVelocities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rvr_msgs::msg::CommandVelocities>()
{
  return rvr_msgs::msg::builder::Init_CommandVelocities_v1();
}

}  // namespace rvr_msgs

#endif  // RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__BUILDER_HPP_
