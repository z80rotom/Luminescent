#pragma once

#include "il2cpp.h"

System_String_o* System_TermInfoDriver__TryTermInfoDir (System_String_o* dir, System_String_o* term, const MethodInfo* method);
System_String_o* System_TermInfoDriver__SearchTerminfo (System_String_o* term, const MethodInfo* method);
void System_TermInfoDriver__WriteConsole (System_TermInfoDriver_o* __this, System_String_o* str, const MethodInfo* method);
void System_TermInfoDriver___ctor (System_TermInfoDriver_o* __this, System_String_o* term, const MethodInfo* method);
bool System_TermInfoDriver__get_Initialized (System_TermInfoDriver_o* __this, const MethodInfo* method);
void System_TermInfoDriver__Init (System_TermInfoDriver_o* __this, const MethodInfo* method);
void System_TermInfoDriver__IncrementX (System_TermInfoDriver_o* __this, const MethodInfo* method);
void System_TermInfoDriver__WriteSpecialKey (System_TermInfoDriver_o* __this, System_ConsoleKeyInfo_o key, const MethodInfo* method);
void System_TermInfoDriver__WriteSpecialKey (System_TermInfoDriver_o* __this, uint16_t c, const MethodInfo* method);
bool System_TermInfoDriver__IsSpecialKey (System_TermInfoDriver_o* __this, System_ConsoleKeyInfo_o key, const MethodInfo* method);
bool System_TermInfoDriver__IsSpecialKey (System_TermInfoDriver_o* __this, uint16_t c, const MethodInfo* method);
void System_TermInfoDriver__GetCursorPosition (System_TermInfoDriver_o* __this, const MethodInfo* method);
void System_TermInfoDriver__CheckWindowDimensions (System_TermInfoDriver_o* __this, const MethodInfo* method);
int32_t System_TermInfoDriver__get_WindowHeight (System_TermInfoDriver_o* __this, const MethodInfo* method);
int32_t System_TermInfoDriver__get_WindowWidth (System_TermInfoDriver_o* __this, const MethodInfo* method);
void System_TermInfoDriver__AddToBuffer (System_TermInfoDriver_o* __this, int32_t b, const MethodInfo* method);
void System_TermInfoDriver__AdjustBuffer (System_TermInfoDriver_o* __this, const MethodInfo* method);
System_ConsoleKeyInfo_o System_TermInfoDriver__CreateKeyInfoFromInt (System_TermInfoDriver_o* __this, int32_t n, bool alt, const MethodInfo* method);
Il2CppObject* System_TermInfoDriver__GetKeyFromBuffer (System_TermInfoDriver_o* __this, bool cooked, const MethodInfo* method);
System_ConsoleKeyInfo_o System_TermInfoDriver__ReadKeyInternal (System_TermInfoDriver_o* __this, bool* fresh, const MethodInfo* method);
bool System_TermInfoDriver__InputPending (System_TermInfoDriver_o* __this, const MethodInfo* method);
void System_TermInfoDriver__QueueEcho (System_TermInfoDriver_o* __this, uint16_t c, const MethodInfo* method);
void System_TermInfoDriver__Echo (System_TermInfoDriver_o* __this, System_ConsoleKeyInfo_o key, const MethodInfo* method);
void System_TermInfoDriver__EchoFlush (System_TermInfoDriver_o* __this, const MethodInfo* method);
int32_t System_TermInfoDriver__Read (System_TermInfoDriver_o* __this, System_Char_array* dest, int32_t index, int32_t count, const MethodInfo* method);
System_ConsoleKeyInfo_o System_TermInfoDriver__ReadKey (System_TermInfoDriver_o* __this, bool intercept, const MethodInfo* method);
System_String_o* System_TermInfoDriver__ReadLine (System_TermInfoDriver_o* __this, const MethodInfo* method);
System_String_o* System_TermInfoDriver__ReadToEnd (System_TermInfoDriver_o* __this, const MethodInfo* method);
System_String_o* System_TermInfoDriver__ReadUntilConditionInternal (System_TermInfoDriver_o* __this, bool haltOnNewLine, const MethodInfo* method);
void System_TermInfoDriver__SetCursorPosition (System_TermInfoDriver_o* __this, int32_t left, int32_t top, const MethodInfo* method);
void System_TermInfoDriver__CreateKeyMap (System_TermInfoDriver_o* __this, const MethodInfo* method);
void System_TermInfoDriver__InitKeys (System_TermInfoDriver_o* __this, const MethodInfo* method);
void System_TermInfoDriver__AddStringMapping (System_TermInfoDriver_o* __this, int32_t s, const MethodInfo* method);
void System_TermInfoDriver___cctor (const MethodInfo* method);
