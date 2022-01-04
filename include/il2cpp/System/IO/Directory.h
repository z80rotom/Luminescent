#pragma once

#include "il2cpp.h"

System_String_array* System_IO_Directory__GetFiles (System_String_o* path, const MethodInfo* method);
System_String_array* System_IO_Directory__InternalGetFiles (System_String_o* path, System_String_o* searchPattern, int32_t searchOption, const MethodInfo* method);
System_String_array* System_IO_Directory__GetDirectories (System_String_o* path, const MethodInfo* method);
System_String_array* System_IO_Directory__GetDirectories (System_String_o* path, System_String_o* searchPattern, const MethodInfo* method);
System_String_array* System_IO_Directory__InternalGetDirectories (System_String_o* path, System_String_o* searchPattern, int32_t searchOption, const MethodInfo* method);
System_String_array* System_IO_Directory__InternalGetFileDirectoryNames (System_String_o* path, System_String_o* userPathOriginal, System_String_o* searchPattern, bool includeFiles, bool includeDirs, int32_t searchOption, bool checkHost, const MethodInfo* method);
System_IO_DirectoryInfo_o* System_IO_Directory__CreateDirectory (System_String_o* path, const MethodInfo* method);
System_IO_DirectoryInfo_o* System_IO_Directory__CreateDirectoriesInternal (System_String_o* path, const MethodInfo* method);
void System_IO_Directory__Delete (System_String_o* path, const MethodInfo* method);
void System_IO_Directory__RecursiveDelete (System_String_o* path, const MethodInfo* method);
void System_IO_Directory__Delete (System_String_o* path, bool recursive, const MethodInfo* method);
bool System_IO_Directory__Exists (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Directory__GetCurrentDirectory (const MethodInfo* method);
System_String_o* System_IO_Directory__InsecureGetCurrentDirectory (const MethodInfo* method);
System_String_o* System_IO_Directory__GetDemandDir (System_String_o* fullPath, bool thisDirOnly, const MethodInfo* method);
