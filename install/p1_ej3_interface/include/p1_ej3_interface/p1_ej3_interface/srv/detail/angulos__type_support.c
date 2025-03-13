// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from p1_ej3_interface:srv/Angulos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "p1_ej3_interface/srv/detail/angulos__rosidl_typesupport_introspection_c.h"
#include "p1_ej3_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "p1_ej3_interface/srv/detail/angulos__functions.h"
#include "p1_ej3_interface/srv/detail/angulos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  p1_ej3_interface__srv__Angulos_Request__init(message_memory);
}

void p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_fini_function(void * message_memory)
{
  p1_ej3_interface__srv__Angulos_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_message_member_array[4] = {
  {
    "theta1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Request, theta1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Request, theta2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Request, theta3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Request, theta4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_message_members = {
  "p1_ej3_interface__srv",  // message namespace
  "Angulos_Request",  // message name
  4,  // number of fields
  sizeof(p1_ej3_interface__srv__Angulos_Request),
  p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_message_member_array,  // message members
  p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_message_type_support_handle = {
  0,
  &p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_p1_ej3_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p1_ej3_interface, srv, Angulos_Request)() {
  if (!p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_message_type_support_handle.typesupport_identifier) {
    p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &p1_ej3_interface__srv__Angulos_Request__rosidl_typesupport_introspection_c__Angulos_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "p1_ej3_interface/srv/detail/angulos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "p1_ej3_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "p1_ej3_interface/srv/detail/angulos__functions.h"
// already included above
// #include "p1_ej3_interface/srv/detail/angulos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  p1_ej3_interface__srv__Angulos_Response__init(message_memory);
}

void p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_fini_function(void * message_memory)
{
  p1_ej3_interface__srv__Angulos_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Response, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Response, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Response, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(p1_ej3_interface__srv__Angulos_Response, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_message_members = {
  "p1_ej3_interface__srv",  // message namespace
  "Angulos_Response",  // message name
  6,  // number of fields
  sizeof(p1_ej3_interface__srv__Angulos_Response),
  p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_message_member_array,  // message members
  p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_message_type_support_handle = {
  0,
  &p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_p1_ej3_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p1_ej3_interface, srv, Angulos_Response)() {
  if (!p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_message_type_support_handle.typesupport_identifier) {
    p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &p1_ej3_interface__srv__Angulos_Response__rosidl_typesupport_introspection_c__Angulos_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "p1_ej3_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "p1_ej3_interface/srv/detail/angulos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_service_members = {
  "p1_ej3_interface__srv",  // service namespace
  "Angulos",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_Request_message_type_support_handle,
  NULL  // response message
  // p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_Response_message_type_support_handle
};

static rosidl_service_type_support_t p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_service_type_support_handle = {
  0,
  &p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p1_ej3_interface, srv, Angulos_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p1_ej3_interface, srv, Angulos_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_p1_ej3_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p1_ej3_interface, srv, Angulos)() {
  if (!p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_service_type_support_handle.typesupport_identifier) {
    p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p1_ej3_interface, srv, Angulos_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, p1_ej3_interface, srv, Angulos_Response)()->data;
  }

  return &p1_ej3_interface__srv__detail__angulos__rosidl_typesupport_introspection_c__Angulos_service_type_support_handle;
}
