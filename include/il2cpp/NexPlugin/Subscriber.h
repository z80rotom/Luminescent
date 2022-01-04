#pragma once

#include "il2cpp.h"

bool NexPlugin_Subscriber__PostContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_SubscriberPostContentParam_o* param, int32_t timeOut, NexPlugin_Subscriber_PostContentCB_o* callback, const MethodInfo* method);
bool NexPlugin_Subscriber__GetContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_SubscriberGetContentParam_o* param, int32_t timeOut, NexPlugin_Subscriber_GetContentCB_o* callback, const MethodInfo* method);
bool NexPlugin_Subscriber__GetContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_SubscriberGetContentParam__o* param, int32_t timeOut, NexPlugin_Subscriber_GetContentsCB_o* callback, const MethodInfo* method);
bool NexPlugin_Subscriber__DeleteContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_uint__o* topics, uint64_t contentId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Subscriber__GetFriendUserStatusesAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, const MethodInfo* method);
bool NexPlugin_Subscriber__GetFriendUserStatusesAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_byte__o* keys, int32_t timeOut, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, const MethodInfo* method);
bool NexPlugin_Subscriber__GetUserStatusesAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* users, System_Collections_Generic_List_byte__o* keys, int32_t timeOut, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, const MethodInfo* method);
bool NexPlugin_Subscriber__UpdateUserStatusAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_SubscriberUserStatusParam__o* param, bool isNotify, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
bool NexPlugin_Subscriber__EnableFriendUserStatusesCache (intptr_t pNgsFacade, const MethodInfo* method);
bool NexPlugin_Subscriber__DisableFriendUserStatusesCache (intptr_t pNgsFacade, const MethodInfo* method);
bool NexPlugin_Subscriber__GetFriendUserStatusesCacheMode (intptr_t pNgsFacade, bool* result, const MethodInfo* method);
bool NexPlugin_Subscriber__GetFriendUserStatusesCacheLastResult (intptr_t pNgsFacade, nn_Result_o* result, const MethodInfo* method);
bool NexPlugin_Subscriber__GetFriendUserStatuses (intptr_t pNgsFacade, System_Collections_Generic_List_SubscriberUserStatusInfo__o** infos, nn_Result_o* result, const MethodInfo* method);
bool NexPlugin_Subscriber__GetFriendUserStatuses (intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* users, System_Collections_Generic_List_SubscriberUserStatusInfo__o** infos, nn_Result_o* result, const MethodInfo* method);
bool NexPlugin_Subscriber__GetUserStatusRevision (intptr_t pNgsFacade, uint32_t* revision, const MethodInfo* method);
