#pragma once

#include "il2cpp.hpp"
#include "UnityEngine/Collider.hpp"

namespace UnityEngine
{
    struct BoxCollider_Fields
    {
        Collider_Fields super;
    };

    struct BoxCollider_RGCTXs
    {
    };

    struct BoxCollider_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct BoxCollider_c
    {
        Il2CppClass_1 _1;
        struct BoxCollider_StaticFields* static_fields;
        BoxCollider_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        BoxCollider_VTable vtable;
    };

    struct BoxCollider_o
    {
        BoxCollider_c *klass;
        void *monitor;
        BoxCollider_Fields fields;
    };

    struct BoxCollider_StaticFields
    {
    };
}
