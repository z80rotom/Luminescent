#pragma once

#include "il2cpp.h"

bool Dpr_Battle_Logic_ExpCalculator__CalcExp (Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o* result, Dpr_Battle_Logic_ExpCalculator_CalcParam_o** param, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExpCalculator__calcExp_Party (Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o* result, Dpr_Battle_Logic_MyStatus_o* myStatus, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_BTL_PARTY_o** party, Dpr_Battle_Logic_BTL_POKEPARAM_o** deadPoke, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExpCalculator__calcExp_Poke (Dpr_Battle_Logic_ExpCalculator_CalcExpWork_o* result, Dpr_Battle_Logic_MyStatus_o* myStatus, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o** bpp, Dpr_Battle_Logic_BTL_POKEPARAM_o** deadPoke, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ExpCalculator__getPokeGiveExp (Dpr_Battle_Logic_BTL_POKEPARAM_o** bpp, const MethodInfo* method_info);
bool Dpr_Battle_Logic_ExpCalculator__isEvoCanceledPoke (Dpr_Battle_Logic_BTL_POKEPARAM_o** bpp, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExpCalculator__calcEffortExp_Party (Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o* result, Dpr_Battle_Logic_BTL_PARTY_o** party, Dpr_Battle_Logic_BTL_POKEPARAM_o** deadPoke, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExpCalculator__calcEffortExp_Poke (Dpr_Battle_Logic_ExpCalculator_CalcExpWork_o* result, Dpr_Battle_Logic_BTL_POKEPARAM_o** bpp, Dpr_Battle_Logic_BTL_POKEPARAM_o** deadPoke, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExpCalculator__calcGEffort_Party (Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o* result, Dpr_Battle_Logic_BTL_PARTY_o** party, Dpr_Battle_Logic_BTL_POKEPARAM_o** deadPoke, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExpCalculator__calcGEffort_Poke (Dpr_Battle_Logic_ExpCalculator_CalcExpWork_o* result, Dpr_Battle_Logic_BTL_POKEPARAM_o** bpp, Dpr_Battle_Logic_BTL_POKEPARAM_o** deadPoke, const MethodInfo* method_info);
void Dpr_Battle_Logic_ExpCalculator___cctor (const MethodInfo* method_info);
