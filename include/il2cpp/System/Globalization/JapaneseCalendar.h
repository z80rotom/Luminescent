#pragma once

#include "il2cpp.h"

System_DateTime_o System_Globalization_JapaneseCalendar__get_MinSupportedDateTime (System_Globalization_JapaneseCalendar_o* __this, const MethodInfo* method);
System_DateTime_o System_Globalization_JapaneseCalendar__get_MaxSupportedDateTime (System_Globalization_JapaneseCalendar_o* __this, const MethodInfo* method);
System_Globalization_EraInfo_array* System_Globalization_JapaneseCalendar__GetEraInfo (const MethodInfo* method);
System_Globalization_EraInfo_array* System_Globalization_JapaneseCalendar__GetErasFromRegistry (const MethodInfo* method);
System_Globalization_Calendar_o* System_Globalization_JapaneseCalendar__GetDefaultInstance (const MethodInfo* method);
void System_Globalization_JapaneseCalendar___ctor (System_Globalization_JapaneseCalendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__get_ID (System_Globalization_JapaneseCalendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__GetDaysInMonth (System_Globalization_JapaneseCalendar_o* __this, int32_t year, int32_t month, int32_t era, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__GetDayOfMonth (System_Globalization_JapaneseCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__GetDayOfWeek (System_Globalization_JapaneseCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__GetMonthsInYear (System_Globalization_JapaneseCalendar_o* __this, int32_t year, int32_t era, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__GetEra (System_Globalization_JapaneseCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__GetMonth (System_Globalization_JapaneseCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__GetYear (System_Globalization_JapaneseCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
bool System_Globalization_JapaneseCalendar__IsLeapYear (System_Globalization_JapaneseCalendar_o* __this, int32_t year, int32_t era, const MethodInfo* method);
System_DateTime_o System_Globalization_JapaneseCalendar__ToDateTime (System_Globalization_JapaneseCalendar_o* __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__ToFourDigitYear (System_Globalization_JapaneseCalendar_o* __this, int32_t year, const MethodInfo* method);
System_Int32_array* System_Globalization_JapaneseCalendar__get_Eras (System_Globalization_JapaneseCalendar_o* __this, const MethodInfo* method);
System_String_array* System_Globalization_JapaneseCalendar__EraNames (const MethodInfo* method);
System_String_array* System_Globalization_JapaneseCalendar__AbbrevEraNames (const MethodInfo* method);
System_String_array* System_Globalization_JapaneseCalendar__EnglishEraNames (const MethodInfo* method);
bool System_Globalization_JapaneseCalendar__IsValidYear (System_Globalization_JapaneseCalendar_o* __this, int32_t year, int32_t era, const MethodInfo* method);
int32_t System_Globalization_JapaneseCalendar__get_TwoDigitYearMax (System_Globalization_JapaneseCalendar_o* __this, const MethodInfo* method);
void System_Globalization_JapaneseCalendar___cctor (const MethodInfo* method);
