#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Section_FromEvent_SetWazaEffectIndex_Description_Fields {
                uint8_t effectIndex;
            };

            struct Section_FromEvent_SetWazaEffectIndex_Description_c;

            struct Section_FromEvent_SetWazaEffectIndex_Description_o {
                // 01fb7f40
                void ctor(MethodInfo * method);

                Section_FromEvent_SetWazaEffectIndex_Description_c *klass;
                void *monitor;
                Section_FromEvent_SetWazaEffectIndex_Description_Fields fields;
            };

            // 04c5b350
            extern void * Section_FromEvent_SetWazaEffectIndex_Description_TypeInfo;
        }
    }
}
