#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct WAZADATA
            {
                // 1f72b40
                static int32_t GetDamageType(int32_t id, MethodInfo * method);

                static bool IsDamage(int32_t id, MethodInfo *method);
                static bool IsValid(int32_t id, MethodInfo *method);

                static bool GetFlag(int32_t id, int32_t flag, MethodInfo *method);
            };

        }
    }
}