#pragma once

#include "il2cpp.h"

int32_t Dpr_SixAxisSensorManager__get_handleCount (const MethodInfo* method);
void Dpr_SixAxisSensorManager__Initialize (const MethodInfo* method);
void Dpr_SixAxisSensorManager__OnSettingValueChanged (int32_t configId, int32_t value, const MethodInfo* method);
void Dpr_SixAxisSensorManager__Terminate (const MethodInfo* method);
Dpr_SixAxisSensorManager_SensorState_o* Dpr_SixAxisSensorManager__GetSensorState (int32_t index, const MethodInfo* method);
void Dpr_SixAxisSensorManager__OnUpdate (float deltaTime, const MethodInfo* method);
void Dpr_SixAxisSensorManager__UpdateInternal (float deltaTime, const MethodInfo* method);
bool Dpr_SixAxisSensorManager__UpdatePadState (const MethodInfo* method);
void Dpr_SixAxisSensorManager__GetSixAxisSensor (int32_t id, int32_t style, const MethodInfo* method);
void Dpr_SixAxisSensorManager___cctor (const MethodInfo* method);
