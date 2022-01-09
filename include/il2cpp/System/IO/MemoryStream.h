#pragma once

#include "il2cpp.h"

void System_IO_MemoryStream___ctor (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_MemoryStream___ctor (System_IO_MemoryStream_o* __this, int32_t capacity, const MethodInfo* method_info);
void System_IO_MemoryStream___ctor (System_IO_MemoryStream_o* __this, System_Byte_array* buffer, const MethodInfo* method_info);
void System_IO_MemoryStream___ctor (System_IO_MemoryStream_o* __this, System_Byte_array* buffer, bool writable, const MethodInfo* method_info);
bool System_IO_MemoryStream__get_CanRead (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
bool System_IO_MemoryStream__get_CanSeek (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
bool System_IO_MemoryStream__get_CanWrite (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_MemoryStream__EnsureWriteable (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_MemoryStream__Dispose (System_IO_MemoryStream_o* __this, bool disposing, const MethodInfo* method_info);
bool System_IO_MemoryStream__EnsureCapacity (System_IO_MemoryStream_o* __this, int32_t value, const MethodInfo* method_info);
void System_IO_MemoryStream__Flush (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
System_Byte_array* System_IO_MemoryStream__GetBuffer (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
System_Byte_array* System_IO_MemoryStream__InternalGetBuffer (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
int32_t System_IO_MemoryStream__InternalGetPosition (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
int32_t System_IO_MemoryStream__InternalReadInt32 (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
int32_t System_IO_MemoryStream__InternalEmulateRead (System_IO_MemoryStream_o* __this, int32_t count, const MethodInfo* method_info);
int32_t System_IO_MemoryStream__get_Capacity (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_MemoryStream__set_Capacity (System_IO_MemoryStream_o* __this, int32_t value, const MethodInfo* method_info);
int64_t System_IO_MemoryStream__get_Length (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
int64_t System_IO_MemoryStream__get_Position (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_MemoryStream__set_Position (System_IO_MemoryStream_o* __this, int64_t value, const MethodInfo* method_info);
int32_t System_IO_MemoryStream__Read (System_IO_MemoryStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method_info);
int32_t System_IO_MemoryStream__ReadByte (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
int64_t System_IO_MemoryStream__Seek (System_IO_MemoryStream_o* __this, int64_t offset, int32_t loc, const MethodInfo* method_info);
System_Byte_array* System_IO_MemoryStream__ToArray (System_IO_MemoryStream_o* __this, const MethodInfo* method_info);
void System_IO_MemoryStream__Write (System_IO_MemoryStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method_info);
void System_IO_MemoryStream__WriteByte (System_IO_MemoryStream_o* __this, uint8_t value, const MethodInfo* method_info);
