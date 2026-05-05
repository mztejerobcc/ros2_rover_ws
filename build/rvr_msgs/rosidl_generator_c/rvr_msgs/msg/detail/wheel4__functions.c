// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rvr_msgs:msg/Wheel4.idl
// generated code does not contain a copyright notice
#include "rvr_msgs/msg/detail/wheel4__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rvr_msgs__msg__Wheel4__init(rvr_msgs__msg__Wheel4 * msg)
{
  if (!msg) {
    return false;
  }
  // wheel1
  // wheel2
  // wheel3
  // wheel4
  return true;
}

void
rvr_msgs__msg__Wheel4__fini(rvr_msgs__msg__Wheel4 * msg)
{
  if (!msg) {
    return;
  }
  // wheel1
  // wheel2
  // wheel3
  // wheel4
}

bool
rvr_msgs__msg__Wheel4__are_equal(const rvr_msgs__msg__Wheel4 * lhs, const rvr_msgs__msg__Wheel4 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wheel1
  if (lhs->wheel1 != rhs->wheel1) {
    return false;
  }
  // wheel2
  if (lhs->wheel2 != rhs->wheel2) {
    return false;
  }
  // wheel3
  if (lhs->wheel3 != rhs->wheel3) {
    return false;
  }
  // wheel4
  if (lhs->wheel4 != rhs->wheel4) {
    return false;
  }
  return true;
}

bool
rvr_msgs__msg__Wheel4__copy(
  const rvr_msgs__msg__Wheel4 * input,
  rvr_msgs__msg__Wheel4 * output)
{
  if (!input || !output) {
    return false;
  }
  // wheel1
  output->wheel1 = input->wheel1;
  // wheel2
  output->wheel2 = input->wheel2;
  // wheel3
  output->wheel3 = input->wheel3;
  // wheel4
  output->wheel4 = input->wheel4;
  return true;
}

rvr_msgs__msg__Wheel4 *
rvr_msgs__msg__Wheel4__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__Wheel4 * msg = (rvr_msgs__msg__Wheel4 *)allocator.allocate(sizeof(rvr_msgs__msg__Wheel4), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rvr_msgs__msg__Wheel4));
  bool success = rvr_msgs__msg__Wheel4__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rvr_msgs__msg__Wheel4__destroy(rvr_msgs__msg__Wheel4 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rvr_msgs__msg__Wheel4__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rvr_msgs__msg__Wheel4__Sequence__init(rvr_msgs__msg__Wheel4__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__Wheel4 * data = NULL;

  if (size) {
    data = (rvr_msgs__msg__Wheel4 *)allocator.zero_allocate(size, sizeof(rvr_msgs__msg__Wheel4), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rvr_msgs__msg__Wheel4__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rvr_msgs__msg__Wheel4__fini(&data[i - 1]);
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
rvr_msgs__msg__Wheel4__Sequence__fini(rvr_msgs__msg__Wheel4__Sequence * array)
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
      rvr_msgs__msg__Wheel4__fini(&array->data[i]);
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

rvr_msgs__msg__Wheel4__Sequence *
rvr_msgs__msg__Wheel4__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__Wheel4__Sequence * array = (rvr_msgs__msg__Wheel4__Sequence *)allocator.allocate(sizeof(rvr_msgs__msg__Wheel4__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rvr_msgs__msg__Wheel4__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rvr_msgs__msg__Wheel4__Sequence__destroy(rvr_msgs__msg__Wheel4__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rvr_msgs__msg__Wheel4__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rvr_msgs__msg__Wheel4__Sequence__are_equal(const rvr_msgs__msg__Wheel4__Sequence * lhs, const rvr_msgs__msg__Wheel4__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rvr_msgs__msg__Wheel4__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rvr_msgs__msg__Wheel4__Sequence__copy(
  const rvr_msgs__msg__Wheel4__Sequence * input,
  rvr_msgs__msg__Wheel4__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rvr_msgs__msg__Wheel4);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rvr_msgs__msg__Wheel4 * data =
      (rvr_msgs__msg__Wheel4 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rvr_msgs__msg__Wheel4__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rvr_msgs__msg__Wheel4__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rvr_msgs__msg__Wheel4__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
