#pragma once

#include "il2cpp.h"

void UgItemWork__Create (const MethodInfo* method_info);
int32_t UgItemWork__AddItem (int32_t itemno, int32_t num, const MethodInfo* method_info);
int32_t UgItemWork__SubItem (int32_t itemno, int32_t num, const MethodInfo* method_info);
int32_t UgItemWork__AddUgItem (int32_t ugItemNo, int32_t num, const MethodInfo* method_info);
int32_t UgItemWork__SubUgItem (int32_t ugItemNo, int32_t num, const MethodInfo* method_info);
bool UgItemWork__IsAddItem (int32_t ugItemNo, int32_t num, const MethodInfo* method_info);
Dpr_Item_UgItemInfo_o* UgItemWork__GetItemInfo (int32_t itemno, const MethodInfo* method_info);
XLSXContent_ItemTable_SheetItem_o* UgItemWork__GetItemData (uint16_t id, const MethodInfo* method_info);
bool UgItemWork__hasStatue (const MethodInfo* method_info);
System_Collections_Generic_List_UgItemInfo__o* UgItemWork__GetBagItem (const MethodInfo* method_info);
System_Collections_Generic_List_UgItemInfo__o* UgItemWork__GetDoNotHaveStatue (const MethodInfo* method_info);
int32_t UgItemWork__GetHaveStatueKindNum (const MethodInfo* method_info);
void UgItemWork___ctor (UgItemWork_o* __this, const MethodInfo* method_info);
void UgItemWork___cctor (const MethodInfo* method_info);
