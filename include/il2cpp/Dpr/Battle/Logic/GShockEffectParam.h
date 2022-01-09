#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_GShockEffectParam___ctor (Dpr_Battle_Logic_GShockEffectParam_o* __this, Dpr_Battle_Logic_GShockEffectParam_SetupParam_o** param, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GShockEffectParam__IsNeedSummarize (Dpr_Battle_Logic_GShockEffectParam_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_ActionDesc_o* Dpr_Battle_Logic_GShockEffectParam__GetActionDesc (Dpr_Battle_Logic_GShockEffectParam_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_WazaParam_o* Dpr_Battle_Logic_GShockEffectParam__GetWazaParam (Dpr_Battle_Logic_GShockEffectParam_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_GShockEffectParam__GetAttacker (Dpr_Battle_Logic_GShockEffectParam_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_GShockEffectParam__GetDefender (Dpr_Battle_Logic_GShockEffectParam_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_GShockEffectParam__GetGShockEffect (Dpr_Battle_Logic_GShockEffectParam_o* __this, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_GShockEffectParam__GetEffectNo (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_GShockEffectParam__GetEffectVolume (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_GShockEffectParam__GetEffectVolume (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pokeID, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_GShockEffectParam__GetCuredPokeSick (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_GShockEffectParam__GetTargetPokeID (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GShockEffectParam__IsEffected (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GShockEffectParam__IsEffectedAny (Dpr_Battle_Logic_GShockEffectParam_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_GShockEffectParam__SetEffected (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, uint16_t effectNo, const MethodInfo* method_info);
void Dpr_Battle_Logic_GShockEffectParam__SetEffected_Rank (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, int32_t volume, const MethodInfo* method_info);
void Dpr_Battle_Logic_GShockEffectParam__SetEffected_Sick (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, int32_t sick, const MethodInfo* method_info);
void Dpr_Battle_Logic_GShockEffectParam__SetEffected_CureSick (Dpr_Battle_Logic_GShockEffectParam_o* __this, uint8_t pos, uint32_t sick, const MethodInfo* method_info);
void Dpr_Battle_Logic_GShockEffectParam___cctor (const MethodInfo* method_info);
