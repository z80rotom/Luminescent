#pragma once

#include "il2cpp.h"

void Dpr_UI_UIButtonSelector__Initialize (Dpr_UI_UIButtonSelector_o* __this, System_Action_IUIButton__o* onSelectButton, System_Action_IUIButton__o* onUnSelectButton, const MethodInfo* method_info);
void Dpr_UI_UIButtonSelector__SetActive (Dpr_UI_UIButtonSelector_o* __this, bool isActive, const MethodInfo* method_info);
int32_t Dpr_UI_UIButtonSelector__GetActiveButtonIndex (Dpr_UI_UIButtonSelector_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIButtonSelector__Setup (Dpr_UI_UIButtonSelector_o* __this, int32_t selectIndex, const MethodInfo* method_info);
Dpr_UI_IUIButton_o* Dpr_UI_UIButtonSelector__GetButton (Dpr_UI_UIButtonSelector_o* __this, int32_t index, const MethodInfo* method_info);
int32_t Dpr_UI_UIButtonSelector__GetButtonCount (Dpr_UI_UIButtonSelector_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_UIButtonSelector__GetActiveButtonCount (Dpr_UI_UIButtonSelector_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIButtonSelector__MoveSelect (Dpr_UI_UIButtonSelector_o* __this, int32_t value, const MethodInfo* method_info);
void Dpr_UI_UIButtonSelector__ResumeMoveSelect (Dpr_UI_UIButtonSelector_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIButtonSelector__SetSelectIndex (Dpr_UI_UIButtonSelector_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIButtonSelector___ctor (Dpr_UI_UIButtonSelector_o* __this, const MethodInfo* method_info);
