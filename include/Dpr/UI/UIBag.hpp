#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "Pml/PokePara/PokemonParam.h"

namespace Dpr
{
    namespace UI 
    {
        struct UIBag___c__DisplayClass135_0_Fields
        {
            struct Pml::PokePara::PokemonParam_o* pokeParam;
        };

        struct UIBag___c__DisplayClass135_0_RGCTXs
        {
        };

        struct UIBag___c__DisplayClass135_0_VTable
        {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };

        struct UIBag___c__DisplayClass135_0_c
        {
            Il2CppClass_1 _1;
            struct UIBag___c__DisplayClass135_0_StaticFields* static_fields;
            UIBag___c__DisplayClass135_0_RGCTXs* rgctx_data;
            Il2CppClass_2 _2;
            UIBag___c__DisplayClass135_0_VTable vtable;
        };

        struct UIBag___c__DisplayClass135_0_o
        {
            UIBag___c__DisplayClass135_0_c *klass;
            void *monitor;
            UIBag___c__DisplayClass135_0_Fields fields;
        };

        struct UIBag___c__DisplayClass135_0_StaticFields
        {
        };

        struct UIBag_BattleBootParam_Fields
        {
            int32_t TopMemberIndex;
            bool IsTrainerBattle;
            bool isDouble;
            System::Array<bool> * SasiosaeFlags;
        };

        struct UIBag_BattleBootParam_o
        {
            UIBag_BattleBootParam_Fields fields;
        };
    }
}
