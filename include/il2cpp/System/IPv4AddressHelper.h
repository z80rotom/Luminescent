#pragma once

#include "il2cpp.h"

System_String_o* System_IPv4AddressHelper__ParseCanonicalName (System_String_o* str, int32_t start, int32_t end, bool* isLoopback, const MethodInfo* method_info);
int32_t System_IPv4AddressHelper__ParseHostNumber (System_String_o* str, int32_t start, int32_t end, const MethodInfo* method_info);
bool System_IPv4AddressHelper__IsValid (uint16_t* name, int32_t start, int32_t* end, bool allowIPv6, bool notImplicitFile, bool unknownScheme, const MethodInfo* method_info);
bool System_IPv4AddressHelper__IsValidCanonical (uint16_t* name, int32_t start, int32_t* end, bool allowIPv6, bool notImplicitFile, const MethodInfo* method_info);
int64_t System_IPv4AddressHelper__ParseNonCanonical (uint16_t* name, int32_t start, int32_t* end, bool notImplicitFile, const MethodInfo* method_info);
bool System_IPv4AddressHelper__Parse (System_String_o* name, uint8_t* numbers, int32_t start, int32_t end, const MethodInfo* method_info);
bool System_IPv4AddressHelper__ParseCanonical (System_String_o* name, uint8_t* numbers, int32_t start, int32_t end, const MethodInfo* method_info);
