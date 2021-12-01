// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_TEXTOBJECTLOCALIZEDTEXTWITHPARAMS
#include "Extra/TextObjectLocalizedTextWithParamsAPI.hpp"
#undef EXTRA_INCLUDE_PART_TEXTOBJECTLOCALIZEDTEXTWITHPARAMS
class TextObjectLocalizedTextWithParams {
#include "Extra/TextObjectLocalizedTextWithParamsAPI.hpp"
public:
    virtual ~TextObjectLocalizedTextWithParams();
    virtual std::string asString() const;
    virtual class Json::Value asJsonValue() const;
    virtual class Json::Value resolve(struct ResolveData const&) const;
};