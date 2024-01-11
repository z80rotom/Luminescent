#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/StrParam.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Section_CureSick_Description_c;

            struct Section_CureSick_Description_Fields {
                uint8_t pokeID;
                int32_t sick;
                struct System_Byte_array* targetPokeID;
                uint8_t targetPokeCount;
                uint16_t itemID;
                bool isDisplayTokuseiWindow;
                bool isStandardMessageDisable;
                struct StrParam_o* successSpMessage;
            };

            struct Section_CureSick_Description_o {
                void ctor(MethodInfo *method);

                Section_CureSick_Description_c *klass;
                void *monitor;
                Section_CureSick_Description_Fields fields;
            };

            extern void *Section_CureSick_Description_TypeInfo;
        }
    }
}