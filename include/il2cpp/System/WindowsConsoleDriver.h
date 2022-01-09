#pragma once

#include "il2cpp.h"

void System_WindowsConsoleDriver___ctor (System_WindowsConsoleDriver_o* __this, const MethodInfo* method_info);
System_ConsoleKeyInfo_o System_WindowsConsoleDriver__ReadKey (System_WindowsConsoleDriver_o* __this, bool intercept, const MethodInfo* method_info);
bool System_WindowsConsoleDriver__IsModifierKey (int16_t virtualKeyCode, const MethodInfo* method_info);
intptr_t System_WindowsConsoleDriver__GetStdHandle (int32_t handle, const MethodInfo* method_info);
bool System_WindowsConsoleDriver__GetConsoleScreenBufferInfo (intptr_t handle, System_ConsoleScreenBufferInfo_o* info, const MethodInfo* method_info);
bool System_WindowsConsoleDriver__ReadConsoleInput (intptr_t handle, System_InputRecord_o* record, int32_t length, int32_t* nread, const MethodInfo* method_info);
