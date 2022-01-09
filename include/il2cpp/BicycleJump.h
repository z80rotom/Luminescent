#pragma once

#include "il2cpp.h"

void BicycleJump__SetUp (BicycleJump_o* __this, UnityEngine_Vector3_o startpos, UnityEngine_Vector3_o endpos, bool gear, const MethodInfo* method_info);
UnityEngine_Vector3_o BicycleJump__Update (BicycleJump_o* __this, float deltatime, int32_t* end, UnityEngine_Vector3_o* worldpos, const MethodInfo* method_info);
UnityEngine_Vector3_o BicycleJump__JumpAction (BicycleJump_o* __this, float deltatime, UnityEngine_Vector3_o* worldpos, const MethodInfo* method_info);
UnityEngine_Vector3_o BicycleJump__SlowGear (BicycleJump_o* __this, float deltatime, int32_t* end, UnityEngine_Vector3_o* worldpos, const MethodInfo* method_info);
UnityEngine_Vector3_o BicycleJump__FastGear (BicycleJump_o* __this, float deltatime, int32_t* end, UnityEngine_Vector3_o* worldpos, const MethodInfo* method_info);
void BicycleJump___ctor (BicycleJump_o* __this, const MethodInfo* method_info);
