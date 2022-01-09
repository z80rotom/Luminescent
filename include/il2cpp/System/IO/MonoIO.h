#pragma once

#include "il2cpp.h"

System_Exception_o* System_IO_MonoIO__GetException (int32_t error, const MethodInfo* method_info);
System_Exception_o* System_IO_MonoIO__GetException (System_String_o* path, int32_t error, const MethodInfo* method_info);
bool System_IO_MonoIO__CreateDirectory (uint16_t* path, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__CreateDirectory (System_String_o* path, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__RemoveDirectory (uint16_t* path, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__RemoveDirectory (System_String_o* path, int32_t* error, const MethodInfo* method_info);
System_String_o* System_IO_MonoIO__GetCurrentDirectory (int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__DeleteFile (uint16_t* path, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__DeleteFile (System_String_o* path, int32_t* error, const MethodInfo* method_info);
int32_t System_IO_MonoIO__GetFileAttributes (uint16_t* path, int32_t* error, const MethodInfo* method_info);
int32_t System_IO_MonoIO__GetFileAttributes (System_String_o* path, int32_t* error, const MethodInfo* method_info);
int32_t System_IO_MonoIO__GetFileType (intptr_t handle, int32_t* error, const MethodInfo* method_info);
int32_t System_IO_MonoIO__GetFileType (System_Runtime_InteropServices_SafeHandle_o* safeHandle, int32_t* error, const MethodInfo* method_info);
intptr_t System_IO_MonoIO__FindFirstFile (uint16_t* pathWithPattern, System_String_o** fileName, int32_t* fileAttr, int32_t* error, const MethodInfo* method_info);
intptr_t System_IO_MonoIO__FindFirstFile (System_String_o* pathWithPattern, System_String_o** fileName, int32_t* fileAttr, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__FindNextFile (intptr_t hnd, System_String_o** fileName, int32_t* fileAttr, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__FindCloseFile (intptr_t hnd, const MethodInfo* method_info);
bool System_IO_MonoIO__ExistsFile (System_String_o* path, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__ExistsDirectory (System_String_o* path, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__ExistsSymlink (System_String_o* path, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__GetFileStat (uint16_t* path, System_IO_MonoIOStat_o* stat, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__GetFileStat (System_String_o* path, System_IO_MonoIOStat_o* stat, int32_t* error, const MethodInfo* method_info);
intptr_t System_IO_MonoIO__Open (uint16_t* filename, int32_t mode, int32_t access, int32_t share, int32_t options, int32_t* error, const MethodInfo* method_info);
intptr_t System_IO_MonoIO__Open (System_String_o* filename, int32_t mode, int32_t access, int32_t share, int32_t options, int32_t* error, const MethodInfo* method_info);
bool System_IO_MonoIO__Close (intptr_t handle, int32_t* error, const MethodInfo* method_info);
int32_t System_IO_MonoIO__Read (intptr_t handle, System_Byte_array* dest, int32_t dest_offset, int32_t count, int32_t* error, const MethodInfo* method_info);
int32_t System_IO_MonoIO__Read (System_Runtime_InteropServices_SafeHandle_o* safeHandle, System_Byte_array* dest, int32_t dest_offset, int32_t count, int32_t* error, const MethodInfo* method_info);
int32_t System_IO_MonoIO__Write (intptr_t handle, System_Byte_array* src, int32_t src_offset, int32_t count, int32_t* error, const MethodInfo* method_info);
int32_t System_IO_MonoIO__Write (System_Runtime_InteropServices_SafeHandle_o* safeHandle, System_Byte_array* src, int32_t src_offset, int32_t count, int32_t* error, const MethodInfo* method_info);
int64_t System_IO_MonoIO__Seek (intptr_t handle, int64_t offset, int32_t origin, int32_t* error, const MethodInfo* method_info);
int64_t System_IO_MonoIO__Seek (System_Runtime_InteropServices_SafeHandle_o* safeHandle, int64_t offset, int32_t origin, int32_t* error, const MethodInfo* method_info);
int64_t System_IO_MonoIO__GetLength (intptr_t handle, int32_t* error, const MethodInfo* method_info);
int64_t System_IO_MonoIO__GetLength (System_Runtime_InteropServices_SafeHandle_o* safeHandle, int32_t* error, const MethodInfo* method_info);
intptr_t System_IO_MonoIO__get_ConsoleOutput (const MethodInfo* method_info);
intptr_t System_IO_MonoIO__get_ConsoleInput (const MethodInfo* method_info);
intptr_t System_IO_MonoIO__get_ConsoleError (const MethodInfo* method_info);
uint16_t System_IO_MonoIO__get_VolumeSeparatorChar (const MethodInfo* method_info);
uint16_t System_IO_MonoIO__get_DirectorySeparatorChar (const MethodInfo* method_info);
uint16_t System_IO_MonoIO__get_AltDirectorySeparatorChar (const MethodInfo* method_info);
uint16_t System_IO_MonoIO__get_PathSeparator (const MethodInfo* method_info);
void System_IO_MonoIO__DumpHandles (const MethodInfo* method_info);
bool System_IO_MonoIO__RemapPath (System_String_o* path, System_String_o** newPath, const MethodInfo* method_info);
void System_IO_MonoIO___cctor (const MethodInfo* method_info);
