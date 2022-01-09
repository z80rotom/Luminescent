#pragma once

#include "il2cpp.h"

int32_t TMPro_TMP_TextUtilities__GetCursorIndexFromPosition (TMPro_TMP_Text_o* textComponent, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__GetCursorIndexFromPosition (TMPro_TMP_Text_o* textComponent, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, int32_t* cursor, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindNearestLine (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindNearestCharacterOnLine (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, int32_t line, UnityEngine_Camera_o* camera, bool visibleOnly, const MethodInfo* method_info);
bool TMPro_TMP_TextUtilities__IsIntersectingRectTransform (UnityEngine_RectTransform_o* rectTransform, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindIntersectingCharacter (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, bool visibleOnly, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindNearestCharacter (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, bool visibleOnly, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindIntersectingWord (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindNearestWord (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindIntersectingLine (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindIntersectingLink (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__FindNearestLink (TMPro_TMP_Text_o* text, UnityEngine_Vector3_o position, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
bool TMPro_TMP_TextUtilities__PointIntersectRectangle (UnityEngine_Vector3_o m, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, UnityEngine_Vector3_o c, UnityEngine_Vector3_o d, const MethodInfo* method_info);
bool TMPro_TMP_TextUtilities__ScreenPointToWorldPointInRectangle (UnityEngine_Transform_o* transform, UnityEngine_Vector2_o screenPoint, UnityEngine_Camera_o* cam, UnityEngine_Vector3_o* worldPoint, const MethodInfo* method_info);
bool TMPro_TMP_TextUtilities__IntersectLinePlane (TMPro_TMP_TextUtilities_LineSegment_o line, UnityEngine_Vector3_o point, UnityEngine_Vector3_o normal, UnityEngine_Vector3_o* intersectingPoint, const MethodInfo* method_info);
float TMPro_TMP_TextUtilities__DistanceToLine (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, UnityEngine_Vector3_o point, const MethodInfo* method_info);
uint16_t TMPro_TMP_TextUtilities__ToLowerFast (uint16_t c, const MethodInfo* method_info);
uint16_t TMPro_TMP_TextUtilities__ToUpperFast (uint16_t c, const MethodInfo* method_info);
uint32_t TMPro_TMP_TextUtilities__ToUpperASCIIFast (uint32_t c, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__GetHashCode (System_String_o* s, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__GetSimpleHashCode (System_String_o* s, const MethodInfo* method_info);
uint32_t TMPro_TMP_TextUtilities__GetSimpleHashCodeLowercase (System_String_o* s, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__HexToInt (uint16_t hex, const MethodInfo* method_info);
int32_t TMPro_TMP_TextUtilities__StringHexToInt (System_String_o* s, const MethodInfo* method_info);
void TMPro_TMP_TextUtilities___cctor (const MethodInfo* method_info);
