#pragma once

#include "il2cpp.h"

void Dpr_UI_ShopBase__UpdateWazaDescription (Dpr_UI_ShopBase_o* __this, Dpr_Item_ItemInfo_o* itemInfo, const MethodInfo* method_info);
System_ValueTuple_string__string__o Dpr_UI_ShopBase__GetShopMessageData (Dpr_UI_ShopBase_o* __this, int32_t shopMessageId, int32_t shopType, int32_t fixedShopId, const MethodInfo* method_info);
bool Dpr_UI_ShopBase__IsBuy (Dpr_UI_ShopBase_o* __this, int32_t shopType, const MethodInfo* method_info);
System_String_o* Dpr_UI_ShopBase__GetSelectAmountDescriptionText (Dpr_UI_ShopBase_o* __this, int32_t shopType, System_String_o* messageFile, const MethodInfo* method_info);
bool Dpr_UI_ShopBase__UpdateSelect (Dpr_UI_ShopBase_o* __this, float deltaTime, int32_t pagedItemNum, bool enableButtonLR, const MethodInfo* method_info);
bool Dpr_UI_ShopBase__MoveSelectScrollView (Dpr_UI_ShopBase_o* __this, int32_t button, int32_t move, const MethodInfo* method_info);
bool Dpr_UI_ShopBase__MovePageScrollView (Dpr_UI_ShopBase_o* __this, int32_t button, bool move, const MethodInfo* method_info);
void Dpr_UI_ShopBase___ctor (Dpr_UI_ShopBase_o* __this, const MethodInfo* method_info);
