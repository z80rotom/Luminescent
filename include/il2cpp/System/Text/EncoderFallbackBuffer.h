#pragma once

#include "il2cpp.h"

void System_Text_EncoderFallbackBuffer__Reset (System_Text_EncoderFallbackBuffer_o* __this, const MethodInfo* method);
void System_Text_EncoderFallbackBuffer__InternalReset (System_Text_EncoderFallbackBuffer_o* __this, const MethodInfo* method);
void System_Text_EncoderFallbackBuffer__InternalInitialize (System_Text_EncoderFallbackBuffer_o* __this, uint16_t* charStart, uint16_t* charEnd, System_Text_EncoderNLS_o* encoder, bool setEncoder, const MethodInfo* method);
uint16_t System_Text_EncoderFallbackBuffer__InternalGetNextChar (System_Text_EncoderFallbackBuffer_o* __this, const MethodInfo* method);
bool System_Text_EncoderFallbackBuffer__InternalFallback (System_Text_EncoderFallbackBuffer_o* __this, uint16_t ch, uint16_t** chars, const MethodInfo* method);
void System_Text_EncoderFallbackBuffer__ThrowLastCharRecursive (System_Text_EncoderFallbackBuffer_o* __this, int32_t charRecursive, const MethodInfo* method);
void System_Text_EncoderFallbackBuffer___ctor (System_Text_EncoderFallbackBuffer_o* __this, const MethodInfo* method);
