// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Types.hpp"
#define EXTRA_INCLUDE_PART_MINECRAFTGAMETESTBATCHRUNNER
#include "Extra/MinecraftGameTestBatchRunnerAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINECRAFTGAMETESTBATCHRUNNER
class MinecraftGameTestBatchRunner {
#include "Extra/MinecraftGameTestBatchRunnerAPI.hpp"
public:
    virtual ~MinecraftGameTestBatchRunner();
    virtual class std::shared_ptr<class gametest::BaseGameTestInstance> _createGameTestInstance(class gametest::BaseGameTestFunction&);
    virtual void _runTest(class std::shared_ptr<class gametest::BaseGameTestInstance>, class gametest::GameTestTicker&);
};