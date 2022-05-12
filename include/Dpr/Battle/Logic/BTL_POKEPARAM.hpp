#pragma once

#include "il2cpp.hpp"
#include "Pml/PokePara/CoreParam.h"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct BTL_POKEPARAM_o
            {
                // 0242da00
                bool CONFRONT_REC_IsMatch(uint8_t pokeID, MethodInfo *method);
                // 02429d60
                uint16_t GetItem(MethodInfo *method);

                uint32_t GetPokeSick(MethodInfo *method);

                uint8_t GetFriendship(MethodInfo *method);

                Pml::PokePara::CoreParam * GetSrcDataConst(MethodInfo *method);
            };
        }
    }
}