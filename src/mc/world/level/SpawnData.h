#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnData {
public:
    // prevent constructor by default
    SpawnData();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnData() = default;

    MCAPI explicit SpawnData(class CompoundTag const& tag);

    MCAPI SpawnData(class SpawnData const& rhs);

    MCAPI SpawnData(int randomWeight, struct ActorDefinitionIdentifier actorId);

    MCAPI class SpawnData& operator=(class SpawnData const& rhs);

    MCAPI bool operator==(class SpawnData const& rhs) const;

    MCAPI std::unique_ptr<class CompoundTag> save();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class SpawnData const& rhs);

    MCAPI void* ctor$(int randomWeight, struct ActorDefinitionIdentifier actorId);

    MCAPI void* ctor$(class CompoundTag const& tag);

    // NOLINTEND
};
