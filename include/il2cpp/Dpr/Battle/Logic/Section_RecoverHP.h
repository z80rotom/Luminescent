#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_RecoverHP___ctor (Dpr_Battle_Logic_Section_RecoverHP_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_RecoverHP__Execute (Dpr_Battle_Logic_Section_RecoverHP_o* __this, Dpr_Battle_Logic_Section_RecoverHP_Result_o* result, Dpr_Battle_Logic_Section_RecoverHP_Description_o** description, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_RecoverHP__checkFailBase (Dpr_Battle_Logic_Section_RecoverHP_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_RecoverHP__checkFailSP (Dpr_Battle_Logic_Section_RecoverHP_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, bool isFailMessageDisplay, const MethodInfo* method);
void Dpr_Battle_Logic_Section_RecoverHP__recover (Dpr_Battle_Logic_Section_RecoverHP_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint16_t recoverHP, bool isEffectEnable, const MethodInfo* method);
