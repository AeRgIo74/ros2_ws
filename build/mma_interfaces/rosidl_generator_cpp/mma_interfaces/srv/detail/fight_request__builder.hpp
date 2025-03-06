// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mma_interfaces:srv/FightRequest.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__BUILDER_HPP_
#define MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mma_interfaces/srv/detail/fight_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mma_interfaces
{

namespace srv
{

namespace builder
{

class Init_FightRequest_Request_fighter2
{
public:
  explicit Init_FightRequest_Request_fighter2(::mma_interfaces::srv::FightRequest_Request & msg)
  : msg_(msg)
  {}
  ::mma_interfaces::srv::FightRequest_Request fighter2(::mma_interfaces::srv::FightRequest_Request::_fighter2_type arg)
  {
    msg_.fighter2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::srv::FightRequest_Request msg_;
};

class Init_FightRequest_Request_fighter1
{
public:
  Init_FightRequest_Request_fighter1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FightRequest_Request_fighter2 fighter1(::mma_interfaces::srv::FightRequest_Request::_fighter1_type arg)
  {
    msg_.fighter1 = std::move(arg);
    return Init_FightRequest_Request_fighter2(msg_);
  }

private:
  ::mma_interfaces::srv::FightRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::srv::FightRequest_Request>()
{
  return mma_interfaces::srv::builder::Init_FightRequest_Request_fighter1();
}

}  // namespace mma_interfaces


namespace mma_interfaces
{

namespace srv
{

namespace builder
{

class Init_FightRequest_Response_result
{
public:
  Init_FightRequest_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mma_interfaces::srv::FightRequest_Response result(::mma_interfaces::srv::FightRequest_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mma_interfaces::srv::FightRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mma_interfaces::srv::FightRequest_Response>()
{
  return mma_interfaces::srv::builder::Init_FightRequest_Response_result();
}

}  // namespace mma_interfaces

#endif  // MMA_INTERFACES__SRV__DETAIL__FIGHT_REQUEST__BUILDER_HPP_
