#pragma once

#include "il2cpp.h"

void Dpr_Contest_ContestWork__SetResultData (Dpr_Contest_ContestRewardDataModel_o* resultDataModel, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__SetSingleModeResultData (Dpr_Contest_ContestRewardDataModel_o* resultDataModel, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__SetMultiModeResultData (Dpr_Contest_ContestRewardDataModel_o* resultDataModel, const MethodInfo* method_info);
bool Dpr_Contest_ContestWork__IsCassetVersionDprB (const MethodInfo* method_info);
int32_t Dpr_Contest_ContestWork__GetUserContestPoint (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__SetUserContestPoint (uint32_t newPoint, const MethodInfo* method_info);
Dpr_BallDeco_CapsuleData_o Dpr_Contest_ContestWork__GetSelectCapsuleData (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__ApplyUserDataToEntryPlayerData (int32_t userEntryNumber, const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* Dpr_Contest_ContestWork__GetEntryMemberPokemon (uint32_t memberIndex, const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* Dpr_Contest_ContestWork__CreateDummyMonster (const MethodInfo* method_info);
bool Dpr_Contest_ContestWork__get_IsMultiMode (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__AddRewardItem (int32_t sealNo, int32_t itemCount, const MethodInfo* method_info);
int32_t Dpr_Contest_ContestWork__CheckContestEntry (int32_t categoryID, int32_t rankID, const MethodInfo* method_info);
bool Dpr_Contest_ContestWork__CanEntryContest (Pml_PokePara_PokemonParam_o* pokeParam, int32_t categoryID, const MethodInfo* method_info);
bool Dpr_Contest_ContestWork__CheckPokeStatus (Pml_PokePara_PokemonParam_o* pokeParam, const MethodInfo* method_info);
bool Dpr_Contest_ContestWork__CheckEntryFurContest (Pml_PokePara_PokemonParam_o* pokeParam, const MethodInfo* method_info);
bool Dpr_Contest_ContestWork__CheckRankClearFlag (int32_t categoryID, int32_t rankID, const MethodInfo* method_info);
bool Dpr_Contest_ContestWork__IsClearPrevRank (int32_t categoryID, int32_t rankID, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__ApplyContestRecord (Dpr_Contest_ContestRewardDataModel_o* resultDataModel, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__UpdateContestEntryCnt (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__UpdateBestPerformerCnt (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__UpdateContestClearRank (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__UpdateWinRate (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__UpdateGetRibbonCnt (bool hasCategoryRibbon, bool hasContestStarRibbon, bool hasTwinkleStarRibbon, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__ApplyContestTVData (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__ApplyReportData_MultiMode (Dpr_Contest_ResultDataModel_o* resultDataModel, const MethodInfo* method_info);
int32_t Dpr_Contest_ContestWork__FindStandardContestClearFlagIndex (int32_t categoryID, int32_t rankID, const MethodInfo* method_info);
int32_t Dpr_Contest_ContestWork__FindSercretContestClearFlagIndex (int32_t rankID, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__ResetContestData (const MethodInfo* method_info);
void Dpr_Contest_ContestWork__SaveContestPhotoData (int32_t categoryID, int32_t rankID, Dpr_Contest_CaptureData_o* captureData, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__ResetPhotoFxData (DPData_CON_PHOTO_FX_DATA_o* targetData, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__SetMonsLanguageID (int32_t categoryID, uint8_t langID, const MethodInfo* method_info);
void Dpr_Contest_ContestWork__SetPhotoMonsName (int32_t categoryID, System_String_o* nickname, const MethodInfo* method_info);
void Dpr_Contest_ContestWork___cctor (const MethodInfo* method_info);
