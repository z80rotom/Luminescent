#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"

namespace Dpr
{
    namespace Field
    {
        namespace FieldEncount
        {
            struct ENC_FLD_SPA_Fields
            {
                int32_t TrainerID;
                bool SprayCheck;
                bool EncCancelSpInvalid;
                int32_t SpMyLv;
                bool Egg;
                int32_t Spa;
                System::Array<int32_t>* FormProb;
                int32_t AnnoonTblType;
            };

            struct ENC_FLD_SPA_RGCTXs
            {
            };

            struct ENC_FLD_SPA_VTable
            {
                VirtualInvokeData _0_Equals;
                VirtualInvokeData _1_Finalize;
                VirtualInvokeData _2_GetHashCode;
                VirtualInvokeData _3_ToString;
            };

            struct ENC_FLD_SPA_c
            {
                Il2CppClass_1 _1;
                struct ENC_FLD_SPA_StaticFields* static_fields;
                ENC_FLD_SPA_RGCTXs* rgctx_data;
                Il2CppClass_2 _2;
                ENC_FLD_SPA_VTable vtable;
            };

            struct ENC_FLD_SPA_o
            {
                ENC_FLD_SPA_Fields fields;
            };

            struct ENC_FLD_SPA_StaticFields
            {
            };
        }
    }
}
