// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mma_interfaces:msg/Fighter.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__MSG__DETAIL__FIGHTER__BUILDER_HPP_
#define MMA_INTERFACES__MSG__DETAIL__FIGHTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mma_interfaces/msg/detail/fighter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mma_interfaces
{

namespace msg
{

namespace builder
{

class Init_Fighter_style
{
public:
  explicit Init_Fighter_style(::mma_interfaces::msg::Fighter & msg)
  : msg_(msg)
  {}
  ::mma_interfaces::msg::Fighter style(::mma_interfaces::msg::Fighter::_style_type arg)
  {
    msg_.style = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::msg::Fighter msg_;
};

class Init_Fighter_weight
{
public:
  explicit Init_Fighter_weight(::mma_interfaces::msg::Fighter & msg)
  : msg_(msg)
  {}
  Init_Fighter_style weight(::mma_interfaces::msg::Fighter::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_Fighter_style(msg_);
  }

private:
  ::mma_interfaces::msg::Fighter msg_;
};

class Init_Fighter_name
{
public:
  Init_Fighter_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fighter_weight name(::mma_interfaces::msg::Fighter::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Fighter_weight(msg_);
  }

private:
  ::mma_interfaces::msg::Fighter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::msg::Fighter>()
{
  return mma_interfaces::msg::builder::Init_Fighter_name();
}

}  // namespace mma_interfaces

#endif  // MMA_INTERFACES__MSG__DETAIL__FIGHTER__BUILDER_HPP_
