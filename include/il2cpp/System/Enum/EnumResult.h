#pragma once

#include "il2cpp.h"

void System_Enum_EnumResult__Init (System_Enum_EnumResult_o __this, bool canMethodThrow, const MethodInfo* method);
void System_Enum_EnumResult__SetFailure (System_Enum_EnumResult_o __this, System_Exception_o* unhandledException, const MethodInfo* method);
void System_Enum_EnumResult__SetFailure (System_Enum_EnumResult_o __this, int32_t failure, System_String_o* failureParameter, const MethodInfo* method);
void System_Enum_EnumResult__SetFailure (System_Enum_EnumResult_o __this, int32_t failure, System_String_o* failureMessageID, Il2CppObject* failureMessageFormatArgument, const MethodInfo* method);
System_Exception_o* System_Enum_EnumResult__GetEnumParseException (System_Enum_EnumResult_o __this, const MethodInfo* method);
