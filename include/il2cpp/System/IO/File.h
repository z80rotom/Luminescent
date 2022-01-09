#pragma once

#include "il2cpp.h"

System_IO_FileStream_o* System_IO_File__Create (System_String_o* path, const MethodInfo* method_info);
System_IO_FileStream_o* System_IO_File__Create (System_String_o* path, int32_t bufferSize, const MethodInfo* method_info);
void System_IO_File__Delete (System_String_o* path, const MethodInfo* method_info);
bool System_IO_File__Exists (System_String_o* path, const MethodInfo* method_info);
System_DateTime_o System_IO_File__GetLastWriteTime (System_String_o* path, const MethodInfo* method_info);
System_IO_FileStream_o* System_IO_File__OpenRead (System_String_o* path, const MethodInfo* method_info);
System_Byte_array* System_IO_File__ReadAllBytes (System_String_o* path, const MethodInfo* method_info);
System_DateTime_o System_IO_File__get_DefaultLocalFileTime (const MethodInfo* method_info);
int32_t System_IO_File__FillAttributeInfo (System_String_o* path, System_IO_MonoIOStat_o* data, bool tryagain, bool returnErrorOnNotFound, const MethodInfo* method_info);
