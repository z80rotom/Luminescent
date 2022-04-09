#pragma once
#include "il2cpp.hpp"
#include "UnityEngine/Object.hpp"

namespace UnityEngine
{
    struct AssetBundle_Fields {
        Object_Fields super;
    };
    struct AssetBundle_VTable {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };
    struct AssetBundle_c {
        Il2CppClass_1 _1;
        void* static_fields;
        Il2CppRGCTXData* rgctx_data;
        Il2CppClass_2 _2;
        AssetBundle_VTable vtable;
    };
    struct AssetBundle_o {
        AssetBundle_c *klass;
        void *monitor;
        AssetBundle_Fields fields;
    };
}