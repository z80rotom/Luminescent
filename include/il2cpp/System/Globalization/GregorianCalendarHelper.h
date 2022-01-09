#pragma once

#include "il2cpp.h"

int32_t System_Globalization_GregorianCalendarHelper__get_MaxYear (System_Globalization_GregorianCalendarHelper_o* __this, const MethodInfo* method_info);
void System_Globalization_GregorianCalendarHelper___ctor (System_Globalization_GregorianCalendarHelper_o* __this, System_Globalization_Calendar_o* cal, System_Globalization_EraInfo_array* eraInfo, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetGregorianYear (System_Globalization_GregorianCalendarHelper_o* __this, int32_t year, int32_t era, const MethodInfo* method_info);
bool System_Globalization_GregorianCalendarHelper__IsValidYear (System_Globalization_GregorianCalendarHelper_o* __this, int32_t year, int32_t era, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetDatePart (System_Globalization_GregorianCalendarHelper_o* __this, int64_t ticks, int32_t part, const MethodInfo* method_info);
int64_t System_Globalization_GregorianCalendarHelper__GetAbsoluteDate (int32_t year, int32_t month, int32_t day, const MethodInfo* method_info);
int64_t System_Globalization_GregorianCalendarHelper__DateToTicks (int32_t year, int32_t month, int32_t day, const MethodInfo* method_info);
int64_t System_Globalization_GregorianCalendarHelper__TimeToTicks (int32_t hour, int32_t minute, int32_t second, int32_t millisecond, const MethodInfo* method_info);
void System_Globalization_GregorianCalendarHelper__CheckTicksRange (System_Globalization_GregorianCalendarHelper_o* __this, int64_t ticks, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetDayOfMonth (System_Globalization_GregorianCalendarHelper_o* __this, System_DateTime_o time, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetDayOfWeek (System_Globalization_GregorianCalendarHelper_o* __this, System_DateTime_o time, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetDaysInMonth (System_Globalization_GregorianCalendarHelper_o* __this, int32_t year, int32_t month, int32_t era, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetEra (System_Globalization_GregorianCalendarHelper_o* __this, System_DateTime_o time, const MethodInfo* method_info);
System_Int32_array* System_Globalization_GregorianCalendarHelper__get_Eras (System_Globalization_GregorianCalendarHelper_o* __this, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetMonth (System_Globalization_GregorianCalendarHelper_o* __this, System_DateTime_o time, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetMonthsInYear (System_Globalization_GregorianCalendarHelper_o* __this, int32_t year, int32_t era, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendarHelper__GetYear (System_Globalization_GregorianCalendarHelper_o* __this, System_DateTime_o time, const MethodInfo* method_info);
bool System_Globalization_GregorianCalendarHelper__IsLeapYear (System_Globalization_GregorianCalendarHelper_o* __this, int32_t year, int32_t era, const MethodInfo* method_info);
System_DateTime_o System_Globalization_GregorianCalendarHelper__ToDateTime (System_Globalization_GregorianCalendarHelper_o* __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, const MethodInfo* method_info);
void System_Globalization_GregorianCalendarHelper___cctor (const MethodInfo* method_info);
