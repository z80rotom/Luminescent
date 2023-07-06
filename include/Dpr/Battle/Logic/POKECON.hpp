#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct POKECON_Fields
            {
                struct MainModule_o* m_mainModule;
                struct BTL_PARTY_array* m_party;
                struct BTL_POKEPARAM_array* m_activePokeParam;
                struct BTL_POKEPARAM_array* m_storedPokeParam;
            };

            struct POKECON_RGCTXs
            {
            };

            struct POKECON_VTable
            {
                VirtualInvokeData _0_Equals;
                VirtualInvokeData _1_Finalize;
                VirtualInvokeData _2_GetHashCode;
                VirtualInvokeData _3_ToString;
            };

            struct POKECON_c
            {
                Il2CppClass_1 _1;
                struct POKECON_StaticFields* static_fields;
                POKECON_RGCTXs* rgctx_data;
                Il2CppClass_2 _2;
                POKECON_VTable vtable;
            };

            struct POKECON_o
            {
                POKECON_c *klass;
                void *monitor;
                POKECON_Fields fields;

                // 02037250
                BTL_POKEPARAM_o * GetPokeParamConst(uint8_t pokeID, MethodInfo *method);
            };

            struct POKECON_StaticFields
            {
                struct Pml_PokeParty_o* s_tmpPokeParty;
            };
        }
    }
}
