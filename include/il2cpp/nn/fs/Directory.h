#pragma once

#include "il2cpp.h"

nn_Result_o nn_fs_Directory__Read (int64_t* outValue, nn_fs_DirectoryEntry_array* entryBuffer, nn_fs_DirectoryHandle_o handle, int64_t entryBufferCount, const MethodInfo* method);
nn_Result_o nn_fs_Directory__GetEntryCount (int64_t* outValue, nn_fs_DirectoryHandle_o handle, const MethodInfo* method);
void nn_fs_Directory__Close (nn_fs_DirectoryHandle_o handle, const MethodInfo* method);
nn_Result_o nn_fs_Directory__Create (System_String_o* path, const MethodInfo* method);
nn_Result_o nn_fs_Directory__Delete (System_String_o* path, const MethodInfo* method);
nn_Result_o nn_fs_Directory__DeleteRecursively (System_String_o* path, const MethodInfo* method);
nn_Result_o nn_fs_Directory__CleanRecursively (System_String_o* path, const MethodInfo* method);
nn_Result_o nn_fs_Directory__Rename (System_String_o* currentPath, System_String_o* newPath, const MethodInfo* method);
nn_Result_o nn_fs_Directory__Open (nn_fs_DirectoryHandle_o* outValue, System_String_o* path, int32_t mode, const MethodInfo* method);
