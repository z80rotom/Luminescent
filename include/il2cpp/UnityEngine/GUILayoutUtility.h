#pragma once

#include "il2cpp.h"

UnityEngine_Rect_o UnityEngine_GUILayoutUtility__Internal_GetWindowRect (int32_t windowID, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__Internal_MoveWindow (int32_t windowID, UnityEngine_Rect_o r, const MethodInfo* method_info);
UnityEngine_GUILayoutUtility_LayoutCache_o* UnityEngine_GUILayoutUtility__SelectIDList (int32_t instanceID, bool isWindow, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__Begin (int32_t instanceID, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__BeginContainer (UnityEngine_GUILayoutUtility_LayoutCache_o* cache, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__BeginWindow (int32_t windowID, UnityEngine_GUIStyle_o* style, UnityEngine_GUILayoutOption_array* options, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__Layout (const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__LayoutFromEditorWindow (const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__LayoutFromContainer (float w, float h, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__LayoutFreeGroup (UnityEngine_GUILayoutGroup_o* toplevel, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__LayoutSingleGroup (UnityEngine_GUILayoutGroup_o* i, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility___cctor (const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__Internal_GetWindowRect_Injected (int32_t windowID, UnityEngine_Rect_o* ret, const MethodInfo* method_info);
void UnityEngine_GUILayoutUtility__Internal_MoveWindow_Injected (int32_t windowID, UnityEngine_Rect_o* r, const MethodInfo* method_info);
