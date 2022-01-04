#pragma once

#include "il2cpp.h"

void System_Text_Encoding_EncodingCharBuffer___ctor (System_Text_Encoding_EncodingCharBuffer_o* __this, System_Text_Encoding_o* enc, System_Text_DecoderNLS_o* decoder, uint16_t* charStart, int32_t charCount, uint8_t* byteStart, int32_t byteCount, const MethodInfo* method);
bool System_Text_Encoding_EncodingCharBuffer__AddChar (System_Text_Encoding_EncodingCharBuffer_o* __this, uint16_t ch, int32_t numBytes, const MethodInfo* method);
bool System_Text_Encoding_EncodingCharBuffer__AddChar (System_Text_Encoding_EncodingCharBuffer_o* __this, uint16_t ch, const MethodInfo* method);
void System_Text_Encoding_EncodingCharBuffer__AdjustBytes (System_Text_Encoding_EncodingCharBuffer_o* __this, int32_t count, const MethodInfo* method);
bool System_Text_Encoding_EncodingCharBuffer__get_MoreData (System_Text_Encoding_EncodingCharBuffer_o* __this, const MethodInfo* method);
uint8_t System_Text_Encoding_EncodingCharBuffer__GetNextByte (System_Text_Encoding_EncodingCharBuffer_o* __this, const MethodInfo* method);
int32_t System_Text_Encoding_EncodingCharBuffer__get_BytesUsed (System_Text_Encoding_EncodingCharBuffer_o* __this, const MethodInfo* method);
bool System_Text_Encoding_EncodingCharBuffer__Fallback (System_Text_Encoding_EncodingCharBuffer_o* __this, uint8_t fallbackByte, const MethodInfo* method);
bool System_Text_Encoding_EncodingCharBuffer__Fallback (System_Text_Encoding_EncodingCharBuffer_o* __this, System_Byte_array* byteBuffer, const MethodInfo* method);
int32_t System_Text_Encoding_EncodingCharBuffer__get_Count (System_Text_Encoding_EncodingCharBuffer_o* __this, const MethodInfo* method);
