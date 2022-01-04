#pragma once

#include "il2cpp.h"

void System_IO_BinaryReader___ctor (System_IO_BinaryReader_o* __this, System_IO_Stream_o* input, System_Text_Encoding_o* encoding, const MethodInfo* method);
void System_IO_BinaryReader___ctor (System_IO_BinaryReader_o* __this, System_IO_Stream_o* input, System_Text_Encoding_o* encoding, bool leaveOpen, const MethodInfo* method);
System_IO_Stream_o* System_IO_BinaryReader__get_BaseStream (System_IO_BinaryReader_o* __this, const MethodInfo* method);
void System_IO_BinaryReader__Close (System_IO_BinaryReader_o* __this, const MethodInfo* method);
void System_IO_BinaryReader__Dispose (System_IO_BinaryReader_o* __this, bool disposing, const MethodInfo* method);
void System_IO_BinaryReader__Dispose (System_IO_BinaryReader_o* __this, const MethodInfo* method);
int32_t System_IO_BinaryReader__Read (System_IO_BinaryReader_o* __this, const MethodInfo* method);
bool System_IO_BinaryReader__ReadBoolean (System_IO_BinaryReader_o* __this, const MethodInfo* method);
uint8_t System_IO_BinaryReader__ReadByte (System_IO_BinaryReader_o* __this, const MethodInfo* method);
int8_t System_IO_BinaryReader__ReadSByte (System_IO_BinaryReader_o* __this, const MethodInfo* method);
uint16_t System_IO_BinaryReader__ReadChar (System_IO_BinaryReader_o* __this, const MethodInfo* method);
int16_t System_IO_BinaryReader__ReadInt16 (System_IO_BinaryReader_o* __this, const MethodInfo* method);
uint16_t System_IO_BinaryReader__ReadUInt16 (System_IO_BinaryReader_o* __this, const MethodInfo* method);
int32_t System_IO_BinaryReader__ReadInt32 (System_IO_BinaryReader_o* __this, const MethodInfo* method);
uint32_t System_IO_BinaryReader__ReadUInt32 (System_IO_BinaryReader_o* __this, const MethodInfo* method);
int64_t System_IO_BinaryReader__ReadInt64 (System_IO_BinaryReader_o* __this, const MethodInfo* method);
uint64_t System_IO_BinaryReader__ReadUInt64 (System_IO_BinaryReader_o* __this, const MethodInfo* method);
float System_IO_BinaryReader__ReadSingle (System_IO_BinaryReader_o* __this, const MethodInfo* method);
double System_IO_BinaryReader__ReadDouble (System_IO_BinaryReader_o* __this, const MethodInfo* method);
System_Decimal_o System_IO_BinaryReader__ReadDecimal (System_IO_BinaryReader_o* __this, const MethodInfo* method);
System_String_o* System_IO_BinaryReader__ReadString (System_IO_BinaryReader_o* __this, const MethodInfo* method);
int32_t System_IO_BinaryReader__InternalReadChars (System_IO_BinaryReader_o* __this, System_Char_array* buffer, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_IO_BinaryReader__InternalReadOneChar (System_IO_BinaryReader_o* __this, const MethodInfo* method);
System_Char_array* System_IO_BinaryReader__ReadChars (System_IO_BinaryReader_o* __this, int32_t count, const MethodInfo* method);
int32_t System_IO_BinaryReader__Read (System_IO_BinaryReader_o* __this, System_Byte_array* buffer, int32_t index, int32_t count, const MethodInfo* method);
System_Byte_array* System_IO_BinaryReader__ReadBytes (System_IO_BinaryReader_o* __this, int32_t count, const MethodInfo* method);
void System_IO_BinaryReader__FillBuffer (System_IO_BinaryReader_o* __this, int32_t numBytes, const MethodInfo* method);
int32_t System_IO_BinaryReader__Read7BitEncodedInt (System_IO_BinaryReader_o* __this, const MethodInfo* method);
