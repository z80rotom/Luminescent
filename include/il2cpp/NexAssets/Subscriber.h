#pragma once

#include "il2cpp.h"

int32_t NexAssets_Subscriber__PostContentAsync (NexAssets_Subscriber_o* __this, NexPlugin_SubscriberPostContentParam_o* param, NexPlugin_Subscriber_PostContentCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method);
int32_t NexAssets_Subscriber__PostContentAsync_ (NexAssets_Subscriber_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetContentAsync (NexAssets_Subscriber_o* __this, NexPlugin_SubscriberGetContentParam_o* param, NexPlugin_Subscriber_GetContentCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetContentAsync_ (NexAssets_Subscriber_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetContentsAsync (NexAssets_Subscriber_o* __this, System_Collections_Generic_List_SubscriberGetContentParam__o* paramList, NexPlugin_Subscriber_GetContentsCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetContentsAsync_ (NexAssets_Subscriber_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method);
int32_t NexAssets_Subscriber__DeleteContentAsync (NexAssets_Subscriber_o* __this, System_Collections_Generic_List_uint__o* topics, uint64_t contentId, NexPlugin_AsyncResultCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method);
int32_t NexAssets_Subscriber__DeleteContentAsync_ (NexAssets_Subscriber_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetFriendUserStatusesAsync (NexAssets_Subscriber_o* __this, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetFriendUserStatusesAsync_ (NexAssets_Subscriber_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetFriendUserStatusesAsync (NexAssets_Subscriber_o* __this, System_Collections_Generic_List_byte__o* keys, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetFriendUserStatusesWithKeyAsync_ (NexAssets_Subscriber_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetUserStatusesAsync (NexAssets_Subscriber_o* __this, System_Collections_Generic_List_ulong__o* users, System_Collections_Generic_List_byte__o* keys, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method);
int32_t NexAssets_Subscriber__GetUserStatusesAsync_ (NexAssets_Subscriber_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method);
int32_t NexAssets_Subscriber__UpdateUserStatusAsync (NexAssets_Subscriber_o* __this, System_Collections_Generic_List_SubscriberUserStatusParam__o* param, bool isNotify, NexPlugin_AsyncResultCB_o* callback, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method);
int32_t NexAssets_Subscriber__UpdateUserStatusAsync_ (NexAssets_Subscriber_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexAssets_Common_CORE_ARG_o* param, const MethodInfo* method);
bool NexAssets_Subscriber__EnableFriendUserStatusesCache (NexAssets_Subscriber_o* __this, intptr_t pNgsFacade, const MethodInfo* method);
bool NexAssets_Subscriber__DisableFriendUserStatusesCache (NexAssets_Subscriber_o* __this, intptr_t pNgsFacade, const MethodInfo* method);
bool NexAssets_Subscriber__GetFriendUserStatusesCacheMode (NexAssets_Subscriber_o* __this, bool* result, intptr_t pNgsFacade, const MethodInfo* method);
bool NexAssets_Subscriber__GetFriendUserStatusesCacheLastResult (NexAssets_Subscriber_o* __this, nn_Result_o* result, intptr_t pNgsFacade, const MethodInfo* method);
bool NexAssets_Subscriber__GetFriendUserStatuses (NexAssets_Subscriber_o* __this, System_Collections_Generic_List_SubscriberUserStatusInfo__o** infos, nn_Result_o* result, intptr_t pNgsFacade, const MethodInfo* method);
bool NexAssets_Subscriber__GetFriendUserStatuses (NexAssets_Subscriber_o* __this, System_Collections_Generic_List_ulong__o* users, System_Collections_Generic_List_SubscriberUserStatusInfo__o** infos, nn_Result_o* result, intptr_t pNgsFacade, const MethodInfo* method);
bool NexAssets_Subscriber__GetUserStatusRevision (NexAssets_Subscriber_o* __this, uint32_t* revision, intptr_t pNgsFacade, const MethodInfo* method);
bool NexAssets_Subscriber__ApiCallsFrequencyCheck (NexAssets_Subscriber_o* __this, int32_t type, const MethodInfo* method);
void NexAssets_Subscriber___ctor (NexAssets_Subscriber_o* __this, const MethodInfo* method);
void NexAssets_Subscriber___cctor (const MethodInfo* method);
