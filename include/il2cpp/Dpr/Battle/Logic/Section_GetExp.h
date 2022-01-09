#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_GetExp___ctor (Dpr_Battle_Logic_Section_GetExp_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__Execute (Dpr_Battle_Logic_Section_GetExp_o* __this, Dpr_Battle_Logic_Section_GetExp_Result_o* pResult, Dpr_Battle_Logic_Section_GetExp_Description_o** description, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__addEffortPower (Dpr_Battle_Logic_Section_GetExp_o* __this, Dpr_Battle_Logic_BTL_PARTY_o* party, Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o** expContainer, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__addEffortPower (Dpr_Battle_Logic_Section_GetExp_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, Dpr_Battle_Logic_ExpCalculator_CalcExpWork_o** expWork, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__addExp_ByFaced (Dpr_Battle_Logic_Section_GetExp_o* __this, bool* isExpGet, bool* isExist_OnlyGakusyuSoutiExp, Dpr_Battle_Logic_BTL_PARTY_o* pParty, Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o** expContainer, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__addExp_ByGakusyuSouti (Dpr_Battle_Logic_Section_GetExp_o* __this, bool* isExpGet, Dpr_Battle_Logic_BTL_PARTY_o* pParty, Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o** expContainer, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__addExp (Dpr_Battle_Logic_Section_GetExp_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint32_t exp, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_GetExp__checkRightsOfGettinExp (Dpr_Battle_Logic_Section_GetExp_o* __this, uint32_t* exp, bool* isGakusyuSoutiOnly, Dpr_Battle_Logic_BTL_POKEPARAM_o** poke, Dpr_Battle_Logic_ExpCalculator_CalcExpWork_o** expWork, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__putActCommand_InitParam (Dpr_Battle_Logic_Section_GetExp_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__putActCommand_SetParam (Dpr_Battle_Logic_Section_GetExp_o* __this, Dpr_Battle_Logic_BTL_PARTY_o* pParty, Dpr_Battle_Logic_ExpCalculator_CalcExpContainer_o* pExpContainer, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_GetExp__putActCommand_Execute (Dpr_Battle_Logic_Section_GetExp_o* __this, const MethodInfo* method_info);
