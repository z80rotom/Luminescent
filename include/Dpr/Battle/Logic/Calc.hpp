#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_SICKCONT.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Calc
            {
                static uint32_t GetRand(uint32_t range, MethodInfo * method);
                static bool IsBasicSickID(int32_t sickID, MethodInfo * method);
                static bool IsOccurPer(uint32_t per, MethodInfo *method);
                static BTL_SICKCONT_o MakeDefaultPokeSickCont(uint32_t sick, uint8_t causePokeID, bool isCantUseRand, MethodInfo *method);
            };
        }
    }
}