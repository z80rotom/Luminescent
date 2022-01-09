#pragma once

#include "il2cpp.h"

void Mono_Security_ASN1___ctor (Mono_Security_ASN1_o* __this, uint8_t tag, const MethodInfo* method_info);
void Mono_Security_ASN1___ctor (Mono_Security_ASN1_o* __this, uint8_t tag, System_Byte_array* data, const MethodInfo* method_info);
void Mono_Security_ASN1___ctor (Mono_Security_ASN1_o* __this, System_Byte_array* data, const MethodInfo* method_info);
int32_t Mono_Security_ASN1__get_Count (Mono_Security_ASN1_o* __this, const MethodInfo* method_info);
uint8_t Mono_Security_ASN1__get_Tag (Mono_Security_ASN1_o* __this, const MethodInfo* method_info);
System_Byte_array* Mono_Security_ASN1__get_Value (Mono_Security_ASN1_o* __this, const MethodInfo* method_info);
void Mono_Security_ASN1__set_Value (Mono_Security_ASN1_o* __this, System_Byte_array* value, const MethodInfo* method_info);
Mono_Security_ASN1_o* Mono_Security_ASN1__Add (Mono_Security_ASN1_o* __this, Mono_Security_ASN1_o* asn1, const MethodInfo* method_info);
System_Byte_array* Mono_Security_ASN1__GetBytes (Mono_Security_ASN1_o* __this, const MethodInfo* method_info);
void Mono_Security_ASN1__Decode (Mono_Security_ASN1_o* __this, System_Byte_array* asn1, int32_t* anPos, int32_t anLength, const MethodInfo* method_info);
void Mono_Security_ASN1__DecodeTLV (Mono_Security_ASN1_o* __this, System_Byte_array* asn1, int32_t* pos, uint8_t* tag, int32_t* length, System_Byte_array** content, const MethodInfo* method_info);
Mono_Security_ASN1_o* Mono_Security_ASN1__get_Item (Mono_Security_ASN1_o* __this, int32_t index, const MethodInfo* method_info);
System_String_o* Mono_Security_ASN1__ToString (Mono_Security_ASN1_o* __this, const MethodInfo* method_info);
