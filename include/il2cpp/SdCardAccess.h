#pragma once

#include "il2cpp.h"

bool SdCardAccess__FileExistsNoMount (SdCardAccess_o* __this, System_String_o* mountName, System_String_o* filePath, const MethodInfo* method);
bool SdCardAccess__FileExists (SdCardAccess_o* __this, System_String_o* mountName, System_String_o* fileName, const MethodInfo* method);
bool SdCardAccess__Mount (SdCardAccess_o* __this, System_String_o* mountName, const MethodInfo* method);
void SdCardAccess__Unmount (SdCardAccess_o* __this, System_String_o* mountName, const MethodInfo* method);
bool SdCardAccess__DirectoryExists (SdCardAccess_o* __this, System_String_o* dirPath, const MethodInfo* method);
bool SdCardAccess__LoadFile (SdCardAccess_o* __this, System_Byte_array** buffer, System_String_o* mountName, System_String_o* path, const MethodInfo* method);
void SdCardAccess___ctor (SdCardAccess_o* __this, const MethodInfo* method);
