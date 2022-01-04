#pragma once

#include "il2cpp.h"

void System_IO_FileStream_WriteDelegate___ctor (System_IO_FileStream_WriteDelegate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
void System_IO_FileStream_WriteDelegate__Invoke (System_IO_FileStream_WriteDelegate_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
System_IAsyncResult_o* System_IO_FileStream_WriteDelegate__BeginInvoke (System_IO_FileStream_WriteDelegate_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
void System_IO_FileStream_WriteDelegate__EndInvoke (System_IO_FileStream_WriteDelegate_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
