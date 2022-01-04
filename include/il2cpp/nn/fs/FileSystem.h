#pragma once

#include "il2cpp.h"

nn_Result_o nn_fs_FileSystem__GetEntryType (int32_t* outValue, System_String_o* path, const MethodInfo* method);
nn_Result_o nn_fs_FileSystem__GetFreeSpaceSize (int64_t* outValue, System_String_o* path, const MethodInfo* method);
void nn_fs_FileSystem__Unmount (System_String_o* name, const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultPathNotFound (const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultPathAlreadyExists (const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultTargetLocked (const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultDirectoryNotEmpty (const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultDirectoryStatusChanged (const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultUsableSpaceNotEnough (const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultUnsupportedSdkVersion (const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultMountNameAlreadyExists (const MethodInfo* method);
nn_ErrorRange_o nn_fs_FileSystem__get_ResultTargetNotFound (const MethodInfo* method);
nn_Result_o nn_fs_FileSystem__Commit (System_String_o* name, const MethodInfo* method);
nn_Result_o nn_fs_FileSystem__Commit (System_String_array* name, int32_t nameCount, const MethodInfo* method);
nn_Result_o nn_fs_FileSystem__Commit (System_String_array* name, const MethodInfo* method);
