#pragma once

#include "il2cpp.h"

void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, intptr_t handle, int32_t access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper, const MethodInfo* method_info);
void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, System_String_o* path, int32_t mode, int32_t access, const MethodInfo* method_info);
void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, System_String_o* path, int32_t mode, int32_t access, int32_t share, const MethodInfo* method_info);
void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, System_String_o* path, int32_t mode, int32_t access, int32_t share, int32_t bufferSize, const MethodInfo* method_info);
void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, System_String_o* path, int32_t mode, int32_t access, int32_t share, int32_t bufferSize, bool useAsync, const MethodInfo* method_info);
void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, System_String_o* path, int32_t mode, int32_t access, int32_t share, int32_t bufferSize, int32_t options, const MethodInfo* method_info);
void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, System_String_o* path, int32_t mode, int32_t access, int32_t share, int32_t bufferSize, int32_t options, System_String_o* msgPath, bool bFromProxy, bool useLongPath, bool checkHost, const MethodInfo* method_info);
void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, System_String_o* path, int32_t mode, int32_t access, int32_t share, int32_t bufferSize, bool isAsync, bool anonymous, const MethodInfo* method_info);
void System_IO_FileStream___ctor (System_IO_FileStream_o* __this, System_String_o* path, int32_t mode, int32_t access, int32_t share, int32_t bufferSize, bool anonymous, int32_t options, const MethodInfo* method_info);
void System_IO_FileStream__Init (System_IO_FileStream_o* __this, Microsoft_Win32_SafeHandles_SafeFileHandle_o* safeHandle, int32_t access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper, const MethodInfo* method_info);
bool System_IO_FileStream__get_CanRead (System_IO_FileStream_o* __this, const MethodInfo* method_info);
bool System_IO_FileStream__get_CanWrite (System_IO_FileStream_o* __this, const MethodInfo* method_info);
bool System_IO_FileStream__get_CanSeek (System_IO_FileStream_o* __this, const MethodInfo* method_info);
int64_t System_IO_FileStream__get_Length (System_IO_FileStream_o* __this, const MethodInfo* method_info);
int64_t System_IO_FileStream__get_Position (System_IO_FileStream_o* __this, const MethodInfo* method_info);
void System_IO_FileStream__set_Position (System_IO_FileStream_o* __this, int64_t value, const MethodInfo* method_info);
void System_IO_FileStream__ExposeHandle (System_IO_FileStream_o* __this, const MethodInfo* method_info);
int32_t System_IO_FileStream__ReadByte (System_IO_FileStream_o* __this, const MethodInfo* method_info);
void System_IO_FileStream__WriteByte (System_IO_FileStream_o* __this, uint8_t value, const MethodInfo* method_info);
int32_t System_IO_FileStream__Read (System_IO_FileStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, const MethodInfo* method_info);
int32_t System_IO_FileStream__ReadInternal (System_IO_FileStream_o* __this, System_Byte_array* dest, int32_t offset, int32_t count, const MethodInfo* method_info);
System_IAsyncResult_o* System_IO_FileStream__BeginRead (System_IO_FileStream_o* __this, System_Byte_array* array, int32_t offset, int32_t numBytes, System_AsyncCallback_o* userCallback, Il2CppObject* stateObject, const MethodInfo* method_info);
int32_t System_IO_FileStream__EndRead (System_IO_FileStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method_info);
void System_IO_FileStream__Write (System_IO_FileStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, const MethodInfo* method_info);
void System_IO_FileStream__WriteInternal (System_IO_FileStream_o* __this, System_Byte_array* src, int32_t offset, int32_t count, const MethodInfo* method_info);
System_IAsyncResult_o* System_IO_FileStream__BeginWrite (System_IO_FileStream_o* __this, System_Byte_array* array, int32_t offset, int32_t numBytes, System_AsyncCallback_o* userCallback, Il2CppObject* stateObject, const MethodInfo* method_info);
void System_IO_FileStream__EndWrite (System_IO_FileStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method_info);
int64_t System_IO_FileStream__Seek (System_IO_FileStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method_info);
void System_IO_FileStream__Flush (System_IO_FileStream_o* __this, const MethodInfo* method_info);
void System_IO_FileStream__Finalize (System_IO_FileStream_o* __this, const MethodInfo* method_info);
void System_IO_FileStream__Dispose (System_IO_FileStream_o* __this, bool disposing, const MethodInfo* method_info);
int32_t System_IO_FileStream__ReadSegment (System_IO_FileStream_o* __this, System_Byte_array* dest, int32_t dest_offset, int32_t count, const MethodInfo* method_info);
int32_t System_IO_FileStream__WriteSegment (System_IO_FileStream_o* __this, System_Byte_array* src, int32_t src_offset, int32_t count, const MethodInfo* method_info);
void System_IO_FileStream__FlushBuffer (System_IO_FileStream_o* __this, const MethodInfo* method_info);
void System_IO_FileStream__FlushBufferIfDirty (System_IO_FileStream_o* __this, const MethodInfo* method_info);
void System_IO_FileStream__RefillBuffer (System_IO_FileStream_o* __this, const MethodInfo* method_info);
int32_t System_IO_FileStream__ReadData (System_IO_FileStream_o* __this, System_Runtime_InteropServices_SafeHandle_o* safeHandle, System_Byte_array* buf, int32_t offset, int32_t count, const MethodInfo* method_info);
void System_IO_FileStream__InitBuffer (System_IO_FileStream_o* __this, int32_t size, bool isZeroSize, const MethodInfo* method_info);
System_String_o* System_IO_FileStream__GetSecureFileName (System_IO_FileStream_o* __this, System_String_o* filename, const MethodInfo* method_info);
System_String_o* System_IO_FileStream__GetSecureFileName (System_IO_FileStream_o* __this, System_String_o* filename, bool full, const MethodInfo* method_info);
void System_IO_FileStream___cctor (const MethodInfo* method_info);
