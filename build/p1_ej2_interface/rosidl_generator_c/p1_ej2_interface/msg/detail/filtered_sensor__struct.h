// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from p1_ej2_interface:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_
#define P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FilteredSensor in the package p1_ej2_interface.
typedef struct p1_ej2_interface__msg__FilteredSensor
{
  double average_value;
} p1_ej2_interface__msg__FilteredSensor;

// Struct for a sequence of p1_ej2_interface__msg__FilteredSensor.
typedef struct p1_ej2_interface__msg__FilteredSensor__Sequence
{
  p1_ej2_interface__msg__FilteredSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p1_ej2_interface__msg__FilteredSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__STRUCT_H_
