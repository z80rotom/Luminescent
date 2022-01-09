#pragma once

#include "il2cpp.h"

void System_Text_ASCIIEncoding___ctor (System_Text_ASCIIEncoding_o* __this, const MethodInfo* method_info);
void System_Text_ASCIIEncoding__SetDefaultFallbacks (System_Text_ASCIIEncoding_o* __this, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetByteCount (System_Text_ASCIIEncoding_o* __this, System_Char_array* chars, int32_t index, int32_t count, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetByteCount (System_Text_ASCIIEncoding_o* __this, System_String_o* chars, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetByteCount (System_Text_ASCIIEncoding_o* __this, uint16_t* chars, int32_t count, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetBytes (System_Text_ASCIIEncoding_o* __this, System_String_o* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetBytes (System_Text_ASCIIEncoding_o* __this, System_Char_array* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetBytes (System_Text_ASCIIEncoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetCharCount (System_Text_ASCIIEncoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetCharCount (System_Text_ASCIIEncoding_o* __this, uint8_t* bytes, int32_t count, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetChars (System_Text_ASCIIEncoding_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetChars (System_Text_ASCIIEncoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, const MethodInfo* method_info);
System_String_o* System_Text_ASCIIEncoding__GetString (System_Text_ASCIIEncoding_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetByteCount (System_Text_ASCIIEncoding_o* __this, uint16_t* chars, int32_t charCount, System_Text_EncoderNLS_o* encoder, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetBytes (System_Text_ASCIIEncoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, System_Text_EncoderNLS_o* encoder, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetCharCount (System_Text_ASCIIEncoding_o* __this, uint8_t* bytes, int32_t count, System_Text_DecoderNLS_o* decoder, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetChars (System_Text_ASCIIEncoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, System_Text_DecoderNLS_o* decoder, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetMaxByteCount (System_Text_ASCIIEncoding_o* __this, int32_t charCount, const MethodInfo* method_info);
int32_t System_Text_ASCIIEncoding__GetMaxCharCount (System_Text_ASCIIEncoding_o* __this, int32_t byteCount, const MethodInfo* method_info);
System_Text_Decoder_o* System_Text_ASCIIEncoding__GetDecoder (System_Text_ASCIIEncoding_o* __this, const MethodInfo* method_info);
System_Text_Encoder_o* System_Text_ASCIIEncoding__GetEncoder (System_Text_ASCIIEncoding_o* __this, const MethodInfo* method_info);
