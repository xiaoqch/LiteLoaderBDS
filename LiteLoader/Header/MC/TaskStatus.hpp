// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TASKSTATUS
#include "Extra/TaskStatusAPI.hpp"
#undef EXTRA_INCLUDE_PART_TASKSTATUS
class TaskStatus {
#include "Extra/TaskStatusAPI.hpp"

public:
    MCAPI bool isComplete() const;
    MCAPI enum Bedrock::Threading::AsyncStatus toAsyncStatus() const;
    MCAPI class std::error_code toErrorCode() const;
};