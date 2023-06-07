#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"

namespace XLSXContent
{
    struct MonohiroiTable_SheetMonoHiroi_Fields
    {
        uint16_t ID;
        System::Array<uint8_t>* Ratios;
    };

    struct MonohiroiTable_SheetMonoHiroi_RGCTXs
    {
    };

    struct MonohiroiTable_SheetMonoHiroi_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct MonohiroiTable_SheetMonoHiroi_c
    {
        Il2CppClass_1 _1;
        struct MonohiroiTable_SheetMonoHiroi_StaticFields* static_fields;
        MonohiroiTable_SheetMonoHiroi_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        MonohiroiTable_SheetMonoHiroi_VTable vtable;
    };

    struct MonohiroiTable_SheetMonoHiroi_o
    {
        MonohiroiTable_SheetMonoHiroi_c *klass;
        void *monitor;
        MonohiroiTable_SheetMonoHiroi_Fields fields;
    };

    struct MonohiroiTable_SheetMonoHiroi_StaticFields
    {
    };

    struct MonohiroiTable_Fields
    {
        UnityEngine_ScriptableObject_Fields super;
        System::Array<MonohiroiTable_SheetMonoHiroi_o*>* MonoHiroi;
    };

    struct MonohiroiTable_RGCTXs
    {
    };

    struct MonohiroiTable_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct MonohiroiTable_c
    {
        Il2CppClass_1 _1;
        struct MonohiroiTable_StaticFields* static_fields;
        MonohiroiTable_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        MonohiroiTable_VTable vtable;
    };

    struct MonohiroiTable_o
    {
        MonohiroiTable_c *klass;
        void *monitor;
        MonohiroiTable_Fields fields;
    };

    struct MonohiroiTable_StaticFields
    {
    };
}
