// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rvr_msgs:msg/CommandVelocities.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__FUNCTIONS_H_
#define RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rvr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rvr_msgs/msg/detail/command_velocities__struct.h"

/// Initialize msg/CommandVelocities message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rvr_msgs__msg__CommandVelocities
 * )) before or use
 * rvr_msgs__msg__CommandVelocities__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
bool
rvr_msgs__msg__CommandVelocities__init(rvr_msgs__msg__CommandVelocities * msg);

/// Finalize msg/CommandVelocities message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
void
rvr_msgs__msg__CommandVelocities__fini(rvr_msgs__msg__CommandVelocities * msg);

/// Create msg/CommandVelocities message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rvr_msgs__msg__CommandVelocities__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
rvr_msgs__msg__CommandVelocities *
rvr_msgs__msg__CommandVelocities__create();

/// Destroy msg/CommandVelocities message.
/**
 * It calls
 * rvr_msgs__msg__CommandVelocities__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
void
rvr_msgs__msg__CommandVelocities__destroy(rvr_msgs__msg__CommandVelocities * msg);

/// Check for msg/CommandVelocities message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
bool
rvr_msgs__msg__CommandVelocities__are_equal(const rvr_msgs__msg__CommandVelocities * lhs, const rvr_msgs__msg__CommandVelocities * rhs);

/// Copy a msg/CommandVelocities message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
bool
rvr_msgs__msg__CommandVelocities__copy(
  const rvr_msgs__msg__CommandVelocities * input,
  rvr_msgs__msg__CommandVelocities * output);

/// Initialize array of msg/CommandVelocities messages.
/**
 * It allocates the memory for the number of elements and calls
 * rvr_msgs__msg__CommandVelocities__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
bool
rvr_msgs__msg__CommandVelocities__Sequence__init(rvr_msgs__msg__CommandVelocities__Sequence * array, size_t size);

/// Finalize array of msg/CommandVelocities messages.
/**
 * It calls
 * rvr_msgs__msg__CommandVelocities__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
void
rvr_msgs__msg__CommandVelocities__Sequence__fini(rvr_msgs__msg__CommandVelocities__Sequence * array);

/// Create array of msg/CommandVelocities messages.
/**
 * It allocates the memory for the array and calls
 * rvr_msgs__msg__CommandVelocities__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
rvr_msgs__msg__CommandVelocities__Sequence *
rvr_msgs__msg__CommandVelocities__Sequence__create(size_t size);

/// Destroy array of msg/CommandVelocities messages.
/**
 * It calls
 * rvr_msgs__msg__CommandVelocities__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
void
rvr_msgs__msg__CommandVelocities__Sequence__destroy(rvr_msgs__msg__CommandVelocities__Sequence * array);

/// Check for msg/CommandVelocities message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
bool
rvr_msgs__msg__CommandVelocities__Sequence__are_equal(const rvr_msgs__msg__CommandVelocities__Sequence * lhs, const rvr_msgs__msg__CommandVelocities__Sequence * rhs);

/// Copy an array of msg/CommandVelocities messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rvr_msgs
bool
rvr_msgs__msg__CommandVelocities__Sequence__copy(
  const rvr_msgs__msg__CommandVelocities__Sequence * input,
  rvr_msgs__msg__CommandVelocities__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RVR_MSGS__MSG__DETAIL__COMMAND_VELOCITIES__FUNCTIONS_H_
