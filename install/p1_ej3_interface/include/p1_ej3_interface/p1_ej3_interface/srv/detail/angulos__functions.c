// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from p1_ej3_interface:srv/Angulos.idl
// generated code does not contain a copyright notice
#include "p1_ej3_interface/srv/detail/angulos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
p1_ej3_interface__srv__Angulos_Request__init(p1_ej3_interface__srv__Angulos_Request * msg)
{
  if (!msg) {
    return false;
  }
  // theta1
  // theta2
  // theta3
  // theta4
  return true;
}

void
p1_ej3_interface__srv__Angulos_Request__fini(p1_ej3_interface__srv__Angulos_Request * msg)
{
  if (!msg) {
    return;
  }
  // theta1
  // theta2
  // theta3
  // theta4
}

bool
p1_ej3_interface__srv__Angulos_Request__are_equal(const p1_ej3_interface__srv__Angulos_Request * lhs, const p1_ej3_interface__srv__Angulos_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // theta1
  if (lhs->theta1 != rhs->theta1) {
    return false;
  }
  // theta2
  if (lhs->theta2 != rhs->theta2) {
    return false;
  }
  // theta3
  if (lhs->theta3 != rhs->theta3) {
    return false;
  }
  // theta4
  if (lhs->theta4 != rhs->theta4) {
    return false;
  }
  return true;
}

bool
p1_ej3_interface__srv__Angulos_Request__copy(
  const p1_ej3_interface__srv__Angulos_Request * input,
  p1_ej3_interface__srv__Angulos_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // theta1
  output->theta1 = input->theta1;
  // theta2
  output->theta2 = input->theta2;
  // theta3
  output->theta3 = input->theta3;
  // theta4
  output->theta4 = input->theta4;
  return true;
}

