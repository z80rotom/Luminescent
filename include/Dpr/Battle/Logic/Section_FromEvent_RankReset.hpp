#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct Section_FromEvent_RankReset_Description_c;

            struct Section_FromEvent_RankReset_Description_Fields {
                uint8_t pokeCount;
                struct System_Byte_array* pokeID;
            };

            struct Section_FromEvent_RankReset_Description_o {
                void ctor(MethodInfo *method);

                Section_FromEvent_RankReset_Description_c *klass;
                void *monitor;
                Section_FromEvent_RankReset_Description_Fields fields;
            };

            extern void *Section_FromEvent_RankReset_Description_TypeInfo;
        }
    }
}