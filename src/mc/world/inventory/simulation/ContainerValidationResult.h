#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerValidationOperationType.h"
#include "mc/world/containers/ContainerValidationOutcome.h"

struct ContainerValidationResult {
public:
    // prevent constructor by default
    ContainerValidationResult& operator=(ContainerValidationResult const&);
    ContainerValidationResult();

public:
    // NOLINTBEGIN
    // symbol: ??0ContainerValidationResult@@QEAA@W4ContainerValidationOutcome@@@Z
    MCAPI explicit ContainerValidationResult(::ContainerValidationOutcome outcome);

    // symbol: ??0ContainerValidationResult@@QEAA@AEBU0@@Z
    MCAPI ContainerValidationResult(struct ContainerValidationResult const&);

    // symbol: ?isSuccess@ContainerValidationResult@@QEBA_NXZ
    MCAPI bool isSuccess() const;

    // symbol:
    // ?tryGetOperation@ContainerValidationResult@@QEBAPEBUContainerValidationOperation@@W4ContainerValidationOperationType@@@Z
    MCAPI struct ContainerValidationOperation const* tryGetOperation(::ContainerValidationOperationType type) const;

    // symbol: ??1ContainerValidationResult@@QEAA@XZ
    MCAPI ~ContainerValidationResult();

    // NOLINTEND
};
