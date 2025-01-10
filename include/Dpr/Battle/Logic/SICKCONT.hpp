#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_SICKCONT.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct SICKCONT
            {
                // 20d47d0
                static BTL_SICKCONT_o MakePermanent(uint8_t causePokeID, MethodInfo * method);
                // 20d4680
                static BTL_SICKCONT_o MakeTurn(uint8_t causePokeID, uint8_t turns, MethodInfo * method);

                static uint16_t GetParam(BTL_SICKCONT_o *cont, MethodInfo *method);
            };
        }
    }
}