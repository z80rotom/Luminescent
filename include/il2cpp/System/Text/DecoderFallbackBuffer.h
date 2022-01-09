#pragma once

#include "il2cpp.h"

void System_Text_DecoderFallbackBuffer__Reset (System_Text_DecoderFallbackBuffer_o* __this, const MethodInfo* method_info);
void System_Text_DecoderFallbackBuffer__InternalReset (System_Text_DecoderFallbackBuffer_o* __this, const MethodInfo* method_info);
void System_Text_DecoderFallbackBuffer__InternalInitialize (System_Text_DecoderFallbackBuffer_o* __this, uint8_t* byteStart, uint16_t* charEnd, const MethodInfo* method_info);
bool System_Text_DecoderFallbackBuffer__InternalFallback (System_Text_DecoderFallbackBuffer_o* __this, System_Byte_array* bytes, uint8_t* pBytes, uint16_t** chars, const MethodInfo* method_info);
int32_t System_Text_DecoderFallbackBuffer__InternalFallback (System_Text_DecoderFallbackBuffer_o* __this, System_Byte_array* bytes, uint8_t* pBytes, const MethodInfo* method_info);
void System_Text_DecoderFallbackBuffer__ThrowLastBytesRecursive (System_Text_DecoderFallbackBuffer_o* __this, System_Byte_array* bytesUnknown, const MethodInfo* method_info);
void System_Text_DecoderFallbackBuffer___ctor (System_Text_DecoderFallbackBuffer_o* __this, const MethodInfo* method_info);
