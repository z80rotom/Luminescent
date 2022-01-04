#pragma once

#include "il2cpp.h"

void System_IO_Stream_SynchronousAsyncResult___ctor (System_IO_Stream_SynchronousAsyncResult_o* __this, int32_t bytesRead, Il2CppObject* asyncStateObject, const MethodInfo* method);
void System_IO_Stream_SynchronousAsyncResult___ctor (System_IO_Stream_SynchronousAsyncResult_o* __this, Il2CppObject* asyncStateObject, const MethodInfo* method);
void System_IO_Stream_SynchronousAsyncResult___ctor (System_IO_Stream_SynchronousAsyncResult_o* __this, System_Exception_o* ex, Il2CppObject* asyncStateObject, bool isWrite, const MethodInfo* method);
System_Threading_WaitHandle_o* System_IO_Stream_SynchronousAsyncResult__get_AsyncWaitHandle (System_IO_Stream_SynchronousAsyncResult_o* __this, const MethodInfo* method);
Il2CppObject* System_IO_Stream_SynchronousAsyncResult__get_AsyncState (System_IO_Stream_SynchronousAsyncResult_o* __this, const MethodInfo* method);
void System_IO_Stream_SynchronousAsyncResult__ThrowIfError (System_IO_Stream_SynchronousAsyncResult_o* __this, const MethodInfo* method);
int32_t System_IO_Stream_SynchronousAsyncResult__EndRead (System_IAsyncResult_o* asyncResult, const MethodInfo* method);
void System_IO_Stream_SynchronousAsyncResult__EndWrite (System_IAsyncResult_o* asyncResult, const MethodInfo* method);
