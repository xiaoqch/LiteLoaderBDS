// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BACKGROUNDTASKBASE
#include "Extra/BackgroundTaskBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART_BACKGROUNDTASKBASE
class BackgroundTaskBase {
#include "Extra/BackgroundTaskBaseAPI.hpp"
public:
    virtual ~BackgroundTaskBase();

public:
    MCAPI void _makeOrphan();
    MCAPI bool canBeRunBy(class std::thread::id) const;
    MCAPI class IBackgroundTaskOwner* getGroup();
    MCAPI enum TaskGroupState getGroupState() const;
    MCAPI class std::shared_ptr<class BackgroundTaskBase> getNext();
    MCAPI class BackgroundTaskBase* getPrev();
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getStartAfterTime() const;
    MCAPI bool hasAffinity() const;
    MCAPI bool isAsync() const;
    MCAPI bool isOrphaned() const;
    MCAPI bool isReadyToStart(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const;
    MCAPI void setNext(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI void setPrev(class BackgroundTaskBase*);
    MCAPI void setStartAfterTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    MCAPI void setSyncPriority();

    MCAPI static class BackgroundTaskBase* getCurrent();

protected:
    MCAPI void backDownPriority();
    MCAPI void taskComplete();
};