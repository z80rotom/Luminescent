#pragma once

#include "il2cpp.h"

uint8_t UnityEngine_WWWTranscoder__Hex2Byte (System_Byte_array* b, int32_t offset, const MethodInfo* method);
System_Byte_array* UnityEngine_WWWTranscoder__Byte2Hex (uint8_t b, System_Byte_array* hexChars, const MethodInfo* method);
System_String_o* UnityEngine_WWWTranscoder__DataEncode (System_String_o* toEncode, System_Text_Encoding_o* e, const MethodInfo* method);
System_Byte_array* UnityEngine_WWWTranscoder__Encode (System_Byte_array* input, uint8_t escapeChar, System_Byte_array* space, System_Byte_array* forbidden, bool uppercase, const MethodInfo* method);
bool UnityEngine_WWWTranscoder__ByteArrayContains (System_Byte_array* array, uint8_t b, const MethodInfo* method);
System_Byte_array* UnityEngine_WWWTranscoder__URLDecode (System_Byte_array* toEncode, const MethodInfo* method);
bool UnityEngine_WWWTranscoder__ByteSubArrayEquals (System_Byte_array* array, int32_t index, System_Byte_array* comperand, const MethodInfo* method);
System_Byte_array* UnityEngine_WWWTranscoder__Decode (System_Byte_array* input, uint8_t escapeChar, System_Byte_array* space, const MethodInfo* method);
void UnityEngine_WWWTranscoder___cctor (const MethodInfo* method);
