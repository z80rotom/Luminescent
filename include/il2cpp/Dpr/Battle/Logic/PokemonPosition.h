#pragma once

#include "il2cpp.h"

uint32_t Dpr_Battle_Logic_PokemonPosition__GetClientCoverPosNum (int32_t rule, uint8_t multiMode, int32_t clientId, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetPosCoverClientId (int32_t rule, uint8_t multiMode, uint8_t pos, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetPosCoverClientId_Single (uint8_t pos, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetPosCoverClientId_Double (uint8_t multiMode, uint8_t pos, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetPosCoverClientId_Raid (uint8_t multiMode, uint8_t pos, const MethodInfo* method);
bool Dpr_Battle_Logic_PokemonPosition__IsPokePosExist (int32_t rule, uint8_t multiMode, uint8_t pos, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetValidPosMax (int32_t rule, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetOpponentPokePos (int32_t rule, uint8_t multiMode, uint8_t myBasePos, uint8_t opponentPosIndex, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetClientNum (int32_t rule, uint8_t multiMode, int32_t side, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_PokemonPosition__GetFrontPosNum (int32_t rule, uint8_t multiMode, int32_t side, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetSidePos (int32_t rule, int32_t side, uint8_t posIndex, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetSidePos_Raid (int32_t side, uint8_t posIndex, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__PosToSide (int32_t rule, uint8_t multiMode, uint8_t pos, const MethodInfo* method);
bool Dpr_Battle_Logic_PokemonPosition__IsPlayerSide (int32_t playerSide, int32_t checkSide, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetOpponentSide (int32_t rule, int32_t side, const MethodInfo* method);
bool Dpr_Battle_Logic_PokemonPosition__IsSideExist (int32_t rule, int32_t side, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetSideNum (int32_t rule, const MethodInfo* method);
void Dpr_Battle_Logic_PokemonPosition__ExpandSide (Dpr_Battle_Logic_BtlSide_array* expandSide, uint8_t* expandSideNum, int32_t rule, int32_t targetSide, const MethodInfo* method);
void Dpr_Battle_Logic_PokemonPosition__AddSideIfExist (Dpr_Battle_Logic_BtlSide_array* destArray, uint8_t* count, int32_t rule, int32_t side, const MethodInfo* method);
bool Dpr_Battle_Logic_PokemonPosition__IsUnitSide (int32_t side, const MethodInfo* method);
bool Dpr_Battle_Logic_PokemonPosition__IsMultiSide (int32_t side, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetClientSide (int32_t rule, int32_t clientId, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetClientSide_Single (int32_t clientId, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetClientSide_Double (int32_t clientId, const MethodInfo* method);
int32_t Dpr_Battle_Logic_PokemonPosition__GetClientSide_Raid (int32_t clientId, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__PosToSidePosIndex (int32_t rule, uint8_t pos, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__PosToSidePosIndex_Raid (uint8_t pos, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetFriendPokePos (int32_t rule, uint8_t multiMode, uint8_t myBasePos, uint8_t sidePosIndex, const MethodInfo* method);
bool Dpr_Battle_Logic_PokemonPosition__IsFriendPokePos (int32_t rule, uint8_t multiMode, uint8_t pos1, uint8_t pos2, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetFacedPokePos (int32_t rule, uint8_t multiMode, uint8_t pos, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_PokemonPosition__GetFacedPokePos_Double (uint8_t multiMode, uint8_t pos, const MethodInfo* method);
void Dpr_Battle_Logic_PokemonPosition___cctor (const MethodInfo* method);
