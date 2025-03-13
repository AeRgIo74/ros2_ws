// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from p1_ej3_interface:srv/Angulos.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__STRUCT_H_
#define P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Angulos in the package p1_ej3_interface.
typedef struct p1_ej3_interface__srv__Angulos_Request
{
  double theta1;
  double theta2;
  double theta3;
  double theta4;
} p1_ej3_interface__srv__Angulos_Request;

// Struct for a sequence of p1_ej3_interface__srv__Angulos_Request.
typedef struct p1_ej3_interface__srv__Angulos_Request__Sequence
{
  p1_ej3_interface__srv__Angulos_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p1_ej3_interface__srv__Angulos_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Angulos in the package p1_ej3_interface.
typedef struct p1_ej3_interface__srv__Angulos_Response
{
  double x;
  double y;
  double z;
  double roll;
  double pitch;
  double yaw;
} p1_ej3_interface__srv__Angulos_Response;

// Struct for a sequence of p1_ej3_interface__srv__Angulos_Response.
typedef struct p1_ej3_interface__srv__Angulos_Response__Sequence
{
  p1_ej3_interface__srv__Angulos_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} p1_ej3_interface__srv__Angulos_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__STRUCT_H_
