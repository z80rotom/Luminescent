#pragma once

#include "il2cpp.h"

int32_t UnityEngine_UI_GraphicRaycaster__get_sortOrderPriority (UnityEngine_UI_GraphicRaycaster_o* __this, const MethodInfo* method);
int32_t UnityEngine_UI_GraphicRaycaster__get_renderOrderPriority (UnityEngine_UI_GraphicRaycaster_o* __this, const MethodInfo* method);
bool UnityEngine_UI_GraphicRaycaster__get_ignoreReversedGraphics (UnityEngine_UI_GraphicRaycaster_o* __this, const MethodInfo* method);
void UnityEngine_UI_GraphicRaycaster__set_ignoreReversedGraphics (UnityEngine_UI_GraphicRaycaster_o* __this, bool value, const MethodInfo* method);
int32_t UnityEngine_UI_GraphicRaycaster__get_blockingObjects (UnityEngine_UI_GraphicRaycaster_o* __this, const MethodInfo* method);
void UnityEngine_UI_GraphicRaycaster__set_blockingObjects (UnityEngine_UI_GraphicRaycaster_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_UI_GraphicRaycaster___ctor (UnityEngine_UI_GraphicRaycaster_o* __this, const MethodInfo* method);
UnityEngine_Canvas_o* UnityEngine_UI_GraphicRaycaster__get_canvas (UnityEngine_UI_GraphicRaycaster_o* __this, const MethodInfo* method);
void UnityEngine_UI_GraphicRaycaster__Raycast (UnityEngine_UI_GraphicRaycaster_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, System_Collections_Generic_List_RaycastResult__o* resultAppendList, const MethodInfo* method);
UnityEngine_Camera_o* UnityEngine_UI_GraphicRaycaster__get_eventCamera (UnityEngine_UI_GraphicRaycaster_o* __this, const MethodInfo* method);
void UnityEngine_UI_GraphicRaycaster__Raycast (UnityEngine_Canvas_o* canvas, UnityEngine_Camera_o* eventCamera, UnityEngine_Vector2_o pointerPosition, System_Collections_Generic_IList_Graphic__o* foundGraphics, System_Collections_Generic_List_Graphic__o* results, const MethodInfo* method);
void UnityEngine_UI_GraphicRaycaster___cctor (const MethodInfo* method);
