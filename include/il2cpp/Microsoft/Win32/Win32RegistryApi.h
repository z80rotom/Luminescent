#pragma once

#include "il2cpp.h"

int32_t Microsoft_Win32_Win32RegistryApi__RegCloseKey (intptr_t keyHandle, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__RegFlushKey (intptr_t keyHandle, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__RegOpenKeyEx (intptr_t keyBase, System_String_o* keyName, intptr_t reserved, int32_t access, intptr_t* keyHandle, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__RegEnumKeyEx (intptr_t keyHandle, int32_t dwIndex, uint16_t* lpName, int32_t* lpcbName, System_Int32_array* lpReserved, System_Text_StringBuilder_o* lpClass, System_Int32_array* lpcbClass, System_Int64_array* lpftLastWriteTime, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__RegQueryValueEx (intptr_t keyBase, System_String_o* valueName, intptr_t reserved, int32_t* type, intptr_t zero, int32_t* dataSize, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__RegQueryValueEx (intptr_t keyBase, System_String_o* valueName, intptr_t reserved, int32_t* type, System_Byte_array* data, int32_t* dataSize, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__RegQueryValueEx (intptr_t keyBase, System_String_o* valueName, intptr_t reserved, int32_t* type, int32_t* data, int32_t* dataSize, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__RegQueryValueEx (intptr_t keyBase, System_String_o* valueName, intptr_t reserved, int32_t* type, int64_t* data, int32_t* dataSize, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__RegQueryInfoKey (intptr_t hKey, System_Text_StringBuilder_o* lpClass, System_Int32_array* lpcbClass, intptr_t lpReserved_MustBeZero, int32_t* lpcSubKeys, System_Int32_array* lpcbMaxSubKeyLen, System_Int32_array* lpcbMaxClassLen, int32_t* lpcValues, System_Int32_array* lpcbMaxValueNameLen, System_Int32_array* lpcbMaxValueLen, System_Int32_array* lpcbSecurityDescriptor, System_Int32_array* lpftLastWriteTime, const MethodInfo* method);
intptr_t Microsoft_Win32_Win32RegistryApi__GetHandle (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* key, const MethodInfo* method);
bool Microsoft_Win32_Win32RegistryApi__IsHandleValid (Microsoft_Win32_RegistryKey_o* key, const MethodInfo* method);
Il2CppObject* Microsoft_Win32_Win32RegistryApi__GetValue (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* name, Il2CppObject* defaultValue, int32_t options, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__GetBinaryValue (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* name, int32_t type, System_Byte_array** data, int32_t size, const MethodInfo* method);
int32_t Microsoft_Win32_Win32RegistryApi__SubKeyCount (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method);
Microsoft_Win32_RegistryKey_o* Microsoft_Win32_Win32RegistryApi__OpenSubKey (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, System_String_o* keyName, bool writable, const MethodInfo* method);
void Microsoft_Win32_Win32RegistryApi__Flush (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method);
void Microsoft_Win32_Win32RegistryApi__Close (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method);
System_String_array* Microsoft_Win32_Win32RegistryApi__GetSubKeyNames (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method);
void Microsoft_Win32_Win32RegistryApi__GenerateException (Microsoft_Win32_Win32RegistryApi_o* __this, int32_t errorCode, const MethodInfo* method);
System_String_o* Microsoft_Win32_Win32RegistryApi__ToString (Microsoft_Win32_Win32RegistryApi_o* __this, Microsoft_Win32_RegistryKey_o* rkey, const MethodInfo* method);
System_String_o* Microsoft_Win32_Win32RegistryApi__CombineName (Microsoft_Win32_RegistryKey_o* rkey, System_String_o* localName, const MethodInfo* method);
void Microsoft_Win32_Win32RegistryApi___ctor (Microsoft_Win32_Win32RegistryApi_o* __this, const MethodInfo* method);
