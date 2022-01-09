#pragma once

#include "il2cpp.h"

Dpr_Box_SaveBoxData_o* Dpr_Box_BoxWork__get_m_boxData (const MethodInfo* method_info);
void Dpr_Box_BoxWork__SwapTray (int32_t tray1, int32_t tray2, const MethodInfo* method_info);
void Dpr_Box_BoxWork__SetTrayName (System_String_o* str, int32_t tray, const MethodInfo* method_info);
System_String_o* Dpr_Box_BoxWork__GetTrayName (int32_t tray, const MethodInfo* method_info);
void Dpr_Box_BoxWork__ChangePokemon (int32_t tray1, int32_t pos1, int32_t tray2, int32_t pos2, const MethodInfo* method_info);
void Dpr_Box_BoxWork__ChangeTeam (int32_t tray1, int32_t tray2, const MethodInfo* method_info);
void Dpr_Box_BoxWork__SetTeamName (System_String_o* str, int32_t team, const MethodInfo* method_info);
System_String_o* Dpr_Box_BoxWork__GetTeamName (int32_t team, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetTeamPokeBoxTray (int32_t team, int32_t pos, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetTeamPokeBoxPos (int32_t team, int32_t pos, const MethodInfo* method_info);
bool Dpr_Box_BoxWork__IsTeam (int32_t team, const MethodInfo* method_info);
bool Dpr_Box_BoxWork__IsTeamPos (int32_t team, int32_t pos, const MethodInfo* method_info);
bool Dpr_Box_BoxWork__IsPokeTeam (int32_t tray, int32_t pos, const MethodInfo* method_info);
bool Dpr_Box_BoxWork__IsPokeTeam (int32_t tray, int32_t pos, int32_t team, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetPokeTeamPos (int32_t tray, int32_t pos, int32_t team, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetTeamPokeCount (int32_t team, const MethodInfo* method_info);
void Dpr_Box_BoxWork__DeleteTeam (int32_t tray, int32_t pos, bool isPack, const MethodInfo* method_info);
void Dpr_Box_BoxWork__DeletePackTeam (int32_t team, int32_t pos, const MethodInfo* method_info);
void Dpr_Box_BoxWork__PackTeam (int32_t team, const MethodInfo* method_info);
bool Dpr_Box_BoxWork__IsTeamLock (int32_t team, const MethodInfo* method_info);
bool Dpr_Box_BoxWork__IsPokeLock (int32_t tray, int32_t pos, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__SetTeamPokePos (int32_t team, int32_t team_pos, int32_t tray, int32_t tray_pos, const MethodInfo* method_info);
void Dpr_Box_BoxWork__SetTeamLock (int32_t team, bool is_lock, const MethodInfo* method_info);
void Dpr_Box_BoxWork__SetWallPaper (int32_t tray, int32_t val, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetWallPaper (int32_t tray, const MethodInfo* method_info);
void Dpr_Box_BoxWork__SetTrayMax (int32_t max, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetOpenTrayMax (const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetTrayMax (const MethodInfo* method_info);
void Dpr_Box_BoxWork__SetCurrentTray (int32_t tray, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetCurrentTray (const MethodInfo* method_info);
void Dpr_Box_BoxWork__SetStatusPut (int32_t mode, const MethodInfo* method_info);
int32_t Dpr_Box_BoxWork__GetStatusPut (const MethodInfo* method_info);
