#pragma once

#include "il2cpp.h"

void System_IO_UnexceptionalStreamReader___cctor (const MethodInfo* method);
void System_IO_UnexceptionalStreamReader___ctor (System_IO_UnexceptionalStreamReader_o* __this, System_IO_Stream_o* stream, System_Text_Encoding_o* encoding, const MethodInfo* method);
int32_t System_IO_UnexceptionalStreamReader__Peek (System_IO_UnexceptionalStreamReader_o* __this, const MethodInfo* method);
int32_t System_IO_UnexceptionalStreamReader__Read (System_IO_UnexceptionalStreamReader_o* __this, const MethodInfo* method);
int32_t System_IO_UnexceptionalStreamReader__Read (System_IO_UnexceptionalStreamReader_o* __this, System_Char_array* dest_buffer, int32_t index, int32_t count, const MethodInfo* method);
bool System_IO_UnexceptionalStreamReader__CheckEOL (System_IO_UnexceptionalStreamReader_o* __this, uint16_t current, const MethodInfo* method);
System_String_o* System_IO_UnexceptionalStreamReader__ReadLine (System_IO_UnexceptionalStreamReader_o* __this, const MethodInfo* method);
System_String_o* System_IO_UnexceptionalStreamReader__ReadToEnd (System_IO_UnexceptionalStreamReader_o* __this, const MethodInfo* method);
