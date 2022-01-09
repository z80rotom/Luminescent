#pragma once

#include "il2cpp.h"

void System_Text_EncodingNLS___ctor (System_Text_EncodingNLS_o* __this, int32_t codePage, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetByteCount (System_Text_EncodingNLS_o* __this, System_Char_array* chars, int32_t index, int32_t count, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetByteCount (System_Text_EncodingNLS_o* __this, System_String_o* s, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetByteCount (System_Text_EncodingNLS_o* __this, uint16_t* chars, int32_t count, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetBytes (System_Text_EncodingNLS_o* __this, System_String_o* s, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetBytes (System_Text_EncodingNLS_o* __this, System_Char_array* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetBytes (System_Text_EncodingNLS_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetCharCount (System_Text_EncodingNLS_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetCharCount (System_Text_EncodingNLS_o* __this, uint8_t* bytes, int32_t count, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetChars (System_Text_EncodingNLS_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method_info);
int32_t System_Text_EncodingNLS__GetChars (System_Text_EncodingNLS_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, const MethodInfo* method_info);
System_String_o* System_Text_EncodingNLS__GetString (System_Text_EncodingNLS_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method_info);
System_Text_Decoder_o* System_Text_EncodingNLS__GetDecoder (System_Text_EncodingNLS_o* __this, const MethodInfo* method_info);
System_Text_Encoder_o* System_Text_EncodingNLS__GetEncoder (System_Text_EncodingNLS_o* __this, const MethodInfo* method_info);
