#pragma once

#include "il2cpp.h"

nn_Result_o nn_account_NetworkServiceAccount__EnsureAvailable (nn_account_UserHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_account_NetworkServiceAccount__IsAvailable (bool* pOut, nn_account_UserHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_account_NetworkServiceAccount__GetId (nn_account_NetworkServiceAccountId_o* pOutId, nn_account_UserHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_account_NetworkServiceAccount__EnsurIdTokenCacheAsync (nn_account_AsyncContext_o* pOutContext, nn_account_UserHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_account_NetworkServiceAccount__EnsurIdTokenCacheAsync (intptr_t pOutContext, nn_account_UserHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_account_NetworkServiceAccount__LoadIdTokenCache (uint64_t* pOutActualSize, System_Byte_array* buffer, nn_account_UserHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_account_NetworkServiceAccount__LoadIdTokenCache (uint64_t* pOutActualSize, System_Byte_array* buffer, int32_t bufferSize, nn_account_UserHandle_o handle, const MethodInfo* method_info);
nn_ErrorRange_o nn_account_NetworkServiceAccount__get_ResultNetworkServiceAccountUnavailable (const MethodInfo* method_info);
nn_ErrorRange_o nn_account_NetworkServiceAccount__get_ResultTokenCacheUnavailable (const MethodInfo* method_info);
nn_ErrorRange_o nn_account_NetworkServiceAccount__get_ResultNetworkCommunicationError (const MethodInfo* method_info);
nn_ErrorRange_o nn_account_NetworkServiceAccount__get_ResultSslService (const MethodInfo* method_info);
