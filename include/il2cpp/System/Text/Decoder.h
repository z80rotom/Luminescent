#pragma once

#include "il2cpp.h"

void System_Text_Decoder__SerializeDecoder (System_Text_Decoder_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, const MethodInfo* method_info);
void System_Text_Decoder___ctor (System_Text_Decoder_o* __this, const MethodInfo* method_info);
System_Text_DecoderFallback_o* System_Text_Decoder__get_Fallback (System_Text_Decoder_o* __this, const MethodInfo* method_info);
System_Text_DecoderFallbackBuffer_o* System_Text_Decoder__get_FallbackBuffer (System_Text_Decoder_o* __this, const MethodInfo* method_info);
bool System_Text_Decoder__get_InternalHasFallbackBuffer (System_Text_Decoder_o* __this, const MethodInfo* method_info);
void System_Text_Decoder__Reset (System_Text_Decoder_o* __this, const MethodInfo* method_info);
int32_t System_Text_Decoder__GetCharCount (System_Text_Decoder_o* __this, System_Byte_array* bytes, int32_t index, int32_t count, bool flush, const MethodInfo* method_info);
int32_t System_Text_Decoder__GetCharCount (System_Text_Decoder_o* __this, uint8_t* bytes, int32_t count, bool flush, const MethodInfo* method_info);
int32_t System_Text_Decoder__GetChars (System_Text_Decoder_o* __this, System_Byte_array* bytes, int32_t byteIndex, int32_t byteCount, System_Char_array* chars, int32_t charIndex, bool flush, const MethodInfo* method_info);
int32_t System_Text_Decoder__GetChars (System_Text_Decoder_o* __this, uint8_t* bytes, int32_t byteCount, uint16_t* chars, int32_t charCount, bool flush, const MethodInfo* method_info);
