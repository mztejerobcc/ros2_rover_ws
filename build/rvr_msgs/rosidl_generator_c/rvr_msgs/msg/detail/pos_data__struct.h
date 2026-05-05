// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rvr_msgs:msg/PosData.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__POS_DATA__STRUCT_H_
#define RVR_MSGS__MSG__DETAIL__POS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PosData in the package rvr_msgs.
typedef struct rvr_msgs__msg__PosData
{
  float x;
  float y;
  float yaw;
} rvr_msgs__msg__PosData;

// Struct for a sequence of rvr_msgs__msg__PosData.
typedef struct rvr_msgs__msg__PosData__Sequence
{
  rvr_msgs__msg__PosData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rvr_msgs__msg__PosData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVR_MSGS__MSG__DETAIL__POS_DATA__STRUCT_H_
