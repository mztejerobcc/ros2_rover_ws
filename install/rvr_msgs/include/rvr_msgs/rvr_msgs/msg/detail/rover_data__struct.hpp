// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rvr_msgs:msg/RoverData.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__ROVER_DATA__STRUCT_HPP_
#define RVR_MSGS__MSG__DETAIL__ROVER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'd_wheel'
// Member 'v_wheel'
#include "rvr_msgs/msg/detail/wheel4__struct.hpp"
// Member 'a_imu'
// Member 'w_imu'
#include "rvr_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rvr_msgs__msg__RoverData __attribute__((deprecated))
#else
# define DEPRECATED__rvr_msgs__msg__RoverData __declspec(deprecated)
#endif

namespace rvr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverData_
{
  using Type = RoverData_<ContainerAllocator>;

  explicit RoverData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : d_wheel(_init),
    v_wheel(_init),
    a_imu(_init),
    w_imu(_init)
  {
    (void)_init;
  }

  explicit RoverData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : d_wheel(_alloc, _init),
    v_wheel(_alloc, _init),
    a_imu(_alloc, _init),
    w_imu(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _d_wheel_type =
    rvr_msgs::msg::Wheel4_<ContainerAllocator>;
  _d_wheel_type d_wheel;
  using _v_wheel_type =
    rvr_msgs::msg::Wheel4_<ContainerAllocator>;
  _v_wheel_type v_wheel;
  using _a_imu_type =
    rvr_msgs::msg::Vector3_<ContainerAllocator>;
  _a_imu_type a_imu;
  using _w_imu_type =
    rvr_msgs::msg::Vector3_<ContainerAllocator>;
  _w_imu_type w_imu;

  // setters for named parameter idiom
  Type & set__d_wheel(
    const rvr_msgs::msg::Wheel4_<ContainerAllocator> & _arg)
  {
    this->d_wheel = _arg;
    return *this;
  }
  Type & set__v_wheel(
    const rvr_msgs::msg::Wheel4_<ContainerAllocator> & _arg)
  {
    this->v_wheel = _arg;
    return *this;
  }
  Type & set__a_imu(
    const rvr_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->a_imu = _arg;
    return *this;
  }
  Type & set__w_imu(
    const rvr_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->w_imu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rvr_msgs::msg::RoverData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rvr_msgs::msg::RoverData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rvr_msgs::msg::RoverData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rvr_msgs::msg::RoverData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rvr_msgs::msg::RoverData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rvr_msgs::msg::RoverData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rvr_msgs::msg::RoverData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rvr_msgs::msg::RoverData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rvr_msgs::msg::RoverData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rvr_msgs::msg::RoverData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rvr_msgs__msg__RoverData
    std::shared_ptr<rvr_msgs::msg::RoverData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rvr_msgs__msg__RoverData
    std::shared_ptr<rvr_msgs::msg::RoverData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverData_ & other) const
  {
    if (this->d_wheel != other.d_wheel) {
      return false;
    }
    if (this->v_wheel != other.v_wheel) {
      return false;
    }
    if (this->a_imu != other.a_imu) {
      return false;
    }
    if (this->w_imu != other.w_imu) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverData_

// alias to use template instance with default allocator
using RoverData =
  rvr_msgs::msg::RoverData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rvr_msgs

#endif  // RVR_MSGS__MSG__DETAIL__ROVER_DATA__STRUCT_HPP_
