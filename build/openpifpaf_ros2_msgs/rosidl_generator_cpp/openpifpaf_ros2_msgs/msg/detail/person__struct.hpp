// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__STRUCT_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__openpifpaf_ros2_msgs__msg__Person __attribute__((deprecated))
#else
# define DEPRECATED__openpifpaf_ros2_msgs__msg__Person __declspec(deprecated)
#endif

namespace openpifpaf_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Person_
{
  using Type = Person_<ContainerAllocator>;

  explicit Person_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : markers(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->person_id = 0l;
      this->human_person_num = 0l;
    }
  }

  explicit Person_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : markers(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->person_id = 0l;
      this->human_person_num = 0l;
    }
  }

  // field types and members
  using _markers_type =
    visualization_msgs::msg::MarkerArray_<ContainerAllocator>;
  _markers_type markers;
  using _person_id_type =
    int32_t;
  _person_id_type person_id;
  using _human_person_num_type =
    int32_t;
  _human_person_num_type human_person_num;

  // setters for named parameter idiom
  Type & set__markers(
    const visualization_msgs::msg::MarkerArray_<ContainerAllocator> & _arg)
  {
    this->markers = _arg;
    return *this;
  }
  Type & set__person_id(
    const int32_t & _arg)
  {
    this->person_id = _arg;
    return *this;
  }
  Type & set__human_person_num(
    const int32_t & _arg)
  {
    this->human_person_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator> *;
  using ConstRawPtr =
    const openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openpifpaf_ros2_msgs__msg__Person
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openpifpaf_ros2_msgs__msg__Person
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Person_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Person_ & other) const
  {
    if (this->markers != other.markers) {
      return false;
    }
    if (this->person_id != other.person_id) {
      return false;
    }
    if (this->human_person_num != other.human_person_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Person_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Person_

// alias to use template instance with default allocator
using Person =
  openpifpaf_ros2_msgs::msg::Person_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__PERSON__STRUCT_HPP_
