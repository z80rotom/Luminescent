#pragma once

#include "il2cpp.h"

System_DateTime_o System_Globalization_Calendar__get_MinSupportedDateTime (System_Globalization_Calendar_o* __this, const MethodInfo* method);
System_DateTime_o System_Globalization_Calendar__get_MaxSupportedDateTime (System_Globalization_Calendar_o* __this, const MethodInfo* method);
void System_Globalization_Calendar___ctor (System_Globalization_Calendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_Calendar__get_ID (System_Globalization_Calendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_Calendar__get_BaseCalendarID (System_Globalization_Calendar_o* __this, const MethodInfo* method);
Il2CppObject* System_Globalization_Calendar__Clone (System_Globalization_Calendar_o* __this, const MethodInfo* method);
void System_Globalization_Calendar__SetReadOnlyState (System_Globalization_Calendar_o* __this, bool readOnly, const MethodInfo* method);
int32_t System_Globalization_Calendar__get_CurrentEraValue (System_Globalization_Calendar_o* __this, const MethodInfo* method);
bool System_Globalization_Calendar__IsLeapYear (System_Globalization_Calendar_o* __this, int32_t year, const MethodInfo* method);
bool System_Globalization_Calendar__TryToDateTime (System_Globalization_Calendar_o* __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, System_DateTime_o* result, const MethodInfo* method);
bool System_Globalization_Calendar__IsValidYear (System_Globalization_Calendar_o* __this, int32_t year, int32_t era, const MethodInfo* method);
bool System_Globalization_Calendar__IsValidMonth (System_Globalization_Calendar_o* __this, int32_t year, int32_t month, int32_t era, const MethodInfo* method);
bool System_Globalization_Calendar__IsValidDay (System_Globalization_Calendar_o* __this, int32_t year, int32_t month, int32_t day, int32_t era, const MethodInfo* method);
int32_t System_Globalization_Calendar__get_TwoDigitYearMax (System_Globalization_Calendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_Calendar__ToFourDigitYear (System_Globalization_Calendar_o* __this, int32_t year, const MethodInfo* method);
int32_t System_Globalization_Calendar__GetSystemTwoDigitYearSetting (int32_t CalID, int32_t defaultYearValue, const MethodInfo* method);
