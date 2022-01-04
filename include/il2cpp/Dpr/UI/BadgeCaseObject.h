#pragma once

#include "il2cpp.h"

bool Dpr_UI_BadgeCaseObject__get_IsReady (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__set_IsReady (Dpr_UI_BadgeCaseObject_o* __this, bool value, const MethodInfo* method);
bool Dpr_UI_BadgeCaseObject__get_IsActive (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__set_IsActive (Dpr_UI_BadgeCaseObject_o* __this, bool value, const MethodInfo* method);
bool Dpr_UI_BadgeCaseObject__get_IsOpen (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
bool Dpr_UI_BadgeCaseObject__get_IsEnd (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__set_IsEnd (Dpr_UI_BadgeCaseObject_o* __this, bool value, const MethodInfo* method);
bool Dpr_UI_BadgeCaseObject__get_IsAnimation (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__Initialize (Dpr_UI_BadgeCaseObject_o* __this, UnityEngine_Camera_o* screenCamera, Dpr_UI_UIInputController_o* input, bool isBadgeGet, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__Dispose (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__OnUpdate (Dpr_UI_BadgeCaseObject_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__OpenCover (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__CloseCover (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__Show (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__PlayBadgeConditionEffects (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__StopBadgeConditionEffects (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__PlayAnimationBadgeGet (Dpr_UI_BadgeCaseObject_o* __this, System_String_o* animeName, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_BadgeCaseObject__LoadBadgeGetAnimation (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Dpr_UI_BadgeCaseObject__GetBadgeTransform (Dpr_UI_BadgeCaseObject_o* __this, int32_t badgeNo, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__SetActive (Dpr_UI_BadgeCaseObject_o* __this, bool isActive, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__UpdateKeyGuide (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
System_String_o* Dpr_UI_BadgeCaseObject__GetBadgeCaseModelAssetPath (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__LoadModel (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_BadgeCaseObject__SetupModels (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
bool Dpr_UI_BadgeCaseObject__Raycast (Dpr_UI_BadgeCaseObject_o* __this, UnityEngine_Vector3_o point, bool* isHitButton, Dpr_UI_BadgeObject_o** hitBadgeObject, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__SwitchBadgeCaseOpenClose (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject__PlayCaseButtonEffect (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject___ctor (Dpr_UI_BadgeCaseObject_o* __this, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject___LoadModel_b__70_0 (Dpr_UI_BadgeCaseObject_o* __this, int32_t eventType, System_String_o* assetName, UnityEngine_Object_o* asset, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject___LoadModel_b__70_1 (Dpr_UI_BadgeCaseObject_o* __this, int32_t eventType, System_String_o* assetName, UnityEngine_Object_o* asset, const MethodInfo* method);
void Dpr_UI_BadgeCaseObject___PlayCaseButtonEffect_b__74_0 (Dpr_UI_BadgeCaseObject_o* __this, Effect_EffectData_o* effectData, bool isComplete, const MethodInfo* method);
