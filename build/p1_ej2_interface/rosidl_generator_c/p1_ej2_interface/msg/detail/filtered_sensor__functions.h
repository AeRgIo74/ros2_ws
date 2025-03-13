// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from p1_ej2_interface:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__FUNCTIONS_H_
#define P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "p1_ej2_interface/msg/rosidl_generator_c__visibility_control.h"

#include "p1_ej2_interface/msg/detail/filtered_sensor__struct.h"

/// Initialize msg/FilteredSensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p1_ej2_interface__msg__FilteredSensor
 * )) before or use
 * p1_ej2_interface__msg__FilteredSensor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
bool
p1_ej2_interface__msg__FilteredSensor__init(p1_ej2_interface__msg__FilteredSensor * msg);

/// Finalize msg/FilteredSensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
void
p1_ej2_interface__msg__FilteredSensor__fini(p1_ej2_interface__msg__FilteredSensor * msg);

/// Create msg/FilteredSensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p1_ej2_interface__msg__FilteredSensor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
p1_ej2_interface__msg__FilteredSensor *
p1_ej2_interface__msg__FilteredSensor__create();

/// Destroy msg/FilteredSensor message.
/**
 * It calls
 * p1_ej2_interface__msg__FilteredSensor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
void
p1_ej2_interface__msg__FilteredSensor__destroy(p1_ej2_interface__msg__FilteredSensor * msg);

/// Check for msg/FilteredSensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
bool
p1_ej2_interface__msg__FilteredSensor__are_equal(const p1_ej2_interface__msg__FilteredSensor * lhs, const p1_ej2_interface__msg__FilteredSensor * rhs);

/// Copy a msg/FilteredSensor message.
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
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
bool
p1_ej2_interface__msg__FilteredSensor__copy(
  const p1_ej2_interface__msg__FilteredSensor * input,
  p1_ej2_interface__msg__FilteredSensor * output);

/// Initialize array of msg/FilteredSensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * p1_ej2_interface__msg__FilteredSensor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
bool
p1_ej2_interface__msg__FilteredSensor__Sequence__init(p1_ej2_interface__msg__FilteredSensor__Sequence * array, size_t size);

/// Finalize array of msg/FilteredSensor messages.
/**
 * It calls
 * p1_ej2_interface__msg__FilteredSensor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
void
p1_ej2_interface__msg__FilteredSensor__Sequence__fini(p1_ej2_interface__msg__FilteredSensor__Sequence * array);

/// Create array of msg/FilteredSensor messages.
/**
 * It allocates the memory for the array and calls
 * p1_ej2_interface__msg__FilteredSensor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
p1_ej2_interface__msg__FilteredSensor__Sequence *
p1_ej2_interface__msg__FilteredSensor__Sequence__create(size_t size);

/// Destroy array of msg/FilteredSensor messages.
/**
 * It calls
 * p1_ej2_interface__msg__FilteredSensor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
void
p1_ej2_interface__msg__FilteredSensor__Sequence__destroy(p1_ej2_interface__msg__FilteredSensor__Sequence * array);

/// Check for msg/FilteredSensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
bool
p1_ej2_interface__msg__FilteredSensor__Sequence__are_equal(const p1_ej2_interface__msg__FilteredSensor__Sequence * lhs, const p1_ej2_interface__msg__FilteredSensor__Sequence * rhs);

/// Copy an array of msg/FilteredSensor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_p1_ej2_interface
bool
p1_ej2_interface__msg__FilteredSensor__Sequence__copy(
  const p1_ej2_interface__msg__FilteredSensor__Sequence * input,
  p1_ej2_interface__msg__FilteredSensor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__FUNCTIONS_H_
