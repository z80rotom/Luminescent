#pragma once

#include "il2cpp.h"

void System_IO_Stream_NullStream___ctor (System_IO_Stream_NullStream_o* __this, const MethodInfo* method);
bool System_IO_Stream_NullStream__get_CanRead (System_IO_Stream_NullStream_o* __this, const MethodInfo* method);
bool System_IO_Stream_NullStream__get_CanWrite (System_IO_Stream_NullStream_o* __this, const MethodInfo* method);
bool System_IO_Stream_NullStream__get_CanSeek (System_IO_Stream_NullStream_o* __this, const MethodInfo* method);
int64_t System_IO_Stream_NullStream__get_Length (System_IO_Stream_NullStream_o* __this, const MethodInfo* method);
int64_t System_IO_Stream_NullStream__get_Position (System_IO_Stream_NullStream_o* __this, const MethodInfo* method);
void System_IO_Stream_NullStream__set_Position (System_IO_Stream_NullStream_o* __this, int64_t value, const MethodInfo* method);
void System_IO_Stream_NullStream__Dispose (System_IO_Stream_NullStream_o* __this, bool disposing, const MethodInfo* method);
void System_IO_Stream_NullStream__Flush (System_IO_Stream_NullStream_o* __this, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream_NullStream__BeginRead (System_IO_Stream_NullStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
int32_t System_IO_Stream_NullStream__EndRead (System_IO_Stream_NullStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream_NullStream__BeginWrite (System_IO_Stream_NullStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
void System_IO_Stream_NullStream__EndWrite (System_IO_Stream_NullStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
int32_t System_IO_Stream_NullStream__Read (System_IO_Stream_NullStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
int32_t System_IO_Stream_NullStream__ReadByte (System_IO_Stream_NullStream_o* __this, const MethodInfo* method);
void System_IO_Stream_NullStream__Write (System_IO_Stream_NullStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
void System_IO_Stream_NullStream__WriteByte (System_IO_Stream_NullStream_o* __this, uint8_t value, const MethodInfo* method);
int64_t System_IO_Stream_NullStream__Seek (System_IO_Stream_NullStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
