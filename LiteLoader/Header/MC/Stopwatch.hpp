// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_STOPWATCH
#include "Extra/StopwatchAPI.hpp"
#undef EXTRA_INCLUDE_PART_STOPWATCH
class Stopwatch {
#include "Extra/StopwatchAPI.hpp"
public:
    virtual ~Stopwatch();
    virtual double stop();
    virtual double stopContinue();
    virtual void print(std::string const&);

public:
    MCAPI void reset();
    MCAPI void start();
};