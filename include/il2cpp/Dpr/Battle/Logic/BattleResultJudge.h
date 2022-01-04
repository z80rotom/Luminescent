#pragma once

#include "il2cpp.h"

int32_t Dpr_Battle_Logic_BattleResultJudge__CheckBattleResult (Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_POKECON_o** pokecon, Dpr_Battle_Logic_DeadRec_o** deadRec, Dpr_Battle_Logic_TimeLimit_o** timeLimit, int32_t* judgeCause, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResultJudge__JudgeWinSide (Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_POKECON_o** pokecon, Dpr_Battle_Logic_DeadRec_o** deadRec, Dpr_Battle_Logic_TimeLimit_o** timeLimit, int32_t* judgeCause, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResultJudge__GetPokeCountBySide (System_Byte_array* alivePokeCount, System_Byte_array* totalPokeCount, System_Byte_array* timeOverCount, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_POKECON_o** pokecon, Dpr_Battle_Logic_TimeLimit_o** timeLimit, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResultJudge__JudgeWinSide_UniqueAlive (Dpr_Battle_Logic_MainModule_o** mainModule, System_Byte_array* alivePokeCount, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResultJudge__JudgeWinSide_UniqueTimeOver (System_Byte_array* timeOverCount, Dpr_Battle_Logic_MainModule_o** mainModule, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResultJudge__JudgeWinSide_DeadBoth (System_Byte_array* alivePokeCount, System_Byte_array* totalPokeCount, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_DeadRec_o** deadRec, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResultJudge__JudgeWinSide_ByDeadPokeCount (Dpr_Battle_Logic_MainModule_o** mainModule, System_Byte_array* alivePokeCount, System_Byte_array* totalPokeCount, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResultJudge__JudgeWinSide_ByRemainedHpRatio (Dpr_Battle_Logic_MainModule_o** mainModule, System_Int32_array* remainedHpRatio, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResultJudge__JudgeWinSide_ByRemainedHpTotal (Dpr_Battle_Logic_MainModule_o** mainModule, System_Int32_array* remainedHpTotal, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResultJudge__CalcHPRatio (int32_t* HP_sum, int32_t* HP_ratio, Dpr_Battle_Logic_MainModule_o** mainModule, Dpr_Battle_Logic_POKECON_o** pokecon, int32_t* targetSide, const MethodInfo* method);
