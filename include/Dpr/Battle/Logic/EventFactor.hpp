#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct EventFactor_EventHandlerArgs_Fields {
                struct MainModule_o* pMainModule;
                struct BattleEnv_o* pBattleEnv;
                struct PokeActionContainer_o* pPokeActionContainer;
                struct PokeChangeRequest_o* pPokeChangeRequest;
                struct SectionContainer_o* pSectionContainer;
                struct SectionSharedData_o* pSectionSharedData;
                struct EventSystem_o* pEventSystem;
                struct EventVarSet_o* pEventVar;
                struct EventFactor_o* pMyFactor;
            };

            struct EventFactor_EventHandlerArgs_c;

            struct EventFactor_EventHandlerArgs_o
            {
                EventFactor_EventHandlerArgs_c *klass;
                void *monitor;
                EventFactor_EventHandlerArgs_Fields fields;
            };

            struct EventFactor_EventHandler_o;

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

            // 4c5b148
            extern void * EventFactor_EventHandlerTable_Array_TypeInfo;
        }
    }
}