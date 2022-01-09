#pragma once

#include "il2cpp.h"

Pml_Item_ItemManager_o* Pml_Item_ItemManager__get_Instance (const MethodInfo* method_info);
void Pml_Item_ItemManager__Load (Pml_Item_ItemManager_o* __this, XLSXContent_ItemTable_o* data, const MethodInfo* method_info);
int32_t Pml_Item_ItemManager__GetParam (Pml_Item_ItemManager_o* __this, uint16_t itemno, int32_t prmID, bool isCheckActive, const MethodInfo* method_info);
uint8_t Pml_Item_ItemManager__ItemID2BallID (Pml_Item_ItemManager_o* __this, uint16_t itemno, const MethodInfo* method_info);
uint16_t Pml_Item_ItemManager__BallID2ItemID (Pml_Item_ItemManager_o* __this, uint8_t ballid, const MethodInfo* method_info);
int32_t Pml_Item_ItemManager__GetWazaNo (Pml_Item_ItemManager_o* __this, uint16_t itemno, const MethodInfo* method_info);
uint8_t Pml_Item_ItemManager__ItemNoToWazaMachineID (Pml_Item_ItemManager_o* __this, uint16_t itemno, const MethodInfo* method_info);
int32_t Pml_Item_ItemManager__WazaMachineIDToWazaID (Pml_Item_ItemManager_o* __this, uint8_t machine_no, const MethodInfo* method_info);
uint16_t Pml_Item_ItemManager__WazaMachineIDToItemNo (Pml_Item_ItemManager_o* __this, uint8_t machine_no, const MethodInfo* method_info);
uint32_t Pml_Item_ItemManager__GetWazaMachineItemNum (Pml_Item_ItemManager_o* __this, const MethodInfo* method_info);
int32_t Pml_Item_ItemManager__GetIconId (Pml_Item_ItemManager_o* __this, uint16_t itemno, const MethodInfo* method_info);
bool Pml_Item_ItemManager__IsGroupOf (Pml_Item_ItemManager_o* __this, uint16_t itemno, uint8_t itemgroup, const MethodInfo* method_info);
bool Pml_Item_ItemManager__GroupIdToItemNo (Pml_Item_ItemManager_o* __this, uint8_t itemgroup, uint8_t groupid, uint16_t* o_pItemNo, const MethodInfo* method_info);
XLSXContent_ItemTable_SheetItem_o* Pml_Item_ItemManager__Get (Pml_Item_ItemManager_o* __this, uint16_t itemno, bool isCheckActive, const MethodInfo* method_info);
bool Pml_Item_ItemManager__IsStrangeBall (uint8_t ballid, const MethodInfo* method_info);
void Pml_Item_ItemManager___ctor (Pml_Item_ItemManager_o* __this, const MethodInfo* method_info);
void Pml_Item_ItemManager___cctor (const MethodInfo* method_info);
