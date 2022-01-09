#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_AiJudge___ctor (Dpr_Battle_Logic_AiJudge_o* __this, uint8_t myClientID, int32_t minScriptNo, int32_t maxScriptNo, uint32_t targetScriptBit, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiJudge__Dispose (Dpr_Battle_Logic_AiJudge_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_AiJudge__GetMyClientID (Dpr_Battle_Logic_AiJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiJudge__ChangeAiBit (Dpr_Battle_Logic_AiJudge_o* __this, uint32_t targetScriptBit, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_AiJudge__GetAiBit (Dpr_Battle_Logic_AiJudge_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_AiJudge__GetCurrentScriptNo (Dpr_Battle_Logic_AiJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiJudge__ResetScriptNo (Dpr_Battle_Logic_AiJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiJudge__UpdateScriptNo (Dpr_Battle_Logic_AiJudge_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_AiJudge__GetNextScriptNo (Dpr_Battle_Logic_AiJudge_o* __this, int32_t minScriptNo, int32_t maxScriptNo, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiJudge__IsAllScriptFinished (Dpr_Battle_Logic_AiJudge_o* __this, const MethodInfo* method_info);
