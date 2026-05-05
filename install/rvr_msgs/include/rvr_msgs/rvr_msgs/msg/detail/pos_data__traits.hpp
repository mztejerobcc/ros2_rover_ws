// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rvr_msgs:msg/PosData.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__POS_DATA__TRAITS_HPP_
#define RVR_MSGS__MSG__DETAIL__POS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rvr_msgs/msg/detail/pos_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rvr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PosData & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosData & msg, bool use_flow_style = false)
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
  const rvr_msgs::msg::PosData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rvr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rvr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rvr_msgs::msg::PosData & msg)
{
  return rvr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rvr_msgs::msg::PosData>()
{
  return "rvr_msgs::msg::PosData";
}

template<>
inline const char * name<rvr_msgs::msg::PosData>()
{
  return "rvr_msgs/msg/PosData";
}

template<>
struct has_fixed_size<rvr_msgs::msg::PosData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rvr_msgs::msg::PosData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rvr_msgs::msg::PosData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVR_MSGS__MSG__DETAIL__POS_DATA__TRAITS_HPP_
