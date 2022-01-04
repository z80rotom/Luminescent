#pragma once

#include "il2cpp.h"

bool Dpr_Battle_View_Objects_BOTrainer__get_IsPlayer (Dpr_Battle_View_Objects_BOTrainer_o* __this, const MethodInfo* method);
BattleCharacterEntity_o* Dpr_Battle_View_Objects_BOTrainer__get_Entity (Dpr_Battle_View_Objects_BOTrainer_o* __this, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__Initialize (Dpr_Battle_View_Objects_BOTrainer_o* __this, int32_t vPos, Dpr_Battle_Logic_TRAINER_DATA_o* data, const MethodInfo* method);
uint8_t Dpr_Battle_View_Objects_BOTrainer__GetClientId (Dpr_Battle_View_Objects_BOTrainer_o* __this, const MethodInfo* method);
uint8_t Dpr_Battle_View_Objects_BOTrainer__GetDominansHand (Dpr_Battle_View_Objects_BOTrainer_o* __this, const MethodInfo* method);
uint8_t Dpr_Battle_View_Objects_BOTrainer__GetBallHoldHand (Dpr_Battle_View_Objects_BOTrainer_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Dpr_Battle_View_Objects_BOTrainer__GetNodeJoint (Dpr_Battle_View_Objects_BOTrainer_o* __this, int32_t jointName, const MethodInfo* method);
UnityEngine_Transform_o* Dpr_Battle_View_Objects_BOTrainer__GetNodeJoint (Dpr_Battle_View_Objects_BOTrainer_o* __this, int32_t joint, const MethodInfo* method);
bool Dpr_Battle_View_Objects_BOTrainer__IsHandNode (Dpr_Battle_View_Objects_BOTrainer_o* __this, int32_t nodeName, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__AttachObject (Dpr_Battle_View_Objects_BOTrainer_o* __this, UnityEngine_GameObject_o* obj, System_String_o* nodeName, bool isFollowPos, bool isFollowRot, bool isFollowScl, bool isFollowAnimScl, bool isFollowLocalScl, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__AttachObject (Dpr_Battle_View_Objects_BOTrainer_o* __this, Dpr_ObjectEntity_o* obj, int32_t nodeName, bool ignoreDominantHand, bool enableDominantHoldBallHand, bool isFollowPos, bool isFollowRot, bool isFollowScl, bool isFollowAnimScl, bool isFollowLocalScl, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__DetachObject (Dpr_Battle_View_Objects_BOTrainer_o* __this, Dpr_ObjectEntity_o* obj, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__ChangeAnimState (Dpr_Battle_View_Objects_BOTrainer_o* __this, System_String_o* parameterName, bool isReset, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__ChangeAnimState (Dpr_Battle_View_Objects_BOTrainer_o* __this, int32_t motion, float duration, float startTime, bool isLoop, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__ChangeAnimStateThrowBall (Dpr_Battle_View_Objects_BOTrainer_o* __this, float duration, int32_t ballThrowType, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__UpdateAnimSpeed (Dpr_Battle_View_Objects_BOTrainer_o* __this, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__UpdateVisible (Dpr_Battle_View_Objects_BOTrainer_o* __this, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__SetRenderActive (Dpr_Battle_View_Objects_BOTrainer_o* __this, bool isActive, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer__SetVisibleShadow (Dpr_Battle_View_Objects_BOTrainer_o* __this, bool value, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer___ctor (Dpr_Battle_View_Objects_BOTrainer_o* __this, const MethodInfo* method);
void Dpr_Battle_View_Objects_BOTrainer___cctor (const MethodInfo* method);
