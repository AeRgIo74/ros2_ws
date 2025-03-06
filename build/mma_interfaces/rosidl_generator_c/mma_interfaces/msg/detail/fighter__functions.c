// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mma_interfaces:msg/Fighter.idl
// generated code does not contain a copyright notice
#include "mma_interfaces/msg/detail/fighter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `style`
#include "rosidl_runtime_c/string_functions.h"

bool
mma_interfaces__msg__Fighter__init(mma_interfaces__msg__Fighter * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mma_interfaces__msg__Fighter__fini(msg);
    return false;
  }
  // weight
  // style
  if (!rosidl_runtime_c__String__init(&msg->style)) {
    mma_interfaces__msg__Fighter__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__msg__Fighter__fini(mma_interfaces__msg__Fighter * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // weight
  // style
  rosidl_runtime_c__String__fini(&msg->style);
}

bool
mma_interfaces__msg__Fighter__are_equal(const mma_interfaces__msg__Fighter * lhs, const mma_interfaces__msg__Fighter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  // style
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->style), &(rhs->style)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__msg__Fighter__copy(
  const mma_interfaces__msg__Fighter * input,
  mma_interfaces__msg__Fighter * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // weight
  output->weight = input->weight;
  // style
  if (!rosidl_runtime_c__String__copy(
      &(input->style), &(output->style)))
  {
    return false;
  }
  return true;
}

mma_interfaces__msg__Fighter *
mma_interfaces__msg__Fighter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__msg__Fighter * msg = (mma_interfaces__msg__Fighter *)allocator.allocate(sizeof(mma_interfaces__msg__Fighter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__msg__Fighter));
  bool success = mma_interfaces__msg__Fighter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__msg__Fighter__destroy(mma_interfaces__msg__Fighter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__msg__Fighter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__msg__Fighter__Sequence__init(mma_interfaces__msg__Fighter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__msg__Fighter * data = NULL;

  if (size) {
    data = (mma_interfaces__msg__Fighter *)allocator.zero_allocate(size, sizeof(mma_interfaces__msg__Fighter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__msg__Fighter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__msg__Fighter__fini(&data[i - 1]);
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
mma_interfaces__msg__Fighter__Sequence__fini(mma_interfaces__msg__Fighter__Sequence * array)
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
      mma_interfaces__msg__Fighter__fini(&array->data[i]);
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

mma_interfaces__msg__Fighter__Sequence *
mma_interfaces__msg__Fighter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__msg__Fighter__Sequence * array = (mma_interfaces__msg__Fighter__Sequence *)allocator.allocate(sizeof(mma_interfaces__msg__Fighter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__msg__Fighter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__msg__Fighter__Sequence__destroy(mma_interfaces__msg__Fighter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__msg__Fighter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__msg__Fighter__Sequence__are_equal(const mma_interfaces__msg__Fighter__Sequence * lhs, const mma_interfaces__msg__Fighter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__msg__Fighter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__msg__Fighter__Sequence__copy(
  const mma_interfaces__msg__Fighter__Sequence * input,
  mma_interfaces__msg__Fighter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__msg__Fighter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__msg__Fighter * data =
      (mma_interfaces__msg__Fighter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__msg__Fighter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__msg__Fighter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__msg__Fighter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
