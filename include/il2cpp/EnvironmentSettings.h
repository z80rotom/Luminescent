#pragma once

#include "il2cpp.h"

EnvironmentSettings_Parameters_o* EnvironmentSettings__get_Item (EnvironmentSettings_o* __this, int32_t periodOfDay, const MethodInfo* method_info);
int32_t EnvironmentSettings__GetPrevious (int32_t periodOfDay, const MethodInfo* method_info);
int32_t EnvironmentSettings__GetNext (int32_t periodOfDay, const MethodInfo* method_info);
EnvironmentSettings_Parameters_o* EnvironmentSettings__GetTransition (EnvironmentSettings_o* __this, int32_t periodOfDay, float weight, const MethodInfo* method_info);
EnvironmentSettings_o* EnvironmentSettings__Clone (EnvironmentSettings_o* __this, const MethodInfo* method_info);
void EnvironmentSettings___ctor (EnvironmentSettings_o* __this, const MethodInfo* method_info);
