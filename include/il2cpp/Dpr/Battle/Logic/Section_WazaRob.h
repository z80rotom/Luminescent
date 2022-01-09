#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_WazaRob___ctor (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaRob__Execute (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_Section_WazaRob_Result_o* pResult, Dpr_Battle_Logic_Section_WazaRob_Description_o** description, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaRob__event_WazaRob (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* robPoke, Dpr_Battle_Logic_BTL_POKEPARAM_o* originalPoke, int32_t waza, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaRob__getWazaParam (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_WazaParam_o* pWazaParam, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, int32_t waza, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaRob__registerTarget (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_PokeSet_o* pPokeSet, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_WazaParam_o* pWazaParam, uint8_t targetPos, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaRob__isFailedByKaihukuHuuji (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaRob__putFailedMessageByKaihukuHuuji (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaRob__isFailedByZigokuDuki (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaRob__putFailedMessageByZigokuDuki (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaRob__wazaExec (Dpr_Battle_Logic_Section_WazaRob_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method_info);
