#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_PokeSet___ctor (Dpr_Battle_Logic_PokeSet_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__Clear (Dpr_Battle_Logic_PokeSet_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__Add (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__AddWithDamage (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, uint16_t damage, bool fMigawariDamage, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__Remove (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_PokeSet__Get (Dpr_Battle_Logic_PokeSet_o* __this, uint32_t idx, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__SeekStart (Dpr_Battle_Logic_PokeSet_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_PokeSet__SeekNext (Dpr_Battle_Logic_PokeSet_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeSet__GetDamage (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, uint32_t* damage, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeSet__GetDamageReal (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, uint32_t* damage, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_PokeSet__GetDamageType (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_PokeSet__GetCount (Dpr_Battle_Logic_PokeSet_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_PokeSet__GetCountMax (Dpr_Battle_Logic_PokeSet_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_PokeSet__GetAliveCount (Dpr_Battle_Logic_PokeSet_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__SetDefaultTargetCount (Dpr_Battle_Logic_PokeSet_o* __this, uint8_t cnt, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeSet__IsRemovedAll (Dpr_Battle_Logic_PokeSet_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_PokeSet__CopyAlive (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_PokeSet_o* dst, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_PokeSet__CopyFriends (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, Dpr_Battle_Logic_PokeSet_o* dst, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_PokeSet__CopyEnemys (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* bpp, Dpr_Battle_Logic_PokeSet_o* dst, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__RemoveDisablePoke (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_PosPoke_o** posPoke, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__Swap (Dpr_Battle_Logic_PokeSet_o* __this, uint8_t index1, uint8_t index2, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSet__CopyFrom (Dpr_Battle_Logic_PokeSet_o* __this, Dpr_Battle_Logic_PokeSet_o** src, const MethodInfo* method_info);
