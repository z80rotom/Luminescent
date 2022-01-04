#pragma once

#include "il2cpp.h"

void System_Text_UTF7Encoding___ctor (System_Text_UTF7Encoding_o* __this, const MethodInfo* method);
void System_Text_UTF7Encoding___ctor (System_Text_UTF7Encoding_o* __this, bool allowOptionals, const MethodInfo* method);
void System_Text_UTF7Encoding__MakeTables (System_Text_UTF7Encoding_o* __this, const MethodInfo* method);
void System_Text_UTF7Encoding__SetDefaultFallbacks (System_Text_UTF7Encoding_o* __this, const MethodInfo* method);
void System_Text_UTF7Encoding__OnDeserializing (System_Text_UTF7Encoding_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method);
void System_Text_UTF7Encoding__OnDeserialized (System_Text_UTF7Encoding_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method);
bool System_Text_UTF7Encoding__Equals (System_Text_UTF7Encoding_o* __this, Il2CppObject* value, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetHashCode (System_Text_UTF7Encoding_o* __this, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetByteCount (System_Text_UTF7Encoding_o* __this, System_Char_array* chars, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetByteCount (System_Text_UTF7Encoding_o* __this, System_String_o* s, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetByteCount (System_Text_UTF7Encoding_o* __this, uint16_t* chars, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetBytes (System_Text_UTF7Encoding_o* __this, System_String_o* s, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetBytes (System_Text_UTF7Encoding_o* __this, System_Char_array* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetBytes (System_Text_UTF7Encoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetCharCount (System_Text_UTF7Encoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetCharCount (System_Text_UTF7Encoding_o* __this, uint8_t* bytes, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetChars (System_Text_UTF7Encoding_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetChars (System_Text_UTF7Encoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, const MethodInfo* method);
System_String_o* System_Text_UTF7Encoding__GetString (System_Text_UTF7Encoding_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetByteCount (System_Text_UTF7Encoding_o* __this, uint16_t* chars, int32_t count, System_Text_EncoderNLS_o* baseEncoder, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetBytes (System_Text_UTF7Encoding_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, System_Text_EncoderNLS_o* baseEncoder, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetCharCount (System_Text_UTF7Encoding_o* __this, uint8_t* bytes, int32_t count, System_Text_DecoderNLS_o* baseDecoder, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetChars (System_Text_UTF7Encoding_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, System_Text_DecoderNLS_o* baseDecoder, const MethodInfo* method);
System_Text_Decoder_o* System_Text_UTF7Encoding__GetDecoder (System_Text_UTF7Encoding_o* __this, const MethodInfo* method);
System_Text_Encoder_o* System_Text_UTF7Encoding__GetEncoder (System_Text_UTF7Encoding_o* __this, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetMaxByteCount (System_Text_UTF7Encoding_o* __this, int32_t charCount, const MethodInfo* method);
int32_t System_Text_UTF7Encoding__GetMaxCharCount (System_Text_UTF7Encoding_o* __this, int32_t byteCount, const MethodInfo* method);
