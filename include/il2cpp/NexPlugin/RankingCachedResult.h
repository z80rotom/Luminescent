#pragma once

#include "il2cpp.h"

void NexPlugin_RankingCachedResult___ctor (NexPlugin_RankingCachedResult_o* __this, const MethodInfo* method_info);
uint32_t NexPlugin_RankingCachedResult__GetMaxLength (NexPlugin_RankingCachedResult_o* __this, const MethodInfo* method_info);
NexPlugin_NpDateTime_o NexPlugin_RankingCachedResult__GetCreatedTime (NexPlugin_RankingCachedResult_o* __this, const MethodInfo* method_info);
NexPlugin_NpDateTime_o NexPlugin_RankingCachedResult__GetExpiredTime (NexPlugin_RankingCachedResult_o* __this, const MethodInfo* method_info);
int32_t NexPlugin_RankingCachedResult__LocalUpdate (NexPlugin_RankingCachedResult_o* __this, NexPlugin_RankingOrderParam_o* orderParam, NexPlugin_RankingScoreData_o* scoreData, uint64_t pid, uint64_t nexUniqueId, NexPlugin_NpDateTime_o utcCurrentTime, System_Collections_Generic_List_byte__o* pCommonData, const MethodInfo* method_info);
void NexPlugin_RankingCachedResult__Trace (NexPlugin_RankingCachedResult_o* __this, const MethodInfo* method_info);
System_String_o* NexPlugin_RankingCachedResult__ToString (NexPlugin_RankingCachedResult_o* __this, const MethodInfo* method_info);
