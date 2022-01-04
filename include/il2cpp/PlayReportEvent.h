#pragma once

#include "il2cpp.h"

int32_t PlayReportEvent__GetPlayReportSize (const MethodInfo* method);
void PlayReportEvent__CreatePlayReportEvent (System_String_o* eventName, intptr_t prepoEventPtr, intptr_t buffer, int32_t bufferSize, const MethodInfo* method);
void PlayReportEvent__SavePlayReportEvent (intptr_t eventPtr, uint64_t uid0, uint64_t uid1, const MethodInfo* method);
void PlayReportEvent__AddBoolValue (intptr_t eventPtr, System_String_o* key, bool value, const MethodInfo* method);
void PlayReportEvent__AddLongValue (intptr_t eventPtr, System_String_o* key, int64_t value, const MethodInfo* method);
void PlayReportEvent__AddCharValue (intptr_t eventPtr, System_String_o* key, System_String_o* value, const MethodInfo* method);
void PlayReportEvent___ctor (PlayReportEvent_o* __this, System_String_o* eventName, int32_t bufferSize, const MethodInfo* method);
void PlayReportEvent__Finalize (PlayReportEvent_o* __this, const MethodInfo* method);
void PlayReportEvent__SaveEvent (PlayReportEvent_o* __this, const MethodInfo* method);
void PlayReportEvent__AddBool (PlayReportEvent_o* __this, System_String_o* key, bool value, const MethodInfo* method);
void PlayReportEvent__AddLong (PlayReportEvent_o* __this, System_String_o* key, int64_t value, const MethodInfo* method);
void PlayReportEvent__AddString (PlayReportEvent_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
