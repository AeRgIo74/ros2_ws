// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from p1_ej2_interface:msg/Sensor.idl
// generated code does not contain a copyright notice
#include "p1_ej2_interface/msg/detail/sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
p1_ej2_interface__msg__Sensor__init(p1_ej2_interface__msg__Sensor * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
p1_ej2_interface__msg__Sensor__fini(p1_ej2_interface__msg__Sensor * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
p1_ej2_interface__msg__Sensor__are_equal(const p1_ej2_interface__msg__Sensor * lhs, const p1_ej2_interface__msg__Sensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
p1_ej2_interface__msg__Sensor__copy(
  const p1_ej2_interface__msg__Sensor * input,
  p1_ej2_interface__msg__Sensor * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

p1_ej2_interface__msg__Sensor *
p1_ej2_interface__msg__Sensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej2_interface__msg__Sensor * msg = (p1_ej2_interface__msg__Sensor *)allocator.allocate(sizeof(p1_ej2_interface__msg__Sensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(p1_ej2_interface__msg__Sensor));
  bool success = p1_ej2_interface__msg__Sensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
p1_ej2_interface__msg__Sensor__destroy(p1_ej2_interface__msg__Sensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    p1_ej2_interface__msg__Sensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
p1_ej2_interface__msg__Sensor__Sequence__init(p1_ej2_interface__msg__Sensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej2_interface__msg__Sensor * data = NULL;

  if (size) {
    data = (p1_ej2_interface__msg__Sensor *)allocator.zero_allocate(size, sizeof(p1_ej2_interface__msg__Sensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = p1_ej2_interface__msg__Sensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        p1_ej2_interface__msg__Sensor__fini(&data[i - 1]);
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
p1_ej2_interface__msg__Sensor__Sequence__fini(p1_ej2_interface__msg__Sensor__Sequence * array)
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
      p1_ej2_interface__msg__Sensor__fini(&array->data[i]);
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

p1_ej2_interface__msg__Sensor__Sequence *
p1_ej2_interface__msg__Sensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej2_interface__msg__Sensor__Sequence * array = (p1_ej2_interface__msg__Sensor__Sequence *)allocator.allocate(sizeof(p1_ej2_interface__msg__Sensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = p1_ej2_interface__msg__Sensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
p1_ej2_interface__msg__Sensor__Sequence__destroy(p1_ej2_interface__msg__Sensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    p1_ej2_interface__msg__Sensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
p1_ej2_interface__msg__Sensor__Sequence__are_equal(const p1_ej2_interface__msg__Sensor__Sequence * lhs, const p1_ej2_interface__msg__Sensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!p1_ej2_interface__msg__Sensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
p1_ej2_interface__msg__Sensor__Sequence__copy(
  const p1_ej2_interface__msg__Sensor__Sequence * input,
  p1_ej2_interface__msg__Sensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(p1_ej2_interface__msg__Sensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    p1_ej2_interface__msg__Sensor * data =
      (p1_ej2_interface__msg__Sensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!p1_ej2_interface__msg__Sensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          p1_ej2_interface__msg__Sensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!p1_ej2_interface__msg__Sensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
