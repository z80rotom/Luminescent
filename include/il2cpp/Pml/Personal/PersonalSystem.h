#pragma once

#include "il2cpp.h"

void Pml_Personal_PersonalSystem__Initialize (XLSXContent_PersonalTable_o* personalTotal, XLSXContent_WazaOboeTable_o* wazaoboeTotal, XLSXContent_GrowTable_o* growTableTotal, XLSXContent_EvolveTable_o* evolveTableTotal, const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetMonsLabel (int32_t monsno, const MethodInfo* method_info);
System_String_o* Pml_Personal_PersonalSystem__GetMonsName (int32_t monsNo, const MethodInfo* method_info);
System_String_o* Pml_Personal_PersonalSystem__GetMonsName (int32_t monsNo, int32_t langId, const MethodInfo* method_info);
bool Pml_Personal_PersonalSystem__CheckPokeExist (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
void Pml_Personal_PersonalSystem__LoadPersonalData (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
XLSXContent_PersonalTable_SheetPersonal_o* Pml_Personal_PersonalSystem__GetPersonalData (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
uint32_t Pml_Personal_PersonalSystem__GetDataID (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
uint32_t Pml_Personal_PersonalSystem__GetPersonalParam (int32_t paramId, const MethodInfo* method_info);
bool Pml_Personal_PersonalSystem__CheckPersonalWazaMachine (uint16_t machineNo, const MethodInfo* method_info);
bool Pml_Personal_PersonalSystem__CheckPersonalWazaRecord (uint16_t recordNo, const MethodInfo* method_info);
bool Pml_Personal_PersonalSystem__CheckPersonalWazaOshie (uint16_t oshieNo, const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetPersonalSexType (const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetTokuseiPattern (const MethodInfo* method_info);
void Pml_Personal_PersonalSystem__LoadGrowTable (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
void Pml_Personal_PersonalSystem__LoadGrowTable (uint32_t grow_type, const MethodInfo* method_info);
XLSXContent_GrowTable_SheetData_o* Pml_Personal_PersonalSystem__GetGrowTable (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
XLSXContent_GrowTable_SheetData_o* Pml_Personal_PersonalSystem__GetGrowTable (uint32_t grow_type, const MethodInfo* method_info);
uint32_t Pml_Personal_PersonalSystem__GetMinExp (uint8_t level, const MethodInfo* method_info);
void Pml_Personal_PersonalSystem__LoadWazaOboeData (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
XLSXContent_WazaOboeTable_SheetWazaOboe_o* Pml_Personal_PersonalSystem__GetWazaOboeData (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
uint8_t Pml_Personal_PersonalSystem__GetWazaOboeNum (const MethodInfo* method_info);
uint16_t Pml_Personal_PersonalSystem__GetWazaOboeLevel (uint16_t index, const MethodInfo* method_info);
uint16_t Pml_Personal_PersonalSystem__GetWazaOboeWazaNo (uint16_t index, const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetWazaOboeKind (uint16_t index, const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetOshieWazaNum (const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetOshieWazaNo (int32_t idx, const MethodInfo* method_info);
void Pml_Personal_PersonalSystem__LoadEvolutionTable (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
XLSXContent_EvolveTable_SheetEvolve_o* Pml_Personal_PersonalSystem__GetEvolutionTable (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
uint8_t Pml_Personal_PersonalSystem__GetEvolutionRouteNum (const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetEvolutionCondition (uint8_t route_index, const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetEvolutionCondition (int32_t next_monsno, const MethodInfo* method_info);
uint16_t Pml_Personal_PersonalSystem__GetEvolutionParam (uint8_t route_index, const MethodInfo* method_info);
int32_t Pml_Personal_PersonalSystem__GetEvolvedMonsNo (uint8_t route_index, const MethodInfo* method_info);
uint16_t Pml_Personal_PersonalSystem__GetEvolvedFormNo (uint8_t route_index, const MethodInfo* method_info);
bool Pml_Personal_PersonalSystem__IsEvolvedFormNoSpecified (uint8_t route_index, const MethodInfo* method_info);
uint8_t Pml_Personal_PersonalSystem__GetEvolveEnableLevel (uint8_t route_index, const MethodInfo* method_info);
XLSXContent_AddPersonalTable_SheetAddPersonal_o* Pml_Personal_PersonalSystem__GetAddPersonalData (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
uint32_t Pml_Personal_PersonalSystem__GetDataID_AddPersonal (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
void Pml_Personal_PersonalSystem___cctor (const MethodInfo* method_info);
