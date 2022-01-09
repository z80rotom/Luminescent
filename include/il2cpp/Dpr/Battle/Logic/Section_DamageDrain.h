#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_DamageDrain___ctor (Dpr_Battle_Logic_Section_DamageDrain_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_DamageDrain__Execute (Dpr_Battle_Logic_Section_DamageDrain_o* __this, Dpr_Battle_Logic_Section_DamageDrain_Result_o* pResult, Dpr_Battle_Logic_Section_DamageDrain_Description_o** description, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Section_DamageDrain__calcRecoverVolume (Dpr_Battle_Logic_Section_DamageDrain_o* __this, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint32_t damage, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_DamageDrain__drain (Dpr_Battle_Logic_Section_DamageDrain_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, uint32_t damage, const MethodInfo* method_info);
