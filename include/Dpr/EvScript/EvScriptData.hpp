#pragma once

#include "il2cpp.hpp"
#include "EvData/EvData.hpp"

namespace Dpr
{
    namespace EvScript
    {
        struct EvScriptData_Fields
        {
            struct EvData_o* EvData;
            int32_t LabelIndex;
            int32_t CommandIndex;
            int32_t RetIndex;
        };

        struct EvScriptData_RGCTXs
        {
        };
        
        struct EvScriptData_VTable
        {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };

        struct EvScriptData_c
        {
            Il2CppClass_1 _1;
            struct EvScriptData_StaticFields* static_fields;
            EvScriptData_RGCTXs* rgctx_data;
            Il2CppClass_2 _2;
            EvScriptData_VTable vtable;
        };

        struct EvScriptData_o
        {
            EvScriptData_c *klass;
            void *monitor;
            EvScriptData_Fields fields;
        };

        struct EvScriptData_StaticFields
        {
        };
    }
}
