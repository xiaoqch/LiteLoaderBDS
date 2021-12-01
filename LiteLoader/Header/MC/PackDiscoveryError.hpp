// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PackError.hpp"
#define EXTRA_INCLUDE_PART_PACKDISCOVERYERROR
#include "Extra/PackDiscoveryErrorAPI.hpp"
#undef EXTRA_INCLUDE_PART_PACKDISCOVERYERROR
class PackDiscoveryError : public PackError {
#include "Extra/PackDiscoveryErrorAPI.hpp"
public:
    virtual ~PackDiscoveryError();
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const& getLocErrorMessageMap() const;
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const& getEventErrorMessageMap() const;
};