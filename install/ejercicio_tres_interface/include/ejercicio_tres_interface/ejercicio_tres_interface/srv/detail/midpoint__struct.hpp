// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ejercicio_tres_interface:srv/Midpoint.idl
// generated code does not contain a copyright notice

#ifndef EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__STRUCT_HPP_
#define EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ejercicio_tres_interface__srv__Midpoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__ejercicio_tres_interface__srv__Midpoint_Request __declspec(deprecated)
#endif

namespace ejercicio_tres_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Midpoint_Request_
{
  using Type = Midpoint_Request_<ContainerAllocator>;

  explicit Midpoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
    }
  }

  explicit Midpoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
    }
  }

  // field types and members
  using _x1_type =
    double;
  _x1_type x1;
  using _y1_type =
    double;
  _y1_type y1;
  using _x2_type =
    double;
  _x2_type x2;
  using _y2_type =
    double;
  _y2_type y2;

  // setters for named parameter idiom
  Type & set__x1(
    const double & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const double & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const double & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const double & _arg)
  {
    this->y2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ejercicio_tres_interface__srv__Midpoint_Request
    std::shared_ptr<ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ejercicio_tres_interface__srv__Midpoint_Request
    std::shared_ptr<ejercicio_tres_interface::srv::Midpoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Midpoint_Request_ & other) const
  {
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Midpoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Midpoint_Request_

// alias to use template instance with default allocator
using Midpoint_Request =
  ejercicio_tres_interface::srv::Midpoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ejercicio_tres_interface


#ifndef _WIN32
# define DEPRECATED__ejercicio_tres_interface__srv__Midpoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__ejercicio_tres_interface__srv__Midpoint_Response __declspec(deprecated)
#endif

namespace ejercicio_tres_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Midpoint_Response_
{
  using Type = Midpoint_Response_<ContainerAllocator>;

  explicit Midpoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xm = 0.0;
      this->ym = 0.0;
    }
  }

  explicit Midpoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xm = 0.0;
      this->ym = 0.0;
    }
  }

  // field types and members
  using _xm_type =
    double;
  _xm_type xm;
  using _ym_type =
    double;
  _ym_type ym;

  // setters for named parameter idiom
  Type & set__xm(
    const double & _arg)
  {
    this->xm = _arg;
    return *this;
  }
  Type & set__ym(
    const double & _arg)
  {
    this->ym = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ejercicio_tres_interface__srv__Midpoint_Response
    std::shared_ptr<ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ejercicio_tres_interface__srv__Midpoint_Response
    std::shared_ptr<ejercicio_tres_interface::srv::Midpoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Midpoint_Response_ & other) const
  {
    if (this->xm != other.xm) {
      return false;
    }
    if (this->ym != other.ym) {
      return false;
    }
    return true;
  }
  bool operator!=(const Midpoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Midpoint_Response_

// alias to use template instance with default allocator
using Midpoint_Response =
  ejercicio_tres_interface::srv::Midpoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ejercicio_tres_interface

namespace ejercicio_tres_interface
{

namespace srv
{

struct Midpoint
{
  using Request = ejercicio_tres_interface::srv::Midpoint_Request;
  using Response = ejercicio_tres_interface::srv::Midpoint_Response;
};

}  // namespace srv

}  // namespace ejercicio_tres_interface

#endif  // EJERCICIO_TRES_INTERFACE__SRV__DETAIL__MIDPOINT__STRUCT_HPP_
