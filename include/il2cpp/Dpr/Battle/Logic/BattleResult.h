#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_BattleResult__ApplyBattlePartyStateOnly (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* setupParam, Dpr_Battle_Logic_BattleEnv_o* pBattleEnvForServer, Dpr_Battle_Logic_BattleEnv_o* pBattleEnvForClient, Dpr_Battle_Logic_MainModule_o* mainModule, uint8_t myClientId, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResult__ApplyBattlePartyData (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* setupParam, Dpr_Battle_Logic_BattleEnv_o* pBattleEnvForServer, Dpr_Battle_Logic_BattleEnv_o* pBattleEnvForClient, Dpr_Battle_Logic_MainModule_o* mainModule, uint8_t myClientId, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleResult__isBossBattle (Dpr_Battle_Logic_MainModule_o* pMainModule, Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* pSetupParam, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResult__addFriendshipByBossBattle (Pml_PokeParty_o* pParty, const MethodInfo* method);
bool Dpr_Battle_Logic_BattleResult__needRevertItem (Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* pSetupParam, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResult__revertItem (Pml_PokeParty_o* pSrcParty, Pml_PokeParty_o* pOrgParty, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResult__adjustMaxHP (Pml_PokeParty_o* pSrcParty, Pml_PokeParty_o* pOrgParty, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResult__resetForm (Pml_PokeParty_o* party, Pml_PokeParty_o* orgParty, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResult__resetForm (Pml_PokePara_PokemonParam_o* pokeParam, Pml_PokePara_PokemonParam_o** orgParam, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResult__clearUnknownUBNickName (Dpr_Battle_Logic_MainModule_o* mainModule, Pml_PokeParty_o* party, const MethodInfo* method);
void Dpr_Battle_Logic_BattleResult__ApplyRecordHeader (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* setupParam, Dpr_Battle_Logic_MainModule_o* mainModule, uint8_t myClientId, int32_t result, const MethodInfo* method);
uint32_t Dpr_Battle_Logic_BattleResult__GetRecTurnCount (uint8_t* recordData, uint32_t recordDataSize, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResult__GetRecResult1 (int32_t result, const MethodInfo* method);
int32_t Dpr_Battle_Logic_BattleResult__GetRecResult2 (Dpr_Battle_Logic_MainModule_o* mainModule, int32_t result, const MethodInfo* method);
