// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOOKATBLOCKNODE
#include "Extra/LookAtBlockNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOKATBLOCKNODE
class LookAtBlockNode {
#include "Extra/LookAtBlockNodeAPI.hpp"
public:
    virtual ~LookAtBlockNode();
    virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    virtual void initializeFromDefinition(class Actor&);
};