#pragma once

#include "il2cpp.hpp"
#include "UnityEngine/YieldInstruction.hpp"

namespace UnityEngine
{
    struct Coroutine_Fields
    {
        YieldInstruction_Fields super;
        intptr_t m_Ptr;
    };

    struct Coroutine_RGCTXs
    {
    };

    struct Coroutine_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct Coroutine_c
    {
        Il2CppClass_1 _1;
        struct Coroutine_StaticFields* static_fields;
        Coroutine_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        Coroutine_VTable vtable;
    };

    struct Coroutine_o
    {
        Coroutine_c *klass;
        void *monitor;
        Coroutine_Fields fields;
    };

    struct Coroutine_StaticFields
    {
    };
}
