#pragma once

#include "il2cpp.h"

uint32_t Dpr_Battle_Logic_GMode__GetMaxTurn (const MethodInfo* method_info);
bool Dpr_Battle_Logic_GMode__IsGPokeExist (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, int32_t targetClientID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GMode__CanStartG (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, int32_t clientID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GMode__NeedGButtonDisplay (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, int32_t clientID, const MethodInfo* method_info);
bool Dpr_Battle_Logic_GMode__IsSpecialGExist (int32_t monsno, uint16_t formno, const MethodInfo* method_info);
