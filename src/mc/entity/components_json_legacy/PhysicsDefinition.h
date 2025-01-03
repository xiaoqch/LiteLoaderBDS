#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PhysicsDefinition {
public:
    // prevent constructor by default
    PhysicsDefinition& operator=(PhysicsDefinition const&);
    PhysicsDefinition(PhysicsDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI PhysicsDefinition();

    MCAPI void initialize(class EntityContext& entity, class PhysicsComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PhysicsDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
