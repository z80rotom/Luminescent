#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_Fight___ctor (Dpr_Battle_Logic_Section_Fight_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Fight__Execute (Dpr_Battle_Logic_Section_Fight_o* __this, Dpr_Battle_Logic_Section_Fight_Result_o* pResult, Dpr_Battle_Logic_Section_Fight_Description_o** description, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Fight__beforeFirstFight (Dpr_Battle_Logic_Section_Fight_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Fight__wazaExecStart (Dpr_Battle_Logic_Section_Fight_o* __this, int32_t* pResultCode, bool* pIsWazaEffective, bool* pIsPPUsed, Dpr_Battle_Logic_WazaParam_o* pActWaza, uint8_t* pTargetPos, Dpr_Battle_Logic_PokeSet_o* pTargets, Dpr_Battle_Logic_WazaRobParam_o* pRobParam, Dpr_Battle_Logic_PokeAction_o* pokeAction, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_Fight__wazaExec (Dpr_Battle_Logic_Section_Fight_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_ActionDesc_o* actionDesc, Dpr_Battle_Logic_PokeSet_o* targets, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Fight__wazaRob (Dpr_Battle_Logic_Section_Fight_o* __this, Dpr_Battle_Logic_WazaRobParam_o* robParam, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, int32_t waza, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Fight__putWazaMessage (Dpr_Battle_Logic_Section_Fight_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_WazaParam_o* pWazaParam, uint8_t targetPos, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_Fight__needWazaMessageDisplay (Dpr_Battle_Logic_Section_Fight_o* __this, int32_t* wazaID, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Fight__wazaExecEnd (Dpr_Battle_Logic_Section_Fight_o* __this, Dpr_Battle_Logic_ActionDesc_o* actionDesc, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, int32_t orgWaza, Dpr_Battle_Logic_WazaParam_o* wazaParam, uint8_t targetPos, bool isWazaHide, bool isWazaLock, bool isPPUsed, bool isWazaEffective, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Fight__magicCoat (Dpr_Battle_Logic_Section_Fight_o* __this, int32_t waza, const MethodInfo* method);
void Dpr_Battle_Logic_Section_Fight__setPokeMemories (Dpr_Battle_Logic_Section_Fight_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_PokeSet_o* pTargets, int32_t wazano, bool isSuccessWazaExecStart, bool isWazaEffective, const MethodInfo* method);
