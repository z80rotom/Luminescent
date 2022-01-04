#pragma once

#include "il2cpp.h"

nn_ErrorRange_o nn_fs_Rom__get_ResultRomHostFileSystemCorrupted (const MethodInfo* method);
nn_ErrorRange_o nn_fs_Rom__get_ResultRomHostEntryCorrupted (const MethodInfo* method);
nn_ErrorRange_o nn_fs_Rom__get_ResultRomHostFileDataCorrupted (const MethodInfo* method);
nn_ErrorRange_o nn_fs_Rom__get_ResultRomHostFileCorrupted (const MethodInfo* method);
nn_ErrorRange_o nn_fs_Rom__get_ResultInvalidRomHostHandle (const MethodInfo* method);
nn_Result_o nn_fs_Rom__QueryMountRomCacheSize (int64_t* pOutValue, const MethodInfo* method);
nn_Result_o nn_fs_Rom__MountRom (System_String_o* name, System_Byte_array* pFileSystemCacheBuffer, int64_t fileSystemCacheBufferSize, const MethodInfo* method);
bool nn_fs_Rom__CanMountRomForDebug (const MethodInfo* method);
