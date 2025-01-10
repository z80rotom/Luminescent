#pragma once

#include "il2cpp.hpp"
#include "Pml/PokePara/CoreParam.h"

namespace poketool
{
    namespace poke_memo
    {
        struct poketool_poke_memo_Fields
        {
        };

        struct poketool_poke_memo_RGCTXs
        {
        };

        struct poketool_poke_memo_VTable
        {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };

        struct poketool_poke_memo_c
        {
            Il2CppClass_1 _1;
            struct poketool_poke_memo_StaticFields* static_fields;
            poketool_poke_memo_RGCTXs* rgctx_data;
            Il2CppClass_2 _2;
            poketool_poke_memo_VTable vtable;
        };

        struct poketool_poke_memo_o
        {
            poketool_poke_memo_c *klass;
            void *monitor;
            poketool_poke_memo_Fields fields;

            // 02bacca0
            static void ClearPlaceTime(Pml::PokePara::CoreParam *pParam, int32_t type, MethodInfo *method);
            // 02baccc0
            static void SetPlaceTime(Pml::PokePara::CoreParam *pParam, uint32_t placeNo, int32_t dataType, MethodInfo *method);
            // 02bace70
            static void SetGetLevel(Pml::PokePara::CoreParam *pParam, MethodInfo *method);
            // 02baceb0
            static void SetVersion(Pml::PokePara::CoreParam *pParam, MethodInfo *method);
        };

        struct poketool_poke_memo_StaticFields
        {
        };
    }
}
