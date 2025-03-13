// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from p1_ej2_interface:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_
#define P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "p1_ej2_interface/msg/detail/filtered_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace p1_ej2_interface
{

namespace msg
{

namespace builder
{

class Init_FilteredSensor_average_value
{
public:
  Init_FilteredSensor_average_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::p1_ej2_interface::msg::FilteredSensor average_value(::p1_ej2_interface::msg::FilteredSensor::_average_value_type arg)
  {
    msg_.average_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p1_ej2_interface::msg::FilteredSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::p1_ej2_interface::msg::FilteredSensor>()
{
  return p1_ej2_interface::msg::builder::Init_FilteredSensor_average_value();
}

}  // namespace p1_ej2_interface

#endif  // P1_EJ2_INTERFACE__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_
