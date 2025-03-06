// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mma_interfaces:msg/Fighter.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__MSG__DETAIL__FIGHTER__STRUCT_H_
#define MMA_INTERFACES__MSG__DETAIL__FIGHTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'style'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Fighter in the package mma_interfaces.
typedef struct mma_interfaces__msg__Fighter
{
  rosidl_runtime_c__String name;
  float weight;
  rosidl_runtime_c__String style;
} mma_interfaces__msg__Fighter;

// Struct for a sequence of mma_interfaces__msg__Fighter.
typedef struct mma_interfaces__msg__Fighter__Sequence
{
  mma_interfaces__msg__Fighter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__msg__Fighter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MMA_INTERFACES__MSG__DETAIL__FIGHTER__STRUCT_H_
