#pragma once

#include "il2cpp.h"

EnvironmentController_o* EnvironmentController__get_global (const MethodInfo* method_info);
void EnvironmentController__set_global (EnvironmentController_o* value, const MethodInfo* method_info);
float EnvironmentController__get_globalBumpScale (const MethodInfo* method_info);
void EnvironmentController__set_globalBumpScale (float value, const MethodInfo* method_info);
float EnvironmentController__get_globalLightPower (const MethodInfo* method_info);
void EnvironmentController__set_globalLightPower (float value, const MethodInfo* method_info);
bool EnvironmentController__get_globalSnowFieldEnable (const MethodInfo* method_info);
void EnvironmentController__set_globalSnowFieldEnable (bool value, const MethodInfo* method_info);
bool EnvironmentController__get_globalWaterFieldEnable (const MethodInfo* method_info);
void EnvironmentController__set_globalWaterFieldEnable (bool value, const MethodInfo* method_info);
void EnvironmentController__set_cloudShadowEnable (EnvironmentController_o* __this, bool value, const MethodInfo* method_info);
void EnvironmentController__set_cloudShadowTex (EnvironmentController_o* __this, UnityEngine_Texture2D_o* value, const MethodInfo* method_info);
float EnvironmentController__get_shadowDistance (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__set_shadowDistance (EnvironmentController_o* __this, float value, const MethodInfo* method_info);
float EnvironmentController__get_shadowNearPlaneOffset (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__set_shadowNearPlaneOffset (EnvironmentController_o* __this, float value, const MethodInfo* method_info);
int32_t EnvironmentController__get_shaderMode (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__set_shaderMode (EnvironmentController_o* __this, int32_t value, const MethodInfo* method_info);
void EnvironmentController__set_throughGlobal (EnvironmentController_o* __this, bool value, const MethodInfo* method_info);
bool EnvironmentController__IsActiveController (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__SetActiveController (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__OnEnable (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__OnDisable (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__OnUpdate (EnvironmentController_o* __this, float deltaTime, const MethodInfo* method_info);
void EnvironmentController__SetKeyword (System_String_o* keyword, bool state, const MethodInfo* method_info);
void EnvironmentController__OnDestroy (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__SetLight (EnvironmentController_o* __this, EnvironmentSettings_o* light, int32_t periodOfDay, float progress, float weight, const MethodInfo* method_info);
void EnvironmentController__SetPokemonLight (EnvironmentController_o* __this, EnvironmentSettings_o* light, int32_t periodOfDay, const MethodInfo* method_info);
void EnvironmentController__ResetShadowSettings (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController__OnValidate (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController___ctor (EnvironmentController_o* __this, const MethodInfo* method_info);
void EnvironmentController___cctor (const MethodInfo* method_info);
