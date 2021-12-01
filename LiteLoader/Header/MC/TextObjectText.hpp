// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_TEXTOBJECTTEXT
#include "Extra/TextObjectTextAPI.hpp"
#undef EXTRA_INCLUDE_PART_TEXTOBJECTTEXT
class TextObjectText {
#include "Extra/TextObjectTextAPI.hpp"
public:
    virtual ~TextObjectText();
    virtual std::string asString() const;
    virtual class Json::Value asJsonValue() const;
    virtual class Json::Value resolve(struct ResolveData const&) const;

public:
    MCAPI static class Json::Value asJsonValue(std::string const&);
};