#pragma once

#include "il2cpp.h"

void UnityEngine_Display___ctor (UnityEngine_Display_o* __this, const MethodInfo* method_info);
void UnityEngine_Display___ctor (UnityEngine_Display_o* __this, intptr_t nativeDisplay, const MethodInfo* method_info);
int32_t UnityEngine_Display__get_renderingWidth (UnityEngine_Display_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_Display__get_renderingHeight (UnityEngine_Display_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_Display__get_systemWidth (UnityEngine_Display_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_Display__get_systemHeight (UnityEngine_Display_o* __this, const MethodInfo* method_info);
UnityEngine_Vector3_o UnityEngine_Display__RelativeMouseAt (UnityEngine_Vector3_o inputMouseCoordinates, const MethodInfo* method_info);
UnityEngine_Display_o* UnityEngine_Display__get_main (const MethodInfo* method_info);
void UnityEngine_Display__RecreateDisplayList (System_IntPtr_array* nativeDisplay, const MethodInfo* method_info);
void UnityEngine_Display__FireDisplaysUpdated (const MethodInfo* method_info);
void UnityEngine_Display__GetSystemExtImpl (intptr_t nativeDisplay, int32_t* w, int32_t* h, const MethodInfo* method_info);
void UnityEngine_Display__GetRenderingExtImpl (intptr_t nativeDisplay, int32_t* w, int32_t* h, const MethodInfo* method_info);
int32_t UnityEngine_Display__RelativeMouseAtImpl (int32_t x, int32_t y, int32_t* rx, int32_t* ry, const MethodInfo* method_info);
void UnityEngine_Display___cctor (const MethodInfo* method_info);
