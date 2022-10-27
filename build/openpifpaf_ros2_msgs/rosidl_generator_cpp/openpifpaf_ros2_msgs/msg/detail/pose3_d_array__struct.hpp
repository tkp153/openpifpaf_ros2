// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3DArray.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__STRUCT_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'poses3d'
#include "openpifpaf_ros2_msgs/msg/detail/pose3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__openpifpaf_ros2_msgs__msg__Pose3DArray __attribute__((deprecated))
#else
# define DEPRECATED__openpifpaf_ros2_msgs__msg__Pose3DArray __declspec(deprecated)
#endif

namespace openpifpaf_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose3DArray_
{
  using Type = Pose3DArray_<ContainerAllocator>;

  explicit Pose3DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Pose3DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _poses3d_type =
    std::vector<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>, typename ContainerAllocator::template rebind<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>>::other>;
  _poses3d_type poses3d;

  // setters for named parameter idiom
  Type & set__poses3d(
    const std::vector<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>, typename ContainerAllocator::template rebind<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>>::other> & _arg)
  {
    this->poses3d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openpifpaf_ros2_msgs__msg__Pose3DArray
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openpifpaf_ros2_msgs__msg__Pose3DArray
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose3DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose3DArray_ & other) const
  {
    if (this->poses3d != other.poses3d) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose3DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose3DArray_

// alias to use template instance with default allocator
using Pose3DArray =
  openpifpaf_ros2_msgs::msg::Pose3DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D_ARRAY__STRUCT_HPP_
