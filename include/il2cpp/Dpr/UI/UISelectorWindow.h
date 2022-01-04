#pragma once

#include "il2cpp.h"

void Dpr_UI_UISelectorWindow__Initialize (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__SetupCursor (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__OnFinalize (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
bool Dpr_UI_UISelectorWindow__get_IsOpen (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
Il2CppObject* Dpr_UI_UISelectorWindow__GetItem_object_ (Dpr_UI_UISelectorWindow_o* __this, int32_t index, const MethodInfo_20F1210* method);
void Dpr_UI_UISelectorWindow__Clear (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__ResetIndex (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__SetWindowActive (Dpr_UI_UISelectorWindow_o* __this, bool active, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__OpenSelectWindow (Dpr_UI_UISelectorWindow_o* __this, System_String_array* contestNameArray, System_String_array* rankNameArray, System_Action_UISelectorWindow_WindowItemID__o* onEvent, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__ShowCategoryAndRank (Dpr_UI_UISelectorWindow_o* __this, System_String_o* categoryName, System_String_o* rankName, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__SetCategoryAndRankText (Dpr_UI_UISelectorWindow_o* __this, System_String_o* categoryName, System_String_o* rankName, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__SetFrameActive (Dpr_UI_UISelectorWindow_o* __this, int32_t frameType, bool active, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__SetObjectActive (Dpr_UI_UISelectorWindow_o* __this, bool active, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__Close (Dpr_UI_UISelectorWindow_o* __this, System_Action_o* onClosed, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__OnUpdate (Dpr_UI_UISelectorWindow_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__UpdateWindowActive (Dpr_UI_UISelectorWindow_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__UpdateWaitStartDecideAnim (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__UpdateWaitCursorAnim (Dpr_UI_UISelectorWindow_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_UI_UISelectorWindow__CheckCursorAnimState (Dpr_UI_UISelectorWindow_o* __this, int32_t state, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__OnItemEvent (Dpr_UI_UISelectorWindow_o* __this, Dpr_UI_AWindowItem_o* item, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__OnCompleteRewind (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__CursorUp (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__CursorDown (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__SetCursorIndex (Dpr_UI_UISelectorWindow_o* __this, int32_t index, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__UpdateCursor (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
void Dpr_UI_UISelectorWindow__SetCursorView (Dpr_UI_UISelectorWindow_o* __this, bool active, const MethodInfo* method);
void Dpr_UI_UISelectorWindow___ctor (Dpr_UI_UISelectorWindow_o* __this, const MethodInfo* method);
