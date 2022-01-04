#pragma once

#include "il2cpp.h"

XLSXContent_TowerTrainerTable_o* TrainerSystem__get_TowerTrainerTable (const MethodInfo* method);
XLSXContent_TowerMatchingTable_o* TrainerSystem__get_TowerMatchingTable (const MethodInfo* method);
XLSXContent_TowerSingleStockTable_o* TrainerSystem__get_TowerSingleStockTable (const MethodInfo* method);
XLSXContent_TowerDoubleStockTable_o* TrainerSystem__get_TowerDoubleStockTable (const MethodInfo* method);
Pml_PokePara_PokemonParam_o* TrainerSystem__createPokemon (TrainerSystem_PokeParamForCreate_o* pokeData, XLSXContent_TowerTrainerTable_SheetTrainerData_o* trainerData, XLSXContent_TrainerTable_SheetTrainerType_o* trainerTypeData, uint64_t personal_rand, const MethodInfo* method);
TowerLotResult_o* TrainerSystem__CreateTowerLotResult (int32_t lotRule, int32_t lotCls, int32_t rank, int32_t round, uint64_t seed, const MethodInfo* method);
TowerLotResult_o* TrainerSystem__CreateTowerLotResultByIndex (int32_t lotRule, int32_t lotCls, int32_t rank, int32_t round, int32_t _index, const MethodInfo* method);
XLSXContent_TowerTrainerTable_SheetTrainerData_o* TrainerSystem__GetTowerTrainerData (int32_t towerTrId, const MethodInfo* method);
XLSXContent_TowerTrainerTable_SheetTrainerPoke_o* TrainerSystem__GetTowerPoke (uint32_t pokeID, const MethodInfo* method);
XLSXContent_TowerTrainerTable_SheetTrainerPoke_o* TrainerSystem__GetTowerPokeByIndex (int32_t index, const MethodInfo* method);
XLSXContent_TowerMatchingTable_SheetTowerMatching_o* TrainerSystem__GetTowerMatching (int32_t matchingID, const MethodInfo* method);
XLSXContent_TowerSingleStockTable_SheetTowerSingleStock_o* TrainerSystem__GetTowerSingleStock (uint32_t StockID, const MethodInfo* method);
XLSXContent_TowerDoubleStockTable_SheetTowerDoubleStock_o* TrainerSystem__GetTowerDoubleStock (uint32_t StockID, const MethodInfo* method);
void TrainerSystem__GetTowerSingleStockRange (System_Collections_Generic_List_TowerSingleStockTable_SheetTowerSingleStock__o* recordList, uint32_t StockIDMin, uint32_t StockIDMax, const MethodInfo* method);
void TrainerSystem__GetTowerDoubleStockRange (System_Collections_Generic_List_TowerDoubleStockTable_SheetTowerDoubleStock__o* recordList, uint32_t StockIDMin, uint32_t StockIDMax, const MethodInfo* method);
bool TrainerSystem__getTowerSingleStockRange (int32_t* outIndexMin, int32_t* outIndexMax, uint32_t StockIDMin, uint32_t StockIDMax, const MethodInfo* method);
int32_t TrainerSystem__getTowerSingleStockIndex (uint32_t MatchingID, const MethodInfo* method);
bool TrainerSystem__getTowerDoubleStockRange (int32_t* outIndexMin, int32_t* outIndexMax, uint32_t StockIDMin, uint32_t StockIDMax, const MethodInfo* method);
int32_t TrainerSystem__getTowerDoubleStockIndex (uint32_t MatchingID, const MethodInfo* method);
int32_t TrainerSystem__GetTowerMatchingID (int32_t lotRule, int32_t lotCls, int32_t rank, int32_t round, const MethodInfo* method);
bool TrainerSystem__IsSingleTowerMatchinID (int32_t id, const MethodInfo* method);
int32_t TrainerSystem__LeftSegmentIndex (int32_t index, int32_t arrayLength, const MethodInfo* method);
void TrainerSystem__CheckTowerTable (const MethodInfo* method);
XLSXContent_TrainerTable_o* TrainerSystem__get_TrainerTable (const MethodInfo* method);
XLSXContent_TrainerTable_SheetTrainerType_o* TrainerSystem__GetTrainerType (int32_t trainerType, const MethodInfo* method);
XLSXContent_TrainerTable_SheetTrainerData_o* TrainerSystem__GetTrainerData (int32_t trainerID, const MethodInfo* method);
XLSXContent_TrainerTable_SheetTrainerPoke_o* TrainerSystem__GetTrainerPoke (int32_t trainerID, const MethodInfo* method);
XLSXContent_TrainerTable_SheetSealTemplate_o* TrainerSystem__GetSealTemplate (int32_t trainerSealId, const MethodInfo* method);
XLSXContent_TrainerTable_SheetSkirtGraphicsChara_o* TrainerSystem__GetSkirtGraphicsChara (System_String_o* modelId, const MethodInfo* method);
void TrainerSystem__EncountTrainerPersonalDataMake (Dpr_Battle_Logic_BSP_TRAINER_DATA_o* pBattleTrainerData, int32_t trainerID, const MethodInfo* method);
void TrainerSystem__EncountTrainerPokeDataMake (Pml_PokeParty_o* pPokeParty, Dpr_Battle_Logic_PartyDesc_o* pPartyDesc, int32_t trainerID, Dpr_BallDeco_CapsuleData_array* capsuleDatas, const MethodInfo* method);
void TrainerSystem__SetupSealTemplate (Dpr_BallDeco_CapsuleData_o* dst, int32_t sealTemplateID, Pml_PokePara_PokemonParam_o* pp, const MethodInfo* method);
void TrainerSystem__createPokeParty (Pml_PokeParty_o* pPokeParty, XLSXContent_TrainerTable_SheetTrainerPoke_o* trainerPoke, XLSXContent_TrainerTable_SheetTrainerData_o* trainerData, XLSXContent_TrainerTable_SheetTrainerType_o* trainerTypeData, Dpr_BallDeco_CapsuleData_array* capsuleDatas, const MethodInfo* method);
Pml_PokePara_PokemonParam_o* TrainerSystem__createPokemon (TrainerSystem_PokeParamForCreate_o* pokeData, XLSXContent_TrainerTable_SheetTrainerData_o* trainerData, XLSXContent_TrainerTable_SheetTrainerType_o* trainerTypeData, Pml_PokeParty_o* pokePartyForRndCheck, const MethodInfo* method);
bool TrainerSystem__FindPersnalRnd (Pml_PokeParty_o* pokePartyForRndCheck, uint32_t personal_rand, const MethodInfo* method);
void TrainerSystem__setupInitSpec (Pml_PokePara_InitialSpec_o* pInitSpec, TrainerSystem_PokeParamForCreate_o* pokeData, uint64_t personal_rand, uint8_t trainerSex, const MethodInfo* method);
void TrainerSystem__setupPokemon (Pml_PokePara_PokemonParam_o* pPokeParam, TrainerSystem_PokeParamForCreate_o* pokeData, XLSXContent_TrainerTable_SheetTrainerType_o* trainerTypeData, bool isApplyPPUp, const MethodInfo* method);
void TrainerSystem__setupPokemon_Waza (Pml_PokePara_PokemonParam_o* pPokeParam, TrainerSystem_PokeParamForCreate_o* pokeData, const MethodInfo* method);
void TrainerSystem__setupPokemon_WazaPPUp (Pml_PokePara_PokemonParam_o* pPokeParam, const MethodInfo* method);
int32_t TrainerSystem__GetTagTrainerType (int32_t trtype1, int32_t trtype2, const MethodInfo* method);
void TrainerSystem___cctor (const MethodInfo* method);
