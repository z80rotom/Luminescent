#pragma once

#include "il2cpp.h"

System_String_o* System_IPv6AddressHelper__ParseCanonicalName (System_String_o* str, int32_t start, bool* isLoopback, System_String_o** scopeId, const MethodInfo* method_info);
System_String_o* System_IPv6AddressHelper__CreateCanonicalName (uint16_t* numbers, const MethodInfo* method_info);
System_Collections_Generic_KeyValuePair_int__int__o System_IPv6AddressHelper__FindCompressionRange (uint16_t* numbers, const MethodInfo* method_info);
bool System_IPv6AddressHelper__ShouldHaveIpv4Embedded (uint16_t* numbers, const MethodInfo* method_info);
bool System_IPv6AddressHelper__InternalIsValid (uint16_t* name, int32_t start, int32_t* end, bool validateStrictAddress, const MethodInfo* method_info);
bool System_IPv6AddressHelper__IsValid (uint16_t* name, int32_t start, int32_t* end, const MethodInfo* method_info);
bool System_IPv6AddressHelper__IsValidStrict (uint16_t* name, int32_t start, int32_t* end, const MethodInfo* method_info);
bool System_IPv6AddressHelper__Parse (System_String_o* address, uint16_t* numbers, int32_t start, System_String_o** scopeId, const MethodInfo* method_info);
