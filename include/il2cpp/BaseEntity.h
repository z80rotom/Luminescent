#pragma once

#include "il2cpp.h"

System_String_o* BaseEntity__get_entityType (BaseEntity_o* __this, const MethodInfo* method);
AnimationPlayer_o* BaseEntity__GetAnimationPlayer (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__set_beforePosition (BaseEntity_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o BaseEntity__get_beforePosition (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__Register (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__Unregister (BaseEntity_o* __this, const MethodInfo* method);
int32_t BaseEntity__get_currentSequence (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__set_currentSequence (BaseEntity_o* __this, int32_t value, const MethodInfo* method);
int32_t BaseEntity__get_nextSequence (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__set_nextSequence (BaseEntity_o* __this, int32_t value, const MethodInfo* method);
float BaseEntity__get_sequenceTime (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__set_sequenceTime (BaseEntity_o* __this, float value, const MethodInfo* method);
System_String_o* BaseEntity__get_entityEname (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__set_entityEname (BaseEntity_o* __this, System_String_o* value, const MethodInfo* method);
BaseEntity_o* BaseEntity__get_target (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__set_target (BaseEntity_o* __this, BaseEntity_o* value, const MethodInfo* method);
UnityEngine_Transform_o* BaseEntity__get_transform (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__Awake (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__OnEnable (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__OnDisable (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__OnDestroy (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__OnEarlyUpdate (BaseEntity_o* __this, float deltaTime, const MethodInfo* method);
void BaseEntity__OnUpdate (BaseEntity_o* __this, float deltaTime, const MethodInfo* method);
void BaseEntity__OnLateUpdate (BaseEntity_o* __this, float deltaTime, const MethodInfo* method);
void BaseEntity__OnPostLateUpdate (BaseEntity_o* __this, float deltaTime, const MethodInfo* method);
bool BaseEntity__SwitchToNext (BaseEntity_o* __this, const MethodInfo* method);
void BaseEntity__ProcessSequence (BaseEntity_o* __this, float deltaTime, const MethodInfo* method);
void BaseEntity__SetPositionDirect (BaseEntity_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
void BaseEntity__SetYawAngleDirect (BaseEntity_o* __this, float angle, const MethodInfo* method);
void BaseEntity___ctor (BaseEntity_o* __this, const MethodInfo* method);
