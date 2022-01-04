#pragma once

#include "il2cpp.h"

Dpr_Field_Walking_AIUgModel_o* Dpr_Field_Walking_UGBaseState__get_model (Dpr_Field_Walking_UGBaseState_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_UGBaseState___ctor (Dpr_Field_Walking_UGBaseState_o* __this, Dpr_Field_Walking_AIModel_o* model, const MethodInfo* method);
void Dpr_Field_Walking_UGBaseState__StateUpdate (Dpr_Field_Walking_UGBaseState_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_UGBaseState__Move (Dpr_Field_Walking_UGBaseState_o* __this, float speed, float otherDist, const MethodInfo* method);
bool Dpr_Field_Walking_UGBaseState__LookPlayerIfNear (Dpr_Field_Walking_UGBaseState_o* __this, Dpr_Field_Walking_WalkData_o* walkModel, const MethodInfo* method);
bool Dpr_Field_Walking_UGBaseState__CheckArrive (Dpr_Field_Walking_UGBaseState_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_UGBaseState__LookAtTarget (Dpr_Field_Walking_UGBaseState_o* __this, UnityEngine_Vector3_o pos, float rotSpeed, const MethodInfo* method);
bool Dpr_Field_Walking_UGBaseState__isDontEnterArea (Dpr_Field_Walking_UGBaseState_o* __this, UnityEngine_Vector3_o NextPos, float addRange, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_Field_Walking_UGBaseState__GetRandomPoint (Dpr_Field_Walking_UGBaseState_o* __this, int32_t moveType, const MethodInfo* method);
bool Dpr_Field_Walking_UGBaseState__InSearchArea (Dpr_Field_Walking_UGBaseState_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
