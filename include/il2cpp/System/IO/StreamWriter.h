#pragma once

#include "il2cpp.h"

void System_IO_StreamWriter__CheckAsyncTaskInProgress (System_IO_StreamWriter_o* __this, const MethodInfo* method);
System_Text_Encoding_o* System_IO_StreamWriter__get_UTF8NoBOM (const MethodInfo* method);
void System_IO_StreamWriter___ctor (System_IO_StreamWriter_o* __this, const MethodInfo* method);
void System_IO_StreamWriter___ctor (System_IO_StreamWriter_o* __this, System_IO_Stream_o* stream, const MethodInfo* method);
void System_IO_StreamWriter___ctor (System_IO_StreamWriter_o* __this, System_IO_Stream_o* stream, System_Text_Encoding_o* encoding, int32_t bufferSize, bool leaveOpen, const MethodInfo* method);
void System_IO_StreamWriter___ctor (System_IO_StreamWriter_o* __this, System_String_o* path, bool append, System_Text_Encoding_o* encoding, const MethodInfo* method);
void System_IO_StreamWriter___ctor (System_IO_StreamWriter_o* __this, System_String_o* path, bool append, System_Text_Encoding_o* encoding, int32_t bufferSize, const MethodInfo* method);
void System_IO_StreamWriter___ctor (System_IO_StreamWriter_o* __this, System_String_o* path, bool append, System_Text_Encoding_o* encoding, int32_t bufferSize, bool checkHost, const MethodInfo* method);
void System_IO_StreamWriter__Init (System_IO_StreamWriter_o* __this, System_IO_Stream_o* streamArg, System_Text_Encoding_o* encodingArg, int32_t bufferSize, bool shouldLeaveOpen, const MethodInfo* method);
System_IO_Stream_o* System_IO_StreamWriter__CreateFile (System_String_o* path, bool append, bool checkHost, const MethodInfo* method);
void System_IO_StreamWriter__Dispose (System_IO_StreamWriter_o* __this, bool disposing, const MethodInfo* method);
void System_IO_StreamWriter__Flush (System_IO_StreamWriter_o* __this, const MethodInfo* method);
void System_IO_StreamWriter__Flush (System_IO_StreamWriter_o* __this, bool flushStream, bool flushEncoder, const MethodInfo* method);
void System_IO_StreamWriter__set_AutoFlush (System_IO_StreamWriter_o* __this, bool value, const MethodInfo* method);
bool System_IO_StreamWriter__get_LeaveOpen (System_IO_StreamWriter_o* __this, const MethodInfo* method);
void System_IO_StreamWriter__Write (System_IO_StreamWriter_o* __this, uint16_t value, const MethodInfo* method);
void System_IO_StreamWriter__Write (System_IO_StreamWriter_o* __this, System_Char_array* buffer, const MethodInfo* method);
void System_IO_StreamWriter__Write (System_IO_StreamWriter_o* __this, System_Char_array* buffer, int32_t index, int32_t count, const MethodInfo* method);
void System_IO_StreamWriter__Write (System_IO_StreamWriter_o* __this, System_String_o* value, const MethodInfo* method);
void System_IO_StreamWriter___cctor (const MethodInfo* method);
