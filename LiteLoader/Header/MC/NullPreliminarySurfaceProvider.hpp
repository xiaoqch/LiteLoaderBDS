// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_NULLPRELIMINARYSURFACEPROVIDER
#include "Extra/NullPreliminarySurfaceProviderAPI.hpp"
#undef EXTRA_INCLUDE_PART_NULLPRELIMINARYSURFACEPROVIDER
class NullPreliminarySurfaceProvider {
#include "Extra/NullPreliminarySurfaceProviderAPI.hpp"
public:
    virtual ~NullPreliminarySurfaceProvider();
    virtual class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
};