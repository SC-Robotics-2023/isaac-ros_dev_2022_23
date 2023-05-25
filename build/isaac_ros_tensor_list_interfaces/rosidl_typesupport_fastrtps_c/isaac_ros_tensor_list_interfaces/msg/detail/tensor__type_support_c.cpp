// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from isaac_ros_tensor_list_interfaces:msg/Tensor.idl
// generated code does not contain a copyright notice
#include "isaac_ros_tensor_list_interfaces/msg/detail/tensor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "isaac_ros_tensor_list_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "isaac_ros_tensor_list_interfaces/msg/detail/tensor__struct.h"
#include "isaac_ros_tensor_list_interfaces/msg/detail/tensor__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "isaac_ros_tensor_list_interfaces/msg/detail/tensor_shape__functions.h"  // shape
#include "rosidl_runtime_c/primitives_sequence.h"  // data, strides
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data, strides
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions
size_t get_serialized_size_isaac_ros_tensor_list_interfaces__msg__TensorShape(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_isaac_ros_tensor_list_interfaces__msg__TensorShape(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros_tensor_list_interfaces, msg, TensorShape)();


using _Tensor__ros_msg_type = isaac_ros_tensor_list_interfaces__msg__Tensor;

static bool _Tensor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tensor__ros_msg_type * ros_message = static_cast<const _Tensor__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: shape
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isaac_ros_tensor_list_interfaces, msg, TensorShape
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->shape, cdr))
    {
      return false;
    }
  }

  // Field name: data_type
  {
    cdr << ros_message->data_type;
  }

  // Field name: strides
  {
    size_t size = ros_message->strides.size;
    auto array_ptr = ros_message->strides.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Tensor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tensor__ros_msg_type * ros_message = static_cast<_Tensor__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: shape
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isaac_ros_tensor_list_interfaces, msg, TensorShape
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->shape))
    {
      return false;
    }
  }

  // Field name: data_type
  {
    cdr >> ros_message->data_type;
  }

  // Field name: strides
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->strides.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->strides);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->strides, size)) {
      fprintf(stderr, "failed to create array for field 'strides'");
      return false;
    }
    auto array_ptr = ros_message->strides.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->data, size)) {
      fprintf(stderr, "failed to create array for field 'data'");
      return false;
    }
    auto array_ptr = ros_message->data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isaac_ros_tensor_list_interfaces
size_t get_serialized_size_isaac_ros_tensor_list_interfaces__msg__Tensor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tensor__ros_msg_type * ros_message = static_cast<const _Tensor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name shape

  current_alignment += get_serialized_size_isaac_ros_tensor_list_interfaces__msg__TensorShape(
    &(ros_message->shape), current_alignment);
  // field.name data_type
  {
    size_t item_size = sizeof(ros_message->data_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name strides
  {
    size_t array_size = ros_message->strides.size;
    auto array_ptr = ros_message->strides.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tensor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_isaac_ros_tensor_list_interfaces__msg__Tensor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isaac_ros_tensor_list_interfaces
size_t max_serialized_size_isaac_ros_tensor_list_interfaces__msg__Tensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: shape
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_isaac_ros_tensor_list_interfaces__msg__TensorShape(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: data_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: strides
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Tensor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_isaac_ros_tensor_list_interfaces__msg__Tensor(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Tensor = {
  "isaac_ros_tensor_list_interfaces::msg",
  "Tensor",
  _Tensor__cdr_serialize,
  _Tensor__cdr_deserialize,
  _Tensor__get_serialized_size,
  _Tensor__max_serialized_size
};

static rosidl_message_type_support_t _Tensor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tensor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_ros_tensor_list_interfaces, msg, Tensor)() {
  return &_Tensor__type_support;
}

#if defined(__cplusplus)
}
#endif
