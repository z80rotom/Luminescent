#pragma once

#include "il2cpp.hpp"

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
            };
        }
    }
}