// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rvr_msgs:msg/Wheel4.idl
// generated code does not contain a copyright notice
#include "rvr_msgs/msg/detail/wheel4__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rvr_msgs/msg/detail/wheel4__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rvr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rvr_msgs
cdr_serialize(
  const rvr_msgs::msg::Wheel4 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: wheel1
  cdr << ros_message.wheel1;
  // Member: wheel2
  cdr << ros_message.wheel2;
  // Member: wheel3
  cdr << ros_message.wheel3;
  // Member: wheel4
  cdr << ros_message.wheel4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rvr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rvr_msgs::msg::Wheel4 & ros_message)
{
  // Member: wheel1
  cdr >> ros_message.wheel1;

  // Member: wheel2
  cdr >> ros_message.wheel2;

  // Member: wheel3
  cdr >> ros_message.wheel3;

  // Member: wheel4
  cdr >> ros_message.wheel4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rvr_msgs
get_serialized_size(
  const rvr_msgs::msg::Wheel4 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: wheel1
  {
    size_t item_size = sizeof(ros_message.wheel1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel2
  {
    size_t item_size = sizeof(ros_message.wheel2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel3
  {
    size_t item_size = sizeof(ros_message.wheel3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel4
  {
    size_t item_size = sizeof(ros_message.wheel4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rvr_msgs
max_serialized_size_Wheel4(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: wheel1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rvr_msgs::msg::Wheel4;
    is_plain =
      (
      offsetof(DataType, wheel4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Wheel4__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rvr_msgs::msg::Wheel4 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Wheel4__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rvr_msgs::msg::Wheel4 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Wheel4__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rvr_msgs::msg::Wheel4 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Wheel4__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Wheel4(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Wheel4__callbacks = {
  "rvr_msgs::msg",
  "Wheel4",
  _Wheel4__cdr_serialize,
  _Wheel4__cdr_deserialize,
  _Wheel4__get_serialized_size,
  _Wheel4__max_serialized_size
};

static rosidl_message_type_support_t _Wheel4__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Wheel4__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rvr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rvr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rvr_msgs::msg::Wheel4>()
{
  return &rvr_msgs::msg::typesupport_fastrtps_cpp::_Wheel4__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rvr_msgs, msg, Wheel4)() {
  return &rvr_msgs::msg::typesupport_fastrtps_cpp::_Wheel4__handle;
}

#ifdef __cplusplus
}
#endif
