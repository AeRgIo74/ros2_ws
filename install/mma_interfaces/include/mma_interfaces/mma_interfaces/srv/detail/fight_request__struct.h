// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mma_interfaces:srv/FightRequest.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__STRUCT_H_
#define MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fighter1'
// Member 'fighter2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FightRequest in the package mma_interfaces.
typedef struct mma_interfaces__srv__FightRequest_Request
{
  rosidl_runtime_c__String fighter1;
  rosidl_runtime_c__String fighter2;
} mma_interfaces__srv__FightRequest_Request;

// Struct for a sequence of mma_interfaces__srv__FightRequest_Request.
typedef struct mma_interfaces__srv__FightRequest_Request__Sequence
{
  mma_interfaces__srv__FightRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__srv__FightRequest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FightRequest in the package mma_interfaces.
typedef struct mma_interfaces__srv__FightRequest_Response
{
  rosidl_runtime_c__String result;
} mma_interfaces__srv__FightRequest_Response;

// Struct for a sequence of mma_interfaces__srv__FightRequest_Response.
typedef struct mma_interfaces__srv__FightRequest_Response__Sequence
{
  mma_interfaces__srv__FightRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__srv__FightRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__STRUCT_H_
