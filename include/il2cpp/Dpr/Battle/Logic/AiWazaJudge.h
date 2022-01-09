#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_AiWazaJudge___ctor (Dpr_Battle_Logic_AiWazaJudge_o* __this, Dpr_Battle_Logic_AiScript_o* aiScript, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* pBattleEnv, Dpr_Battle_Logic_BattleSimulator_o* pBattleSimulator, uint64_t randSeed, uint32_t ai_bit, uint8_t myClientID, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__Dispose (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__SetJudgeParam (Dpr_Battle_Logic_AiWazaJudge_o* __this, System_Boolean_array* usableWazaFlags, uint8_t pos, uint8_t pokeID, uint16_t itemId, bool isGoingToStartG, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__StartJudge (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiWazaJudge__IsJudgeFinished (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__UpdateJudge (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__subProc_Core (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiWazaJudge__incrementTargetIndex (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_AiWazaJudge__updateTargetPos (Dpr_Battle_Logic_AiWazaJudge_o* __this, bool bFriendSide, uint8_t targetIdx, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiWazaJudge__isTargettingCoveragePos (Dpr_Battle_Logic_AiWazaJudge_o* __this, int32_t waza_no, uint8_t targetPos, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_AiWazaJudge__correctTargetPos (Dpr_Battle_Logic_AiWazaJudge_o* __this, uint8_t targetPos, uint8_t wazaIdx, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_AiWazaJudge__searchBestScorePos (Dpr_Battle_Logic_AiWazaJudge_o* __this, uint8_t wazaIdx, uint8_t atkPos, int32_t side, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_AiWazaJudge__decideTargetPoke (Dpr_Battle_Logic_AiWazaJudge_o* __this, uint8_t target_pos, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__wazaScore_Reset (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_AiWazaJudge__wazaScore_Add (Dpr_Battle_Logic_AiWazaJudge_o* __this, uint8_t wazaIdx, uint8_t targetPos, int32_t score, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__wazaScore_SetScoreless (Dpr_Battle_Logic_AiWazaJudge_o* __this, uint8_t wazaIdx, uint8_t targetPos, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiWazaJudge__wazaScore_IsScoreless (Dpr_Battle_Logic_AiWazaJudge_o* __this, uint8_t wazaIdx, uint8_t targetPos, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__wazaScore_DecideBest (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__wazaScore_DecideRaidBoss (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_AiWazaJudge__getAttackerWazaNo (Dpr_Battle_Logic_AiWazaJudge_o* __this, uint8_t wazaIdx, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiWazaJudge__IsEnemyEscape (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiWazaJudge__IsWazaSelected (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_AiWazaJudge__GetSelectedWazaScore (Dpr_Battle_Logic_AiWazaJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiWazaJudge__GetSelectedWaza (Dpr_Battle_Logic_AiWazaJudge_o* __this, uint8_t* wazaIdx, uint8_t* targetPos, const MethodInfo* method_info);
