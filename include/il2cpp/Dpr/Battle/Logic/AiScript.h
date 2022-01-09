#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_AiScript___ctor (Dpr_Battle_Logic_AiScript_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiScript__StartLoadScript (Dpr_Battle_Logic_AiScript_o* __this, int32_t scriptNo, const MethodInfo* method_info);
Dpr_Battle_Logic_BtlAIBaseScript_o* Dpr_Battle_Logic_AiScript__CreateScriptBase (uint32_t scriptNo, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiScript__ReleaseAiScriptCache (const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiScript__WaitLoadScript (Dpr_Battle_Logic_AiScript_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiScript__SetExecParameter (Dpr_Battle_Logic_AiScript_o* __this, Dpr_Battle_Logic_AiScriptCommandHandler_o* commandHandler, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiScript__Execute (Dpr_Battle_Logic_AiScript_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiScript__GetResult (Dpr_Battle_Logic_AiScript_o* __this, Dpr_Battle_Logic_AiScript_Result_o* dest, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiScript__UnLoadScript (Dpr_Battle_Logic_AiScript_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiScript___cctor (const MethodInfo* method_info);
