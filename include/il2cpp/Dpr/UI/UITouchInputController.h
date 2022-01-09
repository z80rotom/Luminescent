#pragma once

#include "il2cpp.h"

Dpr_UI_UITouchInputController_TouchInfo_array* Dpr_UI_UITouchInputController__get_Touches (Dpr_UI_UITouchInputController_o* __this, const MethodInfo* method_info);
void Dpr_UI_UITouchInputController__set_Touches (Dpr_UI_UITouchInputController_o* __this, Dpr_UI_UITouchInputController_TouchInfo_array* value, const MethodInfo* method_info);
int32_t Dpr_UI_UITouchInputController__get_TouchCount (Dpr_UI_UITouchInputController_o* __this, const MethodInfo* method_info);
void Dpr_UI_UITouchInputController__set_TouchCount (Dpr_UI_UITouchInputController_o* __this, int32_t value, const MethodInfo* method_info);
void Dpr_UI_UITouchInputController___ctor (Dpr_UI_UITouchInputController_o* __this, float longTouchTime, const MethodInfo* method_info);
void Dpr_UI_UITouchInputController__OnUpdate (Dpr_UI_UITouchInputController_o* __this, float deltaTime, const MethodInfo* method_info);
Dpr_UI_UITouchInputController_TouchInfo_o* Dpr_UI_UITouchInputController__GetNearestOriginPointTouch (Dpr_UI_UITouchInputController_o* __this, const MethodInfo* method_info);
void Dpr_UI_UITouchInputController__SetBeganTouch (Dpr_UI_UITouchInputController_o* __this, int32_t index, UnityEngine_Vector2_o pos, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_UITouchInputController__SetStationaryTouch (Dpr_UI_UITouchInputController_o* __this, int32_t index, UnityEngine_Vector2_o pos, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_UITouchInputController__SetMovedTouch (Dpr_UI_UITouchInputController_o* __this, int32_t index, UnityEngine_Vector2_o pos, float deltaTime, const MethodInfo* method_info);
void Dpr_UI_UITouchInputController__SetEndTouch (Dpr_UI_UITouchInputController_o* __this, int32_t index, UnityEngine_Vector2_o pos, float deltaTime, const MethodInfo* method_info);
