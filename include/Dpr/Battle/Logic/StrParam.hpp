#pragma once
#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct StrParam_o
            {
                void Setup(int32_t type, uint16_t strID, MethodInfo * method);
                void AddArg(int32_t arg, MethodInfo * method);
            };
        }
    }
}