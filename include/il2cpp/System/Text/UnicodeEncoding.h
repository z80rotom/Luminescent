#pragma once

#include "il2cpp.h"

void System_Text_UnicodeEncoding___ctor (System_Text_UnicodeEncoding_o* __this, const MethodInfo* method);
void System_Text_UnicodeEncoding___ctor (System_Text_UnicodeEncoding_o* __this, bool bigEndian, bool byteOrderMark, const MethodInfo* method);
void System_Text_UnicodeEncoding___ctor (System_Text_UnicodeEncoding_o* __this, bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes, const MethodInfo* method);
void System_Text_UnicodeEncoding__OnDeserializing (System_Text_UnicodeEncoding_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method);
void System_Text_UnicodeEncoding__SetDefaultFallbacks (System_Text_UnicodeEncoding_o* __this, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetByteCount (System_Text_UnicodeEncoding_o* __this, System_Char_array* chars, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetByteCount (System_Text_UnicodeEncoding_o* __this, System_String_o* s, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetByteCount (System_Text_UnicodeEncoding_o* __this, uint16_t* chars, int32_t count, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetBytes (System_Text_UnicodeEncoding_o* __this, System_String_o* s, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetBytes (System_Text_UnicodeEncoding_o* __this, System_Char_array* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetBytes (System_Text_UnicodeEncoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetCharCount (System_Text_UnicodeEncoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetCharCount (System_Text_UnicodeEncoding_o* __this, uint8_t* bytes, int32_t count, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetChars (System_Text_UnicodeEncoding_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetChars (System_Text_UnicodeEncoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, const MethodInfo* method);
System_String_o* System_Text_UnicodeEncoding__GetString (System_Text_UnicodeEncoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetByteCount (System_Text_UnicodeEncoding_o* __this, uint16_t* chars, int32_t count, System_Text_EncoderNLS_o* encoder, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetBytes (System_Text_UnicodeEncoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, System_Text_EncoderNLS_o* encoder, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetCharCount (System_Text_UnicodeEncoding_o* __this, uint8_t* bytes, int32_t count, System_Text_DecoderNLS_o* baseDecoder, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetChars (System_Text_UnicodeEncoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, System_Text_DecoderNLS_o* baseDecoder, const MethodInfo* method);
System_Text_Encoder_o* System_Text_UnicodeEncoding__GetEncoder (System_Text_UnicodeEncoding_o* __this, const MethodInfo* method);
System_Text_Decoder_o* System_Text_UnicodeEncoding__GetDecoder (System_Text_UnicodeEncoding_o* __this, const MethodInfo* method);
System_Byte_array* System_Text_UnicodeEncoding__GetPreamble (System_Text_UnicodeEncoding_o* __this, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetMaxByteCount (System_Text_UnicodeEncoding_o* __this, int32_t charCount, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetMaxCharCount (System_Text_UnicodeEncoding_o* __this, int32_t byteCount, const MethodInfo* method);
bool System_Text_UnicodeEncoding__Equals (System_Text_UnicodeEncoding_o* __this, Il2CppObject* value, const MethodInfo* method);
int32_t System_Text_UnicodeEncoding__GetHashCode (System_Text_UnicodeEncoding_o* __this, const MethodInfo* method);
void System_Text_UnicodeEncoding___cctor (const MethodInfo* method);
