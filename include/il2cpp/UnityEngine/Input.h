#pragma once

#include "il2cpp.h"

bool UnityEngine_Input__GetKeyInt (int32_t key, const MethodInfo* method_info);
bool UnityEngine_Input__GetKeyUpInt (int32_t key, const MethodInfo* method_info);
bool UnityEngine_Input__GetKeyDownInt (int32_t key, const MethodInfo* method_info);
float UnityEngine_Input__GetAxis (System_String_o* axisName, const MethodInfo* method_info);
float UnityEngine_Input__GetAxisRaw (System_String_o* axisName, const MethodInfo* method_info);
bool UnityEngine_Input__GetButton (System_String_o* buttonName, const MethodInfo* method_info);
bool UnityEngine_Input__GetButtonDown (System_String_o* buttonName, const MethodInfo* method_info);
bool UnityEngine_Input__GetButtonUp (System_String_o* buttonName, const MethodInfo* method_info);
bool UnityEngine_Input__GetMouseButton (int32_t button, const MethodInfo* method_info);
bool UnityEngine_Input__GetMouseButtonDown (int32_t button, const MethodInfo* method_info);
bool UnityEngine_Input__GetMouseButtonUp (int32_t button, const MethodInfo* method_info);
UnityEngine_Touch_o UnityEngine_Input__GetTouch (int32_t index, const MethodInfo* method_info);
bool UnityEngine_Input__GetKey (int32_t key, const MethodInfo* method_info);
bool UnityEngine_Input__GetKeyUp (int32_t key, const MethodInfo* method_info);
bool UnityEngine_Input__GetKeyDown (int32_t key, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Input__get_mousePosition (const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Input__get_mouseScrollDelta (const MethodInfo* method_info);
int32_t UnityEngine_Input__get_imeCompositionMode (const MethodInfo* method_info);
void UnityEngine_Input__set_imeCompositionMode (int32_t value, const MethodInfo* method_info);
System_String_o* UnityEngine_Input__get_compositionString (const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Input__get_compositionCursorPos (const MethodInfo* method_info);
void UnityEngine_Input__set_compositionCursorPos (UnityEngine_Vector2_o value, const MethodInfo* method_info);
bool UnityEngine_Input__get_mousePresent (const MethodInfo* method_info);
int32_t UnityEngine_Input__get_touchCount (const MethodInfo* method_info);
bool UnityEngine_Input__get_touchSupported (const MethodInfo* method_info);
UnityEngine_Touch_array* UnityEngine_Input__get_touches (const MethodInfo* method_info);
void UnityEngine_Input__GetTouch_Injected (int32_t index, UnityEngine_Touch_o* ret, const MethodInfo* method_info);
void UnityEngine_Input__get_mousePosition_Injected (UnityEngine_Vector3_o* ret, const MethodInfo* method_info);
void UnityEngine_Input__get_mouseScrollDelta_Injected (UnityEngine_Vector2_o* ret, const MethodInfo* method_info);
void UnityEngine_Input__get_compositionCursorPos_Injected (UnityEngine_Vector2_o* ret, const MethodInfo* method_info);
void UnityEngine_Input__set_compositionCursorPos_Injected (UnityEngine_Vector2_o* value, const MethodInfo* method_info);
