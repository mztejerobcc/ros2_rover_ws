// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rvr_msgs:msg/CommandVelocities.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__STRUCT_H_
#define RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CommandVelocities in the package rvr_msgs.
/**
  * Command velocities for each wheel
 */
typedef struct rvr_msgs__msg__CommandVelocities
{
  float v1;
  float v2;
  float v3;
  float v4;
} rvr_msgs__msg__CommandVelocities;

// Struct for a sequence of rvr_msgs__msg__CommandVelocities.
typedef struct rvr_msgs__msg__CommandVelocities__Sequence
{
  rvr_msgs__msg__CommandVelocities * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rvr_msgs__msg__CommandVelocities__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__STRUCT_H_
