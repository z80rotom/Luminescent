#pragma once

#include "il2cpp.h"

System_Globalization_Calendar_o* System_Globalization_TaiwanCalendar__GetDefaultInstance (const MethodInfo* method);
System_DateTime_o System_Globalization_TaiwanCalendar__get_MinSupportedDateTime (System_Globalization_TaiwanCalendar_o* __this, const MethodInfo* method);
System_DateTime_o System_Globalization_TaiwanCalendar__get_MaxSupportedDateTime (System_Globalization_TaiwanCalendar_o* __this, const MethodInfo* method);
void System_Globalization_TaiwanCalendar___ctor (System_Globalization_TaiwanCalendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__get_ID (System_Globalization_TaiwanCalendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__GetDaysInMonth (System_Globalization_TaiwanCalendar_o* __this, int32_t year, int32_t month, int32_t era, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__GetDayOfMonth (System_Globalization_TaiwanCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__GetDayOfWeek (System_Globalization_TaiwanCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__GetMonthsInYear (System_Globalization_TaiwanCalendar_o* __this, int32_t year, int32_t era, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__GetEra (System_Globalization_TaiwanCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__GetMonth (System_Globalization_TaiwanCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__GetYear (System_Globalization_TaiwanCalendar_o* __this, System_DateTime_o time, const MethodInfo* method);
bool System_Globalization_TaiwanCalendar__IsLeapYear (System_Globalization_TaiwanCalendar_o* __this, int32_t year, int32_t era, const MethodInfo* method);
System_DateTime_o System_Globalization_TaiwanCalendar__ToDateTime (System_Globalization_TaiwanCalendar_o* __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, const MethodInfo* method);
System_Int32_array* System_Globalization_TaiwanCalendar__get_Eras (System_Globalization_TaiwanCalendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__get_TwoDigitYearMax (System_Globalization_TaiwanCalendar_o* __this, const MethodInfo* method);
int32_t System_Globalization_TaiwanCalendar__ToFourDigitYear (System_Globalization_TaiwanCalendar_o* __this, int32_t year, const MethodInfo* method);
void System_Globalization_TaiwanCalendar___cctor (const MethodInfo* method);
