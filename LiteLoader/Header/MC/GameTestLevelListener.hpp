// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_GAMETESTLEVELLISTENER
#include "Extra/GameTestLevelListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_GAMETESTLEVELLISTENER
class GameTestLevelListener {
#include "Extra/GameTestLevelListenerAPI.hpp"
public:
    virtual ~GameTestLevelListener();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual int /*enum EventResult*/ onLevelTick();
};