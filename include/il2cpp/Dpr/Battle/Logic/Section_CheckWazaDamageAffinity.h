#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_CheckWazaDamageAffinity___ctor (Dpr_Battle_Logic_Section_CheckWazaDamageAffinity_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckWazaDamageAffinity__Execute (Dpr_Battle_Logic_Section_CheckWazaDamageAffinity_o* __this, Dpr_Battle_Logic_Section_CheckWazaDamageAffinity_Result_o* pResult, Dpr_Battle_Logic_Section_CheckWazaDamageAffinity_Description_o** description, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Section_CheckWazaDamageAffinity__rewiteWazaAffinityByFloatingStatus (Dpr_Battle_Logic_Section_CheckWazaDamageAffinity_o* __this, bool* isNoEffectByFloatingStatus, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, uint8_t wazaType, int32_t affinity, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_CheckWazaDamageAffinity__checkFloating (Dpr_Battle_Logic_Section_CheckWazaDamageAffinity_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pPoke, bool isIncludeHikouType, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Section_CheckWazaDamageAffinity__rewiteWazaAffinityByTarSick (Dpr_Battle_Logic_Section_CheckWazaDamageAffinity_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, uint8_t wazaType, int32_t affinity, const MethodInfo* method);
