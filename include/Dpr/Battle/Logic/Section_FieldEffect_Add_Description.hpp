#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_SICKCONT.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Section_FieldEffect_Add_Description_Fields {
                uint8_t pokeID;
                int32_t effect;
                uint8_t ground;
                uint8_t ground_cause;
                struct BTL_SICKCONT_o cont;
                uint16_t successEffectNo;
                struct StrParam_o* successMessage;
                bool isAddDependPoke;
                bool isDisplayTokuseiWindow;
            };

            struct Section_FieldEffect_Add_Description_c;

            struct Section_FieldEffect_Add_Description_o {
                // 21b8240
                void ctor(MethodInfo * method);
                Section_FieldEffect_Add_Description_c *klass;
                void *monitor;
                Section_FieldEffect_Add_Description_Fields fields;
            };

            // 4c5b2f8
            extern void * Section_FieldEffect_Add_Description_TypeInfo;
        }
    }
}