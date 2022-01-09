#pragma once

#include "il2cpp.h"

System_String_o* Microsoft_Win32_UnixRegistryApi__ToUnix (System_String_o* keyname, const MethodInfo* method_info);
bool Microsoft_Win32_UnixRegistryApi__IsWellKnownKey (System_String_o* parentKeyName, System_String_o* keyname, const MethodInfo* method_info);
Microsoft_Win32_RegistryKey_o* Microsoft_Win32_UnixRegistryApi__OpenSubKey (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* keyname, bool writable, const MethodInfo* method_info);
void Microsoft_Win32_UnixRegistryApi__Flush (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method_info);
void Microsoft_Win32_UnixRegistryApi__Close (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method_info);
Il2CppObject* Microsoft_Win32_UnixRegistryApi__GetValue (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* name, Il2CppObject* default_value, int32_t options, const MethodInfo* method_info);
System_String_array* Microsoft_Win32_UnixRegistryApi__GetSubKeyNames (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method_info);
System_String_o* Microsoft_Win32_UnixRegistryApi__ToString (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method_info);
Microsoft_Win32_RegistryKey_o* Microsoft_Win32_UnixRegistryApi__CreateSubKey (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* keyname, bool writable, const MethodInfo* method_info);
Microsoft_Win32_RegistryKey_o* Microsoft_Win32_UnixRegistryApi__CreateSubKey (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* keyname, bool writable, bool is_volatile, const MethodInfo* method_info);
intptr_t Microsoft_Win32_UnixRegistryApi__GetHandle (Microsoft_Win32_UnixRegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* key, const MethodInfo* method_info);
void Microsoft_Win32_UnixRegistryApi___ctor (Microsoft_Win32_UnixRegistryApi_o* __this, const MethodInfo* method_info);
