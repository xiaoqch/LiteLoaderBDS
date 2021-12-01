// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CUSTOMPROPERTYDESCRIPTION
#include "Extra/CustomPropertyDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_CUSTOMPROPERTYDESCRIPTION
struct CustomPropertyDescription {
#include "Extra/CustomPropertyDescriptionAPI.hpp"

public:
    MCAPI float getFloatMax() const;
    MCAPI float getFloatMin() const;
    MCAPI int getIntMax() const;
    MCAPI int getIntMin() const;
    MCAPI int indexOf(unsigned __int64 const&) const;
    MCAPI class CompoundTag toCompoundTag() const;

private:
    MCAPI void _copy(struct CustomPropertyDescription const&);
};