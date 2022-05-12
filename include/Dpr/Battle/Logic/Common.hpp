#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Common
            {
                static int32_t GetEventVar(EventFactor_EventHandlerArgs_o **args, uint16_t label, MethodInfo *method);
                static bool RewriteEventVar(EventFactor_EventHandlerArgs_o **args, uint16_t label, int32_t value, MethodInfo *method);
                static void * GetEventVarAddress(EventFactor_EventHandlerArgs_o **args, uint16_t label, MethodInfo *method);
                static void MulEventVar(EventFactor_EventHandlerArgs_o **args, uint16_t label, int32_t value, MethodInfo *method);
                static BTL_POKEPARAM_o * GetPokeParam(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, MethodInfo *method);
                static uint8_t DecideWazaTargetAuto(EventFactor_EventHandlerArgs_o **args, uint8_t pokeID, int32_t wazano, MethodInfo *method);
            };

            extern void * Common_TypeInfo;
        }
    }
}