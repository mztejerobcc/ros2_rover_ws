// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rvr_msgs:msg/RoverData.idl
// generated code does not contain a copyright notice
#include "rvr_msgs/msg/detail/rover_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rvr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rvr_msgs/msg/detail/rover_data__struct.h"
#include "rvr_msgs/msg/detail/rover_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rvr_msgs/msg/detail/vector3__functions.h"  // a_imu, w_imu
#include "rvr_msgs/msg/detail/wheel4__functions.h"  // d_wheel, v_wheel

// forward declare type support functions
size_t get_serialized_size_rvr_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rvr_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Vector3)();
size_t get_serialized_size_rvr_msgs__msg__Wheel4(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rvr_msgs__msg__Wheel4(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Wheel4)();


using _RoverData__ros_msg_type = rvr_msgs__msg__RoverData;

static bool _RoverData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoverData__ros_msg_type * ros_message = static_cast<const _RoverData__ros_msg_type *>(untyped_ros_message);
  // Field name: d_wheel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Wheel4
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->d_wheel, cdr))
    {
      return false;
    }
  }

  // Field name: v_wheel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Wheel4
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->v_wheel, cdr))
    {
      return false;
    }
  }

  // Field name: a_imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->a_imu, cdr))
    {
      return false;
    }
  }

  // Field name: w_imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->w_imu, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RoverData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoverData__ros_msg_type * ros_message = static_cast<_RoverData__ros_msg_type *>(untyped_ros_message);
  // Field name: d_wheel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Wheel4
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->d_wheel))
    {
      return false;
    }
  }

  // Field name: v_wheel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Wheel4
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->v_wheel))
    {
      return false;
    }
  }

  // Field name: a_imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->a_imu))
    {
      return false;
    }
  }

  // Field name: w_imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rvr_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->w_imu))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rvr_msgs
size_t get_serialized_size_rvr_msgs__msg__RoverData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoverData__ros_msg_type * ros_message = static_cast<const _RoverData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name d_wheel

  current_alignment += get_serialized_size_rvr_msgs__msg__Wheel4(
    &(ros_message->d_wheel), current_alignment);
  // field.name v_wheel

  current_alignment += get_serialized_size_rvr_msgs__msg__Wheel4(
    &(ros_message->v_wheel), current_alignment);
  // field.name a_imu

  current_alignment += get_serialized_size_rvr_msgs__msg__Vector3(
    &(ros_message->a_imu), current_alignment);
  // field.name w_imu

  current_alignment += get_serialized_size_rvr_msgs__msg__Vector3(
    &(ros_message->w_imu), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RoverData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rvr_msgs__msg__RoverData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rvr_msgs
size_t max_serialized_size_rvr_msgs__msg__RoverData(
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

  // member: d_wheel
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rvr_msgs__msg__Wheel4(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: v_wheel
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rvr_msgs__msg__Wheel4(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: a_imu
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rvr_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: w_imu
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rvr_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rvr_msgs__msg__RoverData;
    is_plain =
      (
      offsetof(DataType, w_imu) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RoverData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rvr_msgs__msg__RoverData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RoverData = {
  "rvr_msgs::msg",
  "RoverData",
  _RoverData__cdr_serialize,
  _RoverData__cdr_deserialize,
  _RoverData__get_serialized_size,
  _RoverData__max_serialized_size
};

static rosidl_message_type_support_t _RoverData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoverData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rvr_msgs, msg, RoverData)() {
  return &_RoverData__type_support;
}

#if defined(__cplusplus)
}
#endif
