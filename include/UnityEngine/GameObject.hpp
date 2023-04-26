#pragma once

#include "il2cpp.hpp"
#include "System/String.hpp"
#include "UnityEngine/Object.hpp"

namespace UnityEngine
{
    struct GameObject_Fields
    {
        Object_Fields super;
    };

    struct GameObject_RGCTXs
    {
    };

    struct GameObject_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct GameObject_c
    {
        Il2CppClass_1 _1;
        struct GameObject_StaticFields* static_fields;
        GameObject_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        GameObject_VTable vtable;
    };

    struct GameObject_o
    {
        GameObject_c *klass;
        void *monitor;
        GameObject_Fields fields;

        // 026b1ea0
        static GameObject_o * Find(System::String *name, MethodInfo *method);

        // 01f48980
        void * GetComponent(MethodInfo *method);
    };

    struct GameObject_StaticFields
    {
    };

    extern MethodInfo ** PTR_GameObject_BoxCollider_GetComponent;
}
