#pragma once

#include "il2cpp.h"

System_Action_o* UnityEngine_UIElements_IMGUIContainer__get_onGUIHandler (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
UnityEngine_ObjectGUIState_o* UnityEngine_UIElements_IMGUIContainer__get_guiState (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
UnityEngine_Rect_o UnityEngine_UIElements_IMGUIContainer__get_lastWorldClip (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
UnityEngine_GUILayoutUtility_LayoutCache_o* UnityEngine_UIElements_IMGUIContainer__get_cache (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
float UnityEngine_UIElements_IMGUIContainer__get_layoutMeasuredWidth (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
float UnityEngine_UIElements_IMGUIContainer__get_layoutMeasuredHeight (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
int32_t UnityEngine_UIElements_IMGUIContainer__get_contextType (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
bool UnityEngine_UIElements_IMGUIContainer__get_focusOnlyIfHasFocusableControls (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_IMGUIContainer__SaveGlobals (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_IMGUIContainer__RestoreGlobals (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_IMGUIContainer__DoOnGUI (UnityEngine_UIElements_IMGUIContainer_o* __this, UnityEngine_Event_o* evt, UnityEngine_Matrix4x4_o parentTransform, UnityEngine_Rect_o clippingRect, bool isComputingLayout, UnityEngine_Rect_o layoutSize, System_Action_o* onGUIHandler, bool canAffectFocus, const MethodInfo* method);
void UnityEngine_UIElements_IMGUIContainer__MarkDirtyLayout (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
bool UnityEngine_UIElements_IMGUIContainer__SendEventToIMGUI (UnityEngine_UIElements_IMGUIContainer_o* __this, UnityEngine_UIElements_EventBase_o* evt, bool canAffectFocus, const MethodInfo* method);
bool UnityEngine_UIElements_IMGUIContainer__HandleIMGUIEvent (UnityEngine_UIElements_IMGUIContainer_o* __this, UnityEngine_Event_o* e, bool canAffectFocus, const MethodInfo* method);
bool UnityEngine_UIElements_IMGUIContainer__HandleIMGUIEvent (UnityEngine_UIElements_IMGUIContainer_o* __this, UnityEngine_Event_o* e, System_Action_o* onGUIHandler, bool canAffectFocus, const MethodInfo* method);
bool UnityEngine_UIElements_IMGUIContainer__HandleIMGUIEvent (UnityEngine_UIElements_IMGUIContainer_o* __this, UnityEngine_Event_o* e, UnityEngine_Matrix4x4_o worldTransform, UnityEngine_Rect_o clippingRect, System_Action_o* onGUIHandler, bool canAffectFocus, const MethodInfo* method);
void UnityEngine_UIElements_IMGUIContainer__GetCurrentTransformAndClip (UnityEngine_UIElements_IMGUIContainer_o* container, UnityEngine_Event_o* evt, UnityEngine_Matrix4x4_o* transform, UnityEngine_Rect_o* clipRect, const MethodInfo* method);
void UnityEngine_UIElements_IMGUIContainer__Dispose (UnityEngine_UIElements_IMGUIContainer_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_IMGUIContainer__Dispose (UnityEngine_UIElements_IMGUIContainer_o* __this, bool disposeManaged, const MethodInfo* method);
void UnityEngine_UIElements_IMGUIContainer___cctor (const MethodInfo* method);
