#pragma once

#include "il2cpp.h"

void Dpr_Field_Walking_WalkingCharacterView__Awake (Dpr_Field_Walking_WalkingCharacterView_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView__ChangeUpdateWhenOffScreen (Dpr_Field_Walking_WalkingCharacterView_o* __this, FieldPokemonEntity_o* entity, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView__OnDestroy (Dpr_Field_Walking_WalkingCharacterView_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView__SetAnimPlayer (Dpr_Field_Walking_WalkingCharacterView_o* __this, AnimationPlayer_o* player, const MethodInfo* method);
AnimationPlayer_o* Dpr_Field_Walking_WalkingCharacterView__GetAnimPlayer (Dpr_Field_Walking_WalkingCharacterView_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView__CreateEffectPosition (Dpr_Field_Walking_WalkingCharacterView_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView__AutoSelectAnimation (Dpr_Field_Walking_WalkingCharacterView_o* __this, Dpr_Field_Walking_WalkingCharacterModel_o* model, const MethodInfo* method);
bool Dpr_Field_Walking_WalkingCharacterView__CheckSleepState (Dpr_Field_Walking_WalkingCharacterView_o* __this, Dpr_Field_Walking_WalkingCharacterModel_o* model, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView__AnimPlay (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t index, float duration, float startTime, const MethodInfo* method);
Dpr_Field_Walking_CorSystem_o* Dpr_Field_Walking_WalkingCharacterView__AnimPlayForce (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t index, Dpr_Field_Walking_CorSystem_o* corSys, Dpr_Field_Walking_WalkingCharacterModel_o* model, float duration, float startTime, const MethodInfo* method);
float Dpr_Field_Walking_WalkingCharacterView__GetWaitDuration (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t NextAnimID, const MethodInfo* method);
int32_t Dpr_Field_Walking_WalkingCharacterView__GetWaitToWait (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t hokanAnim, int32_t nextAnim, const MethodInfo* method);
int32_t Dpr_Field_Walking_WalkingCharacterView__GetWaitAnim (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t prevWait, int32_t nextWait, const MethodInfo* method);
int32_t Dpr_Field_Walking_WalkingCharacterView__GetNeutralWaitAnim (Dpr_Field_Walking_WalkingCharacterView_o* __this, const MethodInfo* method);
bool Dpr_Field_Walking_WalkingCharacterView__isHokanAnimation (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t AnimID, const MethodInfo* method);
bool Dpr_Field_Walking_WalkingCharacterView__isWaitAnim (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t AnimID, const MethodInfo* method);
bool Dpr_Field_Walking_WalkingCharacterView__isRunAnim (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t AnimID, const MethodInfo* method);
bool Dpr_Field_Walking_WalkingCharacterView__isWalkAnim (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t AnimID, const MethodInfo* method);
bool Dpr_Field_Walking_WalkingCharacterView__isNeedWait (Dpr_Field_Walking_WalkingCharacterView_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView__CheckForceLoop (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t animIndex, const MethodInfo* method);
int32_t Dpr_Field_Walking_WalkingCharacterView__GetAnimIndex (Dpr_Field_Walking_WalkingCharacterView_o* __this, int32_t animType, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView__OnValidate (Dpr_Field_Walking_WalkingCharacterView_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView___ctor (Dpr_Field_Walking_WalkingCharacterView_o* __this, const MethodInfo* method);
void Dpr_Field_Walking_WalkingCharacterView___cctor (const MethodInfo* method);
