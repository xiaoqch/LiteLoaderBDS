// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LevelContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_DROPPERCONTAINERMANAGERMODEL
#include "Extra/DropperContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_DROPPERCONTAINERMANAGERMODEL
class DropperContainerManagerModel : public LevelContainerManagerModel {
#include "Extra/DropperContainerManagerModelAPI.hpp"
public:
    virtual ~DropperContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void setData(int, int);
    virtual class ContainerScreenContext _postInit();
};