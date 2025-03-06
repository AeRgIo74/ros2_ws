// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mma_interfaces:srv/FightRequest.idl
// generated code does not contain a copyright notice
#include "mma_interfaces/srv/detail/fight_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `fighter1`
// Member `fighter2`
#include "rosidl_runtime_c/string_functions.h"

bool
mma_interfaces__srv__FightRequest_Request__init(mma_interfaces__srv__FightRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // fighter1
  if (!rosidl_runtime_c__String__init(&msg->fighter1)) {
    mma_interfaces__srv__FightRequest_Request__fini(msg);
    return false;
  }
  // fighter2
  if (!rosidl_runtime_c__String__init(&msg->fighter2)) {
    mma_interfaces__srv__FightRequest_Request__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__srv__FightRequest_Request__fini(mma_interfaces__srv__FightRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // fighter1
  rosidl_runtime_c__String__fini(&msg->fighter1);
  // fighter2
  rosidl_runtime_c__String__fini(&msg->fighter2);
}

bool
mma_interfaces__srv__FightRequest_Request__are_equal(const mma_interfaces__srv__FightRequest_Request * lhs, const mma_interfaces__srv__FightRequest_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fighter1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fighter1), &(rhs->fighter1)))
  {
    return false;
  }
  // fighter2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fighter2), &(rhs->fighter2)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__srv__FightRequest_Request__copy(
  const mma_interfaces__srv__FightRequest_Request * input,
  mma_interfaces__srv__FightRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // fighter1
  if (!rosidl_runtime_c__String__copy(
      &(input->fighter1), &(output->fighter1)))
  {
    return false;
  }
  // fighter2
  if (!rosidl_runtime_c__String__copy(
      &(input->fighter2), &(output->fighter2)))
  {
    return false;
  }
  return true;
}

mma_interfaces__srv__FightRequest_Request *
mma_interfaces__srv__FightRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__srv__FightRequest_Request * msg = (mma_interfaces__srv__FightRequest_Request *)allocator.allocate(sizeof(mma_interfaces__srv__FightRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__srv__FightRequest_Request));
  bool success = mma_interfaces__srv__FightRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__srv__FightRequest_Request__destroy(mma_interfaces__srv__FightRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__srv__FightRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__srv__FightRequest_Request__Sequence__init(mma_interfaces__srv__FightRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__srv__FightRequest_Request * data = NULL;

  if (size) {
    data = (mma_interfaces__srv__FightRequest_Request *)allocator.zero_allocate(size, sizeof(mma_interfaces__srv__FightRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__srv__FightRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__srv__FightRequest_Request__fini(&data[i - 1]);
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
mma_interfaces__srv__FightRequest_Request__Sequence__fini(mma_interfaces__srv__FightRequest_Request__Sequence * array)
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
      mma_interfaces__srv__FightRequest_Request__fini(&array->data[i]);
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

mma_interfaces__srv__FightRequest_Request__Sequence *
mma_interfaces__srv__FightRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__srv__FightRequest_Request__Sequence * array = (mma_interfaces__srv__FightRequest_Request__Sequence *)allocator.allocate(sizeof(mma_interfaces__srv__FightRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__srv__FightRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__srv__FightRequest_Request__Sequence__destroy(mma_interfaces__srv__FightRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__srv__FightRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__srv__FightRequest_Request__Sequence__are_equal(const mma_interfaces__srv__FightRequest_Request__Sequence * lhs, const mma_interfaces__srv__FightRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__srv__FightRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__srv__FightRequest_Request__Sequence__copy(
  const mma_interfaces__srv__FightRequest_Request__Sequence * input,
  mma_interfaces__srv__FightRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__srv__FightRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__srv__FightRequest_Request * data =
      (mma_interfaces__srv__FightRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__srv__FightRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__srv__FightRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__srv__FightRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
mma_interfaces__srv__FightRequest_Response__init(mma_interfaces__srv__FightRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    mma_interfaces__srv__FightRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__srv__FightRequest_Response__fini(mma_interfaces__srv__FightRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
mma_interfaces__srv__FightRequest_Response__are_equal(const mma_interfaces__srv__FightRequest_Response * lhs, const mma_interfaces__srv__FightRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__srv__FightRequest_Response__copy(
  const mma_interfaces__srv__FightRequest_Response * input,
  mma_interfaces__srv__FightRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mma_interfaces__srv__FightRequest_Response *
mma_interfaces__srv__FightRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__srv__FightRequest_Response * msg = (mma_interfaces__srv__FightRequest_Response *)allocator.allocate(sizeof(mma_interfaces__srv__FightRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__srv__FightRequest_Response));
  bool success = mma_interfaces__srv__FightRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__srv__FightRequest_Response__destroy(mma_interfaces__srv__FightRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__srv__FightRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__srv__FightRequest_Response__Sequence__init(mma_interfaces__srv__FightRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__srv__FightRequest_Response * data = NULL;

  if (size) {
    data = (mma_interfaces__srv__FightRequest_Response *)allocator.zero_allocate(size, sizeof(mma_interfaces__srv__FightRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__srv__FightRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__srv__FightRequest_Response__fini(&data[i - 1]);
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
mma_interfaces__srv__FightRequest_Response__Sequence__fini(mma_interfaces__srv__FightRequest_Response__Sequence * array)
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
      mma_interfaces__srv__FightRequest_Response__fini(&array->data[i]);
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

mma_interfaces__srv__FightRequest_Response__Sequence *
mma_interfaces__srv__FightRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__srv__FightRequest_Response__Sequence * array = (mma_interfaces__srv__FightRequest_Response__Sequence *)allocator.allocate(sizeof(mma_interfaces__srv__FightRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__srv__FightRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__srv__FightRequest_Response__Sequence__destroy(mma_interfaces__srv__FightRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__srv__FightRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__srv__FightRequest_Response__Sequence__are_equal(const mma_interfaces__srv__FightRequest_Response__Sequence * lhs, const mma_interfaces__srv__FightRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__srv__FightRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__srv__FightRequest_Response__Sequence__copy(
  const mma_interfaces__srv__FightRequest_Response__Sequence * input,
  mma_interfaces__srv__FightRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__srv__FightRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__srv__FightRequest_Response * data =
      (mma_interfaces__srv__FightRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__srv__FightRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__srv__FightRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__srv__FightRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
