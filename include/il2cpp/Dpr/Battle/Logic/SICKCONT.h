#pragma once

#include "il2cpp.h"

Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakeNull (const MethodInfo* method);
bool Dpr_Battle_Logic_SICKCONT__IsNull (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakeTurn (uint8_t causePokeID, uint8_t turns, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakeTurnParam (uint8_t causePokeID, uint8_t turns, uint16_t param, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakePoke (uint8_t causePokeID, uint8_t pokeID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakePermanent (uint8_t causePokeID, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakePermanentInc (uint8_t causePokeID, uint8_t count_max, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakePermanentParam (uint8_t causePokeID, uint16_t param, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakePermanentIncParam (uint8_t causePokeID, uint8_t count_max, uint16_t param, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakePokeTurn (uint8_t causePokeID, uint8_t pokeID, uint8_t turns, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakePokeTurnParam (uint8_t causePokeID, uint8_t pokeID, uint8_t turns, uint16_t param, const MethodInfo* method);
Dpr_Battle_Logic_BTL_SICKCONT_o Dpr_Battle_Logic_SICKCONT__MakeMoudokuCont (uint8_t causePokeID, const MethodInfo* method);
bool Dpr_Battle_Logic_SICKCONT__IsMoudokuCont (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_SICKCONT__GetPokeID (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, const MethodInfo* method);
void Dpr_Battle_Logic_SICKCONT__SetPokeID (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, uint8_t pokeID, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_SICKCONT__GetTurnMax (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, const MethodInfo* method);
void Dpr_Battle_Logic_SICKCONT__AddParam (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, uint16_t param, const MethodInfo* method);
uint16_t Dpr_Battle_Logic_SICKCONT__GetParam (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, const MethodInfo* method);
void Dpr_Battle_Logic_SICKCONT__SetFlag (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, bool flag, const MethodInfo* method);
bool Dpr_Battle_Logic_SICKCONT__GetFlag (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, const MethodInfo* method);
void Dpr_Battle_Logic_SICKCONT__IncTurn (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, uint8_t inc, const MethodInfo* method);
void Dpr_Battle_Logic_SICKCONT__SetTurn (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, uint8_t turn, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_SICKCONT__GetCausePokeID (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, const MethodInfo* method);
void Dpr_Battle_Logic_SICKCONT__SetCausePokeID (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, uint8_t pokeID, const MethodInfo* method);
void Dpr_Battle_Logic_SICKCONT__Split32bit (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, uint32_t* high, uint32_t* low, const MethodInfo* method);
void Dpr_Battle_Logic_SICKCONT__Unite32bit (Dpr_Battle_Logic_BTL_SICKCONT_o* cont, uint32_t high, uint32_t low, const MethodInfo* method);
