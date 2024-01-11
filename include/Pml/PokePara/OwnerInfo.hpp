#pragma once

#include "il2cpp.hpp"
#include "DpData.hpp"
#include "System/String.hpp"

namespace Pml
{
    namespace PokePara
    {
        struct OwnerInfo_Fields
        {
            uint32_t trainerId;
            uint8_t sex;
            uint8_t langID;
            struct System::String* name;
        };

        struct OwnerInfo_RGCTXs
        {
        };

        struct OwnerInfo_VTable
        {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };

        struct OwnerInfo_c
        {
            Il2CppClass_1 _1;
            struct OwnerInfo_StaticFields* static_fields;
            OwnerInfo_RGCTXs* rgctx_data;
            Il2CppClass_2 _2;
            OwnerInfo_VTable vtable;
        };

        struct OwnerInfo_o
        {
            OwnerInfo_c *klass;
            void *monitor;
            OwnerInfo_Fields fields;

            // 02054ea0
            void ctor(DPData::MYSTATUS_o *ownerStatus, MethodInfo *method);
        };

        struct OwnerInfo_StaticFields
        {
        };

        // 04c5fbe8
        extern void * OwnerInfo_TypeInfo;
    }
}
