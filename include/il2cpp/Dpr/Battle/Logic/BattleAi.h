#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_BattleAi___ctor (Dpr_Battle_Logic_BattleAi_o* __this, Dpr_Battle_Logic_BattleAi_SetupParam_o** setupParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAi__ChangeScript (Dpr_Battle_Logic_BattleAi_o* __this, uint32_t scriptNoBit, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_BattleAi__GetScript (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAi__IsActionSelectFinished (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_BattleAi_Result_o* Dpr_Battle_Logic_BattleAi__GetResult (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAi__StartActionSelect (Dpr_Battle_Logic_BattleAi_o* __this, Dpr_Battle_Logic_BattleAi_StartParam_o** startParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAi__UpdateActionSelect (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAi__setActionDataByWazaJudge (Dpr_Battle_Logic_BattleAi_o* __this, Dpr_Battle_Logic_AiWazaJudge_o** wazaJudge, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAi__CheckSpecialAction (Dpr_Battle_Logic_BattleAi_o* __this, Dpr_Battle_Logic_BattleAi_Result_o* result, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAi__IsItemUseEnable (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAi__IsPokeChangeEnable (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAi__IsEnemyExist (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleAi__IsWazaUseEnable (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_BattleAi__GetItemNoForWazaJudge (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAi__UpdateJudge (Dpr_Battle_Logic_BattleAi_o* __this, Dpr_Battle_Logic_AiJudge_o* judge, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_BattleAi__GetSelectableWazaCount (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAi__DecideAction (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAi__GetBestAction (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAi__GetForcedAction (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAi__selectForcedActionByPriority (Dpr_Battle_Logic_BattleAi_AiAction_array* candidates, uint32_t numCandidates, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAi__GetBestScoredAction (Dpr_Battle_Logic_BattleAi_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_BattleAi__storeBestScoredActions (Dpr_Battle_Logic_BattleAi_o* __this, Dpr_Battle_Logic_BattleAi_AiAction_array* dest, uint32_t numDestArray, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleAi__SelectActionAtRandom (Dpr_Battle_Logic_BattleAi_o* __this, Dpr_Battle_Logic_BattleAi_AiAction_array* actionArray, uint32_t actionNum, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAi__SetupActionParam (Dpr_Battle_Logic_BattleAi_o* __this, Dpr_Battle_Logic_BattleAi_Result_o* destParam, int32_t action, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleAi___cctor (const MethodInfo* method_info);
