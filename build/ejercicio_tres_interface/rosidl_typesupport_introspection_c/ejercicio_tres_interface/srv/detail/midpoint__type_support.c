// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ejercicio_tres_interface:srv/Midpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ejercicio_tres_interface/srv/detail/midpoint__rosidl_typesupport_introspection_c.h"
#include "ejercicio_tres_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ejercicio_tres_interface/srv/detail/midpoint__functions.h"
#include "ejercicio_tres_interface/srv/detail/midpoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ejercicio_tres_interface__srv__Midpoint_Request__init(message_memory);
}

void ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_fini_function(void * message_memory)
{
  ejercicio_tres_interface__srv__Midpoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_message_member_array[4] = {
  {
    "x1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ejercicio_tres_interface__srv__Midpoint_Request, x1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ejercicio_tres_interface__srv__Midpoint_Request, y1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ejercicio_tres_interface__srv__Midpoint_Request, x2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ejercicio_tres_interface__srv__Midpoint_Request, y2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_message_members = {
  "ejercicio_tres_interface__srv",  // message namespace
  "Midpoint_Request",  // message name
  4,  // number of fields
  sizeof(ejercicio_tres_interface__srv__Midpoint_Request),
  ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_message_member_array,  // message members
  ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_message_type_support_handle = {
  0,
  &ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ejercicio_tres_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ejercicio_tres_interface, srv, Midpoint_Request)() {
  if (!ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_message_type_support_handle.typesupport_identifier) {
    ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ejercicio_tres_interface__srv__Midpoint_Request__rosidl_typesupport_introspection_c__Midpoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ejercicio_tres_interface/srv/detail/midpoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ejercicio_tres_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ejercicio_tres_interface/srv/detail/midpoint__functions.h"
// already included above
// #include "ejercicio_tres_interface/srv/detail/midpoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ejercicio_tres_interface__srv__Midpoint_Response__init(message_memory);
}

void ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_fini_function(void * message_memory)
{
  ejercicio_tres_interface__srv__Midpoint_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_message_member_array[2] = {
  {
    "xm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ejercicio_tres_interface__srv__Midpoint_Response, xm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ym",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ejercicio_tres_interface__srv__Midpoint_Response, ym),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_message_members = {
  "ejercicio_tres_interface__srv",  // message namespace
  "Midpoint_Response",  // message name
  2,  // number of fields
  sizeof(ejercicio_tres_interface__srv__Midpoint_Response),
  ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_message_member_array,  // message members
  ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_message_type_support_handle = {
  0,
  &ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ejercicio_tres_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ejercicio_tres_interface, srv, Midpoint_Response)() {
  if (!ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_message_type_support_handle.typesupport_identifier) {
    ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ejercicio_tres_interface__srv__Midpoint_Response__rosidl_typesupport_introspection_c__Midpoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ejercicio_tres_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ejercicio_tres_interface/srv/detail/midpoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_service_members = {
  "ejercicio_tres_interface__srv",  // service namespace
  "Midpoint",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_Request_message_type_support_handle,
  NULL  // response message
  // ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_Response_message_type_support_handle
};

static rosidl_service_type_support_t ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_service_type_support_handle = {
  0,
  &ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ejercicio_tres_interface, srv, Midpoint_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ejercicio_tres_interface, srv, Midpoint_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ejercicio_tres_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ejercicio_tres_interface, srv, Midpoint)() {
  if (!ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_service_type_support_handle.typesupport_identifier) {
    ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ejercicio_tres_interface, srv, Midpoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ejercicio_tres_interface, srv, Midpoint_Response)()->data;
  }

  return &ejercicio_tres_interface__srv__detail__midpoint__rosidl_typesupport_introspection_c__Midpoint_service_type_support_handle;
}
