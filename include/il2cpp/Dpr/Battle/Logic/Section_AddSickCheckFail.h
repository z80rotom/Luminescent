#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_AddSickCheckFail___ctor (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_AddSickCheckFail__Execute (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, Dpr_Battle_Logic_Section_AddSickCheckFail_Result_o* pResult, Dpr_Battle_Logic_Section_AddSickCheckFail_Description_o** description, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_AddSickCheckFail__checkFail (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o* sickCont, uint8_t sickCause, uint8_t overWriteMode, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_AddSickCheckFail__checkFail_byOverwriteMode (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, uint8_t overWriteMode, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Section_AddSickCheckFail__checkFail_byBasicRules (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o* sickCont, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_AddSickCheckFail__isLoaclShineWeather (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_AddSickCheckFail__isFailMessageEnable (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, uint8_t failCode, uint8_t sickCause, bool isOtherEffectDisplayed, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_AddSickCheckFail__putFailMessage (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, uint8_t failCode, int32_t sick, uint8_t sickCause, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_AddSickCheckFail__checkFail_Special (Dpr_Battle_Logic_Section_AddSickCheckFail_o* __this, bool* isFailed, bool* canFailResultDisplay, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t sick, uint8_t sickCause, const MethodInfo* method_info);
