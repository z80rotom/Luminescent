#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_Message.hpp"
#include "Dpr/Battle/Logic/Section_FromEvent_FormChange.hpp"

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
                static void Message(EventFactor_EventHandlerArgs_o ** args, Section_FromEvent_Message::Description_o ** desc, MethodInfo * method);
                static bool CheckUnbreakablePokeItem(uint16_t monsno, uint16_t itemID, MethodInfo *method);
                // 1d0a010
                static int32_t PokeIDtoOpponentSide (EventFactor_EventHandlerArgs_o ** args, uint8_t * pokeID, MethodInfo * method);
                // 1d09d20
                static int32_t GetWorkValue(EventFactor_EventHandlerArgs_o ** args, uint8_t workIdx, MethodInfo * method);
                // 1d09da0
                static void SetWorkValue(EventFactor_EventHandlerArgs_o ** args, uint8_t workIdx, int32_t value, MethodInfo * method);
                // 1d0a060
                static uint8_t GetGround(EventFactor_EventHandlerArgs_o ** args, MethodInfo * method);
                // 1d0cab0
                static bool FormChange(EventFactor_EventHandlerArgs_o ** args, Section_FromEvent_FormChange::Description_o ** desc, MethodInfo * method);
                // 1d0a090
                static void AttachSkipCheckHandler(EventFactor_EventHandlerArgs_o ** args, EventFactor_SkipCheckHandler_o ** handler, MethodInfo * method);
                // 1d0a0c0
                static void DetachSkipCheckHandler(EventFactor_EventHandlerArgs_o ** args, MethodInfo * method);
            };

            extern void * Common_TypeInfo;

            // 4c6b3f8
            extern MethodInfo * Method_Common_Katayaburi_SkipCheck;
        }
    }
}