#pragma once

#include "il2cpp.h"

System_String_o* System_IO_Path__ChangeExtension (System_String_o* path, System_String_o* extension, const MethodInfo* method);
System_String_o* System_IO_Path__Combine (System_String_o* path1, System_String_o* path2, const MethodInfo* method);
System_String_o* System_IO_Path__CleanPath (System_String_o* s, const MethodInfo* method);
System_String_o* System_IO_Path__GetDirectoryName (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Path__GetFileName (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Path__GetFileNameWithoutExtension (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Path__GetFullPath (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Path__GetFullPathInternal (System_String_o* path, const MethodInfo* method);
int32_t System_IO_Path__GetFullPathName (System_String_o* path, int32_t numBufferChars, System_Text_StringBuilder_o* buffer, intptr_t* lpFilePartOrNull, const MethodInfo* method);
System_String_o* System_IO_Path__GetFullPathName (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Path__WindowsDriveAdjustment (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Path__InsecureGetFullPath (System_String_o* path, const MethodInfo* method);
bool System_IO_Path__IsDirectorySeparator (uint16_t c, const MethodInfo* method);
System_String_o* System_IO_Path__GetPathRoot (System_String_o* path, const MethodInfo* method);
bool System_IO_Path__IsPathRooted (System_String_o* path, const MethodInfo* method);
System_Char_array* System_IO_Path__GetInvalidPathChars (const MethodInfo* method);
int32_t System_IO_Path__findExtension (System_String_o* path, const MethodInfo* method);
void System_IO_Path___cctor (const MethodInfo* method);
System_String_o* System_IO_Path__GetServerAndShare (System_String_o* path, const MethodInfo* method);
bool System_IO_Path__SameRoot (System_String_o* root, System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Path__CanonicalizePath (System_String_o* path, const MethodInfo* method);
System_String_o* System_IO_Path__Combine (System_String_array* paths, const MethodInfo* method);
System_String_o* System_IO_Path__Combine (System_String_o* path1, System_String_o* path2, System_String_o* path3, const MethodInfo* method);
void System_IO_Path__Validate (System_String_o* path, const MethodInfo* method);
void System_IO_Path__Validate (System_String_o* path, System_String_o* parameterName, const MethodInfo* method);
System_String_o* System_IO_Path__get_DirectorySeparatorCharAsString (const MethodInfo* method);
System_Char_array* System_IO_Path__get_TrimEndChars (const MethodInfo* method);
void System_IO_Path__CheckSearchPattern (System_String_o* searchPattern, const MethodInfo* method);
void System_IO_Path__CheckInvalidPathChars (System_String_o* path, bool checkAdditional, const MethodInfo* method);
System_String_o* System_IO_Path__InternalCombine (System_String_o* path1, System_String_o* path2, const MethodInfo* method);
