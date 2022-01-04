#pragma once

#include "il2cpp.h"

bool FieldMistWork__CheckMistWeather (const MethodInfo* method);
bool FieldMistWork__AvailableKiribarai (const MethodInfo* method);
EnvironmentSettings_o* FieldMistWork__GetCurrentSetting (FieldMistWork_o* __this, const MethodInfo* method);
bool FieldMistWork__get_IsEnable (FieldMistWork_o* __this, const MethodInfo* method);
void FieldMistWork__Setup (FieldMistWork_o* __this, const MethodInfo* method);
EnvironmentSettings_o* FieldMistWork__GetBaseSetting (FieldMistWork_o* __this, int32_t zoneId, const MethodInfo* method);
void FieldMistWork__Update (FieldMistWork_o* __this, float deltaTime, const MethodInfo* method);
void FieldMistWork__ChangeMist (FieldMistWork_o* __this, float target, float time, const MethodInfo* method);
void FieldMistWork__CalcCurrentSetting (FieldMistWork_o* __this, const MethodInfo* method);
void FieldMistWork__BlendSetting (FieldMistWork_o* __this, EnvironmentSettings_Parameters_o* paramA, EnvironmentSettings_Parameters_o* paramB, float weight, EnvironmentSettings_Parameters_o* refOutParam, const MethodInfo* method);
void FieldMistWork__CreateMistEffectSetting (FieldMistWork_o* __this, const MethodInfo* method);
void FieldMistWork__OverrideParameter (FieldMistWork_o* __this, EnvironmentSettings_Parameters_o* param, int32_t paramHeadIndex, const MethodInfo* method);
void FieldMistWork___ctor (FieldMistWork_o* __this, const MethodInfo* method);
float FieldMistWork___OverrideParameter_g__Get_15_0 (FieldMistWork___c__DisplayClass15_0_o* , const MethodInfo* method);
