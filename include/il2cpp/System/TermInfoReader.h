#pragma once

#include "il2cpp.h"

void System_TermInfoReader___ctor (System_TermInfoReader_o* __this, System_String_o* term, System_String_o* filename, const MethodInfo* method);
void System_TermInfoReader___ctor (System_TermInfoReader_o* __this, System_String_o* term, System_Byte_array* buffer, const MethodInfo* method);
void System_TermInfoReader__ReadHeader (System_TermInfoReader_o* __this, System_Byte_array* buffer, int32_t* position, const MethodInfo* method);
void System_TermInfoReader__ReadNames (System_TermInfoReader_o* __this, System_Byte_array* buffer, int32_t* position, const MethodInfo* method);
int32_t System_TermInfoReader__Get (System_TermInfoReader_o* __this, int32_t number, const MethodInfo* method);
System_String_o* System_TermInfoReader__Get (System_TermInfoReader_o* __this, int32_t tstr, const MethodInfo* method);
System_Byte_array* System_TermInfoReader__GetStringBytes (System_TermInfoReader_o* __this, int32_t tstr, const MethodInfo* method);
int16_t System_TermInfoReader__GetInt16 (System_TermInfoReader_o* __this, System_Byte_array* buffer, int32_t offset, const MethodInfo* method);
System_String_o* System_TermInfoReader__GetString (System_TermInfoReader_o* __this, System_Byte_array* buffer, int32_t offset, const MethodInfo* method);
System_Byte_array* System_TermInfoReader__GetStringBytes (System_TermInfoReader_o* __this, System_Byte_array* buffer, int32_t offset, const MethodInfo* method);
