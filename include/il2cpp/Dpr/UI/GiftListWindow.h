#pragma once

#include "il2cpp.h"

bool Dpr_UI_GiftListWindow__get_IsNoItem (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__set_IsNoItem (Dpr_UI_GiftListWindow_o* __this, bool value, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__OnAddContextMenuYesNoItemParams (Dpr_UI_GiftListWindow_o* __this, System_Collections_Generic_List_ContextMenuItem_Param__o* contextMenuItemParams, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__OnDestroy (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__OnInitialize (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__OnUpdate (Dpr_UI_GiftListWindow_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__Show (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__Setup (Dpr_UI_GiftListWindow_o* __this, Dpr_UI_GiftListItemInfo_array* giftListItemInfos, System_Action_o* onReceivedGift, Dpr_UI_GiftCompleteWindow_o* completeWindow, Dpr_UI_GiftErrorWindow_o* errorWindow, bool isSerialUsed, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__OnRequiredItemData (Dpr_UI_GiftListWindow_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__OnSelectItemScrollViewItem (Dpr_UI_GiftListWindow_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__OnUnSelectItemScrollViewItem (Dpr_UI_GiftListWindow_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__RefreshScrollView (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__ShowListMessage (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__CloseWindow (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow__ShowErrorWindow (Dpr_UI_GiftListWindow_o* __this, System_String_o* labelName, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_GiftListWindow__ReceiveGift (Dpr_UI_GiftListWindow_o* __this, int32_t selectIndex, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow___ctor (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow___cctor (const MethodInfo* method_info);
void Dpr_UI_GiftListWindow___CloseWindow_b__26_0 (Dpr_UI_GiftListWindow_o* __this, const MethodInfo* method_info);
bool Dpr_UI_GiftListWindow___CloseWindow_b__26_1 (Dpr_UI_GiftListWindow_o* __this, Dpr_UI_ContextMenuItem_o* contextMenuItem, const MethodInfo* method_info);
void Dpr_UI_GiftListWindow___ShowErrorWindow_b__27_0 (Dpr_UI_GiftListWindow_o* __this, Dpr_UI_UIWindow_o* __, const MethodInfo* method_info);
