#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_SkillSwap___ctor (Dpr_Battle_Logic_Section_SkillSwap_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_SkillSwap__Execute (Dpr_Battle_Logic_Section_SkillSwap_o* __this, Dpr_Battle_Logic_Section_SkillSwap_Result_o* pResult, Dpr_Battle_Logic_Section_SkillSwap_Description_o** desc, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_SkillSwap__checkFail (Dpr_Battle_Logic_Section_SkillSwap_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* pTarget, uint8_t cause, const MethodInfo* method);
void Dpr_Battle_Logic_Section_SkillSwap__afterTokuseiChanged_Event (Dpr_Battle_Logic_Section_SkillSwap_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method);
void Dpr_Battle_Logic_Section_SkillSwap__afterTokuseiChanged_Item (Dpr_Battle_Logic_Section_SkillSwap_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, int32_t prevTokusei, int32_t nextTokusei, const MethodInfo* method);
