#pragma once

#include "il2cpp.h"

bool Dpr_UI_UIWindow__get_isCompleteTransition (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
UnityEngine_Canvas_o* Dpr_UI_UIWindow__get_canvas (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
Dpr_UI_UIInputController_o* Dpr_UI_UIWindow__get_InputController (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIWindow__get_IsClosing (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIWindow__set_IsClosing (Dpr_UI_UIWindow_o* __this, bool value, const MethodInfo* method_info);
void Dpr_UI_UIWindow__OnCreate (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIWindow__RegisterCloseOnOpenWindow_BoxWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, UnityEngine_Events_UnityAction_UIWindow__o* onClosedAction, const MethodInfo* method_info);
void Dpr_UI_UIWindow__RegisterCloseOnOpenWindow_PokemonStatusWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, UnityEngine_Events_UnityAction_UIWindow__o* onClosedAction, const MethodInfo* method_info);
void Dpr_UI_UIWindow__RegisterCloseOnOpenWindow_PokemonWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, UnityEngine_Events_UnityAction_UIWindow__o* onClosedAction, const MethodInfo* method_info);
void Dpr_UI_UIWindow__RegisterCloseOnOpenWindow_UIZukan_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, UnityEngine_Events_UnityAction_UIWindow__o* onClosedAction, const MethodInfo* method_info);
void Dpr_UI_UIWindow__RegisterCloseOnOpenWindow_UIZukanRegister_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, UnityEngine_Events_UnityAction_UIWindow__o* onClosedAction, const MethodInfo* method_info);
void Dpr_UI_UIWindow__RegisterCloseOnOpenWindow_object_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, UnityEngine_Events_UnityAction_UIWindow__o* onClosedAction, const MethodInfo* method_info);
void Dpr_UI_UIWindow__OnDestroy (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIWindow__OnTransition (Dpr_UI_UIWindow_o* __this, int32_t transitionId, int32_t fadeType, const MethodInfo* method_info);
void Dpr_UI_UIWindow__OnTransitionComplete (Dpr_UI_UIWindow_o* __this, int32_t fadeType, const MethodInfo* method_info);
void Dpr_UI_UIWindow__OnOpen (Dpr_UI_UIWindow_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
bool Dpr_UI_UIWindow__IsPushButton (Dpr_UI_UIWindow_o* __this, int32_t button, bool isForce, const MethodInfo* method_info);
bool Dpr_UI_UIWindow__IsReleaseButton (Dpr_UI_UIWindow_o* __this, int32_t button, bool isForce, const MethodInfo* method_info);
bool Dpr_UI_UIWindow__IsRepeatButton (Dpr_UI_UIWindow_o* __this, int32_t button, bool isForce, const MethodInfo* method_info);
bool Dpr_UI_UIWindow__IsOnButton (Dpr_UI_UIWindow_o* __this, int32_t button, bool isForce, const MethodInfo* method_info);
bool Dpr_UI_UIWindow__IsAccelButton (Dpr_UI_UIWindow_o* __this, int32_t button, bool isForce, const MethodInfo* method_info);
void Dpr_UI_UIWindow__PlayOpenWindowAnimation (Dpr_UI_UIWindow_o* __this, int32_t prevWindowId, UnityEngine_Events_UnityAction_o* onOpend, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__OpPlayOpenWindowAnimation (Dpr_UI_UIWindow_o* __this, int32_t prevWindowId, UnityEngine_Events_UnityAction_o* onOpend, const MethodInfo* method_info);
int32_t Dpr_UI_UIWindow__GetWindowAnimationConnectId (Dpr_UI_UIWindow_o* __this, bool isOpen, int32_t windowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__OpPlayCloseWindowAnimationAndWaiting (Dpr_UI_UIWindow_o* __this, int32_t nextWindowId, const MethodInfo* method_info);
bool Dpr_UI_UIWindow__EnableMainCameraByUiMode (Dpr_UI_UIWindow_o* __this, bool enabled, const MethodInfo* method_info);
void Dpr_UI_UIWindow__OnCloseKeyguide (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIWindow__OpenMessageWindow (Dpr_UI_UIWindow_o* __this, Dpr_MsgWindow_MsgWindowParam_o* messageParam, const MethodInfo* method_info);
void Dpr_UI_UIWindow__CloseMessageWindow (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIWindow__IsActiveMessageWindow (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
Dpr_UI_ContextMenuWindow_Param_o* Dpr_UI_UIWindow__CreateContextMenuYesNoParam (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
Dpr_UI_ContextMenuWindow_o* Dpr_UI_UIWindow__CreateContextMenuYesNo (Dpr_UI_UIWindow_o* __this, System_Func_ContextMenuItem__bool__o* onClicked, uint32_t SeDecide, const MethodInfo* method_info);
Dpr_UI_ContextMenuWindow_o* Dpr_UI_UIWindow__CreateContextMenuYesNo (Dpr_UI_UIWindow_o* __this, System_Func_ContextMenuItem__bool__o* onClicked, Dpr_UI_ContextMenuWindow_Param_o* contextMenuParam, const MethodInfo* method_info);
void Dpr_UI_UIWindow__OnAddContextMenuYesNoItemParams (Dpr_UI_UIWindow_o* __this, System_Collections_Generic_List_ContextMenuItem_Param__o* contextMenuItemParams, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__FadeTransition_AdventureNoteWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, System_Action_o* action, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__FadeTransition_BoxWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, System_Action_o* action, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__FadeTransition_PokemonSelectWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, System_Action_o* action, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__FadeTransition_PokemonStatusWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, System_Action_o* action, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__FadeTransition_UIBag_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, System_Action_o* action, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__FadeTransition_ZukanCompareWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, System_Action_o* action, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__FadeTransition_ZukanMovingWindow_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, System_Action_o* action, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIWindow__FadeTransition_object_ (Dpr_UI_UIWindow_o* __this, UnityEngine_Color_o color, float duration, System_Action_o* action, const MethodInfo* method_info);
void Dpr_UI_UIWindow___ctor (Dpr_UI_UIWindow_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIWindow___cctor (const MethodInfo* method_info);
