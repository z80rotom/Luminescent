#pragma once

#include "il2cpp.h"

void System_TimeSpan___ctor (System_TimeSpan_o __this, int64_t ticks, const MethodInfo* method);
void System_TimeSpan___ctor (System_TimeSpan_o __this, int32_t hours, int32_t minutes, int32_t seconds, const MethodInfo* method);
void System_TimeSpan___ctor (System_TimeSpan_o __this, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds, const MethodInfo* method);
int64_t System_TimeSpan__get_Ticks (System_TimeSpan_o __this, const MethodInfo* method);
int32_t System_TimeSpan__get_Days (System_TimeSpan_o __this, const MethodInfo* method);
int32_t System_TimeSpan__get_Hours (System_TimeSpan_o __this, const MethodInfo* method);
int32_t System_TimeSpan__get_Minutes (System_TimeSpan_o __this, const MethodInfo* method);
double System_TimeSpan__get_TotalDays (System_TimeSpan_o __this, const MethodInfo* method);
double System_TimeSpan__get_TotalHours (System_TimeSpan_o __this, const MethodInfo* method);
double System_TimeSpan__get_TotalMilliseconds (System_TimeSpan_o __this, const MethodInfo* method);
double System_TimeSpan__get_TotalMinutes (System_TimeSpan_o __this, const MethodInfo* method);
double System_TimeSpan__get_TotalSeconds (System_TimeSpan_o __this, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__Add (System_TimeSpan_o __this, System_TimeSpan_o ts, const MethodInfo* method);
int32_t System_TimeSpan__CompareTo (System_TimeSpan_o __this, Il2CppObject* value, const MethodInfo* method);
int32_t System_TimeSpan__CompareTo (System_TimeSpan_o __this, System_TimeSpan_o value, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__FromDays (double value, const MethodInfo* method);
bool System_TimeSpan__Equals (System_TimeSpan_o __this, Il2CppObject* value, const MethodInfo* method);
bool System_TimeSpan__Equals (System_TimeSpan_o __this, System_TimeSpan_o obj, const MethodInfo* method);
int32_t System_TimeSpan__GetHashCode (System_TimeSpan_o __this, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__FromHours (double value, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__Interval (double value, int32_t scale, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__FromMilliseconds (double value, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__FromMinutes (double value, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__Negate (System_TimeSpan_o __this, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__FromSeconds (double value, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__Subtract (System_TimeSpan_o __this, System_TimeSpan_o ts, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__FromTicks (int64_t value, const MethodInfo* method);
int64_t System_TimeSpan__TimeToTicks (int32_t hour, int32_t minute, int32_t second, const MethodInfo* method);
System_String_o* System_TimeSpan__ToString (System_TimeSpan_o __this, const MethodInfo* method);
System_String_o* System_TimeSpan__ToString (System_TimeSpan_o __this, System_String_o* format, const MethodInfo* method);
System_String_o* System_TimeSpan__ToString (System_TimeSpan_o __this, System_String_o* format, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__op_Subtraction (System_TimeSpan_o t1, System_TimeSpan_o t2, const MethodInfo* method);
System_TimeSpan_o System_TimeSpan__op_Addition (System_TimeSpan_o t1, System_TimeSpan_o t2, const MethodInfo* method);
bool System_TimeSpan__op_Equality (System_TimeSpan_o t1, System_TimeSpan_o t2, const MethodInfo* method);
bool System_TimeSpan__op_Inequality (System_TimeSpan_o t1, System_TimeSpan_o t2, const MethodInfo* method);
bool System_TimeSpan__op_LessThan (System_TimeSpan_o t1, System_TimeSpan_o t2, const MethodInfo* method);
bool System_TimeSpan__op_LessThanOrEqual (System_TimeSpan_o t1, System_TimeSpan_o t2, const MethodInfo* method);
bool System_TimeSpan__op_GreaterThan (System_TimeSpan_o t1, System_TimeSpan_o t2, const MethodInfo* method);
bool System_TimeSpan__op_GreaterThanOrEqual (System_TimeSpan_o t1, System_TimeSpan_o t2, const MethodInfo* method);
bool System_TimeSpan__GetLegacyFormatMode (const MethodInfo* method);
bool System_TimeSpan__get_LegacyMode (const MethodInfo* method);
void System_TimeSpan___cctor (const MethodInfo* method);
