#pragma once

#include "il2cpp.h"

nn_Result_o nn_fs_File__Read (nn_fs_FileHandle_o handle, int64_t offset, System_Byte_array* buffer, int64_t size, int32_t option, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Read (nn_fs_FileHandle_o handle, int64_t offset, System_Byte_array* buffer, int64_t size, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Read (int64_t* outValue, nn_fs_FileHandle_o handle, int64_t offset, System_Byte_array* buffer, int64_t size, int32_t option, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Read (int64_t* outValue, nn_fs_FileHandle_o handle, int64_t offset, System_Byte_array* buffer, int64_t size, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Write (nn_fs_FileHandle_o handle, int64_t offset, System_Byte_array* buffer, int64_t size, int32_t option, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Flush (nn_fs_FileHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_fs_File__SetSize (nn_fs_FileHandle_o handle, int64_t size, const MethodInfo* method_info);
nn_Result_o nn_fs_File__GetSize (int64_t* outValue, nn_fs_FileHandle_o handle, const MethodInfo* method_info);
int32_t nn_fs_File__GetOpenMode (nn_fs_FileHandle_o handle, const MethodInfo* method_info);
void nn_fs_File__Close (nn_fs_FileHandle_o handle, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Create (System_String_o* path, int64_t size, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Delete (System_String_o* path, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Rename (System_String_o* currentPath, System_String_o* newPath, const MethodInfo* method_info);
nn_Result_o nn_fs_File__Open (nn_fs_FileHandle_o* outValue, System_String_o* path, int32_t mode, const MethodInfo* method_info);
