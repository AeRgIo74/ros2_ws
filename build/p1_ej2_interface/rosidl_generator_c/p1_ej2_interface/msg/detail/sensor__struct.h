// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from p1_ej2_interface:msg/Sensor.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__STRUCT_H_
#define P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Sensor in the package p1_ej2_interface.
typedef struct p1_ej2_interface__msg__Sensor
{
  double data;
} p1_ej2_interface__msg__Sensor;

// Struct for a sequence of p1_ej2_interface__msg__Sensor.
typedef struct p1_ej2_interface__msg__Sensor__Sequence
{
  p1_ej2_interface__msg__Sensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p1_ej2_interface__msg__Sensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__STRUCT_H_
