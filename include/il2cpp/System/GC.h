#pragma once

#include "il2cpp.h"

int32_t System_GC__GetMaxGeneration (const MethodInfo* method);
void System_GC__InternalCollect (int32_t generation, const MethodInfo* method);
void System_GC__register_ephemeron_array (System_Runtime_CompilerServices_Ephemeron_array* array, const MethodInfo* method);
Il2CppObject* System_GC__get_ephemeron_tombstone (const MethodInfo* method);
void System_GC__Collect (const MethodInfo* method);
void System_GC__KeepAlive (Il2CppObject* obj, const MethodInfo* method);
int32_t System_GC__get_MaxGeneration (const MethodInfo* method);
void System_GC___SuppressFinalize (Il2CppObject* o, const MethodInfo* method);
void System_GC__SuppressFinalize (Il2CppObject* obj, const MethodInfo* method);
void System_GC___ReRegisterForFinalize (Il2CppObject* o, const MethodInfo* method);
void System_GC__ReRegisterForFinalize (Il2CppObject* obj, const MethodInfo* method);
void System_GC___cctor (const MethodInfo* method);
