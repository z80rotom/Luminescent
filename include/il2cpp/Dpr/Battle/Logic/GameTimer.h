#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_GameTimer__Initialize (Dpr_Battle_Logic_GameTimer_o* __this, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_GameTimer__GetTime (Dpr_Battle_Logic_GameTimer_o* __this, int32_t type, const MethodInfo* method);
void Dpr_Battle_Logic_GameTimer__SetTime (Dpr_Battle_Logic_GameTimer_o* __this, int32_t type, uint32_t time, const MethodInfo* method);
void Dpr_Battle_Logic_GameTimer__StartCountDown (Dpr_Battle_Logic_GameTimer_o* __this, int32_t type, uint8_t level, const MethodInfo* method);
void Dpr_Battle_Logic_GameTimer__Pause (Dpr_Battle_Logic_GameTimer_o* __this, int32_t type, uint8_t level, const MethodInfo* method);
bool Dpr_Battle_Logic_GameTimer__IsFinish (Dpr_Battle_Logic_GameTimer_o* __this, int32_t type, const MethodInfo* method);
void Dpr_Battle_Logic_GameTimer__setPauseFlag (Dpr_Battle_Logic_GameTimer_o* __this, int32_t type, uint8_t level, bool flag, const MethodInfo* method);
bool Dpr_Battle_Logic_GameTimer__isPause (Dpr_Battle_Logic_GameTimer_o* __this, int32_t type, const MethodInfo* method);
void Dpr_Battle_Logic_GameTimer__clearPauseFlag (Dpr_Battle_Logic_GameTimer_o* __this, int32_t type, const MethodInfo* method);
void Dpr_Battle_Logic_GameTimer___ctor (Dpr_Battle_Logic_GameTimer_o* __this, const MethodInfo* method);
