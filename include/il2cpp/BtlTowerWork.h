#pragma once

#include "il2cpp.h"

void BtlTowerWork__Create (const MethodInfo* method_info);
void BtlTowerWork__SetBP (int32_t value, const MethodInfo* method_info);
int32_t BtlTowerWork__GetBP (const MethodInfo* method_info);
int32_t BtlTowerWork__GetRank (int32_t mode, const MethodInfo* method_info);
void BtlTowerWork__SetRank (int32_t mode, uint8_t value, const MethodInfo* method_info);
uint32_t BtlTowerWork__DayFixRand (uint32_t seed, const MethodInfo* method_info);
void BtlTowerWork__DayUpdate (const MethodInfo* method_info);
void BtlTowerWork__DebugLot (uint32_t btlclass, const MethodInfo* method_info);
void BtlTowerWork__Start (const MethodInfo* method_info);
void BtlTowerWork__Restart (int32_t btlclass, const MethodInfo* method_info);
void BtlTowerWork__End (const MethodInfo* method_info);
void BtlTowerWork__Clear (const MethodInfo* method_info);
void BtlTowerWork__Suspension (const MethodInfo* method_info);
void BtlTowerWork__Retire (const MethodInfo* method_info);
void BtlTowerWork__UpdateRenshou (int32_t mode, uint32_t wins, const MethodInfo* method_info);
void BtlTowerWork__AddLose (int32_t mode, const MethodInfo* method_info);
void BtlTowerWork__ResetRenshou (int32_t mode, const MethodInfo* method_info);
uint32_t BtlTowerWork__GetRankDownLose (int32_t mode, const MethodInfo* method_info);
void BtlTowerWork__ReseRankDownLose (int32_t mode, const MethodInfo* method_info);
void BtlTowerWork__SetMode (int32_t mode, const MethodInfo* method_info);
int32_t BtlTowerWork__GetMode (const MethodInfo* method_info);
int32_t BtlTowerWork__GetOldMode (const MethodInfo* method_info);
int32_t BtlTowerWork__GetRound (int32_t mode, const MethodInfo* method_info);
void BtlTowerWork__SetRound (int32_t mode, int32_t value, const MethodInfo* method_info);
void BtlTowerWork__RoundAdd (int32_t mode, const MethodInfo* method_info);
bool BtlTowerWork__GameClear (int32_t mode, const MethodInfo* method_info);
uint32_t BtlTowerWork__GetRenshou (int32_t mode, const MethodInfo* method_info);
uint32_t BtlTowerWork__GetOldRenshou (int32_t mode, const MethodInfo* method_info);
uint32_t BtlTowerWork__GetLastRenshou (int32_t mode, const MethodInfo* method_info);
void BtlTowerWork__LotTrainer (int32_t mode, const MethodInfo* method_info);
void BtlTowerWork__UpdatePlayScore (const MethodInfo* method_info);
void BtlTowerWork__ChangeModeEnum (int32_t mode, int32_t* rule, int32_t* cls, const MethodInfo* method_info);
void BtlTowerWork__GetNowModeEnum (int32_t* rule, int32_t* cls, const MethodInfo* method_info);
uint64_t BtlTowerWork__GetTrainerRand (int32_t round, const MethodInfo* method_info);
