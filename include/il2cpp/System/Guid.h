#pragma once

#include "il2cpp.h"

void System_Guid___ctor (System_Guid_o __this, System_Byte_array* b, const MethodInfo* method);
void System_Guid___ctor (System_Guid_o __this, System_String_o* g, const MethodInfo* method);
System_Guid_o System_Guid__Parse (System_String_o* input, const MethodInfo* method);
bool System_Guid__TryParseGuid (System_String_o* g, int32_t flags, System_Guid_GuidResult_o* result, const MethodInfo* method);
bool System_Guid__TryParseGuidWithHexPrefix (System_String_o* guidString, System_Guid_GuidResult_o* result, const MethodInfo* method);
bool System_Guid__TryParseGuidWithNoStyle (System_String_o* guidString, System_Guid_GuidResult_o* result, const MethodInfo* method);
bool System_Guid__TryParseGuidWithDashes (System_String_o* guidString, System_Guid_GuidResult_o* result, const MethodInfo* method);
bool System_Guid__StringToShort (System_String_o* str, int32_t requiredLength, int32_t flags, int16_t* result, System_Guid_GuidResult_o* parseResult, const MethodInfo* method);
bool System_Guid__StringToShort (System_String_o* str, int32_t* parsePos, int32_t requiredLength, int32_t flags, int16_t* result, System_Guid_GuidResult_o* parseResult, const MethodInfo* method);
bool System_Guid__StringToInt (System_String_o* str, int32_t requiredLength, int32_t flags, int32_t* result, System_Guid_GuidResult_o* parseResult, const MethodInfo* method);
bool System_Guid__StringToInt (System_String_o* str, int32_t* parsePos, int32_t requiredLength, int32_t flags, int32_t* result, System_Guid_GuidResult_o* parseResult, const MethodInfo* method);
bool System_Guid__StringToInt (System_String_o* str, int32_t* parsePos, int32_t requiredLength, int32_t flags, int32_t* result, System_Guid_GuidResult_o* parseResult, const MethodInfo* method);
bool System_Guid__StringToLong (System_String_o* str, int32_t* parsePos, int32_t flags, int64_t* result, System_Guid_GuidResult_o* parseResult, const MethodInfo* method);
bool System_Guid__StringToLong (System_String_o* str, int32_t* parsePos, int32_t flags, int64_t* result, System_Guid_GuidResult_o* parseResult, const MethodInfo* method);
System_String_o* System_Guid__EatAllWhitespace (System_String_o* str, const MethodInfo* method);
bool System_Guid__IsHexPrefix (System_String_o* str, int32_t i, const MethodInfo* method);
System_Byte_array* System_Guid__ToByteArray (System_Guid_o __this, const MethodInfo* method);
System_String_o* System_Guid__ToString (System_Guid_o __this, const MethodInfo* method);
int32_t System_Guid__GetHashCode (System_Guid_o __this, const MethodInfo* method);
bool System_Guid__Equals (System_Guid_o __this, Il2CppObject* o, const MethodInfo* method);
bool System_Guid__Equals (System_Guid_o __this, System_Guid_o g, const MethodInfo* method);
int32_t System_Guid__GetResult (System_Guid_o __this, uint32_t me, uint32_t them, const MethodInfo* method);
int32_t System_Guid__CompareTo (System_Guid_o __this, Il2CppObject* value, const MethodInfo* method);
int32_t System_Guid__CompareTo (System_Guid_o __this, System_Guid_o value, const MethodInfo* method);
bool System_Guid__op_Equality (System_Guid_o a, System_Guid_o b, const MethodInfo* method);
System_String_o* System_Guid__ToString (System_Guid_o __this, System_String_o* format, const MethodInfo* method);
uint16_t System_Guid__HexToChar (int32_t a, const MethodInfo* method);
int32_t System_Guid__HexsToChars (uint16_t* guidChars, int32_t offset, int32_t a, int32_t b, const MethodInfo* method);
int32_t System_Guid__HexsToChars (uint16_t* guidChars, int32_t offset, int32_t a, int32_t b, bool hex, const MethodInfo* method);
System_String_o* System_Guid__ToString (System_Guid_o __this, System_String_o* format, System_IFormatProvider_o* provider, const MethodInfo* method);
System_Guid_o System_Guid__NewGuid (const MethodInfo* method);
void System_Guid___cctor (const MethodInfo* method);
