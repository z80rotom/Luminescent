#pragma once

#include "il2cpp.hpp"
#include "BTL_SICKCONT.hpp"
#include "StrParam.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Section_SideEffect_Add_Description_c;

            struct Section_SideEffect_Add_Description_Fields {
                uint8_t pokeID;
                int32_t effect;
                struct BTL_SICKCONT_o cont;
                int32_t side;
                uint16_t successEffectNo;
                struct StrParam_o* successMessage;
                bool isReplaceSuccessMessageArgs0ByExpandSide;
            };

            struct Section_SideEffect_Add_Description_o {
                void ctor(MethodInfo *method);

                Section_SideEffect_Add_Description_c *klass;
                void *monitor;
                Section_SideEffect_Add_Description_Fields fields;
            };

            extern void *Section_SideEffect_Add_Description_TypeInfo;
        }
    }
}