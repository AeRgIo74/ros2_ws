// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from p1_ej3_interface:srv/Angulos.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__BUILDER_HPP_
#define P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "p1_ej3_interface/srv/detail/angulos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace p1_ej3_interface
{

namespace srv
{

namespace builder
{

class Init_Angulos_Request_theta4
{
public:
  explicit Init_Angulos_Request_theta4(::p1_ej3_interface::srv::Angulos_Request & msg)
  : msg_(msg)
  {}
  ::p1_ej3_interface::srv::Angulos_Request theta4(::p1_ej3_interface::srv::Angulos_Request::_theta4_type arg)
  {
    msg_.theta4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Request msg_;
};

class Init_Angulos_Request_theta3
{
public:
  explicit Init_Angulos_Request_theta3(::p1_ej3_interface::srv::Angulos_Request & msg)
  : msg_(msg)
  {}
  Init_Angulos_Request_theta4 theta3(::p1_ej3_interface::srv::Angulos_Request::_theta3_type arg)
  {
    msg_.theta3 = std::move(arg);
    return Init_Angulos_Request_theta4(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Request msg_;
};

class Init_Angulos_Request_theta2
{
public:
  explicit Init_Angulos_Request_theta2(::p1_ej3_interface::srv::Angulos_Request & msg)
  : msg_(msg)
  {}
  Init_Angulos_Request_theta3 theta2(::p1_ej3_interface::srv::Angulos_Request::_theta2_type arg)
  {
    msg_.theta2 = std::move(arg);
    return Init_Angulos_Request_theta3(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Request msg_;
};

class Init_Angulos_Request_theta1
{
public:
  Init_Angulos_Request_theta1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angulos_Request_theta2 theta1(::p1_ej3_interface::srv::Angulos_Request::_theta1_type arg)
  {
    msg_.theta1 = std::move(arg);
    return Init_Angulos_Request_theta2(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::p1_ej3_interface::srv::Angulos_Request>()
{
  return p1_ej3_interface::srv::builder::Init_Angulos_Request_theta1();
}

}  // namespace p1_ej3_interface


namespace p1_ej3_interface
{

namespace srv
{

namespace builder
{

class Init_Angulos_Response_yaw
{
public:
  explicit Init_Angulos_Response_yaw(::p1_ej3_interface::srv::Angulos_Response & msg)
  : msg_(msg)
  {}
  ::p1_ej3_interface::srv::Angulos_Response yaw(::p1_ej3_interface::srv::Angulos_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Response msg_;
};

class Init_Angulos_Response_pitch
{
public:
  explicit Init_Angulos_Response_pitch(::p1_ej3_interface::srv::Angulos_Response & msg)
  : msg_(msg)
  {}
  Init_Angulos_Response_yaw pitch(::p1_ej3_interface::srv::Angulos_Response::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Angulos_Response_yaw(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Response msg_;
};

class Init_Angulos_Response_roll
{
public:
  explicit Init_Angulos_Response_roll(::p1_ej3_interface::srv::Angulos_Response & msg)
  : msg_(msg)
  {}
  Init_Angulos_Response_pitch roll(::p1_ej3_interface::srv::Angulos_Response::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Angulos_Response_pitch(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Response msg_;
};

class Init_Angulos_Response_z
{
public:
  explicit Init_Angulos_Response_z(::p1_ej3_interface::srv::Angulos_Response & msg)
  : msg_(msg)
  {}
  Init_Angulos_Response_roll z(::p1_ej3_interface::srv::Angulos_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Angulos_Response_roll(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Response msg_;
};

class Init_Angulos_Response_y
{
public:
  explicit Init_Angulos_Response_y(::p1_ej3_interface::srv::Angulos_Response & msg)
  : msg_(msg)
  {}
  Init_Angulos_Response_z y(::p1_ej3_interface::srv::Angulos_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Angulos_Response_z(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Response msg_;
};

class Init_Angulos_Response_x
{
public:
  Init_Angulos_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angulos_Response_y x(::p1_ej3_interface::srv::Angulos_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Angulos_Response_y(msg_);
  }

private:
  ::p1_ej3_interface::srv::Angulos_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::p1_ej3_interface::srv::Angulos_Response>()
{
  return p1_ej3_interface::srv::builder::Init_Angulos_Response_x();
}

}  // namespace p1_ej3_interface

#endif  // P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__BUILDER_HPP_
