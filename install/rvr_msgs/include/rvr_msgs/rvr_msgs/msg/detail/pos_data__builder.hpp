// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rvr_msgs:msg/PosData.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__POS_DATA__BUILDER_HPP_
#define RVR_MSGS__MSG__DETAIL__POS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rvr_msgs/msg/detail/pos_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rvr_msgs
{

namespace msg
{

namespace builder
{

class Init_PosData_yaw
{
public:
  explicit Init_PosData_yaw(::rvr_msgs::msg::PosData & msg)
  : msg_(msg)
  {}
  ::rvr_msgs::msg::PosData yaw(::rvr_msgs::msg::PosData::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rvr_msgs::msg::PosData msg_;
};

class Init_PosData_y
{
public:
  explicit Init_PosData_y(::rvr_msgs::msg::PosData & msg)
  : msg_(msg)
  {}
  Init_PosData_yaw y(::rvr_msgs::msg::PosData::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PosData_yaw(msg_);
  }

private:
  ::rvr_msgs::msg::PosData msg_;
};

class Init_PosData_x
{
public:
  Init_PosData_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosData_y x(::rvr_msgs::msg::PosData::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PosData_y(msg_);
  }

private:
  ::rvr_msgs::msg::PosData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rvr_msgs::msg::PosData>()
{
  return rvr_msgs::msg::builder::Init_PosData_x();
}

}  // namespace rvr_msgs

#endif  // RVR_MSGS__MSG__DETAIL__POS_DATA__BUILDER_HPP_
