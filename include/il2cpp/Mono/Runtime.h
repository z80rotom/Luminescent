#pragma once

#include "il2cpp.h"

void Mono_Runtime__mono_runtime_install_handlers (const MethodInfo* method_info);
void Mono_Runtime__InstallSignalHandlers (const MethodInfo* method_info);
void Mono_Runtime__mono_runtime_cleanup_handlers (const MethodInfo* method_info);
void Mono_Runtime__RemoveSignalHandlers (const MethodInfo* method_info);
System_String_o* Mono_Runtime__GetDisplayName (const MethodInfo* method_info);
System_String_o* Mono_Runtime__GetNativeStackTrace (System_Exception_o* exception, const MethodInfo* method_info);
bool Mono_Runtime__SetGCAllowSynchronousMajor (bool flag, const MethodInfo* method_info);
