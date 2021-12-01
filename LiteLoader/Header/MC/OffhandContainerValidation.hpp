// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_OFFHANDCONTAINERVALIDATION
#include "Extra/OffhandContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_OFFHANDCONTAINERVALIDATION
class OffhandContainerValidation : public ContainerValidationBase {
#include "Extra/OffhandContainerValidationAPI.hpp"
public:
    virtual ~OffhandContainerValidation();
    virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    virtual void unk_vfn_4();
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;
    virtual void unk_vfn_6();
};