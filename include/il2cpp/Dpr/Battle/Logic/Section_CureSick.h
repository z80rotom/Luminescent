#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_CureSick___ctor (Dpr_Battle_Logic_Section_CureSick_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_CureSick__Execute (Dpr_Battle_Logic_Section_CureSick_o* __this, Dpr_Battle_Logic_Section_CureSick_Result_o* result, Dpr_Battle_Logic_Section_CureSick_Description_o** desc, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_Section_CureSick__transCureSick (Dpr_Battle_Logic_Section_CureSick_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, int32_t* exCode, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_CureSick__checkKodawariSick (Dpr_Battle_Logic_Section_CureSick_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, int32_t sick, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_CureSick__putSpecialMessage (Dpr_Battle_Logic_Section_CureSick_o* __this, Dpr_Battle_Logic_StrParam_o** strParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_CureSick__putStandardMessage (Dpr_Battle_Logic_Section_CureSick_o* __this, int32_t sick, Dpr_Battle_Logic_BTL_SICKCONT_o* sickCont, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint16_t itemID, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_CureSick__checkItemReaction (Dpr_Battle_Logic_Section_CureSick_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
