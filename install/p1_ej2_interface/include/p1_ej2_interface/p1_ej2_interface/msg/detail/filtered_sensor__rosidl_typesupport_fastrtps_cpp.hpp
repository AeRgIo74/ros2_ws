// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from p1_ej2_interface:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "p1_ej2_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "p1_ej2_interface/msg/detail/filtered_sensor__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace p1_ej2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
cdr_serialize(
  const p1_ej2_interface::msg::FilteredSensor & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  p1_ej2_interface::msg::FilteredSensor & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
get_serialized_size(
  const p1_ej2_interface::msg::FilteredSensor & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
max_serialized_size_FilteredSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace p1_ej2_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_p1_ej2_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, p1_ej2_interface, msg, FilteredSensor)();

#ifdef __cplusplus
}
#endif

#endif  // P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
