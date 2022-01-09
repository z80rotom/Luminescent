#pragma once

#include "il2cpp.h"

int32_t HoneyWork__GetTblMonsCount (const MethodInfo* method_info);
int32_t HoneyWork__GetRareLvCount (const MethodInfo* method_info);
int32_t HoneyWork__GetSwayLvCount (const MethodInfo* method_info);
System_Nullable_HONEY_DATA__o HoneyWork__GetHoneyData (int32_t zoneId, const MethodInfo* method_info);
DPData_HONEY_DATA_o HoneyWork__GetHoneyDataByIndex (int32_t treeIndex, const MethodInfo* method_info);
void HoneyWork__SetHoneyData (int32_t zoneId, DPData_HONEY_DATA_o* honeyData, const MethodInfo* method_info);
void HoneyWork__SetHoneyDataByIndex (int32_t treeIndex, DPData_HONEY_DATA_o* honeyData, const MethodInfo* method_info);
int32_t HoneyWork__IndexToZoneId (int32_t treeIndex, const MethodInfo* method_info);
int32_t HoneyWork__ZoneIdToIndex (int32_t zoneId, const MethodInfo* method_info);
XLSXContent_HoneyTree_SheetHoneyTreeIndex_array* HoneyWork__GetIndexToZoneIdTable (const MethodInfo* method_info);
int32_t HoneyWork__GetTreeCount (const MethodInfo* method_info);
void HoneyWork__UpdateTime (const MethodInfo* method_info);
void HoneyWork__UpdateTime (int32_t minute, const MethodInfo* method_info);
void HoneyWork__Spread (int32_t treeIndex, const MethodInfo* method_info);
bool HoneyWork__IsRateTree (int32_t checkTreeIndex, const MethodInfo* method_info);
int32_t HoneyWork__LotteryTableType (bool isRareTree, const MethodInfo* method_info);
int32_t HoneyWork__LotteryTableMonsNo (const MethodInfo* method_info);
int32_t HoneyWork__GetMonsNo (int32_t tableType, int32_t tblMonsNo, const MethodInfo* method_info);
int32_t HoneyWork__LotterySwayType (int32_t tableType, const MethodInfo* method_info);
int32_t HoneyWork__CalcState (DPData_HONEY_DATA_o* data, const MethodInfo* method_info);
void HoneyWork___ctor (HoneyWork_o* __this, const MethodInfo* method_info);
void HoneyWork___cctor (const MethodInfo* method_info);
