#pragma once

#include "il2cpp.h"

Pml_PokeParty_o* Dpr_EncountTools__CreateSimpleParty (int32_t monsNo0, int32_t level0, int32_t monsNo1, int32_t level1, Pml_PokeParty_o* party, uint16_t sex, uint16_t seikaku, uint16_t sex1, uint16_t seikaku1, uint16_t form0, uint16_t form1, uint8_t talentVNum, const MethodInfo* method_info);
uint16_t Dpr_EncountTools__SetWildPokemonItem (Pml_PokePara_PokemonParam_o* pp, int32_t itemRnd, int32_t rnd1, int32_t rnd2, const MethodInfo* method_info);
void Dpr_EncountTools__SetupBattleWild (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* battleSetupParam, Pml_PokeParty_o* iPtrEnemyParty, int32_t arenaID, int32_t mapAttrib, int32_t weatherType, bool isSwim, bool isFishing, int32_t partnerID, bool isCaptureDemo, int32_t safariBallNum, bool isSymbol, bool isMitu, System_String_o* overlapBgm, int32_t overlapSetupEffectId, bool isCantUseBall, const MethodInfo* method_info);
bool Dpr_EncountTools__IsUseSetupEffectVariation (Pml_PokeParty_o* party, const MethodInfo* method_info);
void Dpr_EncountTools__SetupBattleTrainer (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* battleSetupParam, int32_t arenaID, int32_t mapAttrib, int32_t weatherType, int32_t rule, int32_t enemyID0, int32_t enemyID1, int32_t partnerID, const MethodInfo* method_info);
void Dpr_EncountTools__SetupBattleTowerTrainer (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* battleSetupParam, Pml_PokeParty_o* playerParty, int32_t rule, int32_t arenaID, int32_t weatherType, int32_t enemy1, Pml_PokeParty_o* enemy1Party, Dpr_Trainer_SealTemplateID_array* enemy1SealTIDs, int32_t enemy2, Pml_PokeParty_o* enemy2Party, Dpr_Trainer_SealTemplateID_array* enemy2SealTIDs, TowerLotResult_o* lotResult, const MethodInfo* method_info);
void Dpr_EncountTools__SetupBattleTowerTrainer (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* battleSetupParam, Pml_PokeParty_o* playerParty, TowerLotResult_o* lot, int32_t arenaID, int32_t weatherType, TowerLotResult_o* lotResult, const MethodInfo* method_info);
void Dpr_EncountTools__GetTrainerExParams (int32_t enemyID0, int32_t enemyID1, int32_t partnerId, int32_t rule, int32_t* trainerArenaID, int32_t* trainerSetupEffectId, int32_t* trainerEffectBattleId, const MethodInfo* method_info);
void Dpr_EncountTools__SetWeather (Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* situation, int32_t weatherType, const MethodInfo* method_info);
void Dpr_EncountTools__OnPostBattle (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, Pml_PokeParty_o* iPtrPlayerParty, int32_t* outEvolveCheckTargetIndices, System_Collections_IEnumerator_o** outDispError, const MethodInfo* method_info);
void Dpr_EncountTools__OnPostRegisterZukan (Pml_PokePara_PokemonParam_o* capturePokemonParam, int32_t throwBallCount, const MethodInfo* method_info);
int32_t Dpr_EncountTools__GetPokemonParamIndex (Pml_PokeParty_o* party, Pml_PokePara_PokemonParam_o* org, const MethodInfo* method_info);
void Dpr_EncountTools__SetTrainerWinFlag (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, const MethodInfo* method_info);
void Dpr_EncountTools__ReflectTokuseiMonohiroiMitsuatsume (Pml_PokeParty_o* pMyParty, const MethodInfo* method_info);
bool Dpr_EncountTools__isEvolveCheckTarget (Pml_PokeParty_o* playerParty, uint8_t memberIdx, int32_t result, bool isLevelUp, const MethodInfo* method_info);
void Dpr_EncountTools__GetAttEff (int32_t mapAttributeEx, int32_t arenaID, int32_t lot, int32_t* setupEffectId, int32_t* effectBattleID, System_String_o** soundEventNama, const MethodInfo* method_info);
int32_t Dpr_EncountTools__GetBattleSetupEffectLot (int32_t rule, int32_t competitor, uint8_t multiMode, int32_t trainerID0, int32_t trainerID1, const MethodInfo* method_info);
int32_t Dpr_EncountTools__GetDemoCaptureTrainer (bool isPlayerMale, int32_t defaultPokeType, const MethodInfo* method_info);
Pml_PokeParty_o* Dpr_EncountTools__CreateDemoCapturePokeParty (int32_t trainerID, const MethodInfo* method_info);
uint16_t Dpr_EncountTools__GetMonohiroiItem (uint32_t level, const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* Dpr_EncountTools__CreateFixPokeParam (int32_t monsNo, uint16_t level, uint32_t hp, uint16_t sex, uint16_t seikaku, uint32_t sick, uint64_t random, uint8_t talentVNum, const MethodInfo* method_info);
bool Dpr_EncountTools__IsLegendPoke (int32_t monsNo, const MethodInfo* method_info);
bool Dpr_EncountTools__IsRecoverFromPartner (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, const MethodInfo* method_info);
void Dpr_EncountTools__SetupBattleComm (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, int32_t networkType, int32_t commRule, uint8_t commPos, Dpr_Regulation_Data_o* regulation, int32_t stationIndex0, Pml_PokeParty_o* party0, MYSTATUS_COMM_o* mystatus0, Dpr_BallDeco_CapsuleData_array* capsuleDatas0, int32_t stationIndex1, Pml_PokeParty_o* party1, MYSTATUS_COMM_o* mystatus1, Dpr_BallDeco_CapsuleData_array* capsuleDatas1, int32_t stationIndex2, Pml_PokeParty_o* party2, MYSTATUS_COMM_o* mystatus2, Dpr_BallDeco_CapsuleData_array* capsuleDatas2, int32_t stationIndex3, Pml_PokeParty_o* party3, MYSTATUS_COMM_o* mystatus3, Dpr_BallDeco_CapsuleData_array* capsuleDatas3, System_String_o* bgm, System_String_o* winBgm, uint32_t GameLimitSec, uint32_t CommandLimitSec, const MethodInfo* method_info);
void Dpr_EncountTools__setupPlayerInfo (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, int32_t index, int32_t stationIndex, Pml_PokeParty_o* party, MYSTATUS_COMM_o* mystatus, Dpr_BallDeco_CapsuleData_array* capsuledata, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_EncountTools__DispErrorCoroutine (int32_t commError, bool isDisplayedError, const MethodInfo* method_info);
void Dpr_EncountTools___cctor (const MethodInfo* method_info);
