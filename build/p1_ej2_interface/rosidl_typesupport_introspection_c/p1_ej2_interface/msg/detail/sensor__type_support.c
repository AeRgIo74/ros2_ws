// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from p1_ej2_interface:msg/Sensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "p1_ej2_interface/msg/detail/sensor__rosidl_typesupport_introspection_c.h"
#include "p1_ej2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "p1_ej2_interface/msg/detail/sensor__functions.h"
#include "p1_ej2_interface/msg/detail/sensor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  p1_ej2_interface__msg__Sensor__init(message_memory);
}

void p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_fini_function(void * message_memory)
{
  p1_ej2_interface__msg__Sensor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej2_interface__msg__Sensor, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_members = {
  "p1_ej2_interface__msg",  // message namespace
  "Sensor",  // message name
  1,  // number of fields
  sizeof(p1_ej2_interface__msg__Sensor),
  p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_member_array,  // message members
  p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_init_function,  // function to initialize message memory (memory has to be allocated)
  p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle = {
  0,
  &p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_p1_ej2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p1_ej2_interface, msg, Sensor)() {
  if (!p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle.typesupport_identifier) {
    p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &p1_ej2_interface__msg__Sensor__rosidl_typesupport_introspection_c__Sensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
