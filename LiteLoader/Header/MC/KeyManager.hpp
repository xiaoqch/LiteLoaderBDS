// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_KEYMANAGER
#include "Extra/KeyManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_KEYMANAGER
class KeyManager {
#include "Extra/KeyManagerAPI.hpp"
public:
    virtual ~KeyManager();
    virtual bool isValid() const;

public:
    MCAPI std::string getPublicKey() const;
};