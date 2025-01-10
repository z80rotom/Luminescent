#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct EventSystem_Fields
            {
                struct MainModule_o* m_pMainModule;
                struct BattleEnv_o* m_pBattleEnv;
                struct PokeActionContainer_o* m_pPokeActionContainer;
                struct PokeChangeRequest_o* m_pPokeChangeRequest;
                struct SectionContainer_o* m_pSectionContainer;
                struct SectionSharedData_o* m_pSectionSharedData;
                struct EventVarStack_o* m_variableStack;
                struct EventVarSetStack_o* m_variableSetStack;
                struct EventVarSet_o* m_pCurrentEventVarSet;
                uint32_t m_eventLevel;
            };

            struct EventSystem_RGCTXs
            {
            };

            struct EventSystem_VTable
            {
                VirtualInvokeData _0_Equals;
                VirtualInvokeData _1_Finalize;
                VirtualInvokeData _2_GetHashCode;
                VirtualInvokeData _3_ToString;
            };

            struct EventSystem_c
            {
                Il2CppClass_1 _1;
                struct EventSystem_StaticFields* static_fields;
                EventSystem_RGCTXs* rgctx_data;
                Il2CppClass_2 _2;
                EventSystem_VTable vtable;
            };

            struct EventSystem_o
            {
                EventSystem_c *klass;
                void *monitor;
                EventSystem_Fields fields;

                // 018f60a0
                int32_t EVENTVAR_GetValue(uint16_t label, MethodInfo *method);
            };

            struct EventSystem_StaticFields
            {
            };
        }
    }
}
