#pragma once

#include "il2cpp.h"

uint8_t Dpr_Battle_Logic_PokeSelResult__GetSelectMax (Dpr_Battle_Logic_PokeSelResult_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSelResult__Init (Dpr_Battle_Logic_PokeSelResult_o* __this, Dpr_Battle_Logic_PokeSelParam_o* param, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSelResult__Push (Dpr_Battle_Logic_PokeSelResult_o* __this, uint8_t outPokeIdx, uint8_t selPokeIdx, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSelResult__Pop (Dpr_Battle_Logic_PokeSelResult_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSelResult__SetCancel (Dpr_Battle_Logic_PokeSelResult_o* __this, bool flg, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeSelResult__IsCancel (Dpr_Battle_Logic_PokeSelResult_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeSelResult__IsDone (Dpr_Battle_Logic_PokeSelResult_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_PokeSelResult__GetCount (Dpr_Battle_Logic_PokeSelResult_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_PokeSelResult__GetLast (Dpr_Battle_Logic_PokeSelResult_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_PokeSelResult__Get (Dpr_Battle_Logic_PokeSelResult_o* __this, uint8_t idx, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSelResult__SetItemUse (Dpr_Battle_Logic_PokeSelResult_o* __this, int32_t clientID, uint8_t pokeIdx, uint16_t itemNo, uint8_t wazaIdx, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeSelResult__IsItemUse (Dpr_Battle_Logic_PokeSelResult_o* __this, int32_t* clientID, uint8_t* pokeIdx, uint16_t* itemNo, uint8_t* wazaIdx, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeSelResult___ctor (Dpr_Battle_Logic_PokeSelResult_o* __this, const MethodInfo* method_info);
