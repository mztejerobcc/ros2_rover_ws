// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rvr_msgs:msg/PosData.idl
// generated code does not contain a copyright notice
#include "rvr_msgs/msg/detail/pos_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rvr_msgs__msg__PosData__init(rvr_msgs__msg__PosData * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // yaw
  return true;
}

void
rvr_msgs__msg__PosData__fini(rvr_msgs__msg__PosData * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // yaw
}

bool
rvr_msgs__msg__PosData__are_equal(const rvr_msgs__msg__PosData * lhs, const rvr_msgs__msg__PosData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
rvr_msgs__msg__PosData__copy(
  const rvr_msgs__msg__PosData * input,
  rvr_msgs__msg__PosData * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  return true;
}

rvr_msgs__msg__PosData *
rvr_msgs__msg__PosData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__PosData * msg = (rvr_msgs__msg__PosData *)allocator.allocate(sizeof(rvr_msgs__msg__PosData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rvr_msgs__msg__PosData));
  bool success = rvr_msgs__msg__PosData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rvr_msgs__msg__PosData__destroy(rvr_msgs__msg__PosData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rvr_msgs__msg__PosData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rvr_msgs__msg__PosData__Sequence__init(rvr_msgs__msg__PosData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__PosData * data = NULL;

  if (size) {
    data = (rvr_msgs__msg__PosData *)allocator.zero_allocate(size, sizeof(rvr_msgs__msg__PosData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rvr_msgs__msg__PosData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rvr_msgs__msg__PosData__fini(&data[i - 1]);
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
rvr_msgs__msg__PosData__Sequence__fini(rvr_msgs__msg__PosData__Sequence * array)
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
      rvr_msgs__msg__PosData__fini(&array->data[i]);
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

rvr_msgs__msg__PosData__Sequence *
rvr_msgs__msg__PosData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rvr_msgs__msg__PosData__Sequence * array = (rvr_msgs__msg__PosData__Sequence *)allocator.allocate(sizeof(rvr_msgs__msg__PosData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rvr_msgs__msg__PosData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rvr_msgs__msg__PosData__Sequence__destroy(rvr_msgs__msg__PosData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rvr_msgs__msg__PosData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rvr_msgs__msg__PosData__Sequence__are_equal(const rvr_msgs__msg__PosData__Sequence * lhs, const rvr_msgs__msg__PosData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rvr_msgs__msg__PosData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rvr_msgs__msg__PosData__Sequence__copy(
  const rvr_msgs__msg__PosData__Sequence * input,
  rvr_msgs__msg__PosData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rvr_msgs__msg__PosData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rvr_msgs__msg__PosData * data =
      (rvr_msgs__msg__PosData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rvr_msgs__msg__PosData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rvr_msgs__msg__PosData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rvr_msgs__msg__PosData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
