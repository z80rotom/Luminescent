#pragma once

#include "il2cpp.h"

System_Text_StringBuilder_o* Dpr_Battle_Logic_BTL__GetStringBuilder (bool isClear, const MethodInfo* method);
void Dpr_Battle_Logic_BTL__PRINT (int32_t logType, System_String_o* s, const MethodInfo* method);
void Dpr_Battle_Logic_BTL__PRINT (System_String_o* s, const MethodInfo* method);
void Dpr_Battle_Logic_BTL__ASSERT (bool condition, const MethodInfo* method);
void Dpr_Battle_Logic_BTL__ASSERT (bool condition, System_String_o* s, const MethodInfo* method);
void Dpr_Battle_Logic_BTL__SetEnableLog (int32_t logType, bool isOn, const MethodInfo* method);
bool Dpr_Battle_Logic_BTL__IsEnableLog (int32_t logType, const MethodInfo* method);
void Dpr_Battle_Logic_BTL__N_Printf (int32_t strID, System_Object_array* args, const MethodInfo* method);
void Dpr_Battle_Logic_BTL__DEBUGPRINT_Ctrl (const MethodInfo* method);
void Dpr_Battle_Logic_BTL__N_PrintfSimple (int32_t strID, System_Object_array* args, const MethodInfo* method);
void Dpr_Battle_Logic_BTL__UTIL_SetPrintType (int32_t type, const MethodInfo* method);
void Dpr_Battle_Logic_BTL___cctor (const MethodInfo* method);
