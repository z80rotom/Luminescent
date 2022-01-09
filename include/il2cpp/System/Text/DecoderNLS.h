#pragma once

#include "il2cpp.h"

void System_Text_DecoderNLS___ctor (System_Text_DecoderNLS_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
void System_Text_DecoderNLS__System_Runtime_Serialization_ISerializable_GetObjectData (System_Text_DecoderNLS_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
void System_Text_DecoderNLS___ctor (System_Text_DecoderNLS_o* __this, System_Text_Encoding_o* encoding, const MethodInfo* method_info);
void System_Text_DecoderNLS___ctor (System_Text_DecoderNLS_o* __this, const MethodInfo* method_info);
void System_Text_DecoderNLS__Reset (System_Text_DecoderNLS_o* __this, const MethodInfo* method_info);
int32_t System_Text_DecoderNLS__GetCharCount (System_Text_DecoderNLS_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, const MethodInfo* method_info);
int32_t System_Text_DecoderNLS__GetCharCount (System_Text_DecoderNLS_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, bool flush, const MethodInfo* method_info);
int32_t System_Text_DecoderNLS__GetCharCount (System_Text_DecoderNLS_o* __this, uint8_t* bytes, int32_t count, bool flush, const MethodInfo* method_info);
int32_t System_Text_DecoderNLS__GetChars (System_Text_DecoderNLS_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, const MethodInfo* method_info);
int32_t System_Text_DecoderNLS__GetChars (System_Text_DecoderNLS_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, bool flush, const MethodInfo* method_info);
int32_t System_Text_DecoderNLS__GetChars (System_Text_DecoderNLS_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, bool flush, const MethodInfo* method_info);
bool System_Text_DecoderNLS__get_MustFlush (System_Text_DecoderNLS_o* __this, const MethodInfo* method_info);
bool System_Text_DecoderNLS__get_HasState (System_Text_DecoderNLS_o* __this, const MethodInfo* method_info);
void System_Text_DecoderNLS__ClearMustFlush (System_Text_DecoderNLS_o* __this, const MethodInfo* method_info);
