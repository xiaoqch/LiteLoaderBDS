// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "AttributeInstanceDelegate.hpp"
#define EXTRA_INCLUDE_PART_EXHAUSTIONATTRIBUTEDELEGATE
#include "Extra/ExhaustionAttributeDelegateAPI.hpp"
#undef EXTRA_INCLUDE_PART_EXHAUSTIONATTRIBUTEDELEGATE
class ExhaustionAttributeDelegate : public AttributeInstanceDelegate {
#include "Extra/ExhaustionAttributeDelegateAPI.hpp"
public:
    virtual ~ExhaustionAttributeDelegate();
    virtual void tick();
    virtual void notify(__int64);
    virtual void unk_vfn_3();
};