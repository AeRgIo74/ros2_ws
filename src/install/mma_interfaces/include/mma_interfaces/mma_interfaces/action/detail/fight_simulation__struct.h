// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mma_interfaces:action/FightSimulation.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__STRUCT_H_
#define MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fighter1'
// Member 'fighter2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FightSimulation in the package mma_interfaces.
typedef struct mma_interfaces__action__FightSimulation_Goal
{
  rosidl_runtime_c__String fighter1;
  rosidl_runtime_c__String fighter2;
} mma_interfaces__action__FightSimulation_Goal;

// Struct for a sequence of mma_interfaces__action__FightSimulation_Goal.
typedef struct mma_interfaces__action__FightSimulation_Goal__Sequence
{
  mma_interfaces__action__FightSimulation_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__action__FightSimulation_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'winner'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/FightSimulation in the package mma_interfaces.
typedef struct mma_interfaces__action__FightSimulation_Result
{
  rosidl_runtime_c__String winner;
} mma_interfaces__action__FightSimulation_Result;

// Struct for a sequence of mma_interfaces__action__FightSimulation_Result.
typedef struct mma_interfaces__action__FightSimulation_Result__Sequence
{
  mma_interfaces__action__FightSimulation_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__action__FightSimulation_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/FightSimulation in the package mma_interfaces.
typedef struct mma_interfaces__action__FightSimulation_Feedback
{
  rosidl_runtime_c__String current_status;
} mma_interfaces__action__FightSimulation_Feedback;

// Struct for a sequence of mma_interfaces__action__FightSimulation_Feedback.
typedef struct mma_interfaces__action__FightSimulation_Feedback__Sequence
{
  mma_interfaces__action__FightSimulation_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__action__FightSimulation_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mma_interfaces/action/detail/fight_simulation__struct.h"

/// Struct defined in action/FightSimulation in the package mma_interfaces.
typedef struct mma_interfaces__action__FightSimulation_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mma_interfaces__action__FightSimulation_Goal goal;
} mma_interfaces__action__FightSimulation_SendGoal_Request;

// Struct for a sequence of mma_interfaces__action__FightSimulation_SendGoal_Request.
typedef struct mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence
{
  mma_interfaces__action__FightSimulation_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__action__FightSimulation_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FightSimulation in the package mma_interfaces.
typedef struct mma_interfaces__action__FightSimulation_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mma_interfaces__action__FightSimulation_SendGoal_Response;

// Struct for a sequence of mma_interfaces__action__FightSimulation_SendGoal_Response.
typedef struct mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence
{
  mma_interfaces__action__FightSimulation_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__action__FightSimulation_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FightSimulation in the package mma_interfaces.
typedef struct mma_interfaces__action__FightSimulation_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mma_interfaces__action__FightSimulation_GetResult_Request;

// Struct for a sequence of mma_interfaces__action__FightSimulation_GetResult_Request.
typedef struct mma_interfaces__action__FightSimulation_GetResult_Request__Sequence
{
  mma_interfaces__action__FightSimulation_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__action__FightSimulation_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mma_interfaces/action/detail/fight_simulation__struct.h"

/// Struct defined in action/FightSimulation in the package mma_interfaces.
typedef struct mma_interfaces__action__FightSimulation_GetResult_Response
{
  int8_t status;
  mma_interfaces__action__FightSimulation_Result result;
} mma_interfaces__action__FightSimulation_GetResult_Response;

// Struct for a sequence of mma_interfaces__action__FightSimulation_GetResult_Response.
typedef struct mma_interfaces__action__FightSimulation_GetResult_Response__Sequence
{
  mma_interfaces__action__FightSimulation_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__action__FightSimulation_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mma_interfaces/action/detail/fight_simulation__struct.h"

/// Struct defined in action/FightSimulation in the package mma_interfaces.
typedef struct mma_interfaces__action__FightSimulation_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mma_interfaces__action__FightSimulation_Feedback feedback;
} mma_interfaces__action__FightSimulation_FeedbackMessage;

// Struct for a sequence of mma_interfaces__action__FightSimulation_FeedbackMessage.
typedef struct mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence
{
  mma_interfaces__action__FightSimulation_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mma_interfaces__action__FightSimulation_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MMA_INTERFACES__ACTION__DETAIL__FIGHT_SIMULATION__STRUCT_H_
