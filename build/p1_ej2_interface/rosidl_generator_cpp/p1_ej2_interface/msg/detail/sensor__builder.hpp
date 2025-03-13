// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from p1_ej2_interface:msg/Sensor.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__BUILDER_HPP_
#define P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "p1_ej2_interface/msg/detail/sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace p1_ej2_interface
{

namespace msg
{

namespace builder
{

class Init_Sensor_data
{
public:
  Init_Sensor_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::p1_ej2_interface::msg::Sensor data(::p1_ej2_interface::msg::Sensor::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p1_ej2_interface::msg::Sensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::p1_ej2_interface::msg::Sensor>()
{
  return p1_ej2_interface::msg::builder::Init_Sensor_data();
}

}  // namespace p1_ej2_interface

#endif  // P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__BUILDER_HPP_
