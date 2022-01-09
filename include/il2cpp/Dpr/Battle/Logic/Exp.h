#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Exp__CalcExp (Dpr_Battle_Logic_Exp_CalcParam_o** calcParam, Dpr_Battle_Logic_Exp_CalcResult_o* pResult, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Exp__CalcBaseExp (uint32_t deadPokeExp, uint32_t deadPokeLevel, uint32_t pokeLevel, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Exp__CalcGakusyusoutiExp (uint32_t baseExp, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Exp__getexp_calc_adjust_level (uint32_t base_exp, uint16_t getpoke_lv, uint16_t deadpoke_lv, const MethodInfo* method_info);
float Dpr_Battle_Logic_Exp__calc_adjust_level_sub (float fValue, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Exp__ApplyBonus_Received (uint32_t exp, uint32_t playerLangId, uint32_t pokeLangId, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Exp__ApplyBonus_Siawasetamago (uint32_t exp, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Exp__ApplyBonus_EvoCanceled (uint32_t exp, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Exp__ApplyBonus_Friendship (uint32_t exp, const MethodInfo* method_info);
