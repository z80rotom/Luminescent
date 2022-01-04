#pragma once

#include "il2cpp.h"

bool Dpr_Battle_Logic_SectionUtil__CheckShowdown (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__checkShowdown_Raid (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__checkAllDeadSideExist (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__CheckAllDeadSide (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* battleEnv, int32_t checkSide, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__checkAllDeadClient (Dpr_Battle_Logic_BattleEnv_o* pBattleEnv, int32_t clientID, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__CheckSkipBattleAfterShowdown (Dpr_Battle_Logic_MainModule_o* mainModule, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__CheckTurnEnd (uint8_t interruptCode, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__CheckPlayersClient (Dpr_Battle_Logic_MainModule_o* mainModule, int32_t clientID, const MethodInfo* method);
uint8_t Dpr_Battle_Logic_SectionUtil__GetFriendship (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__CheckPlayersPoke (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__CheckPlayersFriendPoke (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__CheckMustHit (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, Dpr_Battle_Logic_PosPoke_o** posPoke, const MethodInfo* method);
bool Dpr_Battle_Logic_SectionUtil__CheckSkyBattleFailWaza (Dpr_Battle_Logic_MainModule_o* mainModule, int32_t waza, const MethodInfo* method);
int32_t Dpr_Battle_Logic_SectionUtil__CheckEncoreWazaChange (Dpr_Battle_Logic_PokeAction_o* action, const MethodInfo* method);
