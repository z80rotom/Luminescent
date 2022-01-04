#pragma once

#include "il2cpp.h"

int32_t Dpr_UI_BagItemPanel__get_CurrentCategoryId (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__set_CurrentCategoryId (Dpr_UI_BagItemPanel_o* __this, int32_t value, const MethodInfo* method);
bool Dpr_UI_BagItemPanel__get_IsNoItem (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
Dpr_UI_BagItemButton_o* Dpr_UI_BagItemPanel__get_SelectedItemButton (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__set_SelectedItemButton (Dpr_UI_BagItemPanel_o* __this, Dpr_UI_BagItemButton_o* value, const MethodInfo* method);
bool Dpr_UI_BagItemPanel__get_IsShowSelectAmount (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
bool Dpr_UI_BagItemPanel__get_CanSwitchDescriptionWazaPanel (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
Dpr_UI_UIButtonSelector_o* Dpr_UI_BagItemPanel__get_CategorySelector (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__add_OnChangeSelectItem (Dpr_UI_BagItemPanel_o* __this, System_Action_BagItemButton__o* value, const MethodInfo* method);
void Dpr_UI_BagItemPanel__remove_OnChangeSelectItem (Dpr_UI_BagItemPanel_o* __this, System_Action_BagItemButton__o* value, const MethodInfo* method);
void Dpr_UI_BagItemPanel__Initialize (Dpr_UI_BagItemPanel_o* __this, Dpr_Item_ItemListMemory_o* itemListMemory, bool isBattle, Dpr_Item_ItemInfo_CategoryType_array* categoryTypes, const MethodInfo* method);
void Dpr_UI_BagItemPanel__SetActive (Dpr_UI_BagItemPanel_o* __this, bool isActive, const MethodInfo* method);
void Dpr_UI_BagItemPanel__SetRemoveNewEnable (Dpr_UI_BagItemPanel_o* __this, bool isEnable, const MethodInfo* method);
void Dpr_UI_BagItemPanel__SetShowDescriptionContestWaza (Dpr_UI_BagItemPanel_o* __this, bool isShowWazaContest, const MethodInfo* method);
void Dpr_UI_BagItemPanel__MoveCategorySelect (Dpr_UI_BagItemPanel_o* __this, int32_t value, const MethodInfo* method);
void Dpr_UI_BagItemPanel__ResumeCategoryMoveSelect (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__MoveItemListSelect (Dpr_UI_BagItemPanel_o* __this, int32_t value, const MethodInfo* method);
void Dpr_UI_BagItemPanel__MoveItemListPage (Dpr_UI_BagItemPanel_o* __this, bool isNext, const MethodInfo* method);
void Dpr_UI_BagItemPanel__ResumeItemListMoveSelect (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__ChangeSelectAmount (Dpr_UI_BagItemPanel_o* __this, bool isAdd, bool isLot, const MethodInfo* method);
void Dpr_UI_BagItemPanel__ResumeSelectAmountChange (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__DecideSelectAmount (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__CancelSelectAmount (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__ReloadItemList (Dpr_UI_BagItemPanel_o* __this, bool isFocusSelectedItem, int32_t selectedItemId, const MethodInfo* method);
void Dpr_UI_BagItemPanel__SetMoneyText (Dpr_UI_BagItemPanel_o* __this, int32_t money, const MethodInfo* method);
void Dpr_UI_BagItemPanel__ShowSelectAmount (Dpr_UI_BagItemPanel_o* __this, int32_t min, int32_t max, System_Action_int__o* onDecide, System_Action_o* onCancel, System_Action_int__o* onAmountValueChanged, const MethodInfo* method);
void Dpr_UI_BagItemPanel__SetSelectAmountDescriptionText (Dpr_UI_BagItemPanel_o* __this, System_String_o* text, const MethodInfo* method);
void Dpr_UI_BagItemPanel__SwitchItemDescriptionWazaPanel (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__PlayCursorDecideAnimation (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel__SetupCategoryButtons (Dpr_UI_BagItemPanel_o* __this, int32_t selectIndex, Dpr_Item_ItemInfo_CategoryType_array* activeCategoryTypes, const MethodInfo* method);
void Dpr_UI_BagItemPanel__OnSelectCategoryButton (Dpr_UI_BagItemPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_UI_BagItemPanel__OnUnSelectCategoryButton (Dpr_UI_BagItemPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_UI_BagItemPanel__OnRequiredItemData (Dpr_UI_BagItemPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_UI_BagItemPanel__OnSelectItemScrollViewItem (Dpr_UI_BagItemPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_UI_BagItemPanel__OnUnSelectItemScrollViewItem (Dpr_UI_BagItemPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_UI_BagItemPanel__StartRemoveNew (Dpr_UI_BagItemPanel_o* __this, Dpr_UI_BagItemButton_o* bagItemButton, const MethodInfo* method);
void Dpr_UI_BagItemPanel__CancelRemoveNew (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel___ctor (Dpr_UI_BagItemPanel_o* __this, const MethodInfo* method);
void Dpr_UI_BagItemPanel___cctor (const MethodInfo* method);
