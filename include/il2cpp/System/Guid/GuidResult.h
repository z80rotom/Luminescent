#pragma once

#include "il2cpp.h"

void System_Guid_GuidResult__Init (System_Guid_GuidResult_o __this, int32_t canThrow, const MethodInfo* method);
void System_Guid_GuidResult__SetFailure (System_Guid_GuidResult_o __this, System_Exception_o* nativeException, const MethodInfo* method);
void System_Guid_GuidResult__SetFailure (System_Guid_GuidResult_o __this, int32_t failure, System_String_o* failureMessageID, const MethodInfo* method);
void System_Guid_GuidResult__SetFailure (System_Guid_GuidResult_o __this, int32_t failure, System_String_o* failureMessageID, Il2CppObject* failureMessageFormatArgument, const MethodInfo* method);
void System_Guid_GuidResult__SetFailure (System_Guid_GuidResult_o __this, int32_t failure, System_String_o* failureMessageID, Il2CppObject* failureMessageFormatArgument, System_String_o* failureArgumentName, System_Exception_o* innerException, const MethodInfo* method);
System_Exception_o* System_Guid_GuidResult__GetGuidParseException (System_Guid_GuidResult_o __this, const MethodInfo* method);
