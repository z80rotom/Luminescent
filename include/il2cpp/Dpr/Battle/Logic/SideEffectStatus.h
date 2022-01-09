#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_SideEffectStatus___ctor (Dpr_Battle_Logic_SideEffectStatus_o* __this, int32_t sideEffect, const MethodInfo* method_info);
void Dpr_Battle_Logic_SideEffectStatus__CopyFrom (Dpr_Battle_Logic_SideEffectStatus_o* __this, Dpr_Battle_Logic_SideEffectStatus_o** src, const MethodInfo* method_info);
void Dpr_Battle_Logic_SideEffectStatus__SwapFrom (Dpr_Battle_Logic_SideEffectStatus_o* __this, Dpr_Battle_Logic_SideEffectStatus_o* target, const MethodInfo* method_info);
bool Dpr_Battle_Logic_SideEffectStatus__AddEffect (Dpr_Battle_Logic_SideEffectStatus_o* __this, Dpr_Battle_Logic_BTL_SICKCONT_o* contParam, const MethodInfo* method_info);
bool Dpr_Battle_Logic_SideEffectStatus__RemoveEffect (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_SideEffectStatus__IsEffective (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_SideEffectStatus__GetAddCount (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_SideEffectStatus__GetMaxTurnCount (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_SideEffectStatus__GetCurrentTurnCount (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_SideEffectStatus__GetRemainingTurn (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_SideEffectStatus__GetTurnUpCount (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_SideEffectStatus__GetCausePokeID (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_SideEffectStatus__IncTurnCount (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_SideEffectStatus__IsTurnPassed (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SideEffectStatus__GetContParam (Dpr_Battle_Logic_SideEffectStatus_o* __this, const MethodInfo* method_info);
