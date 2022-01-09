#pragma once

#include "il2cpp.h"

UnityEngine_Vector2_o UnityEngine_RectTransformUtility__PixelAdjustPoint (UnityEngine_Vector2_o point, UnityEngine_Transform_o* elementTransform, UnityEngine_Canvas_o* canvas, const MethodInfo* method_info);
UnityEngine_Rect_o UnityEngine_RectTransformUtility__PixelAdjustRect (UnityEngine_RectTransform_o* rectTransform, UnityEngine_Canvas_o* canvas, const MethodInfo* method_info);
bool UnityEngine_RectTransformUtility__PointInRectangle (UnityEngine_Vector2_o screenPoint, UnityEngine_RectTransform_o* rect, UnityEngine_Camera_o* cam, UnityEngine_Vector4_o offset, const MethodInfo* method_info);
bool UnityEngine_RectTransformUtility__RectangleContainsScreenPoint (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o screenPoint, UnityEngine_Camera_o* cam, const MethodInfo* method_info);
bool UnityEngine_RectTransformUtility__RectangleContainsScreenPoint (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o screenPoint, UnityEngine_Camera_o* cam, UnityEngine_Vector4_o offset, const MethodInfo* method_info);
bool UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o screenPoint, UnityEngine_Camera_o* cam, UnityEngine_Vector3_o* worldPoint, const MethodInfo* method_info);
bool UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o screenPoint, UnityEngine_Camera_o* cam, UnityEngine_Vector2_o* localPoint, const MethodInfo* method_info);
UnityEngine_Ray_o UnityEngine_RectTransformUtility__ScreenPointToRay (UnityEngine_Camera_o* cam, UnityEngine_Vector2_o screenPos, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_RectTransformUtility__WorldToScreenPoint (UnityEngine_Camera_o* cam, UnityEngine_Vector3_o worldPoint, const MethodInfo* method_info);
void UnityEngine_RectTransformUtility__FlipLayoutOnAxis (UnityEngine_RectTransform_o* rect, int32_t axis, bool keepPositioning, bool recursive, const MethodInfo* method_info);
void UnityEngine_RectTransformUtility__FlipLayoutAxes (UnityEngine_RectTransform_o* rect, bool keepPositioning, bool recursive, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_RectTransformUtility__GetTransposed (UnityEngine_Vector2_o input, const MethodInfo* method_info);
void UnityEngine_RectTransformUtility___cctor (const MethodInfo* method_info);
void UnityEngine_RectTransformUtility__PixelAdjustPoint_Injected (UnityEngine_Vector2_o* point, UnityEngine_Transform_o* elementTransform, UnityEngine_Canvas_o* canvas, UnityEngine_Vector2_o* ret, const MethodInfo* method_info);
void UnityEngine_RectTransformUtility__PixelAdjustRect_Injected (UnityEngine_RectTransform_o* rectTransform, UnityEngine_Canvas_o* canvas, UnityEngine_Rect_o* ret, const MethodInfo* method_info);
bool UnityEngine_RectTransformUtility__PointInRectangle_Injected (UnityEngine_Vector2_o* screenPoint, UnityEngine_RectTransform_o* rect, UnityEngine_Camera_o* cam, UnityEngine_Vector4_o* offset, const MethodInfo* method_info);
