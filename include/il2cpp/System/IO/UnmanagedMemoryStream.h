#pragma once

#include "il2cpp.h"

void System_IO_UnmanagedMemoryStream___ctor (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_UnmanagedMemoryStream___ctor (System_IO_UnmanagedMemoryStream_o* __this, uint8_t* pointer, int64_t length, int64_t capacity, int32_t access, bool skipSecurityCheck, const MethodInfo* method_info);
void System_IO_UnmanagedMemoryStream__Initialize (System_IO_UnmanagedMemoryStream_o* __this, uint8_t* pointer, int64_t length, int64_t capacity, int32_t access, bool skipSecurityCheck, const MethodInfo* method_info);
bool System_IO_UnmanagedMemoryStream__get_CanRead (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
bool System_IO_UnmanagedMemoryStream__get_CanSeek (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
bool System_IO_UnmanagedMemoryStream__get_CanWrite (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_UnmanagedMemoryStream__Dispose (System_IO_UnmanagedMemoryStream_o* __this, bool disposing, const MethodInfo* method_info);
void System_IO_UnmanagedMemoryStream__Flush (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
int64_t System_IO_UnmanagedMemoryStream__get_Length (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
int64_t System_IO_UnmanagedMemoryStream__get_Position (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_UnmanagedMemoryStream__set_Position (System_IO_UnmanagedMemoryStream_o* __this, int64_t value, const MethodInfo* method_info);
uint8_t* System_IO_UnmanagedMemoryStream__get_PositionPointer (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
int32_t System_IO_UnmanagedMemoryStream__Read (System_IO_UnmanagedMemoryStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method_info);
int32_t System_IO_UnmanagedMemoryStream__ReadByte (System_IO_UnmanagedMemoryStream_o* __this, const MethodInfo* method_info);
int64_t System_IO_UnmanagedMemoryStream__Seek (System_IO_UnmanagedMemoryStream_o* __this, int64_t offset, int32_t loc, const MethodInfo* method_info);
void System_IO_UnmanagedMemoryStream__Write (System_IO_UnmanagedMemoryStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method_info);
void System_IO_UnmanagedMemoryStream__WriteByte (System_IO_UnmanagedMemoryStream_o* __this, uint8_t value, const MethodInfo* method_info);
