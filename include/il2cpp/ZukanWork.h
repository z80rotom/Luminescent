#pragma once

#include "il2cpp.h"

void ZukanWork__Reset (const MethodInfo* method_info);
void ZukanWork__ZukanON (const MethodInfo* method_info);
void ZukanWork__ZenkokuON (const MethodInfo* method_info);
void ZukanWork__ZenkokuReset (const MethodInfo* method_info);
bool ZukanWork__GetZenkokuFlag (const MethodInfo* method_info);
int32_t ZukanWork__GetCount (bool isRating, const MethodInfo* method_info);
int32_t ZukanWork__GetSinouCount (bool isRating, const MethodInfo* method_info);
int32_t ZukanWork__SeeCount (bool isRating, const MethodInfo* method_info);
int32_t ZukanWork__SeeSinouCount (bool isRating, const MethodInfo* method_info);
void ZukanWork__SetPoke (uint32_t monsno, int32_t get, uint8_t sex, int32_t form, bool color, const MethodInfo* method_info);
void ZukanWork__SetPoke (Pml_PokePara_PokemonParam_o* mons, int32_t get, const MethodInfo* method_info);
bool ZukanWork__IsGet (uint32_t monsno, const MethodInfo* method_info);
bool ZukanWork__IsSee (uint32_t monsno, const MethodInfo* method_info);
bool ZukanWork__IsUwasa (uint32_t monsno, const MethodInfo* method_info);
int32_t ZukanWork__GetStatus (uint32_t monsno, const MethodInfo* method_info);
bool ZukanWork__IsGet (uint32_t monsno, uint8_t sex, int32_t form, bool color, const MethodInfo* method_info);
int32_t ZukanWork__GetSortType (const MethodInfo* method_info);
void ZukanWork__SetSortType (int32_t sortType, const MethodInfo* method_info);
int32_t ZukanWork__GetViewModelUniqueID (uint32_t monsno, const MethodInfo* method_info);
void ZukanWork__SetViewModelUniqueID (uint32_t monsno, int32_t uniqueID, const MethodInfo* method_info);
void ZukanWork__IncrementBattleCount (uint32_t no, bool isCaptured, const MethodInfo* method_info);
bool ZukanWork__CheckShinouZukanCompSee (const MethodInfo* method_info);
bool ZukanWork__CheckZenkokuZukanCompGet (const MethodInfo* method_info);
DPData_ZUKAN_WORK_o ZukanWork__get_work (const MethodInfo* method_info);
bool ZukanWork__IsLangFlag (uint32_t monsno, int32_t msglang, const MethodInfo* method_info);
void ZukanWork__AddLangFlag (uint32_t monsno, int32_t msglang, const MethodInfo* method_info);
uint32_t ZukanWork__GetPersonalRnd (int32_t monsNo, uint8_t sex, uint16_t formNo, bool isRare, const MethodInfo* method_info);
void ZukanWork__CheckLangFlags (const MethodInfo* method_info);
void ZukanWork__UpdatePersonalRnd (Pml_PokePara_PokemonParam_o* pokemonParam, int32_t get, const MethodInfo* method_info);
int32_t ZukanWork__GetPersonalRndIndex (uint8_t sex, uint16_t formNo, bool isRare, const MethodInfo* method_info);
System_Boolean_array* ZukanWork__GetFormFlags (uint32_t monsno, uint8_t sex, bool color, const MethodInfo* method_info);
void ZukanWork__DebugSet (uint32_t monsno, int32_t get, uint8_t sex, int32_t form, bool color, bool isGet, const MethodInfo* method_info);
void ZukanWork__DebugSetLangFlag (uint32_t monsno, int32_t msglang, bool flag, const MethodInfo* method_info);
int32_t ZukanWork__GetZukanNo (Pml_PokePara_PokemonParam_o* pokemonParam, const MethodInfo* method_info);
void ZukanWork___cctor (const MethodInfo* method_info);
