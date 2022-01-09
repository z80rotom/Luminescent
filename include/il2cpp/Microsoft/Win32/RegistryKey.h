#pragma once

#include "il2cpp.h"

void Microsoft_Win32_RegistryKey___cctor (const MethodInfo* method_info);
void Microsoft_Win32_RegistryKey___ctor (Microsoft_Win32_RegistryKey_o* __this, int32_t hiveId, const MethodInfo* method_info);
void Microsoft_Win32_RegistryKey___ctor (Microsoft_Win32_RegistryKey_o* __this, int32_t hiveId, intptr_t keyHandle, bool remoteRoot, const MethodInfo* method_info);
void Microsoft_Win32_RegistryKey___ctor (Microsoft_Win32_RegistryKey_o* __this, Il2CppObject* data, System_String_o* keyName, bool writable, const MethodInfo* method_info);
bool Microsoft_Win32_RegistryKey__IsEquals (Microsoft_Win32_RegistryKey_o* a, Microsoft_Win32_RegistryKey_o* b, const MethodInfo* method_info);
void Microsoft_Win32_RegistryKey__Dispose (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
System_String_o* Microsoft_Win32_RegistryKey__get_Name (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
void Microsoft_Win32_RegistryKey__Flush (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
void Microsoft_Win32_RegistryKey__Close (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
Microsoft_Win32_SafeHandles_SafeRegistryHandle_o* Microsoft_Win32_RegistryKey__get_Handle (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
Microsoft_Win32_RegistryKey_o* Microsoft_Win32_RegistryKey__OpenSubKey (Microsoft_Win32_RegistryKey_o* __this, System_String_o* name, const MethodInfo* method_info);
Microsoft_Win32_RegistryKey_o* Microsoft_Win32_RegistryKey__OpenSubKey (Microsoft_Win32_RegistryKey_o* __this, System_String_o* name, bool writable, const MethodInfo* method_info);
Il2CppObject* Microsoft_Win32_RegistryKey__GetValue (Microsoft_Win32_RegistryKey_o* __this, System_String_o* name, const MethodInfo* method_info);
Il2CppObject* Microsoft_Win32_RegistryKey__GetValue (Microsoft_Win32_RegistryKey_o* __this, System_String_o* name, Il2CppObject* defaultValue, const MethodInfo* method_info);
System_String_array* Microsoft_Win32_RegistryKey__GetSubKeyNames (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
System_String_o* Microsoft_Win32_RegistryKey__ToString (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
bool Microsoft_Win32_RegistryKey__get_IsRoot (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
int32_t Microsoft_Win32_RegistryKey__get_Hive (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
Il2CppObject* Microsoft_Win32_RegistryKey__get_InternalHandle (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
void Microsoft_Win32_RegistryKey__AssertKeyStillValid (Microsoft_Win32_RegistryKey_o* __this, const MethodInfo* method_info);
void Microsoft_Win32_RegistryKey__AssertKeyNameLength (Microsoft_Win32_RegistryKey_o* __this, System_String_o* name, const MethodInfo* method_info);
System_String_o* Microsoft_Win32_RegistryKey__DecodeString (System_Byte_array* data, const MethodInfo* method_info);
System_IO_IOException_o* Microsoft_Win32_RegistryKey__CreateMarkedForDeletionException (const MethodInfo* method_info);
System_String_o* Microsoft_Win32_RegistryKey__GetHiveName (int32_t hive, const MethodInfo* method_info);
