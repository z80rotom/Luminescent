#pragma once

#include "il2cpp.h"

int32_t Pml_Item_ItemData__GetParam (uint16_t itemno, int32_t prmID, const MethodInfo* method);
uint32_t Pml_Item_ItemData__GetHealingItemType (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsNeedSelectSkill (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsDeathRecoverAllItem (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsSale (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsEventItem (uint16_t itemno, const MethodInfo* method);
int32_t Pml_Item_ItemData__GetGroupId (uint16_t itemno, const MethodInfo* method);
uint8_t Pml_Item_ItemData__GetBallID (uint16_t itemno, const MethodInfo* method);
uint16_t Pml_Item_ItemData__BallId2ItemId (uint8_t ballId, const MethodInfo* method);
bool Pml_Item_ItemData__IsWazaMachine (uint16_t itemno, const MethodInfo* method);
int32_t Pml_Item_ItemData__GetWazaNo (uint16_t itemno, const MethodInfo* method);
uint32_t Pml_Item_ItemData__GetWazaMashineNo (uint16_t item, const MethodInfo* method);
uint32_t Pml_Item_ItemData__GetWazaMashineMax (const MethodInfo* method);
int32_t Pml_Item_ItemData__GetWazaMashineWaza (uint8_t machine_no, const MethodInfo* method);
uint16_t Pml_Item_ItemData__GetWazaMashineItemNo (uint8_t machine_no, const MethodInfo* method);
bool Pml_Item_ItemData__IsWazaRecord (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsNuts (uint16_t itemno, const MethodInfo* method);
uint8_t Pml_Item_ItemData__GetNutsNo (uint16_t itemno, const MethodInfo* method);
uint16_t Pml_Item_ItemData__NutsIDToItemNo (uint8_t nutsid, const MethodInfo* method);
bool Pml_Item_ItemData__IsGroupOf (uint16_t itemno, uint8_t itemgroup, const MethodInfo* method);
bool Pml_Item_ItemData__IsMegaStone (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsJewel (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsPiece (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsBeads (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsHeart (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__CanPokeHave (uint16_t itemno, const MethodInfo* method);
bool Pml_Item_ItemData__IsValid (uint16_t item, const MethodInfo* method);
uint32_t Pml_Item_ItemData__GetTypeSortNumber (uint16_t itemno, const MethodInfo* method);
void Pml_Item_ItemData___ctor (Pml_Item_ItemData_o* __this, const MethodInfo* method);
