#pragma once
#include "il2cpp.hpp"
#include "Pml/PokePara/CoreParam.h"

namespace Dpr
{
    namespace Message
    {
        struct MessageWordSetHelper
        {
            // 024ce320
            static void SetPokemonNickNameWord(int32_t tagIndex, Pml::PokePara::CoreParam *pp,bool isShowNickName, MethodInfo *method);
            // 01f9a580
            static void SetDigitWord(int32_t tagIndex, int32_t number, MethodInfo *method);
        };
    }
}
