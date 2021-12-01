// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RENDERPARAMS
#include "Extra/RenderParamsAPI.hpp"
#undef EXTRA_INCLUDE_PART_RENDERPARAMS
class RenderParams {
#include "Extra/RenderParamsAPI.hpp"

public:
    MCAPI class Actor* getActorTarget(enum FilterSubject const&) const;
    MCAPI class RenderParams& init(class BaseActorRenderContext*, class Actor*, class AnimationComponent*, class MolangVariableMap*, class std::shared_ptr<class DataDrivenModel>, float, float, int, bool, class std::function<float(void)>);
    MCAPI float& operator[](unsigned __int64);

    MCAPI static class RenderParams& getRenderParams(class Actor&);
};