#pragma once

#include "il2cpp.h"

nn_Result_o nn_account_Account__GetUserCount (int32_t* pOutCount, const MethodInfo* method);
nn_Result_o nn_account_Account__GetUserExistence (bool* pOutExistence, nn_account_Uid_o user, const MethodInfo* method);
nn_Result_o nn_account_Account__ListAllUsers (int32_t* pOutActualLength, nn_account_Uid_array* outUsers, const MethodInfo* method);
nn_Result_o nn_account_Account__ListAllUsers (int32_t* pOutActualLength, nn_account_Uid_array* outUsers, int32_t arrayLength, const MethodInfo* method);
nn_Result_o nn_account_Account__ListOpenUsers (int32_t* pOutActualLength, nn_account_Uid_array* outUsers, const MethodInfo* method);
nn_Result_o nn_account_Account__ListOpenUsers (int32_t* pOutActualLength, nn_account_Uid_array* outUsers, int32_t arrayLength, const MethodInfo* method);
nn_Result_o nn_account_Account__GetLastOpenedUser (nn_account_Uid_o* pOutUser, const MethodInfo* method);
nn_Result_o nn_account_Account__GetNickname (nn_account_Nickname_o* pOut, nn_account_Uid_o user, const MethodInfo* method);
nn_Result_o nn_account_Account__LoadProfileImage (int64_t* pOutActualSize, System_Byte_array* outImage, nn_account_Uid_o user, const MethodInfo* method);
nn_Result_o nn_account_Account__LoadProfileImage (int64_t* pOutActualSize, System_Byte_array* outImage, int64_t bufferSize, nn_account_Uid_o user, const MethodInfo* method);
void nn_account_Account__Initialize (const MethodInfo* method);
nn_Result_o nn_account_Account__OpenUser (nn_account_UserHandle_o* pOutHandle, nn_account_Uid_o user, const MethodInfo* method);
bool nn_account_Account__TryOpenPreselectedUser (nn_account_UserHandle_o* pOutHandle, const MethodInfo* method);
nn_Result_o nn_account_Account__ListQualifiedUsers (int32_t* pOutActualLength, nn_account_Uid_array* outUsers, int32_t arrayLength, const MethodInfo* method);
void nn_account_Account__CloseUser (nn_account_UserHandle_o handle, const MethodInfo* method);
nn_Result_o nn_account_Account__GetUserId (nn_account_Uid_o* pOut, nn_account_UserHandle_o handle, const MethodInfo* method);
nn_Result_o nn_account_Account__StoreSaveDataThumbnailImage (nn_account_Uid_o user, System_Byte_array* imageBuffer, const MethodInfo* method);
nn_Result_o nn_account_Account__StoreSaveDataThumbnailImage (nn_account_Uid_o user, System_Byte_array* imageBuffer, int64_t imageBufferSize, const MethodInfo* method);
nn_Result_o nn_account_Account__DeleteSaveDataThumbnailImage (nn_account_Uid_o user, const MethodInfo* method);
nn_ErrorRange_o nn_account_Account__get_ResultCancelled (const MethodInfo* method);
nn_ErrorRange_o nn_account_Account__get_ResultCancelledByUser (const MethodInfo* method);
nn_ErrorRange_o nn_account_Account__get_ResultUserNotExist (const MethodInfo* method);
nn_Result_o nn_account_Account__ShowUserSelector (nn_account_Uid_o* pOut, nn_account_UserSelectionSettings_o arg, const MethodInfo* method);
nn_Result_o nn_account_Account__ShowUserSelector (nn_account_Uid_o* pOut, const MethodInfo* method);
nn_Result_o nn_account_Account__ShowUserCreator (const MethodInfo* method);
nn_Result_o nn_account_Account__ShowUserSelector (nn_account_Uid_o* pOut, nn_account_UserSelectionSettings_o arg, bool suspendUnityThreads, const MethodInfo* method);
nn_Result_o nn_account_Account__ShowUserSelector (nn_account_Uid_o* pOut, bool suspendUnityThreads, const MethodInfo* method);
nn_Result_o nn_account_Account__ShowUserCreator (bool suspendUnityThreads, const MethodInfo* method);
