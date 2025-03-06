// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ejercicio_tres:srv/Midpoint.idl
// generated code does not contain a copyright notice

#ifndef EJERCICIO_TRES__SRV__DETAIL__MIDPOINT__BUILDER_HPP_
#define EJERCICIO_TRES__SRV__DETAIL__MIDPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ejercicio_tres/srv/detail/midpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ejercicio_tres
{

namespace srv
{

namespace builder
{

class Init_Midpoint_Request_y2
{
public:
  explicit Init_Midpoint_Request_y2(::ejercicio_tres::srv::Midpoint_Request & msg)
  : msg_(msg)
  {}
  ::ejercicio_tres::srv::Midpoint_Request y2(::ejercicio_tres::srv::Midpoint_Request::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ejercicio_tres::srv::Midpoint_Request msg_;
};

class Init_Midpoint_Request_x2
{
public:
  explicit Init_Midpoint_Request_x2(::ejercicio_tres::srv::Midpoint_Request & msg)
  : msg_(msg)
  {}
  Init_Midpoint_Request_y2 x2(::ejercicio_tres::srv::Midpoint_Request::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Midpoint_Request_y2(msg_);
  }

private:
  ::ejercicio_tres::srv::Midpoint_Request msg_;
};

class Init_Midpoint_Request_y1
{
public:
  explicit Init_Midpoint_Request_y1(::ejercicio_tres::srv::Midpoint_Request & msg)
  : msg_(msg)
  {}
  Init_Midpoint_Request_x2 y1(::ejercicio_tres::srv::Midpoint_Request::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Midpoint_Request_x2(msg_);
  }

private:
  ::ejercicio_tres::srv::Midpoint_Request msg_;
};

class Init_Midpoint_Request_x1
{
public:
  Init_Midpoint_Request_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Midpoint_Request_y1 x1(::ejercicio_tres::srv::Midpoint_Request::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Midpoint_Request_y1(msg_);
  }

private:
  ::ejercicio_tres::srv::Midpoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ejercicio_tres::srv::Midpoint_Request>()
{
  return ejercicio_tres::srv::builder::Init_Midpoint_Request_x1();
}

}  // namespace ejercicio_tres


namespace ejercicio_tres
{

namespace srv
{

namespace builder
{

class Init_Midpoint_Response_y_mid
{
public:
  explicit Init_Midpoint_Response_y_mid(::ejercicio_tres::srv::Midpoint_Response & msg)
  : msg_(msg)
  {}
  ::ejercicio_tres::srv::Midpoint_Response y_mid(::ejercicio_tres::srv::Midpoint_Response::_y_mid_type arg)
  {
    msg_.y_mid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ejercicio_tres::srv::Midpoint_Response msg_;
};

class Init_Midpoint_Response_x_mid
{
public:
  Init_Midpoint_Response_x_mid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Midpoint_Response_y_mid x_mid(::ejercicio_tres::srv::Midpoint_Response::_x_mid_type arg)
  {
    msg_.x_mid = std::move(arg);
    return Init_Midpoint_Response_y_mid(msg_);
  }

private:
  ::ejercicio_tres::srv::Midpoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ejercicio_tres::srv::Midpoint_Response>()
{
  return ejercicio_tres::srv::builder::Init_Midpoint_Response_x_mid();
}

}  // namespace ejercicio_tres

#endif  // EJERCICIO_TRES__SRV__DETAIL__MIDPOINT__BUILDER_HPP_
