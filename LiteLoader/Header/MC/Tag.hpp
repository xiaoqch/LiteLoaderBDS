// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TAG
#include "Extra/TagAPI.hpp"
#undef EXTRA_INCLUDE_PART_TAG
class Tag {
#include "Extra/TagAPI.hpp"
public:
    virtual ~Tag();
    virtual void deleteChildren();
    virtual void write(class IDataOutput&) const = 0;
    virtual void load(class IDataInput&)         = 0;
    virtual std::string toString() const         = 0;
    virtual int /*enum Tag::Type*/ getId() const = 0;
    virtual bool equals(class Tag const&) const;
    virtual void print(class PrintStream&) const;
    virtual void print(std::string const&, class PrintStream&) const;
    virtual std::unique_ptr<class Tag> copy() const = 0;
    virtual unsigned __int64 hash() const           = 0;

public:
    MCAPI static std::string const NullString;
    MCAPI static std::string getTagName(enum Tag::Type);
    MCAPI static std::unique_ptr<class Tag> newTag(enum Tag::Type);
    MCAPI static std::unique_ptr<class Tag> readNamedTag(class IDataInput&, std::string&);
    MCAPI static void writeNamedTag(std::string const&, class Tag const&, class IDataOutput&);
};