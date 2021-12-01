// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_DEFINITIONEVENTLOADER
#include "Extra/DefinitionEventLoaderAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEFINITIONEVENTLOADER
class DefinitionEventLoader {
#include "Extra/DefinitionEventLoaderAPI.hpp"

public:
    MCAPI static class DefinitionEvent loadEvent(class Json::Value, class SemVersion const&, enum TypeExecutingEvent, class EventResponseFactory const*);

private:
    MCAPI static void _loadCollection(class DefinitionEvent&, class Json::Value, class SemVersion const&, enum TypeExecutingEvent, class EventResponseFactory const*);
};