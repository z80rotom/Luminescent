#pragma once

#include "il2cpp.hpp"

namespace SmartPoint
{
    namespace AssetAssistant
    {
        struct RefCounted_Fields {
            int32_t referencedCount;
        };
        struct RefCounted_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
            VirtualInvokeData _4_AddRef;
            VirtualInvokeData _5_Release;
        };
        struct RefCounted_c {
            Il2CppClass_1 _1;
            void* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            RefCounted_VTable vtable;
        };
        struct RefCounted_o {
            RefCounted_c *klass;
            void *monitor;
            RefCounted_Fields fields;
        };
    }
}