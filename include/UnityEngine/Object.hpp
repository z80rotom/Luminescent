#pragma once
#include "il2cpp.hpp"

namespace UnityEngine
{
    struct Object_Fields {
        intptr_t m_CachedPtr;
    };
    struct Object_VTable {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };
    struct Object_c {
        Il2CppClass_1 _1;
        struct Object_StaticFields* static_fields;
        Il2CppRGCTXData* rgctx_data;
        Il2CppClass_2 _2;
        Object_VTable vtable;
    };
    struct Object_o {
        Object_c *klass;
        void *monitor;
        Object_Fields fields;
    };
}