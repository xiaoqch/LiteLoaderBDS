// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ATTACKNODE
#include "Extra/AttackNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_ATTACKNODE
class AttackNode {
#include "Extra/AttackNodeAPI.hpp"
public:
    virtual ~AttackNode();
    virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    virtual void initializeFromDefinition(class Actor&);
};