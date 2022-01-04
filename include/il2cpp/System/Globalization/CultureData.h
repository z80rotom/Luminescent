#pragma once

#include "il2cpp.h"

void System_Globalization_CultureData___ctor (System_Globalization_CultureData_o* __this, System_String_o* name, const MethodInfo* method);
System_Globalization_CultureData_o* System_Globalization_CultureData__get_Invariant (const MethodInfo* method);
System_Globalization_CultureData_o* System_Globalization_CultureData__GetCultureData (System_String_o* cultureName, bool useUserOverride, const MethodInfo* method);
System_Globalization_CultureData_o* System_Globalization_CultureData__GetCultureData (System_String_o* cultureName, bool useUserOverride, int32_t datetimeIndex, int32_t calendarId, int32_t numberIndex, System_String_o* iso2lang, int32_t ansiCodePage, int32_t oemCodePage, int32_t macCodePage, int32_t ebcdicCodePage, bool rightToLeft, System_String_o* listSeparator, const MethodInfo* method);
System_Globalization_CultureData_o* System_Globalization_CultureData__GetCultureData (int32_t culture, bool bUseUserOverride, const MethodInfo* method);
void System_Globalization_CultureData__fill_culture_data (System_Globalization_CultureData_o* __this, int32_t datetimeIndex, const MethodInfo* method);
System_Globalization_CalendarData_o* System_Globalization_CultureData__GetCalendar (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__get_LongTimes (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__get_ShortTimes (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__get_SISO639LANGNAME (System_Globalization_CultureData_o* __this, const MethodInfo* method);
int32_t System_Globalization_CultureData__get_IFIRSTDAYOFWEEK (System_Globalization_CultureData_o* __this, const MethodInfo* method);
int32_t System_Globalization_CultureData__get_IFIRSTWEEKOFYEAR (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__get_SAM1159 (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__get_SPM2359 (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__get_TimeSeparator (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_Int32_array* System_Globalization_CultureData__get_CalendarIds (System_Globalization_CultureData_o* __this, const MethodInfo* method);
bool System_Globalization_CultureData__get_IsInvariantCulture (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__get_CultureName (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__get_SCOMPAREINFO (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__get_STEXTINFO (System_Globalization_CultureData_o* __this, const MethodInfo* method);
int32_t System_Globalization_CultureData__get_ILANGUAGE (System_Globalization_CultureData_o* __this, const MethodInfo* method);
bool System_Globalization_CultureData__get_UseUserOverride (System_Globalization_CultureData_o* __this, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__EraNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__AbbrevEraNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__AbbreviatedEnglishEraNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__ShortDates (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__LongDates (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__YearMonths (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__DayNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__AbbreviatedDayNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__MonthNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__GenitiveMonthNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__AbbreviatedMonthNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__AbbreviatedGenitiveMonthNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__LeapYearMonthNames (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__MonthDay (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__DateSeparator (System_Globalization_CultureData_o* __this, int32_t calendarId, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__GetDateSeparator (System_String_o* format, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__GetSeparator (System_String_o* format, System_String_o* timeParts, const MethodInfo* method);
int32_t System_Globalization_CultureData__IndexOfTimePart (System_String_o* format, int32_t startIndex, System_String_o* timeParts, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__UnescapeNlsString (System_String_o* str, int32_t start, int32_t end, const MethodInfo* method);
System_String_array* System_Globalization_CultureData__ReescapeWin32Strings (System_String_array* array, const MethodInfo* method);
System_String_o* System_Globalization_CultureData__ReescapeWin32String (System_String_o* str, const MethodInfo* method);
void System_Globalization_CultureData__GetNFIValues (System_Globalization_CultureData_o* __this, System_Globalization_NumberFormatInfo_o* nfi, const MethodInfo* method);
void System_Globalization_CultureData__fill_number_data (System_Globalization_NumberFormatInfo_o* nfi, int32_t numberIndex, const MethodInfo* method);
