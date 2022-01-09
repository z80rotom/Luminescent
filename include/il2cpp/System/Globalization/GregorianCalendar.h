#pragma once

#include "il2cpp.h"

void System_Globalization_GregorianCalendar__OnDeserialized (System_Globalization_GregorianCalendar_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method_info);
System_DateTime_o System_Globalization_GregorianCalendar__get_MinSupportedDateTime (System_Globalization_GregorianCalendar_o* __this, const MethodInfo* method_info);
System_DateTime_o System_Globalization_GregorianCalendar__get_MaxSupportedDateTime (System_Globalization_GregorianCalendar_o* __this, const MethodInfo* method_info);
System_Globalization_Calendar_o* System_Globalization_GregorianCalendar__GetDefaultInstance (const MethodInfo* method_info);
void System_Globalization_GregorianCalendar___ctor (System_Globalization_GregorianCalendar_o* __this, const MethodInfo* method_info);
void System_Globalization_GregorianCalendar___ctor (System_Globalization_GregorianCalendar_o* __this, int32_t type, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__get_ID (System_Globalization_GregorianCalendar_o* __this, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__GetDatePart (System_Globalization_GregorianCalendar_o* __this, int64_t ticks, int32_t part, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__GetDayOfMonth (System_Globalization_GregorianCalendar_o* __this, System_DateTime_o time, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__GetDayOfWeek (System_Globalization_GregorianCalendar_o* __this, System_DateTime_o time, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__GetDaysInMonth (System_Globalization_GregorianCalendar_o* __this, int32_t year, int32_t month, int32_t era, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__GetEra (System_Globalization_GregorianCalendar_o* __this, System_DateTime_o time, const MethodInfo* method_info);
System_Int32_array* System_Globalization_GregorianCalendar__get_Eras (System_Globalization_GregorianCalendar_o* __this, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__GetMonth (System_Globalization_GregorianCalendar_o* __this, System_DateTime_o time, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__GetMonthsInYear (System_Globalization_GregorianCalendar_o* __this, int32_t year, int32_t era, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__GetYear (System_Globalization_GregorianCalendar_o* __this, System_DateTime_o time, const MethodInfo* method_info);
bool System_Globalization_GregorianCalendar__IsLeapYear (System_Globalization_GregorianCalendar_o* __this, int32_t year, int32_t era, const MethodInfo* method_info);
System_DateTime_o System_Globalization_GregorianCalendar__ToDateTime (System_Globalization_GregorianCalendar_o* __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, const MethodInfo* method_info);
bool System_Globalization_GregorianCalendar__TryToDateTime (System_Globalization_GregorianCalendar_o* __this, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, System_DateTime_o* result, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__get_TwoDigitYearMax (System_Globalization_GregorianCalendar_o* __this, const MethodInfo* method_info);
int32_t System_Globalization_GregorianCalendar__ToFourDigitYear (System_Globalization_GregorianCalendar_o* __this, int32_t year, const MethodInfo* method_info);
void System_Globalization_GregorianCalendar___cctor (const MethodInfo* method_info);
