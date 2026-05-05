// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rvr_msgs:msg/RoverData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rvr_msgs/msg/detail/rover_data__rosidl_typesupport_introspection_c.h"
#include "rvr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rvr_msgs/msg/detail/rover_data__functions.h"
#include "rvr_msgs/msg/detail/rover_data__struct.h"


// Include directives for member types
// Member `d_wheel`
// Member `v_wheel`
#include "rvr_msgs/msg/wheel4.h"
// Member `d_wheel`
// Member `v_wheel`
#include "rvr_msgs/msg/detail/wheel4__rosidl_typesupport_introspection_c.h"
// Member `a_imu`
// Member `w_imu`
#include "rvr_msgs/msg/vector3.h"
// Member `a_imu`
// Member `w_imu`
#include "rvr_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rvr_msgs__msg__RoverData__init(message_memory);
}

void rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_fini_function(void * message_memory)
{
  rvr_msgs__msg__RoverData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_member_array[4] = {
  {
    "d_wheel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rvr_msgs__msg__RoverData, d_wheel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v_wheel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rvr_msgs__msg__RoverData, v_wheel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "a_imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rvr_msgs__msg__RoverData, a_imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w_imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rvr_msgs__msg__RoverData, w_imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_members = {
  "rvr_msgs__msg",  // message namespace
  "RoverData",  // message name
  4,  // number of fields
  sizeof(rvr_msgs__msg__RoverData),
  rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_member_array,  // message members
  rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_init_function,  // function to initialize message memory (memory has to be allocated)
  rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_type_support_handle = {
  0,
  &rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rvr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rvr_msgs, msg, RoverData)() {
  rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rvr_msgs, msg, Wheel4)();
  rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rvr_msgs, msg, Wheel4)();
  rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rvr_msgs, msg, Vector3)();
  rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rvr_msgs, msg, Vector3)();
  if (!rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_type_support_handle.typesupport_identifier) {
    rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rvr_msgs__msg__RoverData__rosidl_typesupport_introspection_c__RoverData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
