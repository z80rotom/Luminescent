#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_List_SubscriberContent___o* NexPlugin_Detail_Subscriber__Exchange (intptr_t src, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_PostContentAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Subscriber_SubscriberPostContentParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__PostContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_SubscriberPostContentParam_o* param, int32_t timeOut, NexPlugin_Subscriber_PostContentCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetContentAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Subscriber_SubscriberGetContentParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_SubscriberGetContentParam_o* param, int32_t timeOut, NexPlugin_Subscriber_GetContentCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetContentsAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_SubscriberGetContentParam__o* param, int32_t timeOut, NexPlugin_Subscriber_GetContentsCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_DeleteContentAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* topics, uint64_t contentId, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__DeleteContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_uint__o* topics, uint64_t contentId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetFriendUserStatusesAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetFriendUserStatusesAsync (uint32_t* asyncId, intptr_t pNgsFacade, int32_t timeOut, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetFriendUserStatusesWithKeyAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* keys, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetFriendUserStatusesAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_byte__o* keys, int32_t timeOut, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetUserStatusesAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* users, NexPlugin_Detail_CppArray_o* keys, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetUserStatusesAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* users, System_Collections_Generic_List_byte__o* keys, int32_t timeOut, NexPlugin_Subscriber_GetSubscriberUserStatusInfoCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_UpdateUserStatusAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* param, int32_t isNotify, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__UpdateUserStatusAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_SubscriberUserStatusParam__o* param, bool isNotify, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetFriendUserStatusesCacheMode (intptr_t pNgsFacade, int32_t* result, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetFriendUserStatusesCacheMode (intptr_t pNgsFacade, bool* result, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetFriendUserStatusesCacheLastResult (intptr_t pNgsFacade, nn_Result_o* result, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetFriendUserStatusesCacheLastResult (intptr_t pNgsFacade, nn_Result_o* result, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetFriendUserStatuses (intptr_t pNgsFacade, intptr_t* infos, nn_Result_o* result, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetFriendUserStatuses (intptr_t pNgsFacade, System_Collections_Generic_List_SubscriberUserStatusInfo__o** infos, nn_Result_o* result, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__Subscriber_GetFriendUserStatusesWithKey (intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* users, intptr_t* infos, nn_Result_o* result, const MethodInfo* method_info);
bool NexPlugin_Detail_Subscriber__GetFriendUserStatuses (intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* users, System_Collections_Generic_List_SubscriberUserStatusInfo__o** infos, nn_Result_o* result, const MethodInfo* method_info);
void NexPlugin_Detail_Subscriber__Subscriber_DeleteSubscriberUserStatusInfo (intptr_t info, const MethodInfo* method_info);
void NexPlugin_Detail_Subscriber__Subscriber_PostContentResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Subscriber__Subscriber_GetContentResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Subscriber__Subscriber_GetContentsResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Subscriber__Subscriber_UserStatusInfoResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_Subscriber__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method_info);
