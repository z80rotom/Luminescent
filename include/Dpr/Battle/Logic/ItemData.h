#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct ItemData
            {
                // 02473d40
                static bool HaveItem(uint16_t itemno, MethodInfo *method);
                // 0249d4e0
                static uint32_t GetWazaMashineNo(uint16_t item, MethodInfo *method);
            };
        }
    }
}
