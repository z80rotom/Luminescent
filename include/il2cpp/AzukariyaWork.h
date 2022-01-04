#pragma once

#include "il2cpp.h"

void AzukariyaWork__StoreFromTemoti (int32_t temotiIndex, const MethodInfo* method);
void AzukariyaWork__RestoreToTemoti (int32_t index, const MethodInfo* method);
void AzukariyaWork__StoreFromBox (int32_t tray, int32_t pos, const MethodInfo* method);
void AzukariyaWork__RestoreToBox (int32_t index, int32_t tray, int32_t pos, const MethodInfo* method);
void AzukariyaWork__RestoreToBox (int32_t index, const MethodInfo* method);
void AzukariyaWork__RestoreCommon (int32_t index, const MethodInfo* method);
bool AzukariyaWork__IsExistEgg (const MethodInfo* method);
void AzukariyaWork__GetEggToTemoti (const MethodInfo* method);
void AzukariyaWork__GetEggToTemotiReplace (int32_t temotiIndex, const MethodInfo* method);
void AzukariyaWork__GetEggToBox (const MethodInfo* method);
void AzukariyaWork__AddEggStep (int32_t step, const MethodInfo* method);
void AzukariyaWork__CheckLayEgg (const MethodInfo* method);
int32_t AzukariyaWork__CalcLoveLevel (const MethodInfo* method);
void AzukariyaWork__SetExistEgg (const MethodInfo* method);
void AzukariyaWork__DiscardEgg (const MethodInfo* method);
Pml_PokePara_PokemonParam_o* AzukariyaWork__GenerateAndGetEgg (const MethodInfo* method);
void AzukariyaWork__Clear (const MethodInfo* method);
void AzukariyaWork__Set (int32_t index, Pml_PokePara_PokemonParam_o* pp, const MethodInfo* method);
Pml_PokePara_PokemonParam_o* AzukariyaWork__Get (int32_t index, const MethodInfo* method);
void AzukariyaWork__SetEmpty (int32_t index, const MethodInfo* method);
int32_t AzukariyaWork__GetUnusedIndex (const MethodInfo* method);
int32_t AzukariyaWork__GetStoredCount (const MethodInfo* method);
bool AzukariyaWork__IsUsed (int32_t index, const MethodInfo* method);
void AzukariyaWork__Move (int32_t sourceIndex, int32_t targetIndex, const MethodInfo* method);
void AzukariyaWork__InitOldmanEvent (const MethodInfo* method);
void AzukariyaWork__MoveOldmanEvent (const MethodInfo* method);
bool AzukariyaWork__IsExistOldmanZone (const MethodInfo* method);
bool AzukariyaWork__IsLoadedOldman (const MethodInfo* method);
FieldObjectEntity_o* AzukariyaWork__GetOldman (const MethodInfo* method);
void AzukariyaWork___cctor (const MethodInfo* method);
