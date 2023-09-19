#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackType.h"

class CompositePackSource : public ::PackSource {
public:
    // prevent constructor by default
    CompositePackSource& operator=(CompositePackSource const&);
    CompositePackSource(CompositePackSource const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?forEachPackConst@CompositePackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
    virtual void forEachPackConst(std::function<void(class Pack const&)>) const;

    // vIndex: 2, symbol: ?forEachPack@CompositePackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
    virtual void forEachPack(std::function<void(class Pack&)>);

    // vIndex: 5, symbol:
    // ?load@CompositePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual class PackSourceReport
    load(class IPackManifestFactory&, gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);

    // symbol: ??0CompositePackSource@@QEAA@XZ
    MCAPI CompositePackSource();

    // symbol: ??0CompositePackSource@@QEAA@$$QEAV?$vector@PEAVPackSource@@V?$allocator@PEAVPackSource@@@std@@@std@@@Z
    MCAPI explicit CompositePackSource(std::vector<class PackSource*>&&);

    // symbol: ?addPackSource@CompositePackSource@@QEAAXPEAVPackSource@@@Z
    MCAPI void addPackSource(class PackSource*);

    // symbol: ?clear@CompositePackSource@@QEAAXXZ
    MCAPI void clear();

    // NOLINTEND
};
