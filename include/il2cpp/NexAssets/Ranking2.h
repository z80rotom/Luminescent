#pragma once

#include "il2cpp.h"

int32_t NexAssets_Ranking2__GetRankingAsync (NexAssets_Ranking2_o* __this, NexPlugin_Ranking2GetParam_o* param, NexPlugin_Ranking2_GetRankingCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetRankingAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetRankingByPIDListAsync (NexAssets_Ranking2_o* __this, NexPlugin_Ranking2GetByListParam_o* param, System_Collections_Generic_List_ulong__o* principalIdList, NexPlugin_Ranking2_GetRankingCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetRankingByPIDListAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__PutScoreAsync (NexAssets_Ranking2_o* __this, NexAssets_Ranking2ScoreData_o* param, uint32_t score, uint64_t uniqueId, NexPlugin_AsyncResultCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__PutScoreAsync (NexAssets_Ranking2_o* __this, NexPlugin_Ranking2ScoreData_o* param, uint64_t uniqueId, NexPlugin_AsyncResultCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__PutScoreAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__PutScoreListAsync (NexAssets_Ranking2_o* __this, System_Collections_Generic_List_Ranking2ScoreData__o* paramList, uint64_t uniqueId, NexPlugin_AsyncResultCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__PutScoreListAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__PutCommonDataAsync (NexAssets_Ranking2_o* __this, NexPlugin_Ranking2CommonData_o* param, uint64_t uniqueId, NexPlugin_AsyncResultCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__PutCommonDataAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetCommonDataAsync (NexAssets_Ranking2_o* __this, int32_t optionFlags, uint64_t principalId, uint64_t uniqueId, bool principalIdUseCurrentLogin, NexPlugin_Ranking2_GetCommonDataCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetCommonDataAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__DeleteCommonDataAsync (NexAssets_Ranking2_o* __this, uint64_t uniqueId, NexPlugin_AsyncResultCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__DeleteCommonDataAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetCategorySettingAsync (NexAssets_Ranking2_o* __this, uint32_t category, NexPlugin_Ranking2_GetCategorySettingCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetCategorySettingAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetEstimateScoreRankAsync (NexAssets_Ranking2_o* __this, NexAssets_Ranking2EstimateScoreRankInput_o* param, uint32_t score, NexPlugin_Ranking2_GetRanking2EstimateScoreRankCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetEstimateScoreRankAsync (NexAssets_Ranking2_o* __this, NexPlugin_Ranking2EstimateScoreRankInput_o param, NexPlugin_Ranking2_GetRanking2EstimateScoreRankCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetEstimateScoreRankAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetRankingChartAsync (NexAssets_Ranking2_o* __this, NexAssets_Ranking2ChartInfoInput_o* param, NexPlugin_Ranking2_GetRanking2ChartInfoCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetRankingChartAsync (NexAssets_Ranking2_o* __this, NexPlugin_Ranking2ChartInfoInput_o param, NexPlugin_Ranking2_GetRanking2ChartInfoCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetRankingChartAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetRankingChartsAsync (NexAssets_Ranking2_o* __this, System_Collections_Generic_List_Ranking2ChartInfoInput__o* param, NexPlugin_Ranking2_GetRanking2ChartInfoListCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
int32_t NexAssets_Ranking2__GetRankingChartsAsync_ (NexAssets_Ranking2_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method_info);
bool NexAssets_Ranking2__ApiCallsFrequencyCheck (NexAssets_Ranking2_o* __this, int32_t type, const MethodInfo* method_info);
void NexAssets_Ranking2___ctor (NexAssets_Ranking2_o* __this, const MethodInfo* method_info);
void NexAssets_Ranking2___cctor (const MethodInfo* method_info);
