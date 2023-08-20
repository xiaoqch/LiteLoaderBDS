#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/redstone/circuit/CircuitSceneGraph.h"
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class CircuitSystem {

public:
    class LevelChunkTracking {
    public:
        BlockPos mChunkPos;
    };
    bool                                           mLockGraph;
    CircuitSceneGraph                              mSceneGraph;
    std::vector<CircuitSystem::LevelChunkTracking> mAddedLevelChunk;
    bool                                           mHasBeenEvaluated;

    template <typename Component>
    Component* create(
        class BlockPos const&           pos,
        class BlockSource*              pSource,
        enum class CircuitComponentType type,
        enum class FacingID               direction
    ) {
        if (mLockGraph) {
            if (!mSceneGraph.getComponent(pos, type))
                return (Component*)mSceneGraph.getFromPendingAdd(pos, type);
        }
        auto* pComponent = createComponent(pos, (unsigned char)direction, std::unique_ptr<BaseCircuitComponent>());

        if (pComponent) {
            pComponent->mChunkPosition.x = pos.x >> 4;
            pComponent->mChunkPosition.z = pos.z >> 4;
        }
        return (Component*)pComponent;
    }

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CircuitSystem\@\@QEAA\@XZ
     */
    MCAPI CircuitSystem();
    /**
     * @symbol ?evaluate\@CircuitSystem\@\@QEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void evaluate(class BlockSource*);
    /**
     * @symbol ?getStrength\@CircuitSystem\@\@QEAAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getStrength(class BlockPos const&);
    /**
     * @symbol ?invalidatePos\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void invalidatePos(class BlockPos const&);
    /**
     * @symbol ?isAvailableAt\@CircuitSystem\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isAvailableAt(class BlockPos const&);
    /**
     * @symbol ?isConnectionAllowed\@CircuitSystem\@\@QEAA_NAEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@E_N\@Z
     */
    MCAPI bool isConnectionAllowed(class BaseCircuitComponent&, class BlockPos const&, unsigned char, bool);
    /**
     * @symbol ?preSetupPoweredBlocks\@CircuitSystem\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const&);
    /**
     * @symbol ?removeComponents\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeComponents(class BlockPos const&);
    /**
     * @symbol ?setStrength\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void setStrength(class BlockPos const&, int);
    /**
     * @symbol ?updateBlocks\@CircuitSystem\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void updateBlocks(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ?updateDependencies\@CircuitSystem\@\@QEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void updateDependencies(class BlockSource*);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createComponent\@CircuitSystem\@\@AEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@EV?$unique_ptr\@VBaseCircuitComponent\@\@U?$default_delete\@VBaseCircuitComponent\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class BaseCircuitComponent*
    createComponent(class BlockPos const&, unsigned char, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @symbol ?evaluateComponents\@CircuitSystem\@\@AEAAX_N\@Z
     */
    MCAPI void evaluateComponents(bool);
    /**
     * @symbol
     * ?updateIndividualBlock\@CircuitSystem\@\@AEAAXV?$not_null\@PEAVBaseCircuitComponent\@\@\@gsl\@\@AEBVBlockPos\@\@1AEAVBlockSource\@\@\@Z
     */
    MCAPI void
    updateIndividualBlock(class gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, class BlockPos const&, class BlockSource&);
    // NOLINTEND
};
