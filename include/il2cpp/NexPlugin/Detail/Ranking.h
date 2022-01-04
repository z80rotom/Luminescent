#pragma once

#include "il2cpp.h"

bool NexPlugin_Detail_Ranking__Ranking_UploadCommonDataAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* commonData, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__UploadCommonDataAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_byte__o* commonData, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_DeleteCommonDataAsync (uint32_t asyncId, intptr_t pNgsFacade, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__DeleteCommonDataAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_GetCommonDataAsync (uint32_t asyncId, intptr_t pNgsFacade, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__GetCommonDataAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_Ranking_GetCommonDataCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_UploadScoreAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Ranking_RankingScoreDataInt_o* scoreData, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__UploadScoreAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_RankingScoreData_o* scoreData, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_DeleteScoreAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t useCategory, uint32_t category, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__DeleteScoreAsync (uint32_t* asyncId, intptr_t pNgsFacade, bool useCategory, uint32_t category, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_GetRankingAsync (uint32_t asyncId, intptr_t pNgsFacade, uint32_t rankingMode, uint32_t category, NexPlugin_Detail_Ranking_RankingOrderParamInt_o* orderParam, uint64_t nexUniqueId, uint64_t principalId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__GetRankingAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t rankingMode, uint32_t category, NexPlugin_RankingOrderParam_o* orderParam, uint64_t nexUniqueId, uint64_t principalId, int32_t timeOut, NexPlugin_Ranking_GetRankingCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_GetRankingByPIDListAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* principalIdList, uint32_t rankingMode, uint32_t category, NexPlugin_Detail_Ranking_RankingOrderParamInt_o* orderParam, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__GetRankingByPIDListAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* principalIdList, int32_t rankingMode, uint32_t category, NexPlugin_RankingOrderParam_o* orderParam, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_Ranking_GetRankingCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_GetRankingByUIDListAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* nexUniqueIdList, uint32_t rankingMode, uint32_t category, NexPlugin_Detail_Ranking_RankingOrderParamInt_o* orderParam, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__GetRankingByUIDListAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* nexUniqueIdList, int32_t rankingMode, uint32_t category, NexPlugin_RankingOrderParam_o* orderParam, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_Ranking_GetRankingCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_GetApproxOrderAsync (uint32_t asyncId, intptr_t pNgsFacade, uint32_t category, NexPlugin_Detail_Ranking_RankingOrderParamInt_o* orderParam, uint32_t score, uint64_t nexUniqueId, uint64_t principalId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__GetApproxOrderAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint32_t category, NexPlugin_RankingOrderParam_o* orderParam, uint32_t score, uint64_t nexUniqueId, uint64_t principalId, int32_t timeOut, NexPlugin_Ranking_GetApproxOrderCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_GetStatsAsync (uint32_t asyncId, intptr_t pNgsFacade, uint32_t category, NexPlugin_Detail_Ranking_RankingOrderParamInt_o* orderParam, uint32_t flags, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__GetStatsAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint32_t category, NexPlugin_RankingOrderParam_o* orderParam, int32_t flags, int32_t timeOut, NexPlugin_Ranking_GetStatsCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_ChangeAttributesAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t useCategory, uint32_t category, NexPlugin_Detail_Ranking_RankingChangeAttributesParamInt_o* changeParam, uint64_t nexUniqueId, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__ChangeAttributesAsync (uint32_t* asyncId, intptr_t pNgsFacade, bool useCategory, uint32_t category, NexPlugin_RankingChangeAttributesParam_o* changeParam, uint64_t nexUniqueId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_GetCachedTopXRankingAsync (uint32_t asyncId, intptr_t pNgsFacade, uint32_t category, NexPlugin_Detail_Ranking_RankingOrderParamInt_o* orderParam, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__GetCachedTopXRankingAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint32_t category, NexPlugin_RankingOrderParam_o* orderParam, int32_t timeOut, NexPlugin_Ranking_GetCachedTopXRankingCB_o* callback, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__Ranking_GetCachedTopXRankingsAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t useOneRankingOrderParam, NexPlugin_Detail_CppArray_o* categories, NexPlugin_Detail_CppArray_o* orderParams, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Ranking__GetCachedTopXRankingsAsync (uint32_t* asyncId, intptr_t pNgsFacade, bool useOneRankingOrderParam, System_Collections_Generic_List_uint__o* categories, System_Collections_Generic_List_RankingOrderParam__o* orderParams, int32_t timeOut, NexPlugin_Ranking_GetCachedTopXRankingsCB_o* callback, const MethodInfo* method);
int32_t NexPlugin_Detail_Ranking__Ranking_LocalUpdate (intptr_t* pNewResult, NexPlugin_Detail_Ranking_RankingCachedResultInt_o* cachedResult, NexPlugin_Detail_Ranking_RankingOrderParamInt_o* orderParam, NexPlugin_Detail_Ranking_RankingScoreDataInt_o* scoreData, uint64_t pid, uint64_t nexUniqueId, NexPlugin_NpDateTime_o* utcCurrentTime, NexPlugin_Detail_CppArray_o* pCommonData, const MethodInfo* method);
int32_t NexPlugin_Detail_Ranking__LocalUpdate (NexPlugin_RankingCachedResult_o** newResult, NexPlugin_RankingCachedResult_o* result, NexPlugin_RankingOrderParam_o* orderParam, NexPlugin_RankingScoreData_o* scoreData, uint64_t pid, uint64_t nexUniqueId, NexPlugin_NpDateTime_o utcCurrentTime, System_Collections_Generic_List_byte__o* pCommonData, const MethodInfo* method);
void NexPlugin_Detail_Ranking__Ranking_DeleteCachedResult (intptr_t cachedResult, const MethodInfo* method);
void NexPlugin_Detail_Ranking__Ranking_GetCommonDataResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking__Ranking_GetRankingResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking__Ranking_GetApproxOrderResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking__Ranking_GetStatsResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking__Ranking_GetCachedTopXRankingResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking__Ranking_GetCachedTopXRankingsResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method);
void NexPlugin_Detail_Ranking__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method);
