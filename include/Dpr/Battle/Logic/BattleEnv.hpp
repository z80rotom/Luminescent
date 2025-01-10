#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/POKECON.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct BattleEnv_Fields
            {
                POKECON_o* m_pokecon;
                struct FieldStatus_o* m_fieldStatus;
                struct SideEffectManager_o* m_sideEffectManager;
                struct PosEffectManager_o* m_posEffectManager;
                struct EventFactorContainer_o* m_eventFactorContainer;
                struct PosPoke_o* m_posPoke;
                struct DeadRec_o* m_deadRec;
                struct WazaRec_o* m_wazaRec;
                struct AffCounter_o* m_affCounter;
                struct ActionRecorder_o* m_actionRecorder;
                struct ActionSerialNoManager_o* m_actionSerialNoManager;
                struct TimeLimit_o* m_timeLimit;
                struct GRightsManager_o* m_gRightsManager;
                struct GGauge_array* m_gGauge;
                struct RaidBattleStatus_o* m_raidBattleStatus;
                struct BattleFlags_o* m_flags;
                struct BattleCounter_o* m_counter;
                struct EscapeInfo_o* m_escapeInfo;
                struct WazaParam_o* m_lastExecutedWaza;
                struct TamaHiroiData_o* m_tamaHiroiData;
            };

            struct BattleEnv_RGCTXs
            {
            };

            struct BattleEnv_VTable
            {
                VirtualInvokeData _0_Equals;
                VirtualInvokeData _1_Finalize;
                VirtualInvokeData _2_GetHashCode;
                VirtualInvokeData _3_ToString;
            };

            struct BattleEnv_c
            {
                Il2CppClass_1 _1;
                struct BattleEnv_StaticFields* static_fields;
                BattleEnv_RGCTXs* rgctx_data;
                Il2CppClass_2 _2;
                BattleEnv_VTable vtable;
            };

            struct BattleEnv_o
            {
                BattleEnv_c *klass;
                void *monitor;
                BattleEnv_Fields fields;
            };

            struct BattleEnv_StaticFields
            {
            };
        }
    }
}
