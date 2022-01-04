#pragma once

#include "il2cpp.h"

void System_Text_EncoderNLS___ctor (System_Text_EncoderNLS_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Text_EncoderNLS__System_Runtime_Serialization_ISerializable_GetObjectData (System_Text_EncoderNLS_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Text_EncoderNLS___ctor (System_Text_EncoderNLS_o* __this, System_Text_Encoding_o* encoding, const MethodInfo* method);
void System_Text_EncoderNLS___ctor (System_Text_EncoderNLS_o* __this, const MethodInfo* method);
void System_Text_EncoderNLS__Reset (System_Text_EncoderNLS_o* __this, const MethodInfo* method);
int32_t System_Text_EncoderNLS__GetByteCount (System_Text_EncoderNLS_o* __this, System_Char_array* chars, int32_t index, int32_t count, bool flush, const MethodInfo* method);
int32_t System_Text_EncoderNLS__GetByteCount (System_Text_EncoderNLS_o* __this, uint16_t* chars, int32_t count, bool flush, const MethodInfo* method);
int32_t System_Text_EncoderNLS__GetBytes (System_Text_EncoderNLS_o* __this, System_Char_array* chars, int32_t charIndex, int32_t charCount, System_Byte_array* bytes, int32_t byteIndex, bool flush, const MethodInfo* method);
int32_t System_Text_EncoderNLS__GetBytes (System_Text_EncoderNLS_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush, const MethodInfo* method);
System_Text_Encoding_o* System_Text_EncoderNLS__get_Encoding (System_Text_EncoderNLS_o* __this, const MethodInfo* method);
bool System_Text_EncoderNLS__get_MustFlush (System_Text_EncoderNLS_o* __this, const MethodInfo* method);
void System_Text_EncoderNLS__ClearMustFlush (System_Text_EncoderNLS_o* __this, const MethodInfo* method);
