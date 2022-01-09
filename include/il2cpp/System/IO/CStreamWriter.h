#pragma once

#include "il2cpp.h"

void System_IO_CStreamWriter___ctor (System_IO_CStreamWriter_o* __this, System_IO_Stream_o* stream, System_Text_Encoding_o* encoding, bool leaveOpen, const MethodInfo* method_info);
void System_IO_CStreamWriter__Write (System_IO_CStreamWriter_o* __this, System_Char_array* buffer, int32_t index, int32_t count, const MethodInfo* method_info);
void System_IO_CStreamWriter__Write (System_IO_CStreamWriter_o* __this, uint16_t val, const MethodInfo* method_info);
void System_IO_CStreamWriter__InternalWriteString (System_IO_CStreamWriter_o* __this, System_String_o* val, const MethodInfo* method_info);
void System_IO_CStreamWriter__InternalWriteChar (System_IO_CStreamWriter_o* __this, uint16_t val, const MethodInfo* method_info);
void System_IO_CStreamWriter__InternalWriteChars (System_IO_CStreamWriter_o* __this, System_Char_array* buffer, int32_t n, const MethodInfo* method_info);
void System_IO_CStreamWriter__Write (System_IO_CStreamWriter_o* __this, System_Char_array* val, const MethodInfo* method_info);
void System_IO_CStreamWriter__Write (System_IO_CStreamWriter_o* __this, System_String_o* val, const MethodInfo* method_info);
