#pragma once

#include "il2cpp.h"

nn_Result_o nn_fs_Host__MountHost (System_String_o* name, System_String_o* rootPath, const MethodInfo* method_info);
nn_Result_o nn_fs_Host__MountHost (System_String_o* name, System_String_o* rootPath, nn_fs_Host_MountHostOption_o option, const MethodInfo* method_info);
nn_Result_o nn_fs_Host__MountHostRoot (const MethodInfo* method_info);
nn_Result_o nn_fs_Host__MountHostRoot (nn_fs_Host_MountHostOption_o option, const MethodInfo* method_info);
void nn_fs_Host__UnMountHostRoot (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultSaveDataHostFileSystemCorrupted (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultSaveDataHostEntryCorrupted (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultSaveDataHostFileDataCorrupted (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultSaveDataHostFileCorrupted (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultInvalidSaveDataHostHandle (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultHostFileSystemCorrupted (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultHostEntryCorrupted (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultHostFileDataCorrupted (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultHostFileCorrupted (const MethodInfo* method_info);
nn_ErrorRange_o nn_fs_Host__get_ResultInvalidHostHandle (const MethodInfo* method_info);
