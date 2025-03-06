// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mma_interfaces:msg/Fighter.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mma_interfaces/msg/detail/fighter__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mma_interfaces
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Fighter_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fighter_type_support_ids_t;

static const _Fighter_type_support_ids_t _Fighter_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Fighter_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fighter_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fighter_type_support_symbol_names_t _Fighter_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mma_interfaces, msg, Fighter)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mma_interfaces, msg, Fighter)),
  }
};

typedef struct _Fighter_type_support_data_t
{
  void * data[2];
} _Fighter_type_support_data_t;

static _Fighter_type_support_data_t _Fighter_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fighter_message_typesupport_map = {
  2,
  "mma_interfaces",
  &_Fighter_message_typesupport_ids.typesupport_identifier[0],
  &_Fighter_message_typesupport_symbol_names.symbol_name[0],
  &_Fighter_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fighter_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fighter_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace mma_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mma_interfaces::msg::Fighter>()
{
  return &::mma_interfaces::msg::rosidl_typesupport_cpp::Fighter_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mma_interfaces, msg, Fighter)() {
  return get_message_type_support_handle<mma_interfaces::msg::Fighter>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
