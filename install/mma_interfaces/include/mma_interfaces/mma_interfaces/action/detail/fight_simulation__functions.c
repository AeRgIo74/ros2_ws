// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mma_interfaces:action/FightSimulation.idl
// generated code does not contain a copyright notice
#include "mma_interfaces/action/detail/fight_simulation__functions.h"

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
mma_interfaces__action__FightSimulation_Goal__init(mma_interfaces__action__FightSimulation_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // fighter1
  if (!rosidl_runtime_c__String__init(&msg->fighter1)) {
    mma_interfaces__action__FightSimulation_Goal__fini(msg);
    return false;
  }
  // fighter2
  if (!rosidl_runtime_c__String__init(&msg->fighter2)) {
    mma_interfaces__action__FightSimulation_Goal__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__action__FightSimulation_Goal__fini(mma_interfaces__action__FightSimulation_Goal * msg)
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
mma_interfaces__action__FightSimulation_Goal__are_equal(const mma_interfaces__action__FightSimulation_Goal * lhs, const mma_interfaces__action__FightSimulation_Goal * rhs)
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
mma_interfaces__action__FightSimulation_Goal__copy(
  const mma_interfaces__action__FightSimulation_Goal * input,
  mma_interfaces__action__FightSimulation_Goal * output)
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

mma_interfaces__action__FightSimulation_Goal *
mma_interfaces__action__FightSimulation_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Goal * msg = (mma_interfaces__action__FightSimulation_Goal *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__action__FightSimulation_Goal));
  bool success = mma_interfaces__action__FightSimulation_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__action__FightSimulation_Goal__destroy(mma_interfaces__action__FightSimulation_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__action__FightSimulation_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__action__FightSimulation_Goal__Sequence__init(mma_interfaces__action__FightSimulation_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Goal * data = NULL;

  if (size) {
    data = (mma_interfaces__action__FightSimulation_Goal *)allocator.zero_allocate(size, sizeof(mma_interfaces__action__FightSimulation_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__action__FightSimulation_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__action__FightSimulation_Goal__fini(&data[i - 1]);
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
mma_interfaces__action__FightSimulation_Goal__Sequence__fini(mma_interfaces__action__FightSimulation_Goal__Sequence * array)
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
      mma_interfaces__action__FightSimulation_Goal__fini(&array->data[i]);
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

mma_interfaces__action__FightSimulation_Goal__Sequence *
mma_interfaces__action__FightSimulation_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Goal__Sequence * array = (mma_interfaces__action__FightSimulation_Goal__Sequence *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__action__FightSimulation_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__action__FightSimulation_Goal__Sequence__destroy(mma_interfaces__action__FightSimulation_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__action__FightSimulation_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__action__FightSimulation_Goal__Sequence__are_equal(const mma_interfaces__action__FightSimulation_Goal__Sequence * lhs, const mma_interfaces__action__FightSimulation_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_Goal__Sequence__copy(
  const mma_interfaces__action__FightSimulation_Goal__Sequence * input,
  mma_interfaces__action__FightSimulation_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__action__FightSimulation_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__action__FightSimulation_Goal * data =
      (mma_interfaces__action__FightSimulation_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__action__FightSimulation_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__action__FightSimulation_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `winner`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
mma_interfaces__action__FightSimulation_Result__init(mma_interfaces__action__FightSimulation_Result * msg)
{
  if (!msg) {
    return false;
  }
  // winner
  if (!rosidl_runtime_c__String__init(&msg->winner)) {
    mma_interfaces__action__FightSimulation_Result__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__action__FightSimulation_Result__fini(mma_interfaces__action__FightSimulation_Result * msg)
{
  if (!msg) {
    return;
  }
  // winner
  rosidl_runtime_c__String__fini(&msg->winner);
}

bool
mma_interfaces__action__FightSimulation_Result__are_equal(const mma_interfaces__action__FightSimulation_Result * lhs, const mma_interfaces__action__FightSimulation_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // winner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->winner), &(rhs->winner)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_Result__copy(
  const mma_interfaces__action__FightSimulation_Result * input,
  mma_interfaces__action__FightSimulation_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // winner
  if (!rosidl_runtime_c__String__copy(
      &(input->winner), &(output->winner)))
  {
    return false;
  }
  return true;
}

mma_interfaces__action__FightSimulation_Result *
mma_interfaces__action__FightSimulation_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Result * msg = (mma_interfaces__action__FightSimulation_Result *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__action__FightSimulation_Result));
  bool success = mma_interfaces__action__FightSimulation_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__action__FightSimulation_Result__destroy(mma_interfaces__action__FightSimulation_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__action__FightSimulation_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__action__FightSimulation_Result__Sequence__init(mma_interfaces__action__FightSimulation_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Result * data = NULL;

  if (size) {
    data = (mma_interfaces__action__FightSimulation_Result *)allocator.zero_allocate(size, sizeof(mma_interfaces__action__FightSimulation_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__action__FightSimulation_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__action__FightSimulation_Result__fini(&data[i - 1]);
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
mma_interfaces__action__FightSimulation_Result__Sequence__fini(mma_interfaces__action__FightSimulation_Result__Sequence * array)
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
      mma_interfaces__action__FightSimulation_Result__fini(&array->data[i]);
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

mma_interfaces__action__FightSimulation_Result__Sequence *
mma_interfaces__action__FightSimulation_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Result__Sequence * array = (mma_interfaces__action__FightSimulation_Result__Sequence *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__action__FightSimulation_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__action__FightSimulation_Result__Sequence__destroy(mma_interfaces__action__FightSimulation_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__action__FightSimulation_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__action__FightSimulation_Result__Sequence__are_equal(const mma_interfaces__action__FightSimulation_Result__Sequence * lhs, const mma_interfaces__action__FightSimulation_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_Result__Sequence__copy(
  const mma_interfaces__action__FightSimulation_Result__Sequence * input,
  mma_interfaces__action__FightSimulation_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__action__FightSimulation_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__action__FightSimulation_Result * data =
      (mma_interfaces__action__FightSimulation_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__action__FightSimulation_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__action__FightSimulation_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
mma_interfaces__action__FightSimulation_Feedback__init(mma_interfaces__action__FightSimulation_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_status
  if (!rosidl_runtime_c__String__init(&msg->current_status)) {
    mma_interfaces__action__FightSimulation_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__action__FightSimulation_Feedback__fini(mma_interfaces__action__FightSimulation_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_status
  rosidl_runtime_c__String__fini(&msg->current_status);
}

bool
mma_interfaces__action__FightSimulation_Feedback__are_equal(const mma_interfaces__action__FightSimulation_Feedback * lhs, const mma_interfaces__action__FightSimulation_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_status), &(rhs->current_status)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_Feedback__copy(
  const mma_interfaces__action__FightSimulation_Feedback * input,
  mma_interfaces__action__FightSimulation_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_status
  if (!rosidl_runtime_c__String__copy(
      &(input->current_status), &(output->current_status)))
  {
    return false;
  }
  return true;
}

mma_interfaces__action__FightSimulation_Feedback *
mma_interfaces__action__FightSimulation_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Feedback * msg = (mma_interfaces__action__FightSimulation_Feedback *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__action__FightSimulation_Feedback));
  bool success = mma_interfaces__action__FightSimulation_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__action__FightSimulation_Feedback__destroy(mma_interfaces__action__FightSimulation_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__action__FightSimulation_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__action__FightSimulation_Feedback__Sequence__init(mma_interfaces__action__FightSimulation_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Feedback * data = NULL;

  if (size) {
    data = (mma_interfaces__action__FightSimulation_Feedback *)allocator.zero_allocate(size, sizeof(mma_interfaces__action__FightSimulation_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__action__FightSimulation_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__action__FightSimulation_Feedback__fini(&data[i - 1]);
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
mma_interfaces__action__FightSimulation_Feedback__Sequence__fini(mma_interfaces__action__FightSimulation_Feedback__Sequence * array)
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
      mma_interfaces__action__FightSimulation_Feedback__fini(&array->data[i]);
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

mma_interfaces__action__FightSimulation_Feedback__Sequence *
mma_interfaces__action__FightSimulation_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_Feedback__Sequence * array = (mma_interfaces__action__FightSimulation_Feedback__Sequence *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__action__FightSimulation_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__action__FightSimulation_Feedback__Sequence__destroy(mma_interfaces__action__FightSimulation_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__action__FightSimulation_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__action__FightSimulation_Feedback__Sequence__are_equal(const mma_interfaces__action__FightSimulation_Feedback__Sequence * lhs, const mma_interfaces__action__FightSimulation_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_Feedback__Sequence__copy(
  const mma_interfaces__action__FightSimulation_Feedback__Sequence * input,
  mma_interfaces__action__FightSimulation_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__action__FightSimulation_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__action__FightSimulation_Feedback * data =
      (mma_interfaces__action__FightSimulation_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__action__FightSimulation_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__action__FightSimulation_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "mma_interfaces/action/detail/fight_simulation__functions.h"

bool
mma_interfaces__action__FightSimulation_SendGoal_Request__init(mma_interfaces__action__FightSimulation_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mma_interfaces__action__FightSimulation_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!mma_interfaces__action__FightSimulation_Goal__init(&msg->goal)) {
    mma_interfaces__action__FightSimulation_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__action__FightSimulation_SendGoal_Request__fini(mma_interfaces__action__FightSimulation_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  mma_interfaces__action__FightSimulation_Goal__fini(&msg->goal);
}

bool
mma_interfaces__action__FightSimulation_SendGoal_Request__are_equal(const mma_interfaces__action__FightSimulation_SendGoal_Request * lhs, const mma_interfaces__action__FightSimulation_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!mma_interfaces__action__FightSimulation_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_SendGoal_Request__copy(
  const mma_interfaces__action__FightSimulation_SendGoal_Request * input,
  mma_interfaces__action__FightSimulation_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!mma_interfaces__action__FightSimulation_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

mma_interfaces__action__FightSimulation_SendGoal_Request *
mma_interfaces__action__FightSimulation_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_SendGoal_Request * msg = (mma_interfaces__action__FightSimulation_SendGoal_Request *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__action__FightSimulation_SendGoal_Request));
  bool success = mma_interfaces__action__FightSimulation_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__action__FightSimulation_SendGoal_Request__destroy(mma_interfaces__action__FightSimulation_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__action__FightSimulation_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence__init(mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_SendGoal_Request * data = NULL;

  if (size) {
    data = (mma_interfaces__action__FightSimulation_SendGoal_Request *)allocator.zero_allocate(size, sizeof(mma_interfaces__action__FightSimulation_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__action__FightSimulation_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__action__FightSimulation_SendGoal_Request__fini(&data[i - 1]);
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
mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence__fini(mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence * array)
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
      mma_interfaces__action__FightSimulation_SendGoal_Request__fini(&array->data[i]);
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

mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence *
mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence * array = (mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence__destroy(mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence__are_equal(const mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence * lhs, const mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence__copy(
  const mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence * input,
  mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__action__FightSimulation_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__action__FightSimulation_SendGoal_Request * data =
      (mma_interfaces__action__FightSimulation_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__action__FightSimulation_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__action__FightSimulation_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mma_interfaces__action__FightSimulation_SendGoal_Response__init(mma_interfaces__action__FightSimulation_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mma_interfaces__action__FightSimulation_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__action__FightSimulation_SendGoal_Response__fini(mma_interfaces__action__FightSimulation_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
mma_interfaces__action__FightSimulation_SendGoal_Response__are_equal(const mma_interfaces__action__FightSimulation_SendGoal_Response * lhs, const mma_interfaces__action__FightSimulation_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_SendGoal_Response__copy(
  const mma_interfaces__action__FightSimulation_SendGoal_Response * input,
  mma_interfaces__action__FightSimulation_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

mma_interfaces__action__FightSimulation_SendGoal_Response *
mma_interfaces__action__FightSimulation_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_SendGoal_Response * msg = (mma_interfaces__action__FightSimulation_SendGoal_Response *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__action__FightSimulation_SendGoal_Response));
  bool success = mma_interfaces__action__FightSimulation_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__action__FightSimulation_SendGoal_Response__destroy(mma_interfaces__action__FightSimulation_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__action__FightSimulation_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence__init(mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_SendGoal_Response * data = NULL;

  if (size) {
    data = (mma_interfaces__action__FightSimulation_SendGoal_Response *)allocator.zero_allocate(size, sizeof(mma_interfaces__action__FightSimulation_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__action__FightSimulation_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__action__FightSimulation_SendGoal_Response__fini(&data[i - 1]);
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
mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence__fini(mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence * array)
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
      mma_interfaces__action__FightSimulation_SendGoal_Response__fini(&array->data[i]);
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

mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence *
mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence * array = (mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence__destroy(mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence__are_equal(const mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence * lhs, const mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence__copy(
  const mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence * input,
  mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__action__FightSimulation_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__action__FightSimulation_SendGoal_Response * data =
      (mma_interfaces__action__FightSimulation_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__action__FightSimulation_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__action__FightSimulation_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
mma_interfaces__action__FightSimulation_GetResult_Request__init(mma_interfaces__action__FightSimulation_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mma_interfaces__action__FightSimulation_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__action__FightSimulation_GetResult_Request__fini(mma_interfaces__action__FightSimulation_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
mma_interfaces__action__FightSimulation_GetResult_Request__are_equal(const mma_interfaces__action__FightSimulation_GetResult_Request * lhs, const mma_interfaces__action__FightSimulation_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_GetResult_Request__copy(
  const mma_interfaces__action__FightSimulation_GetResult_Request * input,
  mma_interfaces__action__FightSimulation_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

mma_interfaces__action__FightSimulation_GetResult_Request *
mma_interfaces__action__FightSimulation_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_GetResult_Request * msg = (mma_interfaces__action__FightSimulation_GetResult_Request *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__action__FightSimulation_GetResult_Request));
  bool success = mma_interfaces__action__FightSimulation_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__action__FightSimulation_GetResult_Request__destroy(mma_interfaces__action__FightSimulation_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__action__FightSimulation_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__action__FightSimulation_GetResult_Request__Sequence__init(mma_interfaces__action__FightSimulation_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_GetResult_Request * data = NULL;

  if (size) {
    data = (mma_interfaces__action__FightSimulation_GetResult_Request *)allocator.zero_allocate(size, sizeof(mma_interfaces__action__FightSimulation_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__action__FightSimulation_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__action__FightSimulation_GetResult_Request__fini(&data[i - 1]);
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
mma_interfaces__action__FightSimulation_GetResult_Request__Sequence__fini(mma_interfaces__action__FightSimulation_GetResult_Request__Sequence * array)
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
      mma_interfaces__action__FightSimulation_GetResult_Request__fini(&array->data[i]);
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

mma_interfaces__action__FightSimulation_GetResult_Request__Sequence *
mma_interfaces__action__FightSimulation_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_GetResult_Request__Sequence * array = (mma_interfaces__action__FightSimulation_GetResult_Request__Sequence *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__action__FightSimulation_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__action__FightSimulation_GetResult_Request__Sequence__destroy(mma_interfaces__action__FightSimulation_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__action__FightSimulation_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__action__FightSimulation_GetResult_Request__Sequence__are_equal(const mma_interfaces__action__FightSimulation_GetResult_Request__Sequence * lhs, const mma_interfaces__action__FightSimulation_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_GetResult_Request__Sequence__copy(
  const mma_interfaces__action__FightSimulation_GetResult_Request__Sequence * input,
  mma_interfaces__action__FightSimulation_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__action__FightSimulation_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__action__FightSimulation_GetResult_Request * data =
      (mma_interfaces__action__FightSimulation_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__action__FightSimulation_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__action__FightSimulation_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_GetResult_Request__copy(
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
// #include "mma_interfaces/action/detail/fight_simulation__functions.h"

bool
mma_interfaces__action__FightSimulation_GetResult_Response__init(mma_interfaces__action__FightSimulation_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!mma_interfaces__action__FightSimulation_Result__init(&msg->result)) {
    mma_interfaces__action__FightSimulation_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__action__FightSimulation_GetResult_Response__fini(mma_interfaces__action__FightSimulation_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  mma_interfaces__action__FightSimulation_Result__fini(&msg->result);
}

bool
mma_interfaces__action__FightSimulation_GetResult_Response__are_equal(const mma_interfaces__action__FightSimulation_GetResult_Response * lhs, const mma_interfaces__action__FightSimulation_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!mma_interfaces__action__FightSimulation_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_GetResult_Response__copy(
  const mma_interfaces__action__FightSimulation_GetResult_Response * input,
  mma_interfaces__action__FightSimulation_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!mma_interfaces__action__FightSimulation_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mma_interfaces__action__FightSimulation_GetResult_Response *
mma_interfaces__action__FightSimulation_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_GetResult_Response * msg = (mma_interfaces__action__FightSimulation_GetResult_Response *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__action__FightSimulation_GetResult_Response));
  bool success = mma_interfaces__action__FightSimulation_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__action__FightSimulation_GetResult_Response__destroy(mma_interfaces__action__FightSimulation_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__action__FightSimulation_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__action__FightSimulation_GetResult_Response__Sequence__init(mma_interfaces__action__FightSimulation_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_GetResult_Response * data = NULL;

  if (size) {
    data = (mma_interfaces__action__FightSimulation_GetResult_Response *)allocator.zero_allocate(size, sizeof(mma_interfaces__action__FightSimulation_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__action__FightSimulation_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__action__FightSimulation_GetResult_Response__fini(&data[i - 1]);
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
mma_interfaces__action__FightSimulation_GetResult_Response__Sequence__fini(mma_interfaces__action__FightSimulation_GetResult_Response__Sequence * array)
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
      mma_interfaces__action__FightSimulation_GetResult_Response__fini(&array->data[i]);
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

mma_interfaces__action__FightSimulation_GetResult_Response__Sequence *
mma_interfaces__action__FightSimulation_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_GetResult_Response__Sequence * array = (mma_interfaces__action__FightSimulation_GetResult_Response__Sequence *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__action__FightSimulation_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__action__FightSimulation_GetResult_Response__Sequence__destroy(mma_interfaces__action__FightSimulation_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__action__FightSimulation_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__action__FightSimulation_GetResult_Response__Sequence__are_equal(const mma_interfaces__action__FightSimulation_GetResult_Response__Sequence * lhs, const mma_interfaces__action__FightSimulation_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_GetResult_Response__Sequence__copy(
  const mma_interfaces__action__FightSimulation_GetResult_Response__Sequence * input,
  mma_interfaces__action__FightSimulation_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__action__FightSimulation_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__action__FightSimulation_GetResult_Response * data =
      (mma_interfaces__action__FightSimulation_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__action__FightSimulation_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__action__FightSimulation_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "mma_interfaces/action/detail/fight_simulation__functions.h"

bool
mma_interfaces__action__FightSimulation_FeedbackMessage__init(mma_interfaces__action__FightSimulation_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mma_interfaces__action__FightSimulation_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!mma_interfaces__action__FightSimulation_Feedback__init(&msg->feedback)) {
    mma_interfaces__action__FightSimulation_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
mma_interfaces__action__FightSimulation_FeedbackMessage__fini(mma_interfaces__action__FightSimulation_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  mma_interfaces__action__FightSimulation_Feedback__fini(&msg->feedback);
}

bool
mma_interfaces__action__FightSimulation_FeedbackMessage__are_equal(const mma_interfaces__action__FightSimulation_FeedbackMessage * lhs, const mma_interfaces__action__FightSimulation_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mma_interfaces__action__FightSimulation_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_FeedbackMessage__copy(
  const mma_interfaces__action__FightSimulation_FeedbackMessage * input,
  mma_interfaces__action__FightSimulation_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mma_interfaces__action__FightSimulation_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

mma_interfaces__action__FightSimulation_FeedbackMessage *
mma_interfaces__action__FightSimulation_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_FeedbackMessage * msg = (mma_interfaces__action__FightSimulation_FeedbackMessage *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mma_interfaces__action__FightSimulation_FeedbackMessage));
  bool success = mma_interfaces__action__FightSimulation_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mma_interfaces__action__FightSimulation_FeedbackMessage__destroy(mma_interfaces__action__FightSimulation_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mma_interfaces__action__FightSimulation_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence__init(mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_FeedbackMessage * data = NULL;

  if (size) {
    data = (mma_interfaces__action__FightSimulation_FeedbackMessage *)allocator.zero_allocate(size, sizeof(mma_interfaces__action__FightSimulation_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mma_interfaces__action__FightSimulation_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mma_interfaces__action__FightSimulation_FeedbackMessage__fini(&data[i - 1]);
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
mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence__fini(mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence * array)
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
      mma_interfaces__action__FightSimulation_FeedbackMessage__fini(&array->data[i]);
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

mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence *
mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence * array = (mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence *)allocator.allocate(sizeof(mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence__destroy(mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence__are_equal(const mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence * lhs, const mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence__copy(
  const mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence * input,
  mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mma_interfaces__action__FightSimulation_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mma_interfaces__action__FightSimulation_FeedbackMessage * data =
      (mma_interfaces__action__FightSimulation_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mma_interfaces__action__FightSimulation_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mma_interfaces__action__FightSimulation_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mma_interfaces__action__FightSimulation_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
