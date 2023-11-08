#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BattleEnv.hpp"
#include "Dpr/Battle/Logic/EventSystem.hpp"
#include "Dpr/Battle/Logic/PokeActionContainer.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct EventFactor_Data_Fields {
                struct EventFactor_EventHandlerTable_array* handlerTable;
                struct EventFactor_SkipCheckHandler_o* skipCheckHandler;
                uint8_t factorType;
                uint32_t priority;
                uint16_t subID;
                uint8_t dependID;
                uint8_t pokeID;
                uint32_t eventLevel;
                uint32_t numHandlers;
                bool callingFlag;
                bool recallEnableFlag;
                bool rmReserveFlag;
                bool sleepFlag;
                bool tmpItemFlag;
                bool existFlag;
                struct System_Int32_array* work;
            };

            struct EventFactor_Data_RGCTXs {
            };

            struct EventFactor_Data_VTable {
                VirtualInvokeData _0_Equals;
                VirtualInvokeData _1_Finalize;
                VirtualInvokeData _2_GetHashCode;
                VirtualInvokeData _3_ToString;
            };

            struct EventFactor_Data_c {
                Il2CppClass_1 _1;
                struct EventFactor_Data_StaticFields* static_fields;
                EventFactor_Data_RGCTXs* rgctx_data;
                Il2CppClass_2 _2;
                EventFactor_Data_VTable vtable;
            };

            struct EventFactor_Data_o {
                EventFactor_Data_c *klass;
                void *monitor;
                EventFactor_Data_Fields fields;
            };

            struct EventFactor_Data_StaticFields {
            };

            struct EventFactor_Fields {
                uint16_t m_instanceID;
                struct EventFactor_o* m_prevFactor;
                struct EventFactor_o* m_nextFactor;
                struct EventFactor_Data_o* m_data;
            };

            struct EventFactor_RGCTXs {
            };

            struct EventFactor_VTable {
                VirtualInvokeData _0_Equals;
                VirtualInvokeData _1_Finalize;
                VirtualInvokeData _2_GetHashCode;
                VirtualInvokeData _3_ToString;
            };

            struct EventFactor_c {
                Il2CppClass_1 _1;
                struct EventFactor_StaticFields* static_fields;
                EventFactor_RGCTXs* rgctx_data;
                Il2CppClass_2 _2;
                EventFactor_VTable vtable;
            };

            struct EventFactor_o {
                EventFactor_c *klass;
                void *monitor;
                EventFactor_Fields fields;
            };

            struct EventFactor_StaticFields {
            };

            struct EventFactor_EventHandlerArgs_Fields {
                struct MainModule_o* pMainModule;
                BattleEnv_o* pBattleEnv;
                PokeActionContainer_o* pPokeActionContainer;
                struct PokeChangeRequest_o* pPokeChangeRequest;
                struct SectionContainer_o* pSectionContainer;
                struct SectionSharedData_o* pSectionSharedData;
                EventSystem_o* pEventSystem;
                struct EventVarSet_o* pEventVar;
                EventFactor_o* pMyFactor;
            };

            struct EventFactor_EventHandlerArgs_c;

            struct EventFactor_EventHandlerArgs_o
            {
                EventFactor_EventHandlerArgs_c *klass;
                void *monitor;
                EventFactor_EventHandlerArgs_Fields fields;
            };

            struct EventFactor_EventHandler_Fields {
                System_MulticastDelegate_Fields super;
            };

            struct EventFactor_EventHandler_c;

            struct EventFactor_EventHandler_o {
                // 1d12b60
                void ctor(intptr_t target, MethodInfo * method);
                void ctor(Il2CppMethodPointer methodPointer);

                EventFactor_EventHandler_c *klass;
                void *monitor;
                EventFactor_EventHandler_Fields fields;
            };

            struct EventFactor_EventHandlerTable_Fields {
                uint16_t eventID;
                struct EventFactor_EventHandler_o* eventHandler;
            };

            struct EventFactor_EventHandlerTable_c;

            struct EventFactor_EventHandlerTable_o {
                EventFactor_EventHandlerTable_c *klass;
                void *monitor;
                EventFactor_EventHandlerTable_Fields fields;
            };

            struct EventFactor_SkipCheckHandler_Fields {
                System_MulticastDelegate_Fields super;
            };

            struct EventFactor_SkipCheckHandler_c;

            struct EventFactor_SkipCheckHandler_o {
                // 1d12f20
                void ctor(intptr_t target, MethodInfo * method);

                EventFactor_SkipCheckHandler_c *klass;
                void *monitor;
                EventFactor_SkipCheckHandler_Fields fields;
            };

            // 4c5b150
            extern void * EventFactor_EventHandler_TypeInfo;

            // 4c5b148
            extern void * EventFactor_EventHandlerTable_Array_TypeInfo;

            // 4c5b158
            extern void * EventFactor_EventHandlerTable_TypeInfo;

            // 4c5b278
            extern void * EventFactor_SkipCheckHandler_TypeInfo;
        }
    }
}
