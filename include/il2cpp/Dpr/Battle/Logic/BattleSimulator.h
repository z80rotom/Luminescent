#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_BattleSimulator___ctor (Dpr_Battle_Logic_BattleSimulator_o* __this, Dpr_Battle_Logic_BattleSimulator_SetupParam_o** param, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleSimulator__createBattleEnv (Dpr_Battle_Logic_BattleSimulator_o* __this, Dpr_Battle_Logic_MainModule_o* pMainModule, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleSimulator__createBattleDriver (Dpr_Battle_Logic_BattleSimulator_o* __this, Dpr_Battle_Logic_MainModule_o* pMainModule, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_BattleSimulator__GetWeather (Dpr_Battle_Logic_BattleSimulator_o* __this, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_BattleSimulator__CalcAgility (Dpr_Battle_Logic_BattleSimulator_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, bool isTrickRoomApply, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_BattleSimulator__CalcAgilityOrder (Dpr_Battle_Logic_BattleSimulator_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, bool isTrickRoomApply, const MethodInfo* method_info);
bool Dpr_Battle_Logic_BattleSimulator__IsPosEffectExist (Dpr_Battle_Logic_BattleSimulator_o* __this, uint8_t pos, int32_t effect, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_BattleSimulator__CalcDamage (Dpr_Battle_Logic_BattleSimulator_o* __this, uint8_t atkPokeID, uint8_t defPokeID, int32_t waza, bool isAffinityEnable, bool isRandomEnable, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_BattleSimulator__CalcTypeAffinity (Dpr_Battle_Logic_BattleSimulator_o* __this, uint8_t atkPokeID, uint8_t defPokeID, int32_t waza, bool onlyAttacker, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleSimulator__copyBattleEnv (Dpr_Battle_Logic_BattleSimulator_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_BattleSimulator__clearServerCommandQueue (Dpr_Battle_Logic_BattleSimulator_o* __this, const MethodInfo* method_info);
