#pragma once

#include "il2cpp.hpp"

namespace Dpr
{
    namespace Field
    {
        namespace FieldEncount
        {
            struct SWAY_ENC_INFO_Fields
            {
                int32_t Table;
                bool Decide;
                bool Enc;
            };

            struct SWAY_ENC_INFO_RGCTXs
            {
            };

            struct SWAY_ENC_INFO_VTable
            {
                VirtualInvokeData _0_Equals;
                VirtualInvokeData _1_Finalize;
                VirtualInvokeData _2_GetHashCode;
                VirtualInvokeData _3_ToString;
            };

            struct SWAY_ENC_INFO_c
            {
                Il2CppClass_1 _1;
                struct SWAY_ENC_INFO_StaticFields* static_fields;
                SWAY_ENC_INFO_RGCTXs* rgctx_data;
                Il2CppClass_2 _2;
                SWAY_ENC_INFO_VTable vtable;
            };

            struct SWAY_ENC_INFO_o
            {
                SWAY_ENC_INFO_Fields fields;
            };

            struct SWAY_ENC_INFO_StaticFields
            {
            };
        }
    }
}
