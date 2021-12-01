// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "DirectoryPackAccessStrategy.hpp"
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_ENCRYPTEDFILEACCESSSTRATEGY
#include "Extra/EncryptedFileAccessStrategyAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENCRYPTEDFILEACCESSSTRATEGY
class EncryptedFileAccessStrategy : public DirectoryPackAccessStrategy {
#include "Extra/EncryptedFileAccessStrategyAPI.hpp"
public:
    virtual ~EncryptedFileAccessStrategy();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual bool isWritable() const;
    virtual void setIsTrusted(bool);
    virtual bool isTrusted() const;
    virtual bool hasAsset(class Core::Path const&, bool) const;
    virtual bool hasFolder(class Core::Path const&) const;
    virtual bool getAsset(class Core::Path const&, std::string&, bool) const;
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const&);
    virtual bool writeAsset(class Core::Path const&, std::string const&);
    virtual void unk_vfn_14();
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&) const;
    virtual int /*enum PackAccessAssetGenerationResult*/ generateAssetSet();
    virtual void unk_vfn_18();
    virtual void unload();
    virtual class ContentIdentity readContentIdentity() const;

public:
    MCAPI static bool isValidEncryptedPack(class Core::Path const&, class ContentIdentity&);

private:
    MCAPI static bool _getContentIdentityFromEncryptedStream(std::string&, class ContentIdentity&);
    MCAPI static void _transformStream(std::string&, std::string const&, unsigned __int64);

protected:
    MCAPI std::string _getContentsFile();
};