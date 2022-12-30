#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Section_FromEvent_FieldEffect_Remove_Description_Fields {
                int32_t effect;
                struct BTL_POKEPARAM_o* pDependPoke;
            };

            struct Section_FromEvent_FieldEffect_Remove_Description_c;

            struct Section_FromEvent_FieldEffect_Remove_Description_o {
                // 1fb4390
                void ctor(MethodInfo * method);

                Section_FromEvent_FieldEffect_Remove_Description_c *klass;
                void *monitor;
                Section_FromEvent_FieldEffect_Remove_Description_Fields fields;
            };

            // 4c5b300
            extern void * Section_FromEvent_FieldEffect_Remove_Description_TypeInfo;
        }
    }
}