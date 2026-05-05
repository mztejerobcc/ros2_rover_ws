// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rvr_msgs:msg/Wheel4.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__WHEEL4__TRAITS_HPP_
#define RVR_MSGS__MSG__DETAIL__WHEEL4__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rvr_msgs/msg/detail/wheel4__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rvr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Wheel4 & msg,
  std::ostream & out)
{
  out << "{";
  // member: wheel1
  {
    out << "wheel1: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel1, out);
    out << ", ";
  }

  // member: wheel2
  {
    out << "wheel2: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel2, out);
    out << ", ";
  }

  // member: wheel3
  {
    out << "wheel3: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel3, out);
    out << ", ";
  }

  // member: wheel4
  {
    out << "wheel4: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Wheel4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wheel1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel1: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel1, out);
    out << "\n";
  }

  // member: wheel2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel2: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel2, out);
    out << "\n";
  }

  // member: wheel3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel3: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel3, out);
    out << "\n";
  }

  // member: wheel4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel4: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Wheel4 & msg, bool use_flow_style = false)
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
  const rvr_msgs::msg::Wheel4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  rvr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rvr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rvr_msgs::msg::Wheel4 & msg)
{
  return rvr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rvr_msgs::msg::Wheel4>()
{
  return "rvr_msgs::msg::Wheel4";
}

template<>
inline const char * name<rvr_msgs::msg::Wheel4>()
{
  return "rvr_msgs/msg/Wheel4";
}

template<>
struct has_fixed_size<rvr_msgs::msg::Wheel4>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rvr_msgs::msg::Wheel4>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rvr_msgs::msg::Wheel4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVR_MSGS__MSG__DETAIL__WHEEL4__TRAITS_HPP_
