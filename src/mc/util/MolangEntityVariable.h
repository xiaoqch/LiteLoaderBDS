#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariableIndex.h"

struct MolangEntityVariable : HashedString {
public:
    MolangVariableIndex mMolangVariableIndex;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangEntityVariable(class HashedString const& value);

    MCAPI ~MolangEntityVariable();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class HashedString const& value);

    MCAPI void dtor$();

    // NOLINTEND
};
