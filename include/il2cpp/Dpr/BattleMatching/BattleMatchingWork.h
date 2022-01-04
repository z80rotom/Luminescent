#pragma once

#include "il2cpp.h"

void Dpr_BattleMatching_BattleMatchingWork__Init (const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork__SetBattleMatchingRule (int32_t battleModeID, bool coliseum, const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork__SetBattleTowerRule (bool single, const MethodInfo* method);
int32_t Dpr_BattleMatching_BattleMatchingWork__GetPlayerNum (const MethodInfo* method);
int32_t Dpr_BattleMatching_BattleMatchingWork__GetPokemonNumMin (int32_t type, const MethodInfo* method);
int32_t Dpr_BattleMatching_BattleMatchingWork__GetPokemonNumMax (int32_t type, const MethodInfo* method);
int32_t Dpr_BattleMatching_BattleMatchingWork__GetIndexMine (const MethodInfo* method);
int32_t Dpr_BattleMatching_BattleMatchingWork__GetIndex (int32_t stationIndex, const MethodInfo* method);
System_Int32_array* Dpr_BattleMatching_BattleMatchingWork__GetOtherStationIndex (const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork__SetReadyPlayer (int32_t stationIndex, const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork__ResetReadyPlayer (const MethodInfo* method);
bool Dpr_BattleMatching_BattleMatchingWork__GetReadyAllPlayers (const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork__SetResumePlayer (int32_t stationIndex, bool resume, const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork__ResetResumePlayer (const MethodInfo* method);
bool Dpr_BattleMatching_BattleMatchingWork__GetSelectResumeAllPlayer (const MethodInfo* method);
bool Dpr_BattleMatching_BattleMatchingWork__GetResumeAllPlayers (const MethodInfo* method);
bool Dpr_BattleMatching_BattleMatchingWork__GetNotResumePlayer (const MethodInfo* method);
System_Int32_array* Dpr_BattleMatching_BattleMatchingWork__GetReadyBattleTeams (const MethodInfo* method);
bool Dpr_BattleMatching_BattleMatchingWork__GetReadyAllBattleTeams (const MethodInfo* method);
System_Int32_array* Dpr_BattleMatching_BattleMatchingWork__GetReadyBattlePokemons (const MethodInfo* method);
bool Dpr_BattleMatching_BattleMatchingWork__GetReadyAllBattlePokemons (const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork__ResetPokemon (const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork__EmitLog (System_String_o* log, int32_t logType, const MethodInfo* method);
void Dpr_BattleMatching_BattleMatchingWork___cctor (const MethodInfo* method);
