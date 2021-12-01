// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_INSIDEBLOCKEVENTMAP
#include "Extra/InsideBlockEventMapAPI.hpp"
#undef EXTRA_INCLUDE_PART_INSIDEBLOCKEVENTMAP
class InsideBlockEventMap {
#include "Extra/InsideBlockEventMapAPI.hpp"

public:
    MCAPI class DefinitionTrigger const& getEnteredEvent() const;
    MCAPI class DefinitionTrigger const& getExitedEvent() const;
    MCAPI bool isActorCurrentlyInside() const;
    MCAPI bool isWatchingIfActorEnters() const;
    MCAPI bool isWatchingIfActorExits() const;
    MCAPI bool wasActorInsideLastTick() const;
};