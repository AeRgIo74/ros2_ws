// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ejercicio_tres_interface:srv/Midpoint.idl
// generated code does not contain a copyright notice

#ifndef EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__STRUCT_H_
#define EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Midpoint in the package ejercicio_tres_interface.
typedef struct ejercicio_tres_interface__srv__Midpoint_Request
{
  double x1;
  double y1;
  double x2;
  double y2;
} ejercicio_tres_interface__srv__Midpoint_Request;

// Struct for a sequence of ejercicio_tres_interface__srv__Midpoint_Request.
typedef struct ejercicio_tres_interface__srv__Midpoint_Request__Sequence
{
  ejercicio_tres_interface__srv__Midpoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ejercicio_tres_interface__srv__Midpoint_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Midpoint in the package ejercicio_tres_interface.
typedef struct ejercicio_tres_interface__srv__Midpoint_Response
{
  /// Response
  double xm;
  double ym;
} ejercicio_tres_interface__srv__Midpoint_Response;

// Struct for a sequence of ejercicio_tres_interface__srv__Midpoint_Response.
typedef struct ejercicio_tres_interface__srv__Midpoint_Response__Sequence
{
  ejercicio_tres_interface__srv__Midpoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ejercicio_tres_interface__srv__Midpoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__STRUCT_H_
