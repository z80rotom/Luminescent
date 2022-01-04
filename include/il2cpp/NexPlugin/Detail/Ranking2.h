#pragma once

#include "il2cpp.h"

bool NexPlugin_Detail_Ranking2__Ranking2_PutScoreAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Ranking2_Ranking2ScoreDataInt_o* pParam, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__PutScoreAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_Ranking2ScoreData_o* scoreData, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_PutScoreListAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* pParam, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__PutScoreAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_Ranking2ScoreData__o* scoreDataList, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_PutCommonDataAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Ranking2_Ranking2CommonDataInt_o* commonData, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__PutCommonDataAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_Ranking2CommonData_o* commonData, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_GetCommonDataAsync (uint32_t asyncId, intptr_t pNgsFacade, uint32_t optionFlags, uint64_t principalId, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__GetCommonDataAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t optionFlags, uint64_t principalId, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_Ranking2_GetCommonDataCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_DeleteCommonDataAsync (uint32_t asyncId, intptr_t pNgsFacade, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__DeleteCommonDataAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_GetRankingAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Ranking2_Ranking2GetParamInt_o* getParam, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__GetRankingAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_Ranking2GetParam_o* getParam, int32_t timeOut, NexPlugin_Ranking2_GetRankingCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_GetRankingByListAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Ranking2_Ranking2GetByListParamInt_o* getParam, NexPlugin_Detail_CppArray_o* principalIdList, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__GetRankingAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_Ranking2GetByListParam_o* getParam, System_Collections_Generic_List_ulong__o* principalIdList, int32_t timeOut, NexPlugin_Ranking2_GetRankingCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_GetCategorySettingAsync (uint32_t asyncId, intptr_t pNgsFacade, uint32_t category, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__GetCategorySettingAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint32_t category, int32_t timeOut, NexPlugin_Ranking2_GetCategorySettingCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_GetRankingChartAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Ranking2ChartInfoInput_o* info, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__GetRankingChartAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_Ranking2ChartInfoInput_o info, int32_t timeOut, NexPlugin_Ranking2_GetRanking2ChartInfoCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_GetRankingChartsAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* info, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__GetRankingChartAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_Ranking2ChartInfoInput__o* info, int32_t timeOut, NexPlugin_Ranking2_GetRanking2ChartInfoListCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__Ranking2_GetEstimateScoreRankAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Ranking2EstimateScoreRankInput_o* info, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking2__GetEstimateScoreRankAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_Ranking2EstimateScoreRankInput_o info, int32_t timeOut, NexPlugin_Ranking2_GetRanking2EstimateScoreRankCB_o* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking2__Ranking2_GetCommonDataResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking2__Ranking2_GetRankingResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking2__Ranking2_GetCategorySettingResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking2__Ranking2_GetRanking2ChartInfoResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking2__Ranking2_GetRanking2ChartInfoListResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking2__Ranking2_GetRanking2EstimateScoreRankResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking2__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method);
