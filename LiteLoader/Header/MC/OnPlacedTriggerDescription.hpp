// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Types.hpp"
#define EXTRA_INCLUDE_PART_ONPLACEDTRIGGERDESCRIPTION
#include "Extra/OnPlacedTriggerDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ONPLACEDTRIGGERDESCRIPTION
class OnPlacedTriggerDescription : public BlockTriggerDescription<struct OnPlacedTrigger> {
#include "Extra/OnPlacedTriggerDescriptionAPI.hpp"
public:
    virtual ~OnPlacedTriggerDescription();
    virtual std::string const& getName() const;
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual ~OnPlacedTriggerDescription();
    virtual void unk_vfn_8();

public:
    MCAPI static std::string const NameID;
};