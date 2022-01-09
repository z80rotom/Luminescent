#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_Cheer___ctor (Dpr_Battle_Logic_Section_Cheer_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_Cheer__Execute (Dpr_Battle_Logic_Section_Cheer_o* __this, Dpr_Battle_Logic_Section_Cheer_Result_o* pResult, Dpr_Battle_Logic_Section_Cheer_Description_o** desc, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_Section_Cheer__decideCheerEffect (Dpr_Battle_Logic_Section_Cheer_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_Cheer__getSelectableCheerEffects (Dpr_Battle_Logic_Section_Cheer_o* __this, Dpr_Battle_Logic_CheerEffect_array* pEffectArray, uint8_t* pEffectCount, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__canSelectCheerEffect (Dpr_Battle_Logic_Section_Cheer_o* __this, int32_t effect, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_Cheer__applyCheerEffect (Dpr_Battle_Logic_Section_Cheer_o* __this, int32_t cheerClientID, uint32_t actionSerialNo, int32_t effect, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__cheerEffect_RecoverHP (Dpr_Battle_Logic_Section_Cheer_o* __this, int32_t cheerClientID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__cheerEffect_CureSick (Dpr_Battle_Logic_Section_Cheer_o* __this, int32_t cheerClientID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__cheerEffect_RankUp (Dpr_Battle_Logic_Section_Cheer_o* __this, int32_t cheerClientID, uint32_t actionSerialNo, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_Cheer__decideRankUpEffect (Dpr_Battle_Logic_Section_Cheer_o* __this, int32_t* effect, uint8_t* volume, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__applyRankUpEffect (Dpr_Battle_Logic_Section_Cheer_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, int32_t effect, uint8_t volume, uint32_t actionSerialNo, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__cheerEffect_Reflector (Dpr_Battle_Logic_Section_Cheer_o* __this, int32_t cheerClientID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__cheerEffect_Hikarinokabe (Dpr_Battle_Logic_Section_Cheer_o* __this, int32_t cheerClientID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__cheerEffect_BreakGWall (Dpr_Battle_Logic_Section_Cheer_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_Cheer__isCheerTarget (Dpr_Battle_Logic_Section_Cheer_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, int32_t cheerClientID, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_Cheer___cctor (const MethodInfo* method_info);
