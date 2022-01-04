#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_PosPoke__setLastPos (Dpr_Battle_Logic_PosPoke_o* __this, int32_t i, uint8_t pos, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PosPoke__getLastPos (Dpr_Battle_Logic_PosPoke_o* __this, int32_t i, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke___ctor (Dpr_Battle_Logic_PosPoke_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__CopyFrom (Dpr_Battle_Logic_PosPoke_o* __this, Dpr_Battle_Logic_PosPoke_o** src, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__Init (Dpr_Battle_Logic_PosPoke_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_POKECON_o* pokeCon, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__setInitialFrontPokemon (Dpr_Battle_Logic_PosPoke_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_POKECON_o* pokeCon, uint8_t pos, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__ExtendPos (Dpr_Battle_Logic_PosPoke_o* __this, Dpr_Battle_Logic_MainModule_o** mainModule, uint8_t pos, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__PokeOut (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__PokeIn (Dpr_Battle_Logic_PosPoke_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, uint8_t pos, uint8_t pokeID, Dpr_Battle_Logic_POKECON_o* pokeCon, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__checkConfrontRec (Dpr_Battle_Logic_PosPoke_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, uint8_t pos, Dpr_Battle_Logic_POKECON_o* pokeCon, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__Swap (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t pos1, uint8_t pos2, const MethodInfo* method);
void Dpr_Battle_Logic_PosPoke__updateLastPos (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t pos, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PosPoke__GetClientEmptyPos (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t clientID, Dpr_Battle_Logic_BtlPokePos_array* pos, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PosPoke__GetClientEmptyPosCount (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t clientID, const MethodInfo* method);
bool Dpr_Battle_Logic_PosPoke__IsExist (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t pokeID, const MethodInfo* method);
bool Dpr_Battle_Logic_PosPoke__IsExistFrontPos (Dpr_Battle_Logic_PosPoke_o* __this, Dpr_Battle_Logic_MainModule_o* mainModule, uint8_t pokeID, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PosPoke__GetPokeExistPos (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t pokeID, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PosPoke__GetPokeLastPos (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t pokeID, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PosPoke__GetExistPokeID (Dpr_Battle_Logic_PosPoke_o* __this, uint8_t pos, const MethodInfo* method);
