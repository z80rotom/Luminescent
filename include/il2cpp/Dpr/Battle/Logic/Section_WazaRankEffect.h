#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_WazaRankEffect___ctor (Dpr_Battle_Logic_Section_WazaRankEffect_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaRankEffect__Execute (Dpr_Battle_Logic_Section_WazaRankEffect_o* __this, Dpr_Battle_Logic_Section_WazaRankEffect_Result_o* pResult, Dpr_Battle_Logic_Section_WazaRankEffect_Description_o** description, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaRankEffect__rankEffect (Dpr_Battle_Logic_Section_WazaRankEffect_o* __this, uint8_t attackerID, int32_t effect, int32_t volume, bool isMigawariThrew, bool fAlmost, uint32_t actionSerialNo, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_SimpleEffectFailManager_o* pFailManager, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaRankEffect__rankEffectCore (Dpr_Battle_Logic_Section_WazaRankEffect_o* __this, uint8_t attackerID, int32_t effect, int32_t volume, bool isMigawariThrew, bool fAlmost, uint32_t actionSerialNo, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_SimpleEffectFailManager_o* pFailManager, const MethodInfo* method_info);
