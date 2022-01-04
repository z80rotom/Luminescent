#pragma once

#include "il2cpp.h"

nn_ErrorRange_o nn_fs_SaveData__get_ResultUsableSpaceNotEnoughForSaveData (const MethodInfo* method);
nn_Result_o nn_fs_SaveData__Ensure (nn_account_Uid_o user, const MethodInfo* method);
nn_Result_o nn_fs_SaveData__Mount (System_String_o* name, nn_account_Uid_o user, const MethodInfo* method);
nn_Result_o nn_fs_SaveData__MountSaveDataReadOnly (System_String_o* name, uint64_t applicationId, nn_account_Uid_o user, const MethodInfo* method);
bool nn_fs_SaveData__IsExisting (nn_account_Uid_o user, const MethodInfo* method);
bool nn_fs_SaveData__IsExisting (uint64_t applicationId, nn_account_Uid_o user, const MethodInfo* method);
void nn_fs_SaveData__SetRootPath (System_String_o* rootPath, const MethodInfo* method);
nn_Result_o nn_fs_SaveData__MountForDebug (System_String_o* name, const MethodInfo* method);
