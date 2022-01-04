#pragma once

#include "il2cpp.h"

void Mono_Runtime__mono_runtime_install_handlers (const MethodInfo* method);
void Mono_Runtime__InstallSignalHandlers (const MethodInfo* method);
void Mono_Runtime__mono_runtime_cleanup_handlers (const MethodInfo* method);
void Mono_Runtime__RemoveSignalHandlers (const MethodInfo* method);
System_String_o* Mono_Runtime__GetDisplayName (const MethodInfo* method);
System_String_o* Mono_Runtime__GetNativeStackTrace (System_Exception_o* exception, const MethodInfo* method);
bool Mono_Runtime__SetGCAllowSynchronousMajor (bool flag, const MethodInfo* method);
