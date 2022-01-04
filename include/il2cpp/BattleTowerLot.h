#pragma once

#include "il2cpp.h"

int32_t BattleTowerLot__GetMatchingIndex (uint32_t towerclass, uint32_t rank, uint32_t round, const MethodInfo* method);
int32_t BattleTowerLot__GetSingleStockIndex (uint32_t id, const MethodInfo* method);
int32_t BattleTowerLot__GetDoubleStockIndex (uint32_t id, const MethodInfo* method);
void BattleTowerLot__GetTrainer (int32_t index, int32_t* trainer1, const MethodInfo* method);
void BattleTowerLot__GetTrainer (int32_t index, int32_t* trainer1, int32_t* trainer2, const MethodInfo* method);
void BattleTowerLot__LotTrainer (uint64_t random, uint32_t daychalleng, uint32_t towerclass, uint32_t rank, System_UInt64_array** stockids, const MethodInfo* method);
