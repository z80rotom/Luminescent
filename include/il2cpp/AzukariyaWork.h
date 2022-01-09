#pragma once

#include "il2cpp.h"

void AzukariyaWork__StoreFromTemoti (int32_t temotiIndex, const MethodInfo* method_info);
void AzukariyaWork__RestoreToTemoti (int32_t index, const MethodInfo* method_info);
void AzukariyaWork__StoreFromBox (int32_t tray, int32_t pos, const MethodInfo* method_info);
void AzukariyaWork__RestoreToBox (int32_t index, int32_t tray, int32_t pos, const MethodInfo* method_info);
void AzukariyaWork__RestoreToBox (int32_t index, const MethodInfo* method_info);
void AzukariyaWork__RestoreCommon (int32_t index, const MethodInfo* method_info);
bool AzukariyaWork__IsExistEgg (const MethodInfo* method_info);
void AzukariyaWork__GetEggToTemoti (const MethodInfo* method_info);
void AzukariyaWork__GetEggToTemotiReplace (int32_t temotiIndex, const MethodInfo* method_info);
void AzukariyaWork__GetEggToBox (const MethodInfo* method_info);
void AzukariyaWork__AddEggStep (int32_t step, const MethodInfo* method_info);
void AzukariyaWork__CheckLayEgg (const MethodInfo* method_info);
int32_t AzukariyaWork__CalcLoveLevel (const MethodInfo* method_info);
void AzukariyaWork__SetExistEgg (const MethodInfo* method_info);
void AzukariyaWork__DiscardEgg (const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* AzukariyaWork__GenerateAndGetEgg (const MethodInfo* method_info);
void AzukariyaWork__Clear (const MethodInfo* method_info);
void AzukariyaWork__Set (int32_t index, Pml_PokePara_PokemonParam_o* pp, const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* AzukariyaWork__Get (int32_t index, const MethodInfo* method_info);
void AzukariyaWork__SetEmpty (int32_t index, const MethodInfo* method_info);
int32_t AzukariyaWork__GetUnusedIndex (const MethodInfo* method_info);
int32_t AzukariyaWork__GetStoredCount (const MethodInfo* method_info);
bool AzukariyaWork__IsUsed (int32_t index, const MethodInfo* method_info);
void AzukariyaWork__Move (int32_t sourceIndex, int32_t targetIndex, const MethodInfo* method_info);
void AzukariyaWork__InitOldmanEvent (const MethodInfo* method_info);
void AzukariyaWork__MoveOldmanEvent (const MethodInfo* method_info);
bool AzukariyaWork__IsExistOldmanZone (const MethodInfo* method_info);
bool AzukariyaWork__IsLoadedOldman (const MethodInfo* method_info);
FieldObjectEntity_o* AzukariyaWork__GetOldman (const MethodInfo* method_info);
void AzukariyaWork___cctor (const MethodInfo* method_info);
