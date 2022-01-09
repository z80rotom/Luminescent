#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_ConfDamage___ctor (Dpr_Battle_Logic_Section_ConfDamage_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_ConfDamage__Execute (Dpr_Battle_Logic_Section_ConfDamage_o* __this, Dpr_Battle_Logic_Section_ConfDamage_Result_o* pResult, Dpr_Battle_Logic_Section_ConfDamage_Description_o** description, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_Section_ConfDamage__calcDamage (Dpr_Battle_Logic_Section_ConfDamage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_Section_ConfDamage__fixDamage (Dpr_Battle_Logic_Section_ConfDamage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint16_t damage, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_ConfDamage__checkKoraeru (Dpr_Battle_Logic_Section_ConfDamage_o* __this, uint8_t* koraeCause, uint16_t* fixedDamage, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint16_t damage, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_ConfDamage__section_Koraeru (Dpr_Battle_Logic_Section_ConfDamage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint8_t cause, const MethodInfo* method_info);
