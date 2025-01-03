#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/FilterSubject.h"

class RenderParams {
public:
    char filler[0x1F0]; // IDA BDS-WIN 1.20.61 ActorDefinitionDescriptor::_executeEvent line=256

public:
    // prevent constructor by default
    RenderParams& operator=(RenderParams const&);

public:
    // NOLINTBEGIN
    MCAPI RenderParams();

    MCAPI RenderParams(class RenderParams const&);

    MCAPI class Actor* getActorTarget(::Puv::Legacy::FilterSubject subject) const;

    MCAPI class RenderParams& init(
        class BaseActorRenderContext*          baseActorRenderContext,
        class Actor*                           actor,
        class AnimationComponent*              animationComponent,
        class MolangVariableMap*               variableMap,
        std::shared_ptr<class DataDrivenModel> model,
        float                                  frameAlpha,
        float                                  modelScale
    );

    MCAPI class RenderParams& operator=(class RenderParams&&);

    MCAPI float& operator[](uint64 i);

    MCAPI ~RenderParams();

    MCAPI static class RenderParams& getRenderParams(class Actor& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class RenderParams const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
