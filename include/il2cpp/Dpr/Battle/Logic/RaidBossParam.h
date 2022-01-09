#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_RaidBossParam___ctor (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_RaidBossParam__CopyFrom (Dpr_Battle_Logic_RaidBossParam_o* __this, Dpr_Battle_Logic_RaidBossParam_o** src, const MethodInfo* method_info);
void Dpr_Battle_Logic_RaidBossParam__Setup (Dpr_Battle_Logic_RaidBossParam_o* __this, Dpr_Battle_Logic_RaidBossParam_SetupParam_o** param, const MethodInfo* method_info);
float Dpr_Battle_Logic_RaidBossParam__GetHPCoef (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_GWall_o* Dpr_Battle_Logic_RaidBossParam__GetGWallConst (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_GWall_o* Dpr_Battle_Logic_RaidBossParam__GetGWall (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_RaidBossParam__GetGrade (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_RaidBossParam__GetReinforceTurn (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_RaidBossParam__SetReinforceTurn (Dpr_Battle_Logic_RaidBossParam_o* __this, uint8_t turn, const MethodInfo* method_info);
void Dpr_Battle_Logic_RaidBossParam__DecReinforceTurn (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_RaidBossParam__GetActionNum (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_RaidBossParam__GetGWazaUseFrequency (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_RaidBossParam__IsOnGWazaUseTurn (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_RaidBossParam__DecGWazaUseTurn (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_RaidBossParam__SetGWazaUsed (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_RaidBossParam__ResetGWazaUseSchedule (Dpr_Battle_Logic_RaidBossParam_o* __this, uint8_t reUseTurn, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_RaidBossParam__GetAngryHPThreshold (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_RaidBossParam__IncAngryLevel (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_RaidBossParam__IsAngryLevelMax (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_RaidBossParam__IsAngry (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_RaidBossParam__GetAngryWaza (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_RaidBossParam__GetAngryWazaTiming (Dpr_Battle_Logic_RaidBossParam_o* __this, const MethodInfo* method_info);
