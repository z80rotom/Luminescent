#pragma once

#include "il2cpp.h"

UnityEngine_Vector2_o Dpr_DigFossil_DigBoard__get_GridSize (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__set_GridSize (Dpr_DigFossil_DigBoard_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
UnityEngine_Vector2_o Dpr_DigFossil_DigBoard__get_FieldSize (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__set_FieldSize (Dpr_DigFossil_DigBoard_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
UnityEngine_Vector2_o Dpr_DigFossil_DigBoard__get_FieldOffset (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__set_FieldOffset (Dpr_DigFossil_DigBoard_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
System_Int32_array* Dpr_DigFossil_DigBoard__get_BuildupMap (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
System_Int32_array* Dpr_DigFossil_DigBoard__get_DepositMap (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
System_Collections_Generic_List_DigDepositViewManager_PlacementInfo__o* Dpr_DigFossil_DigBoard__get_DepositPlacementInfos (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
int32_t Dpr_DigFossil_DigBoard__get_RatioId (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__set_RatioId (Dpr_DigFossil_DigBoard_o* __this, int32_t value, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__Initialize (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
int32_t Dpr_DigFossil_DigBoard__CalcMapColumnIndex (Dpr_DigFossil_DigBoard_o* __this, float x, const MethodInfo* method);
int32_t Dpr_DigFossil_DigBoard__CalcMapRowIndex (Dpr_DigFossil_DigBoard_o* __this, float y, const MethodInfo* method);
int32_t Dpr_DigFossil_DigBoard__GetDepositCount (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
int32_t Dpr_DigFossil_DigBoard__GetDigOutItemCount (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
bool Dpr_DigFossil_DigBoard__IsCheckDigOutAll (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
bool Dpr_DigFossil_DigBoard__IsCheckDigOut (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
System_UInt32_array* Dpr_DigFossil_DigBoard__GetDigItemNumbers (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__Dig (Dpr_DigFossil_DigBoard_o* __this, UnityEngine_Vector2_o pos, bool bIsPickaxe, bool bIsAdjacent, int32_t cursorNum, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__RandomDig (Dpr_DigFossil_DigBoard_o* __this, bool bIsPickaxe, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__Dig (Dpr_DigFossil_DigBoard_o* __this, int32_t mapX, int32_t mapY, bool bIsPickaxe, bool bIsAdjacent, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__DigWithAnimation (Dpr_DigFossil_DigBoard_o* __this, UnityEngine_Vector2_o position, int32_t cursorNum, bool bIsPickaxe, bool bIsAdjacent, const MethodInfo* method);
bool Dpr_DigFossil_DigBoard__DigMap (Dpr_DigFossil_DigBoard_o* __this, int32_t mapX, int32_t mapY, int32_t digNum, const MethodInfo* method);
bool Dpr_DigFossil_DigBoard__DigHumerOrPickaxe (Dpr_DigFossil_DigBoard_o* __this, int32_t mapX, int32_t mapY, bool bIsPickaxe, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__PlayDigEffect (Dpr_DigFossil_DigBoard_o* __this, int32_t cursorNum, bool bIsPickaxe, bool bIsBuildupBroken, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__CheckDigOut (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
bool Dpr_DigFossil_DigBoard__IsCheckDigOut (Dpr_DigFossil_DigBoard_o* __this, Dpr_DigFossil_DigDepositViewManager_PlacementInfo_o* info, const MethodInfo* method);
Dpr_DigFossil_DigDepositViewManager_PlacementInfo_o* Dpr_DigFossil_DigBoard__GetDeposit (Dpr_DigFossil_DigBoard_o* __this, int32_t x, int32_t y, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__RandomDeposit (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
int32_t Dpr_DigFossil_DigBoard__GetTreasurePartsRandomMax_DigMasterDataManager_DepositItemData_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t id, const MethodInfo_1E7CBC0* method);
int32_t Dpr_DigFossil_DigBoard__GetTreasurePartsRandomMax_DigMasterDataManager_StoneBoxData_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t id, const MethodInfo_1E7CBC0* method);
int32_t Dpr_DigFossil_DigBoard__GetTreasurePartsRandomMax_object_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t id, const MethodInfo_1E7CBC0* method);
int32_t Dpr_DigFossil_DigBoard__GetTreasurePartsRandom_DigMasterDataManager_DepositItemData_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t id, int32_t random, const MethodInfo_1E7CA80* method);
int32_t Dpr_DigFossil_DigBoard__GetTreasurePartsRandom_DigMasterDataManager_StoneBoxData_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t id, int32_t random, const MethodInfo_1E7CA80* method);
int32_t Dpr_DigFossil_DigBoard__GetTreasurePartsRandom_object_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t id, int32_t random, const MethodInfo_1E7CA80* method);
bool Dpr_DigFossil_DigBoard__PartsDeposit_DigMasterDataManager_DepositItemData_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t partsIndex, int32_t x, int32_t y, const MethodInfo_2716A80* method);
bool Dpr_DigFossil_DigBoard__PartsDeposit_DigMasterDataManager_HardStoneData_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t partsIndex, int32_t x, int32_t y, const MethodInfo_2716A80* method);
bool Dpr_DigFossil_DigBoard__PartsDeposit_DigMasterDataManager_StoneBoxData_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t partsIndex, int32_t x, int32_t y, const MethodInfo_2716A80* method);
bool Dpr_DigFossil_DigBoard__PartsDeposit_object_ (Dpr_DigFossil_DigBoard_o* __this, System_Collections_Generic_List_T__o** inList, int32_t partsIndex, int32_t x, int32_t y, const MethodInfo_2716A80* method);
bool Dpr_DigFossil_DigBoard__IsAttribute (Dpr_DigFossil_DigBoard_o* __this, Dpr_DigFossil_DigMasterDataManager_IDeposit_o** inDeposit, int32_t x, int32_t y, const MethodInfo* method);
bool Dpr_DigFossil_DigBoard__IsFreeDiposit (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
void Dpr_DigFossil_DigBoard__RandomBuildUp (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
void Dpr_DigFossil_DigBoard___ctor (Dpr_DigFossil_DigBoard_o* __this, const MethodInfo* method);
