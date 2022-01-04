#pragma once

#include "il2cpp.h"

void System_Text_Encoder__SerializeEncoder (System_Text_Encoder_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, const MethodInfo* method);
void System_Text_Encoder___ctor (System_Text_Encoder_o* __this, const MethodInfo* method);
System_Text_EncoderFallback_o* System_Text_Encoder__get_Fallback (System_Text_Encoder_o* __this, const MethodInfo* method);
System_Text_EncoderFallbackBuffer_o* System_Text_Encoder__get_FallbackBuffer (System_Text_Encoder_o* __this, const MethodInfo* method);
bool System_Text_Encoder__get_InternalHasFallbackBuffer (System_Text_Encoder_o* __this, const MethodInfo* method);
void System_Text_Encoder__Reset (System_Text_Encoder_o* __this, const MethodInfo* method);
int32_t System_Text_Encoder__GetByteCount (System_Text_Encoder_o* __this, uint16_t* chars, int32_t count, bool flush, const MethodInfo* method);
int32_t System_Text_Encoder__GetBytes (System_Text_Encoder_o* __this, uint16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush, const MethodInfo* method);
