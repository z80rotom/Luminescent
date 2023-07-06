#pragma once

#include "System/String.hpp"
#include "il2cpp.hpp"

namespace Dpr
{
    namespace Box
    {
        struct BoxPokemonWork_Fields
        {
        };

        struct BoxPokemonWork_RGCTXs
        {
        };

        struct BoxPokemonWork_VTable
        {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };

        struct BoxPokemonWork_c
        {
            Il2CppClass_1 _1;
            struct BoxPokemonWork_StaticFields* static_fields;
            BoxPokemonWork_RGCTXs* rgctx_data;
            Il2CppClass_2 _2;
            BoxPokemonWork_VTable vtable;
        };

        struct BoxPokemonWork
        {
            BoxPokemonWork_c *klass;
            void *monitor;
            BoxPokemonWork_Fields fields;

            // 01d30e80
            static void ClearPokemon(int32_t tray, int32_t pos, MethodInfo *method);
        };

        struct BoxPokemonWork_StaticFields
        {
        };
    }
}
