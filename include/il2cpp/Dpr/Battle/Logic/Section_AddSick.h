#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_AddSick___ctor (Dpr_Battle_Logic_Section_AddSick_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_AddSick__Execute (Dpr_Battle_Logic_Section_AddSick_o* __this, Dpr_Battle_Logic_Section_AddSick_Result_o* result, Dpr_Battle_Logic_Section_AddSick_Description_o** description, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_AddSick__checkFail (Dpr_Battle_Logic_Section_AddSick_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o sickCont, uint8_t sickCause, uint32_t wazaSerial, uint8_t overWriteMode, bool isFailResultDisplay, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_AddSick__addSick (Dpr_Battle_Logic_Section_AddSick_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o sickCont, bool isEffectDisplay, bool isDefaultMessageDisplay, Dpr_Battle_Logic_StrParam_o** specialMessage, bool isItemReactionDisable, const MethodInfo* method_info);
