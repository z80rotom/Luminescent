#pragma once

#include "il2cpp.h"

void System_Text_UTF8Encoding___ctor (System_Text_UTF8Encoding_o* __this, const MethodInfo* method);
void System_Text_UTF8Encoding___ctor (System_Text_UTF8Encoding_o* __this, bool encoderShouldEmitUTF8Identifier, const MethodInfo* method);
void System_Text_UTF8Encoding___ctor (System_Text_UTF8Encoding_o* __this, bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes, const MethodInfo* method);
void System_Text_UTF8Encoding__SetDefaultFallbacks (System_Text_UTF8Encoding_o* __this, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetByteCount (System_Text_UTF8Encoding_o* __this, System_Char_array* chars, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetByteCount (System_Text_UTF8Encoding_o* __this, System_String_o* chars, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetByteCount (System_Text_UTF8Encoding_o* __this, uint16_t* chars, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetBytes (System_Text_UTF8Encoding_o* __this, System_String_o* s, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetBytes (System_Text_UTF8Encoding_o* __this, System_Char_array* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetBytes (System_Text_UTF8Encoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetCharCount (System_Text_UTF8Encoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetCharCount (System_Text_UTF8Encoding_o* __this, uint8_t* bytes, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetChars (System_Text_UTF8Encoding_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetChars (System_Text_UTF8Encoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, const MethodInfo* method);
System_String_o* System_Text_UTF8Encoding__GetString (System_Text_UTF8Encoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetByteCount (System_Text_UTF8Encoding_o* __this, uint16_t* chars, int32_t count, System_Text_EncoderNLS_o* baseEncoder, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__PtrDiff (uint16_t* a, uint16_t* b, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__PtrDiff (uint8_t* a, uint8_t* b, const MethodInfo* method);
bool System_Text_UTF8Encoding__InRange (int32_t ch, int32_t start, int32_t end, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetBytes (System_Text_UTF8Encoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, System_Text_EncoderNLS_o* baseEncoder, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetCharCount (System_Text_UTF8Encoding_o* __this, uint8_t* bytes, int32_t count, System_Text_DecoderNLS_o* baseDecoder, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetChars (System_Text_UTF8Encoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, System_Text_DecoderNLS_o* baseDecoder, const MethodInfo* method);
bool System_Text_UTF8Encoding__FallbackInvalidByteSequence (System_Text_UTF8Encoding_o* __this, uint8_t** pSrc, int32_t ch, System_Text_DecoderFallbackBuffer_o* fallback, uint16_t** pTarget, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__FallbackInvalidByteSequence (System_Text_UTF8Encoding_o* __this, uint8_t* pSrc, int32_t ch, System_Text_DecoderFallbackBuffer_o* fallback, const MethodInfo* method);
System_Byte_array* System_Text_UTF8Encoding__GetBytesUnknown (System_Text_UTF8Encoding_o* __this, uint8_t** pSrc, int32_t ch, const MethodInfo* method);
System_Text_Decoder_o* System_Text_UTF8Encoding__GetDecoder (System_Text_UTF8Encoding_o* __this, const MethodInfo* method);
System_Text_Encoder_o* System_Text_UTF8Encoding__GetEncoder (System_Text_UTF8Encoding_o* __this, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetMaxByteCount (System_Text_UTF8Encoding_o* __this, int32_t charCount, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetMaxCharCount (System_Text_UTF8Encoding_o* __this, int32_t byteCount, const MethodInfo* method);
System_Byte_array* System_Text_UTF8Encoding__GetPreamble (System_Text_UTF8Encoding_o* __this, const MethodInfo* method);
bool System_Text_UTF8Encoding__Equals (System_Text_UTF8Encoding_o* __this, Il2CppObject* value, const MethodInfo* method);
int32_t System_Text_UTF8Encoding__GetHashCode (System_Text_UTF8Encoding_o* __this, const MethodInfo* method);