p1_ej3_interface__srv__Angulos_Request *
p1_ej3_interface__srv__Angulos_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej3_interface__srv__Angulos_Request * msg = (p1_ej3_interface__srv__Angulos_Request *)allocator.allocate(sizeof(p1_ej3_interface__srv__Angulos_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(p1_ej3_interface__srv__Angulos_Request));
  bool success = p1_ej3_interface__srv__Angulos_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
p1_ej3_interface__srv__Angulos_Request__destroy(p1_ej3_interface__srv__Angulos_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    p1_ej3_interface__srv__Angulos_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
p1_ej3_interface__srv__Angulos_Request__Sequence__init(p1_ej3_interface__srv__Angulos_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej3_interface__srv__Angulos_Request * data = NULL;

  if (size) {
    data = (p1_ej3_interface__srv__Angulos_Request *)allocator.zero_allocate(size, sizeof(p1_ej3_interface__srv__Angulos_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = p1_ej3_interface__srv__Angulos_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        p1_ej3_interface__srv__Angulos_Request__fini(&data[i - 1]);
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
p1_ej3_interface__srv__Angulos_Request__Sequence__fini(p1_ej3_interface__srv__Angulos_Request__Sequence * array)
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
      p1_ej3_interface__srv__Angulos_Request__fini(&array->data[i]);
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

p1_ej3_interface__srv__Angulos_Request__Sequence *
p1_ej3_interface__srv__Angulos_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej3_interface__srv__Angulos_Request__Sequence * array = (p1_ej3_interface__srv__Angulos_Request__Sequence *)allocator.allocate(sizeof(p1_ej3_interface__srv__Angulos_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = p1_ej3_interface__srv__Angulos_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
p1_ej3_interface__srv__Angulos_Request__Sequence__destroy(p1_ej3_interface__srv__Angulos_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    p1_ej3_interface__srv__Angulos_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
p1_ej3_interface__srv__Angulos_Request__Sequence__are_equal(const p1_ej3_interface__srv__Angulos_Request__Sequence * lhs, const p1_ej3_interface__srv__Angulos_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!p1_ej3_interface__srv__Angulos_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
p1_ej3_interface__srv__Angulos_Request__Sequence__copy(
  const p1_ej3_interface__srv__Angulos_Request__Sequence * input,
  p1_ej3_interface__srv__Angulos_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(p1_ej3_interface__srv__Angulos_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    p1_ej3_interface__srv__Angulos_Request * data =
      (p1_ej3_interface__srv__Angulos_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!p1_ej3_interface__srv__Angulos_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          p1_ej3_interface__srv__Angulos_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!p1_ej3_interface__srv__Angulos_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
p1_ej3_interface__srv__Angulos_Response__init(p1_ej3_interface__srv__Angulos_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  return true;
}

void
p1_ej3_interface__srv__Angulos_Response__fini(p1_ej3_interface__srv__Angulos_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
}

bool
p1_ej3_interface__srv__Angulos_Response__are_equal(const p1_ej3_interface__srv__Angulos_Response * lhs, const p1_ej3_interface__srv__Angulos_Response * rhs)
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
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
p1_ej3_interface__srv__Angulos_Response__copy(
  const p1_ej3_interface__srv__Angulos_Response * input,
  p1_ej3_interface__srv__Angulos_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  return true;
}

p1_ej3_interface__srv__Angulos_Response *
p1_ej3_interface__srv__Angulos_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej3_interface__srv__Angulos_Response * msg = (p1_ej3_interface__srv__Angulos_Response *)allocator.allocate(sizeof(p1_ej3_interface__srv__Angulos_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(p1_ej3_interface__srv__Angulos_Response));
  bool success = p1_ej3_interface__srv__Angulos_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
p1_ej3_interface__srv__Angulos_Response__destroy(p1_ej3_interface__srv__Angulos_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    p1_ej3_interface__srv__Angulos_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
p1_ej3_interface__srv__Angulos_Response__Sequence__init(p1_ej3_interface__srv__Angulos_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej3_interface__srv__Angulos_Response * data = NULL;

  if (size) {
    data = (p1_ej3_interface__srv__Angulos_Response *)allocator.zero_allocate(size, sizeof(p1_ej3_interface__srv__Angulos_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = p1_ej3_interface__srv__Angulos_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        p1_ej3_interface__srv__Angulos_Response__fini(&data[i - 1]);
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
p1_ej3_interface__srv__Angulos_Response__Sequence__fini(p1_ej3_interface__srv__Angulos_Response__Sequence * array)
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
      p1_ej3_interface__srv__Angulos_Response__fini(&array->data[i]);
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

p1_ej3_interface__srv__Angulos_Response__Sequence *
p1_ej3_interface__srv__Angulos_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  p1_ej3_interface__srv__Angulos_Response__Sequence * array = (p1_ej3_interface__srv__Angulos_Response__Sequence *)allocator.allocate(sizeof(p1_ej3_interface__srv__Angulos_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = p1_ej3_interface__srv__Angulos_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
p1_ej3_interface__srv__Angulos_Response__Sequence__destroy(p1_ej3_interface__srv__Angulos_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    p1_ej3_interface__srv__Angulos_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
p1_ej3_interface__srv__Angulos_Response__Sequence__are_equal(const p1_ej3_interface__srv__Angulos_Response__Sequence * lhs, const p1_ej3_interface__srv__Angulos_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!p1_ej3_interface__srv__Angulos_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
p1_ej3_interface__srv__Angulos_Response__Sequence__copy(
  const p1_ej3_interface__srv__Angulos_Response__Sequence * input,
  p1_ej3_interface__srv__Angulos_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(p1_ej3_interface__srv__Angulos_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    p1_ej3_interface__srv__Angulos_Response * data =
      (p1_ej3_interface__srv__Angulos_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!p1_ej3_interface__srv__Angulos_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          p1_ej3_interface__srv__Angulos_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!p1_ej3_interface__srv__Angulos_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
