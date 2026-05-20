// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rvr_msgs:msg/Wheel4.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__WHEEL4__STRUCT_H_
#define RVR_MSGS__MSG__DETAIL__WHEEL4__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Wheel4 in the package rvr_msgs.
typedef struct rvr_msgs__msg__Wheel4
{
  float wheel1;
  float wheel2;
  float wheel3;
  float wheel4;
} rvr_msgs__msg__Wheel4;

// Struct for a sequence of rvr_msgs__msg__Wheel4.
typedef struct rvr_msgs__msg__Wheel4__Sequence
{
  rvr_msgs__msg__Wheel4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rvr_msgs__msg__Wheel4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVR_MSGS__MSG__DETAIL__WHEEL4__STRUCT_H_
