#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_TurnEnd___ctor (Dpr_Battle_Logic_Section_TurnEnd_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__Execute (Dpr_Battle_Logic_Section_TurnEnd_o* __this, Dpr_Battle_Logic_Section_TurnEnd_Result_o* pResult, Dpr_Battle_Logic_Section_TurnEnd_Description_o** description, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__removeRaidBossReinforceHandler (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__updateRaidBossReinforceTurn (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__updateRaidBossGWazaUseSchedule (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__updateRaidBossGWall (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__updateGGauge (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__updateGMode (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__updateGMode (Dpr_Battle_Logic_Section_TurnEnd_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_TurnEnd__needEndG (Dpr_Battle_Logic_Section_TurnEnd_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pPoke, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__reliveAllDeadPartyOnRaidBattle (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__reliveAllDeadPartyOnRaidBattle (Dpr_Battle_Logic_Section_TurnEnd_o* __this, int32_t clientID, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__updateGRights (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__updateGRights (Dpr_Battle_Logic_Section_TurnEnd_o* __this, int32_t side, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_TurnEnd__checkTransferGRights (Dpr_Battle_Logic_Section_TurnEnd_o* __this, int32_t side, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__transferGRights (Dpr_Battle_Logic_Section_TurnEnd_o* __this, int32_t side, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__clearPokeTurnFlag (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__storeFrontPokeByAgilityOrder (Dpr_Battle_Logic_Section_TurnEnd_o* __this, Dpr_Battle_Logic_PokeSet_o* pPokeSet, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__incPokeTurnCount (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_TurnEnd__checkForceQuitByTurnOver (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
void Dpr_Battle_Logic_Section_TurnEnd__checkBattleTalk (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
bool Dpr_Battle_Logic_Section_TurnEnd__checkRaidBattleForceQuit (Dpr_Battle_Logic_Section_TurnEnd_o* __this, const MethodInfo* method);
