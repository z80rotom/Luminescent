#pragma once

#include "il2cpp.hpp"

namespace UnityEngine
{
    struct CustomYieldInstruction_Fields {
    };
    struct CustomYieldInstruction_VTable {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
        VirtualInvokeData _4_MoveNext;
        VirtualInvokeData _5_get_Current;
        VirtualInvokeData _6_Reset;
    };
    struct CustomYieldInstruction_c {
        Il2CppClass_1 _1;
        void* static_fields;
        Il2CppRGCTXData* rgctx_data;
        Il2CppClass_2 _2;
        CustomYieldInstruction_VTable vtable;
    };
    struct CustomYieldInstruction_o {
        CustomYieldInstruction_c *klass;
        void *monitor;
        CustomYieldInstruction_Fields fields;
    };
}