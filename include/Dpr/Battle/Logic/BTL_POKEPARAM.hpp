#pragma once

#include "il2cpp.hpp"

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
            };
        }
    }
}