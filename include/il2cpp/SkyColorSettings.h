#pragma once

#include "il2cpp.h"

SkyColorSettings_o* SkyColorSettings__get_global (const MethodInfo* method_info);
void SkyColorSettings__set_global (SkyColorSettings_o* value, const MethodInfo* method_info);
uint8_t SkyColorSettings__get_CurrentWeather (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings__set_CurrentWeather (SkyColorSettings_o* __this, uint8_t value, const MethodInfo* method_info);
float SkyColorSettings__get_Weight (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings__set_Weight (SkyColorSettings_o* __this, float value, const MethodInfo* method_info);
void SkyColorSettings__OnValidate (SkyColorSettings_o* __this, const MethodInfo* method_info);
SkyColorSettings_Property_o SkyColorSettings__QueryProperty (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings__SetParameters (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings__OnEnable (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings__OnDisable (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings__OnUpdate (SkyColorSettings_o* __this, float deltaTime, const MethodInfo* method_info);
SkyColorSettings_Property_o SkyColorSettings__GetProperty (SkyColorSettings_o* __this, uint8_t weather, int32_t periodOfDay, const MethodInfo* method_info);
SkyColorSettings_Property_array* SkyColorSettings__GetProperties (SkyColorSettings_o* __this, uint8_t weather, const MethodInfo* method_info);
uint8_t SkyColorSettings__GetWeather (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings__SetWeather (SkyColorSettings_o* __this, uint8_t weather, int32_t periodOfDay, float weight, const MethodInfo* method_info);
void SkyColorSettings__SetWeather (SkyColorSettings_o* __this, uint8_t weather, int32_t periodOfDay, float weight, const MethodInfo* method_info);
void SkyColorSettings__ResetSkyColor (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings__ChangeWeather (SkyColorSettings_o* __this, uint8_t fromWeather, uint8_t toWeather, int32_t periodOfDay, float weight, const MethodInfo* method_info);
void SkyColorSettings__ChangeWeather (SkyColorSettings_o* __this, uint8_t fromWeather, uint8_t toWeather, int32_t periodOfDay, float duration, System_Action_o* onComplete, const MethodInfo* method_info);
void SkyColorSettings__ChangeWeather (SkyColorSettings_o* __this, uint8_t fromWeather, uint8_t toWeather, float duration, System_Action_o* onComplete, const MethodInfo* method_info);
void SkyColorSettings__ChangeTemporaryPeriodOfDay (SkyColorSettings_o* __this, int32_t periodOfDay, float duration, System_Action_o* onComplete, const MethodInfo* method_info);
void SkyColorSettings___ctor (SkyColorSettings_o* __this, const MethodInfo* method_info);
void SkyColorSettings___cctor (const MethodInfo* method_info);
