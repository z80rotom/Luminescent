#pragma once

#include "il2cpp.h"

void nn_friends_NotificationQueue___ctor (nn_friends_NotificationQueue_o* __this, const MethodInfo* method_info);
void nn_friends_NotificationQueue__Finalize (nn_friends_NotificationQueue_o* __this, const MethodInfo* method_info);
void nn_friends_NotificationQueue__Dispose (nn_friends_NotificationQueue_o* __this, const MethodInfo* method_info);
void nn_friends_NotificationQueue__Dispose (nn_friends_NotificationQueue_o* __this, bool disposing, const MethodInfo* method_info);
nn_Result_o nn_friends_NotificationQueue__Initialize (nn_friends_NotificationQueue_o* __this, nn_account_Uid_o uid, const MethodInfo* method_info);
nn_Result_o nn_friends_NotificationQueue__Initialize (nn_friends_NotificationQueue_o* __this, const MethodInfo* method_info);
void nn_friends_NotificationQueue__Terminate (nn_friends_NotificationQueue_o* __this, const MethodInfo* method_info);
nn_account_Uid_o nn_friends_NotificationQueue__GetUid (nn_friends_NotificationQueue_o* __this, const MethodInfo* method_info);
nn_Result_o nn_friends_NotificationQueue__Clear (nn_friends_NotificationQueue_o* __this, const MethodInfo* method_info);
nn_Result_o nn_friends_NotificationQueue__Pop (nn_friends_NotificationQueue_o* __this, nn_friends_NotificationInfo_o* outInfo, const MethodInfo* method_info);
bool nn_friends_NotificationQueue__Exists (nn_friends_NotificationQueue_o* __this, const MethodInfo* method_info);
intptr_t nn_friends_NotificationQueue__Create (const MethodInfo* method_info);
void nn_friends_NotificationQueue__Destroy (intptr_t pQueue, const MethodInfo* method_info);
nn_Result_o nn_friends_NotificationQueue__Initialize (intptr_t pQueue, nn_account_Uid_o uid, const MethodInfo* method_info);
nn_Result_o nn_friends_NotificationQueue__Initialize (intptr_t pQueue, const MethodInfo* method_info);
void nn_friends_NotificationQueue__Terminate (intptr_t pQueue, const MethodInfo* method_info);
nn_account_Uid_o nn_friends_NotificationQueue__GetUid (intptr_t pQueue, const MethodInfo* method_info);
nn_Result_o nn_friends_NotificationQueue__Clear (intptr_t pQueue, const MethodInfo* method_info);
nn_Result_o nn_friends_NotificationQueue__Pop (intptr_t pQueue, nn_friends_NotificationInfo_o* outInfo, const MethodInfo* method_info);
bool nn_friends_NotificationQueue__Exists (intptr_t pQueue, const MethodInfo* method_info);
