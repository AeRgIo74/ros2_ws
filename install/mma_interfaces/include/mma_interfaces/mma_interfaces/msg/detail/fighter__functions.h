// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mma_interfaces:msg/Fighter.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__MSG__DETAIL__FIGHTER__FUNCTIONS_H_
#define MMA_INTERFACES__MSG__DETAIL__FIGHTER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mma_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mma_interfaces/msg/detail/fighter__struct.h"

/// Initialize msg/Fighter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mma_interfaces__msg__Fighter
 * )) before or use
 * mma_interfaces__msg__Fighter__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
bool
mma_interfaces__msg__Fighter__init(mma_interfaces__msg__Fighter * msg);

/// Finalize msg/Fighter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
void
mma_interfaces__msg__Fighter__fini(mma_interfaces__msg__Fighter * msg);

/// Create msg/Fighter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mma_interfaces__msg__Fighter__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
mma_interfaces__msg__Fighter *
mma_interfaces__msg__Fighter__create();

/// Destroy msg/Fighter message.
/**
 * It calls
 * mma_interfaces__msg__Fighter__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
void
mma_interfaces__msg__Fighter__destroy(mma_interfaces__msg__Fighter * msg);

/// Check for msg/Fighter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
bool
mma_interfaces__msg__Fighter__are_equal(const mma_interfaces__msg__Fighter * lhs, const mma_interfaces__msg__Fighter * rhs);

/// Copy a msg/Fighter message.
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
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
bool
mma_interfaces__msg__Fighter__copy(
  const mma_interfaces__msg__Fighter * input,
  mma_interfaces__msg__Fighter * output);

/// Initialize array of msg/Fighter messages.
/**
 * It allocates the memory for the number of elements and calls
 * mma_interfaces__msg__Fighter__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
bool
mma_interfaces__msg__Fighter__Sequence__init(mma_interfaces__msg__Fighter__Sequence * array, size_t size);

/// Finalize array of msg/Fighter messages.
/**
 * It calls
 * mma_interfaces__msg__Fighter__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
void
mma_interfaces__msg__Fighter__Sequence__fini(mma_interfaces__msg__Fighter__Sequence * array);

/// Create array of msg/Fighter messages.
/**
 * It allocates the memory for the array and calls
 * mma_interfaces__msg__Fighter__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
mma_interfaces__msg__Fighter__Sequence *
mma_interfaces__msg__Fighter__Sequence__create(size_t size);

/// Destroy array of msg/Fighter messages.
/**
 * It calls
 * mma_interfaces__msg__Fighter__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
void
mma_interfaces__msg__Fighter__Sequence__destroy(mma_interfaces__msg__Fighter__Sequence * array);

/// Check for msg/Fighter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
bool
mma_interfaces__msg__Fighter__Sequence__are_equal(const mma_interfaces__msg__Fighter__Sequence * lhs, const mma_interfaces__msg__Fighter__Sequence * rhs);

/// Copy an array of msg/Fighter messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mma_interfaces
bool
mma_interfaces__msg__Fighter__Sequence__copy(
  const mma_interfaces__msg__Fighter__Sequence * input,
  mma_interfaces__msg__Fighter__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MMA_INTERFACES__MSG__DETAIL__FIGHTER__FUNCTIONS_H_
