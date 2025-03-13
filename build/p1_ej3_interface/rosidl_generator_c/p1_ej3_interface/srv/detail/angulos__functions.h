// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from p1_ej3_interface:srv/Angulos.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__FUNCTIONS_H_
#define P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "p1_ej3_interface/msg/rosidl_generator_c__visibility_control.h"

#include "p1_ej3_interface/srv/detail/angulos__struct.h"

/// Initialize srv/Angulos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p1_ej3_interface__srv__Angulos_Request
 * )) before or use
 * p1_ej3_interface__srv__Angulos_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Request__init(p1_ej3_interface__srv__Angulos_Request * msg);

/// Finalize srv/Angulos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
void
p1_ej3_interface__srv__Angulos_Request__fini(p1_ej3_interface__srv__Angulos_Request * msg);

/// Create srv/Angulos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p1_ej3_interface__srv__Angulos_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
p1_ej3_interface__srv__Angulos_Request *
p1_ej3_interface__srv__Angulos_Request__create();

/// Destroy srv/Angulos message.
/**
 * It calls
 * p1_ej3_interface__srv__Angulos_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
void
p1_ej3_interface__srv__Angulos_Request__destroy(p1_ej3_interface__srv__Angulos_Request * msg);

/// Check for srv/Angulos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Request__are_equal(const p1_ej3_interface__srv__Angulos_Request * lhs, const p1_ej3_interface__srv__Angulos_Request * rhs);

/// Copy a srv/Angulos message.
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
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Request__copy(
  const p1_ej3_interface__srv__Angulos_Request * input,
  p1_ej3_interface__srv__Angulos_Request * output);

/// Initialize array of srv/Angulos messages.
/**
 * It allocates the memory for the number of elements and calls
 * p1_ej3_interface__srv__Angulos_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Request__Sequence__init(p1_ej3_interface__srv__Angulos_Request__Sequence * array, size_t size);

/// Finalize array of srv/Angulos messages.
/**
 * It calls
 * p1_ej3_interface__srv__Angulos_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
void
p1_ej3_interface__srv__Angulos_Request__Sequence__fini(p1_ej3_interface__srv__Angulos_Request__Sequence * array);

/// Create array of srv/Angulos messages.
/**
 * It allocates the memory for the array and calls
 * p1_ej3_interface__srv__Angulos_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
p1_ej3_interface__srv__Angulos_Request__Sequence *
p1_ej3_interface__srv__Angulos_Request__Sequence__create(size_t size);

/// Destroy array of srv/Angulos messages.
/**
 * It calls
 * p1_ej3_interface__srv__Angulos_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
void
p1_ej3_interface__srv__Angulos_Request__Sequence__destroy(p1_ej3_interface__srv__Angulos_Request__Sequence * array);

/// Check for srv/Angulos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Request__Sequence__are_equal(const p1_ej3_interface__srv__Angulos_Request__Sequence * lhs, const p1_ej3_interface__srv__Angulos_Request__Sequence * rhs);

/// Copy an array of srv/Angulos messages.
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
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Request__Sequence__copy(
  const p1_ej3_interface__srv__Angulos_Request__Sequence * input,
  p1_ej3_interface__srv__Angulos_Request__Sequence * output);

/// Initialize srv/Angulos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * p1_ej3_interface__srv__Angulos_Response
 * )) before or use
 * p1_ej3_interface__srv__Angulos_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Response__init(p1_ej3_interface__srv__Angulos_Response * msg);

/// Finalize srv/Angulos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
void
p1_ej3_interface__srv__Angulos_Response__fini(p1_ej3_interface__srv__Angulos_Response * msg);

/// Create srv/Angulos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * p1_ej3_interface__srv__Angulos_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
p1_ej3_interface__srv__Angulos_Response *
p1_ej3_interface__srv__Angulos_Response__create();

/// Destroy srv/Angulos message.
/**
 * It calls
 * p1_ej3_interface__srv__Angulos_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
void
p1_ej3_interface__srv__Angulos_Response__destroy(p1_ej3_interface__srv__Angulos_Response * msg);

/// Check for srv/Angulos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Response__are_equal(const p1_ej3_interface__srv__Angulos_Response * lhs, const p1_ej3_interface__srv__Angulos_Response * rhs);

/// Copy a srv/Angulos message.
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
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Response__copy(
  const p1_ej3_interface__srv__Angulos_Response * input,
  p1_ej3_interface__srv__Angulos_Response * output);

/// Initialize array of srv/Angulos messages.
/**
 * It allocates the memory for the number of elements and calls
 * p1_ej3_interface__srv__Angulos_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Response__Sequence__init(p1_ej3_interface__srv__Angulos_Response__Sequence * array, size_t size);

/// Finalize array of srv/Angulos messages.
/**
 * It calls
 * p1_ej3_interface__srv__Angulos_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
void
p1_ej3_interface__srv__Angulos_Response__Sequence__fini(p1_ej3_interface__srv__Angulos_Response__Sequence * array);

/// Create array of srv/Angulos messages.
/**
 * It allocates the memory for the array and calls
 * p1_ej3_interface__srv__Angulos_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
p1_ej3_interface__srv__Angulos_Response__Sequence *
p1_ej3_interface__srv__Angulos_Response__Sequence__create(size_t size);

/// Destroy array of srv/Angulos messages.
/**
 * It calls
 * p1_ej3_interface__srv__Angulos_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
void
p1_ej3_interface__srv__Angulos_Response__Sequence__destroy(p1_ej3_interface__srv__Angulos_Response__Sequence * array);

/// Check for srv/Angulos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Response__Sequence__are_equal(const p1_ej3_interface__srv__Angulos_Response__Sequence * lhs, const p1_ej3_interface__srv__Angulos_Response__Sequence * rhs);

/// Copy an array of srv/Angulos messages.
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
ROSIDL_GENERATOR_C_PUBLIC_p1_ej3_interface
bool
p1_ej3_interface__srv__Angulos_Response__Sequence__copy(
  const p1_ej3_interface__srv__Angulos_Response__Sequence * input,
  p1_ej3_interface__srv__Angulos_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__FUNCTIONS_H_
