#pragma once

#include "il2cpp.h"

System_String_o* Dpr_Contest_ContestUtils__CreateTrainerModelPath (int32_t playerFashion, const MethodInfo* method);
int32_t Dpr_Contest_ContestUtils__CreateTrainerType (bool isOwner, uint8_t playerSex, const MethodInfo* method);
Dpr_Battle_View_TrainerSimpleParam_o Dpr_Contest_ContestUtils__CreateTrainerSimpleParam (int32_t trainerType, int32_t colorID, const MethodInfo* method);
XLSXContent_ContestMasterDatas_SheetRankData_o* Dpr_Contest_ContestUtils__FindRankData (int32_t rankPoint, XLSXContent_ContestMasterDatas_o* contestMasterDatas, const MethodInfo* method);
int32_t Dpr_Contest_ContestUtils__LotteryCategory (bool isDpClear, const MethodInfo* method);
Dpr_Contest_CategoryID_array* Dpr_Contest_ContestUtils__GetCanEntryCategory (bool isDpClear, const MethodInfo* method);
int32_t Dpr_Contest_ContestUtils__LotteryCategory (int32_t categoryID, const MethodInfo* method);
Dpr_Contest_RankID_array* Dpr_Contest_ContestUtils__GetRankIDsByCategoryID (int32_t categoryID, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__CreateWazaSequencePath (int32_t monsNo, int32_t wazaNo, int32_t formNo, uint8_t type1, uint8_t type2, const MethodInfo* method);
bool Dpr_Contest_ContestUtils__CheckUniqueWaza (int32_t monsNo, int32_t wazaNo, int32_t formNo, uint8_t type1, uint8_t type2, const MethodInfo* method);
XLSXContent_ArenaInfo_SheetArenaData_o* Dpr_Contest_ContestUtils__FindArenaDataByID (int32_t arenaID, const MethodInfo* method);
Dpr_Contest_LotteryNPCData_array* Dpr_Contest_ContestUtils__CreateLoatteryNPCDataByCategoryAndRank (XLSXContent_ContestMasterDatas_SheetNPCData_array* NPCData, int32_t categoryID, int32_t rankID, int32_t createNum, const MethodInfo* method);
XLSXContent_ContestMasterDatas_SheetNPCData_array* Dpr_Contest_ContestUtils__ChoiceRandomNPCPlayerData (int32_t choiceNum, XLSXContent_ContestMasterDatas_SheetNPCData_array* npcDatas, const MethodInfo* method);
System_Int32_array* Dpr_Contest_ContestUtils__CreateShuffledIndexArray (int32_t arrayLength, const MethodInfo* method);
int32_t Dpr_Contest_ContestUtils__LotNPCUseWazaNo (XLSXContent_ContestMasterDatas_SheetNPCData_o* npcData, const MethodInfo* method);
Dpr_Battle_View_BtlvBallInfo_o Dpr_Contest_ContestUtils__CreatePlayerBallInfo (uint8_t ballId, const MethodInfo* method);
Dpr_BallDeco_AffixSealData_array* Dpr_Contest_ContestUtils__CreateNPCAffixSealDataArray (XLSXContent_ContestMasterDatas_SheetNPCCapsuleData_o* npcCapsuleData, const MethodInfo* method);
Dpr_BallDeco_AffixSealData_o Dpr_Contest_ContestUtils__CreateAffixSealData (int32_t sealID, UnityEngine_Vector3_o pos, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__CreateNumberIconSprName (int32_t number, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetCategoryLabelByID (int32_t categoryID, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetCategoryLabelByID (int32_t categoryID, int32_t cassetVersion, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetCategoryLabelByID (int32_t categoryID, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetCategoryLabelByID (int32_t categoryID, int32_t cassetVersion, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetCategoryNameByID (int32_t categoryID, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetCategoryNameByID (int32_t categoryID, int32_t cassetVersion, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetCategoryNameByID (int32_t categoryID, int32_t cassetVersion, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetRankLabelByID (int32_t rankID, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetRankLabelByID (int32_t rankID, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetRankNameByID (int32_t rankID, const MethodInfo* method);
System_String_o* Dpr_Contest_ContestUtils__GetRankNameByID (int32_t rankID, const MethodInfo* method);
void Dpr_Contest_ContestUtils__EmitLog (System_String_o* log, int32_t logType, const MethodInfo* method);
