#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_DeadRec___ctor (Dpr_Battle_Logic_DeadRec_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_DeadRec__CopyFrom (Dpr_Battle_Logic_DeadRec_o* __this, Dpr_Battle_Logic_DeadRec_o** src, const MethodInfo* method);
void Dpr_Battle_Logic_DeadRec__Init (Dpr_Battle_Logic_DeadRec_o* __this, Dpr_Battle_Logic_POKECON_o* pokeCon, const MethodInfo* method);
void Dpr_Battle_Logic_DeadRec__StartTurn (Dpr_Battle_Logic_DeadRec_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_DeadRec__Add (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_DeadRec__Relive (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t pokeID, const MethodInfo* method);
bool Dpr_Battle_Logic_DeadRec__IsDeadNow (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t pokeID, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_DeadRec__GetDeadCountByClientID (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t clientID, const MethodInfo* method);
void Dpr_Battle_Logic_DeadRec__SetExpCheckedFlag (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t turn, uint8_t idx, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_DeadRec__GetCount (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t turn, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_DeadRec__GetPokeID (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t turn, uint8_t idx, const MethodInfo* method);
bool Dpr_Battle_Logic_DeadRec__GetExpCheckedFlag (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t turn, uint8_t idx, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_DeadRec__GetLastDeadPokeID (Dpr_Battle_Logic_DeadRec_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_DeadRec__IsRelivedPokePuttableEmptyPos (Dpr_Battle_Logic_DeadRec_o* __this, Dpr_Battle_Logic_PosPoke_o** posPoke, const MethodInfo* method);
void Dpr_Battle_Logic_DeadRec__clearTurnRecord (Dpr_Battle_Logic_DeadRec_o* __this, Dpr_Battle_Logic_DeadRec_Unit_o* unit, const MethodInfo* method);
void Dpr_Battle_Logic_DeadRec__clearReliveRecord (Dpr_Battle_Logic_DeadRec_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_DeadRec__isRelivedThisTurn (Dpr_Battle_Logic_DeadRec_o* __this, uint8_t pokeID, const MethodInfo* method);
