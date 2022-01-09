#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_WazaEffectParams__CopyFrom (Dpr_Battle_Logic_WazaEffectParams_o* __this, Dpr_Battle_Logic_WazaEffectParams_o* src, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__Clear (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__Setup (Dpr_Battle_Logic_WazaEffectParams_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_PokeSet_o* targets, Dpr_Battle_Logic_PosPoke_o** posPoke, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__ChangeAttackerPos (Dpr_Battle_Logic_WazaEffectParams_o* __this, uint8_t atkPos, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__ChangeEffectWazaID (Dpr_Battle_Logic_WazaEffectParams_o* __this, int32_t waza, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_WazaEffectParams__GetEffectWazaID (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__SetEnable (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__SetEnableDummy (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_WazaEffectParams__IsEnable (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_WazaEffectParams__IsDone (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__SetEffectIndex (Dpr_Battle_Logic_WazaEffectParams_o* __this, uint8_t index, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__AddSubEffectPoke (Dpr_Battle_Logic_WazaEffectParams_o* __this, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__ClearSubEffectParams (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_WazaEffectParams__IsSubEffectParamsValid (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_WazaEffectParams__IsGShockOccur (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__SetGShockOccur (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams__SetSyncDamageEffectEnable (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_WazaEffectParams___ctor (Dpr_Battle_Logic_WazaEffectParams_o* __this, const MethodInfo* method_info);
