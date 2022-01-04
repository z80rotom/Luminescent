#pragma once

#include "il2cpp.h"

void Dpr_GMS_UIGMSPointDataScrollView__Initialize (Dpr_GMS_UIGMSPointDataScrollView_o* __this, System_Action_AUIGMSScrollItem__o* onRequiredItem, System_Action_int__o* onMoveScrollView, System_Action_o* onSelect, System_Action_o* onCancel, System_Action_o* onReleaseInput, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__Setup (Dpr_GMS_UIGMSPointDataScrollView_o* __this, int32_t dataNum, int32_t startIndex, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__OnFinalize (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
int32_t Dpr_GMS_UIGMSPointDataScrollView__get_CurrentSelectIndex (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
bool Dpr_GMS_UIGMSPointDataScrollView__get_IsPlayingInput (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
Dpr_GMS_AUIGMSScrollItem_o* Dpr_GMS_UIGMSPointDataScrollView__get_LastSelectItem (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__SetInputEnabled (Dpr_GMS_UIGMSPointDataScrollView_o* __this, bool enabled, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__Show (Dpr_GMS_UIGMSPointDataScrollView_o* __this, System_String_o* title, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__SettingCursor (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__Hide (Dpr_GMS_UIGMSPointDataScrollView_o* __this, UnityEngine_Vector2_o hidePosition, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__SetListTitle (Dpr_GMS_UIGMSPointDataScrollView_o* __this, System_String_o* title, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__SetAnchoredPosition (Dpr_GMS_UIGMSPointDataScrollView_o* __this, UnityEngine_Vector2_o anchoredPosition, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__OnUpdate (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__UpdateInput (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__UpdateCursorPos (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__DoMoveScrollView (Dpr_GMS_UIGMSPointDataScrollView_o* __this, int32_t moveIndex, bool playMoveSE, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__ReleaseInput (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__OnRequiredItemData (Dpr_GMS_UIGMSPointDataScrollView_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__OnSelectItemScrollViewItem (Dpr_GMS_UIGMSPointDataScrollView_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView__OnUnSelectItemScrollViewItem (Dpr_GMS_UIGMSPointDataScrollView_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_GMS_UIGMSPointDataScrollView___ctor (Dpr_GMS_UIGMSPointDataScrollView_o* __this, const MethodInfo* method);
