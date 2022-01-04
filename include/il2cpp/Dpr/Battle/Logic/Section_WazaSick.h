#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_WazaSick___ctor (Dpr_Battle_Logic_Section_WazaSick_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_WazaSick__Execute (Dpr_Battle_Logic_Section_WazaSick_o* __this, Dpr_Battle_Logic_Section_WazaSick_Result_o* pResult, Dpr_Battle_Logic_Section_WazaSick_Description_o** description, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_WazaSick__addSickCheckFail (Dpr_Battle_Logic_Section_WazaSick_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONTOBJ_o* sickCont, uint8_t cause, uint32_t actionSerialNo, bool isFailResultDisplay_ByBasicRules, bool isFailResultDisplay_BySpecialFactors, bool isOtherEffectDisplayed, const MethodInfo* method);
void Dpr_Battle_Logic_Section_WazaSick__addSick (Dpr_Battle_Logic_Section_WazaSick_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONTOBJ_o* sickCont, Dpr_Battle_Logic_StrParam_o* specialMessage, const MethodInfo* method);
