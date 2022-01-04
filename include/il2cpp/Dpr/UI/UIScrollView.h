#pragma once

#include "il2cpp.h"

float Dpr_UI_UIScrollView__get_ContentAnchorPos (Dpr_UI_UIScrollView_o* __this, const MethodInfo* method);
int32_t Dpr_UI_UIScrollView__get_GridItemCount (Dpr_UI_UIScrollView_o* __this, const MethodInfo* method);
System_Collections_Generic_LinkedList_IUIButton__o* Dpr_UI_UIScrollView__get_ScrollItems (Dpr_UI_UIScrollView_o* __this, const MethodInfo* method);
void Dpr_UI_UIScrollView__Awake (Dpr_UI_UIScrollView_o* __this, const MethodInfo* method);
void Dpr_UI_UIScrollView__Initialize (Dpr_UI_UIScrollView_o* __this, System_Action_IUIButton__o* onRequiedItemData, System_Action_IUIButton__o* onSelectItem, System_Action_IUIButton__o* onUnSelectItem, const MethodInfo* method);
void Dpr_UI_UIScrollView__Setup (Dpr_UI_UIScrollView_o* __this, int32_t itemCount, int32_t selectIndex, float scrollPos, bool isForceScroll, const MethodInfo* method);
void Dpr_UI_UIScrollView__SetActive (Dpr_UI_UIScrollView_o* __this, bool isActive, const MethodInfo* method);
float Dpr_UI_UIScrollView__GetScrollPosition (Dpr_UI_UIScrollView_o* __this, const MethodInfo* method);
bool Dpr_UI_UIScrollView__MoveSelect (Dpr_UI_UIScrollView_o* __this, int32_t value, const MethodInfo* method);
bool Dpr_UI_UIScrollView__Scroll (Dpr_UI_UIScrollView_o* __this, float value, const MethodInfo* method);
bool Dpr_UI_UIScrollView__MovePage (Dpr_UI_UIScrollView_o* __this, bool isNext, const MethodInfo* method);
void Dpr_UI_UIScrollView__ResumeMoveSelect (Dpr_UI_UIScrollView_o* __this, const MethodInfo* method);
void Dpr_UI_UIScrollView__SetSelectIndex (Dpr_UI_UIScrollView_o* __this, int32_t index, const MethodInfo* method);
void Dpr_UI_UIScrollView__SelectItemNode (Dpr_UI_UIScrollView_o* __this, int32_t index, const MethodInfo* method);
void Dpr_UI_UIScrollView__OnValueChanged (Dpr_UI_UIScrollView_o* __this, UnityEngine_Vector2_o normalizedPosition, const MethodInfo* method);
void Dpr_UI_UIScrollView__UpdateRendererItems (Dpr_UI_UIScrollView_o* __this, int32_t viewTopPos, const MethodInfo* method);
void Dpr_UI_UIScrollView__ForceUpdateItems (Dpr_UI_UIScrollView_o* __this, int32_t startIndex, const MethodInfo* method);
void Dpr_UI_UIScrollView__RefreshScrollContentAnchorPosition (Dpr_UI_UIScrollView_o* __this, const MethodInfo* method);
void Dpr_UI_UIScrollView__SetLayoutGroupPadding (Dpr_UI_UIScrollView_o* __this, int32_t value, const MethodInfo* method);
void Dpr_UI_UIScrollView__SetScrollRectAnchorPosition (Dpr_UI_UIScrollView_o* __this, float value, const MethodInfo* method);
void Dpr_UI_UIScrollView___ctor (Dpr_UI_UIScrollView_o* __this, const MethodInfo* method);
