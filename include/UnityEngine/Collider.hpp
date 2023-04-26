#pragma once

#include "il2cpp.hpp"
#include "UnityEngine/Component.hpp"

namespace UnityEngine
{
    struct Collider_Fields
    {
	    Component_Fields super;
    };

    struct Collider_RGCTXs
    {
    };

    struct Collider_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct Collider_c
    {
        Il2CppClass_1 _1;
        struct Collider_StaticFields* static_fields;
        Collider_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        Collider_VTable vtable;
    };

    struct Collider_o
    {
        Collider_c *klass;
        void *monitor;
        Collider_Fields fields;

        // 02c1c600
        void set_enabled(bool value, MethodInfo *method);
    };

    struct Collider_StaticFields
    {
    };
}
