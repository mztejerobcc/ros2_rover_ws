// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rvr_msgs:msg/RoverData.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__ROVER_DATA__STRUCT_H_
#define RVR_MSGS__MSG__DETAIL__ROVER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'd_wheel'
// Member 'v_wheel'
#include "rvr_msgs/msg/detail/wheel4__struct.h"
// Member 'a_imu'
// Member 'w_imu'
#include "rvr_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/RoverData in the package rvr_msgs.
typedef struct rvr_msgs__msg__RoverData
{
  rvr_msgs__msg__Wheel4 d_wheel;
  rvr_msgs__msg__Wheel4 v_wheel;
  rvr_msgs__msg__Vector3 a_imu;
  rvr_msgs__msg__Vector3 w_imu;
} rvr_msgs__msg__RoverData;

// Struct for a sequence of rvr_msgs__msg__RoverData.
typedef struct rvr_msgs__msg__RoverData__Sequence
{
  rvr_msgs__msg__RoverData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rvr_msgs__msg__RoverData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVR_MSGS__MSG__DETAIL__ROVER_DATA__STRUCT_H_
