#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_CheckWazaAvoid___ctor (Dpr_Battle_Logic_Section_CheckWazaAvoid_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckWazaAvoid__Execute (Dpr_Battle_Logic_Section_CheckWazaAvoid_o* __this, Dpr_Battle_Logic_Section_CheckWazaAvoid_Result_o* pResult, Dpr_Battle_Logic_Section_CheckWazaAvoid_Description_o** description, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckWazaAvoid__checkHit (Dpr_Battle_Logic_Section_CheckWazaAvoid_o* __this, bool* pIsHit, bool* pIsFriendshipActive, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckWazaAvoid__putAvoidMessage (Dpr_Battle_Logic_Section_CheckWazaAvoid_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* avoidPoke, int32_t waza, bool byFriendship, const MethodInfo* method);
void Dpr_Battle_Logic_Section_CheckWazaAvoid__wazaAvoid (Dpr_Battle_Logic_Section_CheckWazaAvoid_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, bool fDelayAttack, const MethodInfo* method);
