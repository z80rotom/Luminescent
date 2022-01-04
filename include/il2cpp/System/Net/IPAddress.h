#pragma once

#include "il2cpp.h"

void System_Net_IPAddress___ctor (System_Net_IPAddress_o* __this, int64_t newAddress, const MethodInfo* method);
void System_Net_IPAddress___ctor (System_Net_IPAddress_o* __this, System_Byte_array* address, int64_t scopeid, const MethodInfo* method);
void System_Net_IPAddress___ctor (System_Net_IPAddress_o* __this, System_UInt16_array* address, uint32_t scopeid, const MethodInfo* method);
void System_Net_IPAddress___ctor (System_Net_IPAddress_o* __this, System_Byte_array* address, const MethodInfo* method);
void System_Net_IPAddress___ctor (System_Net_IPAddress_o* __this, int32_t newAddress, const MethodInfo* method);
bool System_Net_IPAddress__TryParse (System_String_o* ipString, System_Net_IPAddress_o** address, const MethodInfo* method);
System_Net_IPAddress_o* System_Net_IPAddress__Parse (System_String_o* ipString, const MethodInfo* method);
System_Net_IPAddress_o* System_Net_IPAddress__InternalParse (System_String_o* ipString, bool tryParse, const MethodInfo* method);
System_Byte_array* System_Net_IPAddress__GetAddressBytes (System_Net_IPAddress_o* __this, const MethodInfo* method);
int32_t System_Net_IPAddress__get_AddressFamily (System_Net_IPAddress_o* __this, const MethodInfo* method);
int64_t System_Net_IPAddress__get_ScopeId (System_Net_IPAddress_o* __this, const MethodInfo* method);
System_String_o* System_Net_IPAddress__ToString (System_Net_IPAddress_o* __this, const MethodInfo* method);
bool System_Net_IPAddress__Equals (System_Net_IPAddress_o* __this, Il2CppObject* comparandObj, bool compareScopeId, const MethodInfo* method);
bool System_Net_IPAddress__Equals (System_Net_IPAddress_o* __this, Il2CppObject* comparand, const MethodInfo* method);
int32_t System_Net_IPAddress__GetHashCode (System_Net_IPAddress_o* __this, const MethodInfo* method);
System_Net_IPAddress_o* System_Net_IPAddress__MapToIPv6 (System_Net_IPAddress_o* __this, const MethodInfo* method);
void System_Net_IPAddress___cctor (const MethodInfo* method);
