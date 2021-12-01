// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_TEXTOBJECTLOCALIZEDTEXT
#include "Extra/TextObjectLocalizedTextAPI.hpp"
#undef EXTRA_INCLUDE_PART_TEXTOBJECTLOCALIZEDTEXT
class TextObjectLocalizedText {
#include "Extra/TextObjectLocalizedTextAPI.hpp"
public:
    virtual ~TextObjectLocalizedText();
    virtual std::string asString() const;
    virtual class Json::Value asJsonValue() const;
    virtual class Json::Value resolve(struct ResolveData const&) const;
};