// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rvr_msgs:msg/CommandVelocities.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__TRAITS_HPP_
#define RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rvr_msgs/msg/detail/command_velocities__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rvr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommandVelocities & msg,
  std::ostream & out)
{
  out << "{";
  // member: v1
  {
    out << "v1: ";
    rosidl_generator_traits::value_to_yaml(msg.v1, out);
    out << ", ";
  }

  // member: v2
  {
    out << "v2: ";
    rosidl_generator_traits::value_to_yaml(msg.v2, out);
    out << ", ";
  }

  // member: v3
  {
    out << "v3: ";
    rosidl_generator_traits::value_to_yaml(msg.v3, out);
    out << ", ";
  }

  // member: v4
  {
    out << "v4: ";
    rosidl_generator_traits::value_to_yaml(msg.v4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommandVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: v1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v1: ";
    rosidl_generator_traits::value_to_yaml(msg.v1, out);
    out << "\n";
  }

  // member: v2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v2: ";
    rosidl_generator_traits::value_to_yaml(msg.v2, out);
    out << "\n";
  }

  // member: v3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v3: ";
    rosidl_generator_traits::value_to_yaml(msg.v3, out);
    out << "\n";
  }

  // member: v4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v4: ";
    rosidl_generator_traits::value_to_yaml(msg.v4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommandVelocities & msg, bool use_flow_style = false)
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
  const rvr_msgs::msg::CommandVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  rvr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rvr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rvr_msgs::msg::CommandVelocities & msg)
{
  return rvr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rvr_msgs::msg::CommandVelocities>()
{
  return "rvr_msgs::msg::CommandVelocities";
}

template<>
inline const char * name<rvr_msgs::msg::CommandVelocities>()
{
  return "rvr_msgs/msg/CommandVelocities";
}

template<>
struct has_fixed_size<rvr_msgs::msg::CommandVelocities>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rvr_msgs::msg::CommandVelocities>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rvr_msgs::msg::CommandVelocities>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__TRAITS_HPP_
