#pragma once

#include "il2cpp.h"

void SystemTimeWork__SetStartTime (bool reset, const MethodInfo* method);
DPData_GMTIME_o SystemTimeWork__GetStartTime (const MethodInfo* method);
void SystemTimeWork__SetSaveTime (const MethodInfo* method);
DPData_GMTIME_o SystemTimeWork__GetSaveTime (const MethodInfo* method);
void SystemTimeWork__SetDailyEventLastTime (const MethodInfo* method);
DPData_GMTIME_o SystemTimeWork__GetDailyEventLastTime (const MethodInfo* method);
void SystemTimeWork__SetTime (DPData_GMTIME_o* time, const MethodInfo* method);
void SystemTimeWork__SetPenaltyTime (const MethodInfo* method);
bool SystemTimeWork__IsPenalty (const MethodInfo* method);
void SystemTimeWork__Penalty_Off (const MethodInfo* method);
DPData_GMTIME_o SystemTimeWork__GetPenaltyTime (const MethodInfo* method);
void SystemTimeWork__PenaltyOff_DailyEventLastTime (const MethodInfo* method);
