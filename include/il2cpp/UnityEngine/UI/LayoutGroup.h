#pragma once

#include "il2cpp.h"

UnityEngine_RectOffset_o* UnityEngine_UI_LayoutGroup__get_padding (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__set_padding (UnityEngine_UI_LayoutGroup_o* __this, UnityEngine_RectOffset_o* value, const MethodInfo* method_info);
int32_t UnityEngine_UI_LayoutGroup__get_childAlignment (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__set_childAlignment (UnityEngine_UI_LayoutGroup_o* __this, int32_t value, const MethodInfo* method_info);
UnityEngine_RectTransform_o* UnityEngine_UI_LayoutGroup__get_rectTransform (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
System_Collections_Generic_List_RectTransform__o* UnityEngine_UI_LayoutGroup__get_rectChildren (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__CalculateLayoutInputHorizontal (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__get_minWidth (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__get_preferredWidth (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__get_flexibleWidth (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__get_minHeight (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__get_preferredHeight (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__get_flexibleHeight (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_UI_LayoutGroup__get_layoutPriority (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup___ctor (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__OnEnable (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__OnDisable (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__OnDidApplyAnimationProperties (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__GetTotalMinSize (UnityEngine_UI_LayoutGroup_o* __this, int32_t axis, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__GetTotalPreferredSize (UnityEngine_UI_LayoutGroup_o* __this, int32_t axis, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__GetTotalFlexibleSize (UnityEngine_UI_LayoutGroup_o* __this, int32_t axis, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__GetStartOffset (UnityEngine_UI_LayoutGroup_o* __this, int32_t axis, float requiredSpaceWithoutPadding, const MethodInfo* method_info);
float UnityEngine_UI_LayoutGroup__GetAlignmentOnAxis (UnityEngine_UI_LayoutGroup_o* __this, int32_t axis, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetLayoutInputForAxis (UnityEngine_UI_LayoutGroup_o* __this, float totalMin, float totalPreferred, float totalFlexible, int32_t axis, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetChildAlongAxis (UnityEngine_UI_LayoutGroup_o* __this, UnityEngine_RectTransform_o* rect, int32_t axis, float pos, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetChildAlongAxisWithScale (UnityEngine_UI_LayoutGroup_o* __this, UnityEngine_RectTransform_o* rect, int32_t axis, float pos, float scaleFactor, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetChildAlongAxis (UnityEngine_UI_LayoutGroup_o* __this, UnityEngine_RectTransform_o* rect, int32_t axis, float pos, float size, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetChildAlongAxisWithScale (UnityEngine_UI_LayoutGroup_o* __this, UnityEngine_RectTransform_o* rect, int32_t axis, float pos, float size, float scaleFactor, const MethodInfo* method_info);
bool UnityEngine_UI_LayoutGroup__get_isRootLayoutGroup (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__OnRectTransformDimensionsChange (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__OnTransformChildrenChanged (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_bool_ (UnityEngine_UI_LayoutGroup_o* __this, bool* currentValue, bool newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_int_ (UnityEngine_UI_LayoutGroup_o* __this, int32_t* currentValue, int32_t newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_Int32Enum_ (UnityEngine_UI_LayoutGroup_o* __this, int32_t* currentValue, int32_t newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_object_ (UnityEngine_UI_LayoutGroup_o* __this, Il2CppObject** currentValue, Il2CppObject* newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_float_ (UnityEngine_UI_LayoutGroup_o* __this, float* currentValue, float newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_ (UnityEngine_UI_LayoutGroup_o* __this, UnityEngine_RectOffset_o** currentValue, UnityEngine_RectOffset_o* newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_TextAnchor_ (UnityEngine_UI_LayoutGroup_o* __this, int32_t* currentValue, int32_t newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Axis_ (UnityEngine_UI_LayoutGroup_o* __this, int32_t* currentValue, int32_t newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Constraint_ (UnityEngine_UI_LayoutGroup_o* __this, int32_t* currentValue, int32_t newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_ (UnityEngine_UI_LayoutGroup_o* __this, int32_t* currentValue, int32_t newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetProperty_Vector2_ (UnityEngine_UI_LayoutGroup_o* __this, UnityEngine_Vector2_o* currentValue, UnityEngine_Vector2_o newValue, const MethodInfo* method_info);
void UnityEngine_UI_LayoutGroup__SetDirty (UnityEngine_UI_LayoutGroup_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* UnityEngine_UI_LayoutGroup__DelayedSetDirty (UnityEngine_UI_LayoutGroup_o* __this, UnityEngine_RectTransform_o* rectTransform, const MethodInfo* method_info);
