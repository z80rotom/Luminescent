#pragma once

#include "il2cpp.h"

int32_t System_IO_StreamReader__get_DefaultBufferSize (const MethodInfo* method);
void System_IO_StreamReader__CheckAsyncTaskInProgress (System_IO_StreamReader_o* __this, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_IO_Stream_o* stream, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_IO_Stream_o* stream, bool detectEncodingFromByteOrderMarks, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_IO_Stream_o* stream, System_Text_Encoding_o* encoding, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_IO_Stream_o* stream, System_Text_Encoding_o* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_String_o* path, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_String_o* path, bool detectEncodingFromByteOrderMarks, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_String_o* path, System_Text_Encoding_o* encoding, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_String_o* path, System_Text_Encoding_o* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, const MethodInfo* method);
void System_IO_StreamReader___ctor (System_IO_StreamReader_o* __this, System_String_o* path, System_Text_Encoding_o* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool checkHost, const MethodInfo* method);
void System_IO_StreamReader__Init (System_IO_StreamReader_o* __this, System_IO_Stream_o* stream, System_Text_Encoding_o* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen, const MethodInfo* method);
void System_IO_StreamReader__Init (System_IO_StreamReader_o* __this, System_IO_Stream_o* stream, const MethodInfo* method);
void System_IO_StreamReader__Dispose (System_IO_StreamReader_o* __this, bool disposing, const MethodInfo* method);
bool System_IO_StreamReader__get_LeaveOpen (System_IO_StreamReader_o* __this, const MethodInfo* method);
int32_t System_IO_StreamReader__Peek (System_IO_StreamReader_o* __this, const MethodInfo* method);
bool System_IO_StreamReader__DataAvailable (System_IO_StreamReader_o* __this, const MethodInfo* method);
int32_t System_IO_StreamReader__Read (System_IO_StreamReader_o* __this, const MethodInfo* method);
int32_t System_IO_StreamReader__Read (System_IO_StreamReader_o* __this, System_Char_array* buffer, int32_t index, int32_t count, const MethodInfo* method);
System_String_o* System_IO_StreamReader__ReadToEnd (System_IO_StreamReader_o* __this, const MethodInfo* method);
void System_IO_StreamReader__CompressBuffer (System_IO_StreamReader_o* __this, int32_t n, const MethodInfo* method);
void System_IO_StreamReader__DetectEncoding (System_IO_StreamReader_o* __this, const MethodInfo* method);
bool System_IO_StreamReader__IsPreamble (System_IO_StreamReader_o* __this, const MethodInfo* method);
int32_t System_IO_StreamReader__ReadBuffer (System_IO_StreamReader_o* __this, const MethodInfo* method);
int32_t System_IO_StreamReader__ReadBuffer (System_IO_StreamReader_o* __this, System_Char_array* userBuffer, int32_t userOffset, int32_t desiredChars, bool* readToUserBuffer, const MethodInfo* method);
System_String_o* System_IO_StreamReader__ReadLine (System_IO_StreamReader_o* __this, const MethodInfo* method);
void System_IO_StreamReader___cctor (const MethodInfo* method);
