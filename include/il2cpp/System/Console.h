#pragma once

#include "il2cpp.h"

void System_Console___cctor (const MethodInfo* method);
void System_Console__SetupStreams (System_Text_Encoding_o* inputEncoding, System_Text_Encoding_o* outputEncoding, const MethodInfo* method);
System_IO_TextWriter_o* System_Console__get_Error (const MethodInfo* method);
System_IO_Stream_o* System_Console__Open (intptr_t handle, int32_t access, int32_t bufferSize, const MethodInfo* method);
System_IO_Stream_o* System_Console__OpenStandardError (int32_t bufferSize, const MethodInfo* method);
System_IO_Stream_o* System_Console__OpenStandardInput (int32_t bufferSize, const MethodInfo* method);
System_IO_Stream_o* System_Console__OpenStandardOutput (int32_t bufferSize, const MethodInfo* method);
void System_Console__SetOut (System_IO_TextWriter_o* newOut, const MethodInfo* method);
System_Text_Encoding_o* System_Console__get_InputEncoding (const MethodInfo* method);
System_Text_Encoding_o* System_Console__get_OutputEncoding (const MethodInfo* method);
System_ConsoleKeyInfo_o System_Console__ReadKey (const MethodInfo* method);
System_ConsoleKeyInfo_o System_Console__ReadKey (bool intercept, const MethodInfo* method);
void System_Console__DoConsoleCancelEvent (const MethodInfo* method);
