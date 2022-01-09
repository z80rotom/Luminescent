#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_Escape_Sub___ctor (Dpr_Battle_Logic_Section_Escape_Sub_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_Escape_Sub__Execute (Dpr_Battle_Logic_Section_Escape_Sub_o* __this, Dpr_Battle_Logic_Section_Escape_Sub_Result_o* pResult, Dpr_Battle_Logic_Section_Escape_Sub_Description_o** description, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_Escape_Sub__checkForceSucceed (Dpr_Battle_Logic_Section_Escape_Sub_o* __this, bool* pIsForceSuccess, bool* pIsSkipAgiCheck, Dpr_Battle_Logic_Section_Escape_Sub_Description_o** description, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Escape_Sub__section_Escape_CheckForceSucceed (Dpr_Battle_Logic_Section_Escape_Sub_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pPoke, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Escape_Sub__checkEscapeEnableByAgi (Dpr_Battle_Logic_Section_Escape_Sub_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* escapePoke, uint8_t tryCount, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Escape_Sub__section_Escape_Core (Dpr_Battle_Logic_Section_Escape_Sub_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pPoke, bool isForceSuccess, const MethodInfo* method_info);
