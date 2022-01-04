#pragma once

#include "il2cpp.h"

void Microsoft_Win32_KeyHandler___cctor (const MethodInfo* method);
void Microsoft_Win32_KeyHandler___ctor (Microsoft_Win32_KeyHandler_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* basedir, const MethodInfo* method);
void Microsoft_Win32_KeyHandler___ctor (Microsoft_Win32_KeyHandler_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* basedir, bool is_volatile, const MethodInfo* method);
void Microsoft_Win32_KeyHandler__Load (Microsoft_Win32_KeyHandler_o* __this, const MethodInfo* method);
void Microsoft_Win32_KeyHandler__LoadKey (Microsoft_Win32_KeyHandler_o* __this, System_Security_SecurityElement_o* se, const MethodInfo* method);
Microsoft_Win32_RegistryKey_o* Microsoft_Win32_KeyHandler__Ensure (Microsoft_Win32_KeyHandler_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* extra, bool writable, bool is_volatile, const MethodInfo* method);
Microsoft_Win32_RegistryKey_o* Microsoft_Win32_KeyHandler__Probe (Microsoft_Win32_KeyHandler_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* extra, bool writable, const MethodInfo* method);
System_String_o* Microsoft_Win32_KeyHandler__CombineName (Microsoft_Win32_RegistryKey_o* rkey, System_String_o* extra, const MethodInfo* method);
int64_t Microsoft_Win32_KeyHandler__GetSystemBootTime (const MethodInfo* method);
int64_t Microsoft_Win32_KeyHandler__GetRegisteredBootTime (System_String_o* path, const MethodInfo* method);
void Microsoft_Win32_KeyHandler__SaveRegisteredBootTime (System_String_o* path, int64_t btime, const MethodInfo* method);
void Microsoft_Win32_KeyHandler__CleanVolatileKeys (const MethodInfo* method);
bool Microsoft_Win32_KeyHandler__VolatileKeyExists (System_String_o* dir, const MethodInfo* method);
System_String_o* Microsoft_Win32_KeyHandler__GetVolatileDir (System_String_o* dir, const MethodInfo* method);
Microsoft_Win32_KeyHandler_o* Microsoft_Win32_KeyHandler__Lookup (Microsoft_Win32_RegistryKey_o* rkey, bool createNonExisting, const MethodInfo* method);
System_String_o* Microsoft_Win32_KeyHandler__GetRootFromDir (System_String_o* dir, const MethodInfo* method);
void Microsoft_Win32_KeyHandler__Drop (Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method);
Il2CppObject* Microsoft_Win32_KeyHandler__GetValue (Microsoft_Win32_KeyHandler_o* __this, System_String_o* name, int32_t options, const MethodInfo* method);
System_String_array* Microsoft_Win32_KeyHandler__GetSubKeyNames (Microsoft_Win32_KeyHandler_o* __this, const MethodInfo* method);
void Microsoft_Win32_KeyHandler__Flush (Microsoft_Win32_KeyHandler_o* __this, const MethodInfo* method);
bool Microsoft_Win32_KeyHandler__ValueExists (Microsoft_Win32_KeyHandler_o* __this, System_String_o* name, const MethodInfo* method);
bool Microsoft_Win32_KeyHandler__get_IsMarkedForDeletion (Microsoft_Win32_KeyHandler_o* __this, const MethodInfo* method);
void Microsoft_Win32_KeyHandler__Finalize (Microsoft_Win32_KeyHandler_o* __this, const MethodInfo* method);
void Microsoft_Win32_KeyHandler__Save (Microsoft_Win32_KeyHandler_o* __this, const MethodInfo* method);
System_String_o* Microsoft_Win32_KeyHandler__get_UserStore (const MethodInfo* method);
System_String_o* Microsoft_Win32_KeyHandler__get_MachineStore (const MethodInfo* method);
