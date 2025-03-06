// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ejercicio_tres:srv/Midpoint.idl
// generated code does not contain a copyright notice
#include "ejercicio_tres/srv/detail/midpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ejercicio_tres__srv__Midpoint_Request__init(ejercicio_tres__srv__Midpoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  return true;
}

void
ejercicio_tres__srv__Midpoint_Request__fini(ejercicio_tres__srv__Midpoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
}

bool
ejercicio_tres__srv__Midpoint_Request__are_equal(const ejercicio_tres__srv__Midpoint_Request * lhs, const ejercicio_tres__srv__Midpoint_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  return true;
}

bool
ejercicio_tres__srv__Midpoint_Request__copy(
  const ejercicio_tres__srv__Midpoint_Request * input,
  ejercicio_tres__srv__Midpoint_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  return true;
}

ejercicio_tres__srv__Midpoint_Request *
ejercicio_tres__srv__Midpoint_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ejercicio_tres__srv__Midpoint_Request * msg = (ejercicio_tres__srv__Midpoint_Request *)allocator.allocate(sizeof(ejercicio_tres__srv__Midpoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ejercicio_tres__srv__Midpoint_Request));
  bool success = ejercicio_tres__srv__Midpoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ejercicio_tres__srv__Midpoint_Request__destroy(ejercicio_tres__srv__Midpoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ejercicio_tres__srv__Midpoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ejercicio_tres__srv__Midpoint_Request__Sequence__init(ejercicio_tres__srv__Midpoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ejercicio_tres__srv__Midpoint_Request * data = NULL;

  if (size) {
    data = (ejercicio_tres__srv__Midpoint_Request *)allocator.zero_allocate(size, sizeof(ejercicio_tres__srv__Midpoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ejercicio_tres__srv__Midpoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ejercicio_tres__srv__Midpoint_Request__fini(&data[i - 1]);
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
ejercicio_tres__srv__Midpoint_Request__Sequence__fini(ejercicio_tres__srv__Midpoint_Request__Sequence * array)
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
      ejercicio_tres__srv__Midpoint_Request__fini(&array->data[i]);
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

ejercicio_tres__srv__Midpoint_Request__Sequence *
ejercicio_tres__srv__Midpoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ejercicio_tres__srv__Midpoint_Request__Sequence * array = (ejercicio_tres__srv__Midpoint_Request__Sequence *)allocator.allocate(sizeof(ejercicio_tres__srv__Midpoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ejercicio_tres__srv__Midpoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ejercicio_tres__srv__Midpoint_Request__Sequence__destroy(ejercicio_tres__srv__Midpoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ejercicio_tres__srv__Midpoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ejercicio_tres__srv__Midpoint_Request__Sequence__are_equal(const ejercicio_tres__srv__Midpoint_Request__Sequence * lhs, const ejercicio_tres__srv__Midpoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ejercicio_tres__srv__Midpoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ejercicio_tres__srv__Midpoint_Request__Sequence__copy(
  const ejercicio_tres__srv__Midpoint_Request__Sequence * input,
  ejercicio_tres__srv__Midpoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ejercicio_tres__srv__Midpoint_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ejercicio_tres__srv__Midpoint_Request * data =
      (ejercicio_tres__srv__Midpoint_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ejercicio_tres__srv__Midpoint_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ejercicio_tres__srv__Midpoint_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ejercicio_tres__srv__Midpoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ejercicio_tres__srv__Midpoint_Response__init(ejercicio_tres__srv__Midpoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x_mid
  // y_mid
  return true;
}

void
ejercicio_tres__srv__Midpoint_Response__fini(ejercicio_tres__srv__Midpoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // x_mid
  // y_mid
}

bool
ejercicio_tres__srv__Midpoint_Response__are_equal(const ejercicio_tres__srv__Midpoint_Response * lhs, const ejercicio_tres__srv__Midpoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_mid
  if (lhs->x_mid != rhs->x_mid) {
    return false;
  }
  // y_mid
  if (lhs->y_mid != rhs->y_mid) {
    return false;
  }
  return true;
}

bool
ejercicio_tres__srv__Midpoint_Response__copy(
  const ejercicio_tres__srv__Midpoint_Response * input,
  ejercicio_tres__srv__Midpoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x_mid
  output->x_mid = input->x_mid;
  // y_mid
  output->y_mid = input->y_mid;
  return true;
}

ejercicio_tres__srv__Midpoint_Response *
ejercicio_tres__srv__Midpoint_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ejercicio_tres__srv__Midpoint_Response * msg = (ejercicio_tres__srv__Midpoint_Response *)allocator.allocate(sizeof(ejercicio_tres__srv__Midpoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ejercicio_tres__srv__Midpoint_Response));
  bool success = ejercicio_tres__srv__Midpoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ejercicio_tres__srv__Midpoint_Response__destroy(ejercicio_tres__srv__Midpoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ejercicio_tres__srv__Midpoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ejercicio_tres__srv__Midpoint_Response__Sequence__init(ejercicio_tres__srv__Midpoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ejercicio_tres__srv__Midpoint_Response * data = NULL;

  if (size) {
    data = (ejercicio_tres__srv__Midpoint_Response *)allocator.zero_allocate(size, sizeof(ejercicio_tres__srv__Midpoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ejercicio_tres__srv__Midpoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ejercicio_tres__srv__Midpoint_Response__fini(&data[i - 1]);
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
ejercicio_tres__srv__Midpoint_Response__Sequence__fini(ejercicio_tres__srv__Midpoint_Response__Sequence * array)
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
      ejercicio_tres__srv__Midpoint_Response__fini(&array->data[i]);
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

ejercicio_tres__srv__Midpoint_Response__Sequence *
ejercicio_tres__srv__Midpoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ejercicio_tres__srv__Midpoint_Response__Sequence * array = (ejercicio_tres__srv__Midpoint_Response__Sequence *)allocator.allocate(sizeof(ejercicio_tres__srv__Midpoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ejercicio_tres__srv__Midpoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ejercicio_tres__srv__Midpoint_Response__Sequence__destroy(ejercicio_tres__srv__Midpoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ejercicio_tres__srv__Midpoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ejercicio_tres__srv__Midpoint_Response__Sequence__are_equal(const ejercicio_tres__srv__Midpoint_Response__Sequence * lhs, const ejercicio_tres__srv__Midpoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ejercicio_tres__srv__Midpoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ejercicio_tres__srv__Midpoint_Response__Sequence__copy(
  const ejercicio_tres__srv__Midpoint_Response__Sequence * input,
  ejercicio_tres__srv__Midpoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ejercicio_tres__srv__Midpoint_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ejercicio_tres__srv__Midpoint_Response * data =
      (ejercicio_tres__srv__Midpoint_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ejercicio_tres__srv__Midpoint_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ejercicio_tres__srv__Midpoint_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ejercicio_tres__srv__Midpoint_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
