// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ejercicio_tres_interface:srv/Midpoint.idl
// generated code does not contain a copyright notice

#ifndef EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__BUILDER_HPP_
#define EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ejercicio_tres_interface/srv/detail/midpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ejercicio_tres_interface
{

namespace srv
{

namespace builder
{

class Init_Midpoint_Request_y2
{
public:
  explicit Init_Midpoint_Request_y2(::ejercicio_tres_interface::srv::Midpoint_Request & msg)
  : msg_(msg)
  {}
  ::ejercicio_tres_interface::srv::Midpoint_Request y2(::ejercicio_tres_interface::srv::Midpoint_Request::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ejercicio_tres_interface::srv::Midpoint_Request msg_;
};

class Init_Midpoint_Request_x2
{
public:
  explicit Init_Midpoint_Request_x2(::ejercicio_tres_interface::srv::Midpoint_Request & msg)
  : msg_(msg)
  {}
  Init_Midpoint_Request_y2 x2(::ejercicio_tres_interface::srv::Midpoint_Request::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Midpoint_Request_y2(msg_);
  }

private:
  ::ejercicio_tres_interface::srv::Midpoint_Request msg_;
};

class Init_Midpoint_Request_y1
{
public:
  explicit Init_Midpoint_Request_y1(::ejercicio_tres_interface::srv::Midpoint_Request & msg)
  : msg_(msg)
  {}
  Init_Midpoint_Request_x2 y1(::ejercicio_tres_interface::srv::Midpoint_Request::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Midpoint_Request_x2(msg_);
  }

private:
  ::ejercicio_tres_interface::srv::Midpoint_Request msg_;
};

class Init_Midpoint_Request_x1
{
public:
  Init_Midpoint_Request_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Midpoint_Request_y1 x1(::ejercicio_tres_interface::srv::Midpoint_Request::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Midpoint_Request_y1(msg_);
  }

private:
  ::ejercicio_tres_interface::srv::Midpoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ejercicio_tres_interface::srv::Midpoint_Request>()
{
  return ejercicio_tres_interface::srv::builder::Init_Midpoint_Request_x1();
}

}  // namespace ejercicio_tres_interface


namespace ejercicio_tres_interface
{

namespace srv
{

namespace builder
{

class Init_Midpoint_Response_ym
{
public:
  explicit Init_Midpoint_Response_ym(::ejercicio_tres_interface::srv::Midpoint_Response & msg)
  : msg_(msg)
  {}
  ::ejercicio_tres_interface::srv::Midpoint_Response ym(::ejercicio_tres_interface::srv::Midpoint_Response::_ym_type arg)
  {
    msg_.ym = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ejercicio_tres_interface::srv::Midpoint_Response msg_;
};

class Init_Midpoint_Response_xm
{
public:
  Init_Midpoint_Response_xm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Midpoint_Response_ym xm(::ejercicio_tres_interface::srv::Midpoint_Response::_xm_type arg)
  {
    msg_.xm = std::move(arg);
    return Init_Midpoint_Response_ym(msg_);
  }

private:
  ::ejercicio_tres_interface::srv::Midpoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ejercicio_tres_interface::srv::Midpoint_Response>()
{
  return ejercicio_tres_interface::srv::builder::Init_Midpoint_Response_xm();
}

}  // namespace ejercicio_tres_interface

#endif  // EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__BUILDER_HPP_
