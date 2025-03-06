// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mma_interfaces:msg/Fighter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mma_interfaces/msg/detail/fighter__rosidl_typesupport_introspection_c.h"
#include "mma_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mma_interfaces/msg/detail/fighter__functions.h"
#include "mma_interfaces/msg/detail/fighter__struct.h"


// Include directives for member types
// Member `name`
// Member `style`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mma_interfaces__msg__Fighter__init(message_memory);
}

void mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_fini_function(void * message_memory)
{
  mma_interfaces__msg__Fighter__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mma_interfaces__msg__Fighter, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mma_interfaces__msg__Fighter, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "style",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mma_interfaces__msg__Fighter, style),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_message_members = {
  "mma_interfaces__msg",  // message namespace
  "Fighter",  // message name
  3,  // number of fields
  sizeof(mma_interfaces__msg__Fighter),
  mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_message_member_array,  // message members
  mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_init_function,  // function to initialize message memory (memory has to be allocated)
  mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_message_type_support_handle = {
  0,
  &mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mma_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mma_interfaces, msg, Fighter)() {
  if (!mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_message_type_support_handle.typesupport_identifier) {
    mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mma_interfaces__msg__Fighter__rosidl_typesupport_introspection_c__Fighter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
