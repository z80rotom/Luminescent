#pragma once

#include "il2cpp.hpp"

struct EncountDataWork
{
    // 01f08ac0
    static bool EncDataSave_CanUseSpray(MethodInfo *method);
    // 01f08e10
    static bool GetMovePokeData(int32_t index, DPData::MV_POKE_DATA_o *outData, MethodInfo *method);
    // 01f09d60
    static bool IsTairyouHassei(MethodInfo *method);
    // 01f09de0
    static int32_t GetUrayamaIndex(int32_t index, MethodInfo *method);
};
