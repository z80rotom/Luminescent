#pragma once

#include "il2cpp.h"

UnityEngine_RectTransform_o* UnityEngine_UI_Scrollbar__get_handleRect (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__set_handleRect (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_RectTransform_o* value, const MethodInfo* method_info);
int32_t UnityEngine_UI_Scrollbar__get_direction (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__set_direction (UnityEngine_UI_Scrollbar_o* __this, int32_t value, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar___ctor (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_Scrollbar__get_value (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__set_value (UnityEngine_UI_Scrollbar_o* __this, float value, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__SetValueWithoutNotify (UnityEngine_UI_Scrollbar_o* __this, float input, const MethodInfo* method_info);
float UnityEngine_UI_Scrollbar__get_size (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__set_size (UnityEngine_UI_Scrollbar_o* __this, float value, const MethodInfo* method_info);
int32_t UnityEngine_UI_Scrollbar__get_numberOfSteps (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__set_numberOfSteps (UnityEngine_UI_Scrollbar_o* __this, int32_t value, const MethodInfo* method_info);
UnityEngine_UI_Scrollbar_ScrollEvent_o* UnityEngine_UI_Scrollbar__get_onValueChanged (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__set_onValueChanged (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_UI_Scrollbar_ScrollEvent_o* value, const MethodInfo* method_info);
float UnityEngine_UI_Scrollbar__get_stepSize (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__Rebuild (UnityEngine_UI_Scrollbar_o* __this, int32_t executing, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__LayoutComplete (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__GraphicUpdateComplete (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnEnable (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnDisable (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__Update (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__UpdateCachedReferences (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__Set (UnityEngine_UI_Scrollbar_o* __this, float input, bool sendCallback, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnRectTransformDimensionsChange (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_UI_Scrollbar__get_axis (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
bool UnityEngine_UI_Scrollbar__get_reverseValue (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__UpdateVisuals (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__UpdateDrag (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__DoUpdateDrag (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_Vector2_o handleCorner, float remainingSize, const MethodInfo* method_info);
bool UnityEngine_UI_Scrollbar__MayDrag (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnBeginDrag (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnDrag (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnPointerDown (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
System_Collections_IEnumerator_o* UnityEngine_UI_Scrollbar__ClickRepeat (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
System_Collections_IEnumerator_o* UnityEngine_UI_Scrollbar__ClickRepeat (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_Vector2_o screenPosition, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnPointerUp (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnMove (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method_info);
UnityEngine_UI_Selectable_o* UnityEngine_UI_Scrollbar__FindSelectableOnLeft (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
UnityEngine_UI_Selectable_o* UnityEngine_UI_Scrollbar__FindSelectableOnRight (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
UnityEngine_UI_Selectable_o* UnityEngine_UI_Scrollbar__FindSelectableOnUp (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
UnityEngine_UI_Selectable_o* UnityEngine_UI_Scrollbar__FindSelectableOnDown (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__OnInitializePotentialDrag (UnityEngine_UI_Scrollbar_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method_info);
void UnityEngine_UI_Scrollbar__SetDirection (UnityEngine_UI_Scrollbar_o* __this, int32_t direction, bool includeRectLayouts, const MethodInfo* method_info);
UnityEngine_Transform_o* UnityEngine_UI_Scrollbar__UnityEngine_UI_ICanvasElement_get_transform (UnityEngine_UI_Scrollbar_o* __this, const MethodInfo* method_info);
