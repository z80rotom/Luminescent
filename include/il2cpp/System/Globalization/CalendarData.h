#pragma once

#include "il2cpp.h"

void System_Globalization_CalendarData___ctor (System_Globalization_CalendarData_o* __this, const MethodInfo* method);
void System_Globalization_CalendarData___cctor (const MethodInfo* method);
void System_Globalization_CalendarData___ctor (System_Globalization_CalendarData_o* __this, System_String_o* localeName, int32_t calendarId, bool bUseUserOverrides, const MethodInfo* method);
void System_Globalization_CalendarData__InitializeEraNames (System_Globalization_CalendarData_o* __this, System_String_o* localeName, int32_t calendarId, const MethodInfo* method);
void System_Globalization_CalendarData__InitializeAbbreviatedEraNames (System_Globalization_CalendarData_o* __this, System_String_o* localeName, int32_t calendarId, const MethodInfo* method);
System_Globalization_CalendarData_o* System_Globalization_CalendarData__GetCalendarData (int32_t calendarId, const MethodInfo* method);
System_String_o* System_Globalization_CalendarData__CalendarIdToCultureName (int32_t calendarId, const MethodInfo* method);
int32_t System_Globalization_CalendarData__nativeGetTwoDigitYearMax (int32_t calID, const MethodInfo* method);
bool System_Globalization_CalendarData__nativeGetCalendarData (System_Globalization_CalendarData_o* data, System_String_o* localeName, int32_t calendarId, const MethodInfo* method);
bool System_Globalization_CalendarData__fill_calendar_data (System_Globalization_CalendarData_o* __this, System_String_o* localeName, int32_t datetimeIndex, const MethodInfo* method);
