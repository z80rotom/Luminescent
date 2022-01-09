#pragma once

#include "il2cpp.h"

void System_Text_UTF32Encoding___ctor (System_Text_UTF32Encoding_o* __this, const MethodInfo* method_info);
void System_Text_UTF32Encoding___ctor (System_Text_UTF32Encoding_o* __this, bool bigEndian, bool byteOrderMark, const MethodInfo* method_info);
void System_Text_UTF32Encoding___ctor (System_Text_UTF32Encoding_o* __this, bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters, const MethodInfo* method_info);
void System_Text_UTF32Encoding__SetDefaultFallbacks (System_Text_UTF32Encoding_o* __this, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetByteCount (System_Text_UTF32Encoding_o* __this, System_Char_array* chars, int32_t index, int32_t count, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetByteCount (System_Text_UTF32Encoding_o* __this, System_String_o* s, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetByteCount (System_Text_UTF32Encoding_o* __this, uint16_t* chars, int32_t count, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetBytes (System_Text_UTF32Encoding_o* __this, System_String_o* s, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetBytes (System_Text_UTF32Encoding_o* __this, System_Char_array* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetBytes (System_Text_UTF32Encoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetCharCount (System_Text_UTF32Encoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetCharCount (System_Text_UTF32Encoding_o* __this, uint8_t* bytes, int32_t count, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetChars (System_Text_UTF32Encoding_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetChars (System_Text_UTF32Encoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, const MethodInfo* method_info);
System_String_o* System_Text_UTF32Encoding__GetString (System_Text_UTF32Encoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetByteCount (System_Text_UTF32Encoding_o* __this, uint16_t* chars, int32_t count, System_Text_EncoderNLS_o* encoder, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetBytes (System_Text_UTF32Encoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, System_Text_EncoderNLS_o* encoder, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetCharCount (System_Text_UTF32Encoding_o* __this, uint8_t* bytes, int32_t count, System_Text_DecoderNLS_o* baseDecoder, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetChars (System_Text_UTF32Encoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, System_Text_DecoderNLS_o* baseDecoder, const MethodInfo* method_info);
uint32_t System_Text_UTF32Encoding__GetSurrogate (System_Text_UTF32Encoding_o* __this, uint16_t cHigh, uint16_t cLow, const MethodInfo* method_info);
uint16_t System_Text_UTF32Encoding__GetHighSurrogate (System_Text_UTF32Encoding_o* __this, uint32_t iChar, const MethodInfo* method_info);
uint16_t System_Text_UTF32Encoding__GetLowSurrogate (System_Text_UTF32Encoding_o* __this, uint32_t iChar, const MethodInfo* method_info);
System_Text_Decoder_o* System_Text_UTF32Encoding__GetDecoder (System_Text_UTF32Encoding_o* __this, const MethodInfo* method_info);
System_Text_Encoder_o* System_Text_UTF32Encoding__GetEncoder (System_Text_UTF32Encoding_o* __this, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetMaxByteCount (System_Text_UTF32Encoding_o* __this, int32_t charCount, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetMaxCharCount (System_Text_UTF32Encoding_o* __this, int32_t byteCount, const MethodInfo* method_info);
System_Byte_array* System_Text_UTF32Encoding__GetPreamble (System_Text_UTF32Encoding_o* __this, const MethodInfo* method_info);
bool System_Text_UTF32Encoding__Equals (System_Text_UTF32Encoding_o* __this, Il2CppObject* value, const MethodInfo* method_info);
int32_t System_Text_UTF32Encoding__GetHashCode (System_Text_UTF32Encoding_o* __this, const MethodInfo* method_info);
