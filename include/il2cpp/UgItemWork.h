#pragma once

#include "il2cpp.h"

void UgItemWork__Create (const MethodInfo* method);
int32_t UgItemWork__AddItem (int32_t itemno, int32_t num, const MethodInfo* method);
int32_t UgItemWork__SubItem (int32_t itemno, int32_t num, const MethodInfo* method);
int32_t UgItemWork__AddUgItem (int32_t ugItemNo, int32_t num, const MethodInfo* method);
int32_t UgItemWork__SubUgItem (int32_t ugItemNo, int32_t num, const MethodInfo* method);
bool UgItemWork__IsAddItem (int32_t ugItemNo, int32_t num, const MethodInfo* method);
Dpr_Item_UgItemInfo_o* UgItemWork__GetItemInfo (int32_t itemno, const MethodInfo* method);
XLSXContent_ItemTable_SheetItem_o* UgItemWork__GetItemData (uint16_t id, const MethodInfo* method);
bool UgItemWork__hasStatue (const MethodInfo* method);
System_Collections_Generic_List_UgItemInfo__o* UgItemWork__GetBagItem (const MethodInfo* method);
System_Collections_Generic_List_UgItemInfo__o* UgItemWork__GetDoNotHaveStatue (const MethodInfo* method);
int32_t UgItemWork__GetHaveStatueKindNum (const MethodInfo* method);
void UgItemWork___ctor (UgItemWork_o* __this, const MethodInfo* method);
void UgItemWork___cctor (const MethodInfo* method);
