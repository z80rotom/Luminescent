#pragma once

#include "il2cpp.h"

uint8_t Dpr_Battle_Logic_PokeID__GetClientBasePokeId (int32_t clientID, const MethodInfo* method);
bool Dpr_Battle_Logic_PokeID__IsClientsPokeID (int32_t clientID, uint8_t pokeID, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokeID__GetClientPokeId (int32_t clientID, uint8_t pokeIndex, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokeID__PokeIdToStartMemberIndex (uint8_t pokeID, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokeID__PokeIdToClientId (uint8_t pokeID, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokeID__PokeIdToShortId (uint8_t pokeID, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokeID__ShortIdToPokeId (int32_t clientID, uint8_t shortID, const MethodInfo* method);
void Dpr_Battle_Logic_PokeID___cctor (const MethodInfo* method);
