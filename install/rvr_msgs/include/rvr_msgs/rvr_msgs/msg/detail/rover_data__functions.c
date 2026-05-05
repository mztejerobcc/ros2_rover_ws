// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rvr_msgs:msg/RoverData.idl
// generated code does not contain a copyright notice
#include "rvr_msgs/msg/detail/rover_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `d_wheel`
// Member `v_wheel`
#include "rvr_msgs/msg/detail/wheel4__functions.h"
// Member `a_imu`
// Member `w_imu`
#include "rvr_msgs/msg/detail/vector3__functions.h"

bool
rvr_msgs__msg__RoverData__init(rvr_msgs__msg__RoverData * msg)
{
  if (!msg) {
    return false;
  }
  // d_wheel
  if (!rvr_msgs__msg__Wheel4__init(&msg->d_wheel)) {
    rvr_msgs__msg__RoverData__fini(msg);
    return false;
  }
  // v_wheel
  if (!rvr_msgs__msg__Wheel4__init(&msg->v_wheel)) {
    rvr_msgs__msg__RoverData__fini(msg);
    return false;
  }
  // a_imu
  if (!rvr_msgs__msg__Vector3__init(&msg->a_imu)) {
    rvr_msgs__msg__RoverData__fini(msg);
    return false;
  }
  // w_imu
  if (!rvr_msgs__msg__Vector3__init(&msg->w_imu)) {
    rvr_msgs__msg__RoverData__fini(msg);
    return false;
  }
  return true;
}

void
rvr_msgs__msg__RoverData__fini(rvr_msgs__msg__RoverData * msg)
{
  if (!msg) {
    return;
  }
  // d_wheel
  rvr_msgs__msg__Wheel4__fini(&msg->d_wheel);
  // v_wheel
  rvr_msgs__msg__Wheel4__fini(&msg->v_wheel);
  // a_imu
  rvr_msgs__msg__Vector3__fini(&msg->a_imu);
  // w_imu
  rvr_msgs__msg__Vector3__fini(&msg->w_imu);
}

bool
rvr_msgs__msg__RoverData__are_equal(const rvr_msgs__msg__RoverData * lhs, const rvr_msgs__msg__RoverData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // d_wheel
  if (!rvr_msgs__msg__Wheel4__are_equal(
      &(lhs->d_wheel), &(rhs->d_wheel)))
  {
    return false;
  }
  // v_wheel
  if (!rvr_msgs__msg__Wheel4__are_equal(
      &(lhs->v_wheel), &(rhs->v_wheel)))
  {
    return false;
  }
  // a_imu
  if (!rvr_msgs__msg__Vector3__are_equal(
      &(lhs->a_imu), &(rhs->a_imu)))
  {
    return false;
  }
  // w_imu
  if (!rvr_msgs__msg__Vector3__are_equal(
      &(lhs->w_imu), &(rhs->w_imu)))
  {
    return false;
  }
  return true;
}

bool
rvr_msgs__msg__RoverData__copy(
  const rvr_msgs__msg__RoverData * input,
  rvr_msgs__msg__RoverData * output)
{
  if (!input || !output) {
    return false;
  }
  // d_wheel
  if (!rvr_msgs__msg__Wheel4__copy(
      &(input->d_wheel), &(output->d_wheel)))
  {
    return false;
  }
  // v_wheel
  if (!rvr_msgs__msg__Wheel4__copy(
      &(input->v_wheel), &(output->v_wheel)))
  {
    return false;
  }
  // a_imu
  if (!rvr_msgs__msg__Vector3__copy(
      &(input->a_imu), &(output->a_imu)))
  {
    return false;
  }
  // w_imu
  if (!rvr_msgs__msg__Vector3__copy(
      &(input->w_imu), &(output->w_imu)))
  {
    return false;
  }
  return true;
}

rvr_msgs__msg__RoverData *
rvr_msgs__msg__RoverData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__RoverData * msg = (rvr_msgs__msg__RoverData *)allocator.allocate(sizeof(rvr_msgs__msg__RoverData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rvr_msgs__msg__RoverData));
  bool success = rvr_msgs__msg__RoverData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rvr_msgs__msg__RoverData__destroy(rvr_msgs__msg__RoverData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rvr_msgs__msg__RoverData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rvr_msgs__msg__RoverData__Sequence__init(rvr_msgs__msg__RoverData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__RoverData * data = NULL;

  if (size) {
    data = (rvr_msgs__msg__RoverData *)allocator.zero_allocate(size, sizeof(rvr_msgs__msg__RoverData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rvr_msgs__msg__RoverData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rvr_msgs__msg__RoverData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rvr_msgs__msg__RoverData__Sequence__fini(rvr_msgs__msg__RoverData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rvr_msgs__msg__RoverData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rvr_msgs__msg__RoverData__Sequence *
rvr_msgs__msg__RoverData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__RoverData__Sequence * array = (rvr_msgs__msg__RoverData__Sequence *)allocator.allocate(sizeof(rvr_msgs__msg__RoverData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rvr_msgs__msg__RoverData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rvr_msgs__msg__RoverData__Sequence__destroy(rvr_msgs__msg__RoverData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rvr_msgs__msg__RoverData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rvr_msgs__msg__RoverData__Sequence__are_equal(const rvr_msgs__msg__RoverData__Sequence * lhs, const rvr_msgs__msg__RoverData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rvr_msgs__msg__RoverData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rvr_msgs__msg__RoverData__Sequence__copy(
  const rvr_msgs__msg__RoverData__Sequence * input,
  rvr_msgs__msg__RoverData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rvr_msgs__msg__RoverData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rvr_msgs__msg__RoverData * data =
      (rvr_msgs__msg__RoverData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rvr_msgs__msg__RoverData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rvr_msgs__msg__RoverData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rvr_msgs__msg__RoverData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
