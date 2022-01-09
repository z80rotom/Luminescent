#pragma once

#include "il2cpp.h"

void ItemWork__Create (const MethodInfo* method_info);
void ItemWork__EnableDummyWork (const MethodInfo* method_info);
void ItemWork__DisableDummyWork (const MethodInfo* method_info);
int32_t ItemWork__AddItem (int32_t itemno, int32_t num, const MethodInfo* method_info);
int32_t ItemWork__SubItem (int32_t itemno, int32_t num, const MethodInfo* method_info);
bool ItemWork__IsAddItem (int32_t itemno, int32_t num, const MethodInfo* method_info);
Dpr_Item_ItemInfo_o* ItemWork__GetItemInfo (int32_t itemno, const MethodInfo* method_info);
System_Collections_Generic_List_ItemInfo__o* ItemWork__GetItemInfosByCategory (int32_t category, const MethodInfo* method_info);
System_Collections_Generic_List_ItemInfo__o* ItemWork__GetItemInfosByCategory (int32_t categoryId, const MethodInfo* method_info);
XLSXContent_ItemTable_SheetItem_o* ItemWork__GetItemData (uint16_t id, const MethodInfo* method_info);
bool ItemWork__IsIncludeNewItem (int32_t category, const MethodInfo* method_info);
bool ItemWork__IsIncludeNewItem (int32_t categoryId, const MethodInfo* method_info);
bool ItemWork__IsIncludeFavoriteItem (int32_t category, const MethodInfo* method_info);
bool ItemWork__IsIncludeFavoriteItem (int32_t categoryId, const MethodInfo* method_info);
System_Collections_Generic_List_ItemInfo__o* ItemWork__GetBagItem (const MethodInfo* method_info);
void ItemWork__SortItemInfosByCategory (int32_t category, int32_t sortType, const MethodInfo* method_info);
void ItemWork__SortItemInfosByCategory (int32_t categoryId, int32_t sortType, const MethodInfo* method_info);
bool ItemWork__IsCategory (int32_t itemno, int32_t category, const MethodInfo* method_info);
bool ItemWork__IsWazaMachine (int32_t itemno, const MethodInfo* method_info);
Dpr_Item_ItemListMemory_o* ItemWork__GetItemListMemory (int32_t bootType, const MethodInfo* method_info);
void ItemWork__ResetItemListMemory (int32_t bootType, const MethodInfo* method_info);
bool ItemWork__IsDsPlayer (const MethodInfo* method_info);
void ItemWork__SetDsPlayer (bool flag, const MethodInfo* method_info);
bool ItemWork__GetBagIconSex (const MethodInfo* method_info);
void ItemWork__SetBagIconSex (bool sex, const MethodInfo* method_info);
bool ItemWork__IsUseSpray (uint16_t* itemno, const MethodInfo* method_info);
void ItemWork__SetSpray (uint16_t itemno, int16_t value, const MethodInfo* method_info);
int16_t ItemWork__GetSprayCount (const MethodInfo* method_info);
void ItemWork__SubSprayCount (int16_t subval, const MethodInfo* method_info);
int32_t ItemWork__GetValidSaveSortNumberCount (int32_t category, const MethodInfo* method_info);
int32_t ItemWork__GetValidSaveSortNumberCount (int32_t category, const MethodInfo* method_info);
void ItemWork__UpdateListSort (Dpr_Item_ItemInfo_o* itemInfo, const MethodInfo* method_info);
bool ItemWork__IsShowWazaName (const MethodInfo* method_info);
void ItemWork___ctor (ItemWork_o* __this, bool isDummy, const MethodInfo* method_info);
void ItemWork___cctor (const MethodInfo* method_info);
