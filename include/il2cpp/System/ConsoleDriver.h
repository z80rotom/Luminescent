#pragma once

#include "il2cpp.h"

void System_ConsoleDriver___cctor (const MethodInfo* method_info);
System_IConsoleDriver_o* System_ConsoleDriver__CreateNullConsoleDriver (const MethodInfo* method_info);
System_IConsoleDriver_o* System_ConsoleDriver__CreateWindowsConsoleDriver (const MethodInfo* method_info);
System_IConsoleDriver_o* System_ConsoleDriver__CreateTermInfoDriver (System_String_o* term, const MethodInfo* method_info);
System_ConsoleKeyInfo_o System_ConsoleDriver__ReadKey (bool intercept, const MethodInfo* method_info);
bool System_ConsoleDriver__get_IsConsole (const MethodInfo* method_info);
bool System_ConsoleDriver__Isatty (intptr_t handle, const MethodInfo* method_info);
int32_t System_ConsoleDriver__InternalKeyAvailable (int32_t ms_timeout, const MethodInfo* method_info);
bool System_ConsoleDriver__TtySetup (System_String_o* keypadXmit, System_String_o* teardown, System_Byte_array** control_characters, int32_t** address, const MethodInfo* method_info);
bool System_ConsoleDriver__SetEcho (bool wantEcho, const MethodInfo* method_info);
