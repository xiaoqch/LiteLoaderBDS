// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_APPPLATFORMLISTENER
#include "Extra/AppPlatformListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_APPPLATFORMLISTENER
class AppPlatformListener {
#include "Extra/AppPlatformListenerAPI.hpp"
public:
    virtual ~AppPlatformListener();

public:
    MCAPI void initListener(float);
    MCAPI void terminate();
};