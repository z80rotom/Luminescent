#pragma once

#include "il2cpp.hpp"

namespace Pml
{
    namespace PokePara
    {
        struct InitialSpec_Fields {
            uint64_t randomSeed;
            bool isRandomSeedEnable;
            uint64_t personalRnd;
            uint64_t rareRnd;
            uint64_t id;
            int32_t monsno;
            uint16_t formno;
            uint16_t level;
            uint16_t sex;
            uint16_t seikaku;
            uint8_t tokuseiIndex;
            uint8_t rareTryCount;
            struct System_UInt16_array* talentPower;
            uint32_t friendship;
            uint8_t talentVNum;
            uint16_t weight;
            uint16_t height;
        };
        struct InitialSpec_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };
        struct InitialSpec_c {
            Il2CppClass_1 _1;
            void* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            InitialSpec_VTable vtable;
        };
        struct InitialSpec_o {
            void ctor(MethodInfo * method);

            InitialSpec_c *klass;
            void *monitor;
            InitialSpec_Fields fields;
        };
        
        // 04c5e700
        extern void * InitialSpec_TypeInfo;
    }
}
