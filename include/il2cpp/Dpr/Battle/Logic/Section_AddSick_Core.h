#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_AddSick_Core___ctor (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_AddSick_Core__Execute (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, Dpr_Battle_Logic_Section_AddSick_Core_Result_o* pResult, Dpr_Battle_Logic_Section_AddSick_Core_Description_o** description, const MethodInfo* method);
void Dpr_Battle_Logic_Section_AddSick_Core__putEffect (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, const MethodInfo* method);
void Dpr_Battle_Logic_Section_AddSick_Core__putMessage (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o* sickCont, bool isDefaultMessageDisplay, Dpr_Battle_Logic_StrParam_o* specialMessage, const MethodInfo* method);
void Dpr_Battle_Logic_Section_AddSick_Core__makeDefaultMessage (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, Dpr_Battle_Logic_StrParam_o* str, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o* sickCont, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Section_AddSick_Core__getDefaultSickStrID (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o* sickCont, const MethodInfo* method);
void Dpr_Battle_Logic_Section_AddSick_Core__changeSheimiForm (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, int32_t sick, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, const MethodInfo* method);
void Dpr_Battle_Logic_Section_AddSick_Core__sickFixedEvent (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o* sickCont, const MethodInfo* method);
void Dpr_Battle_Logic_Section_AddSick_Core__onIekiFixed (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, const MethodInfo* method);
void Dpr_Battle_Logic_Section_AddSick_Core__checkItemReaction (Dpr_Battle_Logic_Section_AddSick_Core_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, const MethodInfo* method);
