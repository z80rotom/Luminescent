#pragma once

#include "il2cpp.h"

void EncountDataWork__Create (const MethodInfo* method);
bool EncountDataWork__EncDataSave_CanUseSpray (const MethodInfo* method);
int32_t EncountDataWork__GetMovePokeIndex (int32_t monsno, const MethodInfo* method);
void EncountDataWork__SetMovePokeData (Pml_PokePara_PokemonParam_o* param, bool init, const MethodInfo* method);
bool EncountDataWork__GetMovePokeData (int32_t monsno, DPData_MV_POKE_DATA_o* outData, const MethodInfo* method);
bool EncountDataWork__GetMovePokeData (int32_t index, DPData_MV_POKE_DATA_o* outData, const MethodInfo* method);
void EncountDataWork__SetMovePokeData_ZoneID (int32_t monsno, int32_t zonid, const MethodInfo* method);
void EncountDataWork__SetMovePokeData_ZoneID (int32_t index, int32_t zonid, const MethodInfo* method);
void EncountDataWork__SetMovePokeData_Status (int32_t monsno, int32_t status, const MethodInfo* method);
bool EncountDataWork__IsMovePokeData_ReActive (int32_t index, const MethodInfo* method);
void EncountDataWork__SetMovePokeData_Status (int32_t index, int32_t status, const MethodInfo* method);
void EncountDataWork__MovePoke_RandomZone (int32_t monsno, const MethodInfo* method);
void EncountDataWork__MovePoke_RandomZone (const MethodInfo* method);
void EncountDataWork__MovePoke_RandomZone (int32_t index, const MethodInfo* method);
void EncountDataWork__MovePoke_PlayerEqualZoneNextZone (int32_t zoneid, const MethodInfo* method);
void EncountDataWork__MovePoke_NextZone (const MethodInfo* method);
int32_t EncountDataWork__GetMovePoke_ZoneID (int32_t index, const MethodInfo* method);
void EncountDataWork__FukkatuMvPoke (const MethodInfo* method);
void EncountDataWork__SetTairyouHassei (bool flag, const MethodInfo* method);
bool EncountDataWork__IsTairyouHassei (const MethodInfo* method);
int32_t EncountDataWork__GetUrayamaIndex (int32_t index, const MethodInfo* method);
void EncountDataWork__ChangeUrayamaIndex (int32_t diff, const MethodInfo* method);
void EncountDataWork__SetUrayamaIndex (uint32_t num, const MethodInfo* method);
void EncountDataWork__JumpMovePokeAffterBattle (int32_t playerZone, const MethodInfo* method);
void EncountDataWork___ctor (EncountDataWork_o* __this, const MethodInfo* method);
