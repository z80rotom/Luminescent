#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_PushOut___ctor (Dpr_Battle_Logic_Section_PushOut_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_PushOut__Execute (Dpr_Battle_Logic_Section_PushOut_o* __this, Dpr_Battle_Logic_Section_PushOut_Result_o* pResult, Dpr_Battle_Logic_Section_PushOut_Description_o** description, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_Section_PushOut__getPushOutEffect (Dpr_Battle_Logic_Section_PushOut_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, bool isForceChange, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_Section_PushOut__getTargetPos (Dpr_Battle_Logic_Section_PushOut_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_PushOut__checkFail (Dpr_Battle_Logic_Section_PushOut_o* __this, bool* isFailMessageDisplayed, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_PushOut__pushOutEffect_Change (Dpr_Battle_Logic_Section_PushOut_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, uint16_t effectNo, Dpr_Battle_Logic_StrParam_o* succeedMessage, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_PushOut__pushOutEffect_Escape (Dpr_Battle_Logic_Section_PushOut_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, uint16_t effectNo, bool isIgnoreLevel, const MethodInfo* method);
int32_t Dpr_Battle_Logic_Section_PushOut__getNextInPokeIndex (Dpr_Battle_Logic_Section_PushOut_o* __this, uint8_t clientID, const MethodInfo* method);
void Dpr_Battle_Logic_Section_PushOut__memberOut (Dpr_Battle_Logic_Section_PushOut_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, uint16_t effectNo, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_Section_PushOut__memberIn (Dpr_Battle_Logic_Section_PushOut_o* __this, uint8_t clientID, uint8_t posIdx, uint8_t nextPokeIdx, const MethodInfo* method);
void Dpr_Battle_Logic_Section_PushOut__afterMemberIn (Dpr_Battle_Logic_Section_PushOut_o* __this, uint8_t inPokeID, const MethodInfo* method);
