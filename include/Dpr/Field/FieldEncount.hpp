#pragma once

#include "il2cpp.hpp"
#include "Dpr/Field/EncountResult.hpp"
#include "Dpr/Field/FieldEncount/ENC_FLD_SPA.hpp"
#include "Dpr/Field/FieldEncount/SWAY_ENC_INFO.hpp"
#include "Pml/PokePara/PokemonParam.h"
#include "XLSXContent/FieldEncountTable.hpp"

namespace Dpr
{
    namespace Field
    {
        struct FieldEncount_o
        {
            // 019b3eb0
            static void SetSpaStruct(Pml::PokePara::PokemonParam_o *inPokeParam, XLSXContent::FieldEncountTable::Sheettable_o *inData, Dpr::Field::FieldEncount::ENC_FLD_SPA_o *outSpa, MethodInfo *method);
            // 019b4100
            static bool MapEncountCheck(uint32_t per, int32_t attr, bool inGridmove, MethodInfo *method);
            // 019b47f0
            static void EncountParamSet(int32_t poke, int32_t lv, int32_t inTarget, Dpr::Field::FieldEncount::ENC_FLD_SPA_o inFldSpa, Pml::PokePara::PokemonParam_o *inPokeParam, Dpr::Field::EncountResult_o **outBattleParam, MethodInfo *method);
            // 019b4990
            static void LastProc(Dpr::Field::EncountResult_o **result, Dpr::Field::FieldEncount::ENC_FLD_SPA_o *spa, MethodInfo *method);
            // 019b6e30
            static bool SetEncountData(Pml::PokePara::PokemonParam_o *param, int32_t inRodType, Dpr::Field::FieldEncount::ENC_FLD_SPA_o inFldSpa, System::Array<MonsLv_o> *inData, int32_t location, int32_t inTarget, Dpr::Field::EncountResult_o **outBattleParam, MethodInfo *method);
            // 019b4c00
            static bool WildEncSingle(Pml::PokePara::PokemonParam_o *poke_param, Dpr::Field::EncountResult_o **param, XLSXContent::FieldEncountTable::Sheettable_o *data, System::Array<MonsLv_o> *enc_data, Dpr::Field::FieldEncount::ENC_FLD_SPA_o inFldSpa, Dpr::Field::FieldEncount::SWAY_ENC_INFO_o inSwayEncInfo, MethodInfo *method);
            // 019b4500
            static int32_t CheckMovePokeEnc(MethodInfo *method);
        };
    }
}
