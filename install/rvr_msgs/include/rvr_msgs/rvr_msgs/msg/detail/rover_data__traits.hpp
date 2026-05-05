// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rvr_msgs:msg/RoverData.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__ROVER_DATA__TRAITS_HPP_
#define RVR_MSGS__MSG__DETAIL__ROVER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rvr_msgs/msg/detail/rover_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'd_wheel'
// Member 'v_wheel'
#include "rvr_msgs/msg/detail/wheel4__traits.hpp"
// Member 'a_imu'
// Member 'w_imu'
#include "rvr_msgs/msg/detail/vector3__traits.hpp"

namespace rvr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoverData & msg,
  std::ostream & out)
{
  out << "{";
  // member: d_wheel
  {
    out << "d_wheel: ";
    to_flow_style_yaml(msg.d_wheel, out);
    out << ", ";
  }

  // member: v_wheel
  {
    out << "v_wheel: ";
    to_flow_style_yaml(msg.v_wheel, out);
    out << ", ";
  }

  // member: a_imu
  {
    out << "a_imu: ";
    to_flow_style_yaml(msg.a_imu, out);
    out << ", ";
  }

  // member: w_imu
  {
    out << "w_imu: ";
    to_flow_style_yaml(msg.w_imu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: d_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_wheel:\n";
    to_block_style_yaml(msg.d_wheel, out, indentation + 2);
  }

  // member: v_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_wheel:\n";
    to_block_style_yaml(msg.v_wheel, out, indentation + 2);
  }

  // member: a_imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_imu:\n";
    to_block_style_yaml(msg.a_imu, out, indentation + 2);
  }

  // member: w_imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w_imu:\n";
    to_block_style_yaml(msg.w_imu, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rvr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rvr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rvr_msgs::msg::RoverData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rvr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rvr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rvr_msgs::msg::RoverData & msg)
{
  return rvr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rvr_msgs::msg::RoverData>()
{
  return "rvr_msgs::msg::RoverData";
}

template<>
inline const char * name<rvr_msgs::msg::RoverData>()
{
  return "rvr_msgs/msg/RoverData";
}

template<>
struct has_fixed_size<rvr_msgs::msg::RoverData>
  : std::integral_constant<bool, has_fixed_size<rvr_msgs::msg::Vector3>::value && has_fixed_size<rvr_msgs::msg::Wheel4>::value> {};

template<>
struct has_bounded_size<rvr_msgs::msg::RoverData>
  : std::integral_constant<bool, has_bounded_size<rvr_msgs::msg::Vector3>::value && has_bounded_size<rvr_msgs::msg::Wheel4>::value> {};

template<>
struct is_message<rvr_msgs::msg::RoverData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVR_MSGS__MSG__DETAIL__ROVER_DATA__TRAITS_HPP_
