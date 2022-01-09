#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_CalcDamage___ctor (Dpr_Battle_Logic_Section_CalcDamage_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_CalcDamage__Execute (Dpr_Battle_Logic_Section_CalcDamage_o* __this, Dpr_Battle_Logic_Section_CalcDamage_Result_o* pResult, Dpr_Battle_Logic_Section_CalcDamage_Description_o** description, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_CalcDamage__checkCritical (Dpr_Battle_Logic_Section_CalcDamage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, int32_t waza, bool* bFriendshipAct, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_CalcDamage__getCalcDamage (Dpr_Battle_Logic_Section_CalcDamage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, Dpr_Battle_Logic_WazaParam_o* wazaParam, int32_t typeAff, int32_t targetDmgRatio, bool isCritical, bool isMigawariExist, uint16_t* damage, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Section_CalcDamage__roundDamage (Dpr_Battle_Logic_Section_CalcDamage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, uint32_t damage, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Section_CalcDamage__roundDamage_byMigawari (Dpr_Battle_Logic_Section_CalcDamage_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* defender, uint32_t damage, const MethodInfo* method_info);
