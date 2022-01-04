#pragma once

#include "il2cpp.h"

float Dpr_UI_Capsule3DViewController__get_CapsuleRadius (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__set_CapsuleRadius (Dpr_UI_Capsule3DViewController_o* __this, float value, const MethodInfo* method);
bool Dpr_UI_Capsule3DViewController__get_IsIntialized (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
bool Dpr_UI_Capsule3DViewController__get_IsHitCapsule (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__set_IsHitCapsule (Dpr_UI_Capsule3DViewController_o* __this, bool value, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__OnViewportChange (Dpr_UI_Capsule3DViewController_o* __this, int32_t screenWidth, int32_t screenHeight, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__Initialize (Dpr_UI_Capsule3DViewController_o* __this, UnityEngine_UI_RawImage_o* rawImage, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__Dispose (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__SetEnviromentControllerActive (Dpr_UI_Capsule3DViewController_o* __this, bool isActive, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__SetActive (Dpr_UI_Capsule3DViewController_o* __this, bool isActive, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__SetCapsuleActive (Dpr_UI_Capsule3DViewController_o* __this, bool isActive, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_Capsule3DViewController__Redraw (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__Setup (Dpr_UI_Capsule3DViewController_o* __this, Dpr_UI_CapsuleInfo_o* capsuleInfo, bool isResetView, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__SetBG (Dpr_UI_Capsule3DViewController_o* __this, UnityEngine_RectTransform_o* rectTransform, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__ShowListMode (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__ShowEditMode (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__Rotation (Dpr_UI_Capsule3DViewController_o* __this, float x, float y, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__ResetRotation (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_UI_Capsule3DViewController__GetAffixSealPosition (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_UI_Capsule3DViewController__GetAffixSealPosition (Dpr_UI_Capsule3DViewController_o* __this, Dpr_UI_Seal3DObject_o* seal3DObject, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_UI_Capsule3DViewController__GetScreenPosition (Dpr_UI_Capsule3DViewController_o* __this, Dpr_UI_Seal3DObject_o* seal3DObject, const MethodInfo* method);
UnityEngine_RaycastHit_o Dpr_UI_Capsule3DViewController__Raycast (Dpr_UI_Capsule3DViewController_o* __this, UnityEngine_Vector3_o screenPosition, Dpr_UI_Seal3DObject_o** seal3DObject, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__AffixSeal (Dpr_UI_Capsule3DViewController_o* __this, int32_t affixSealId, int32_t sealId, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__AffixSealObject (Dpr_UI_Capsule3DViewController_o* __this, Dpr_UI_Seal3DObject_o* seal3DObject, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__AffixSeal (Dpr_UI_Capsule3DViewController_o* __this, int32_t affixSealId, int32_t sealId, UnityEngine_Vector3_o affixDataPosition, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__CreateCapsuleObject (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController__LoadSealObjectPrefab (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
Dpr_UI_Seal3DObject_o* Dpr_UI_Capsule3DViewController__GetSealObject (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_UI_Capsule3DViewController__ConvertAffixSealPointToWorldPoint (Dpr_UI_Capsule3DViewController_o* __this, UnityEngine_Vector3_o affixSealPoint, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_UI_Capsule3DViewController__ConvertWorldPointToAffixSealPoint (Dpr_UI_Capsule3DViewController_o* __this, UnityEngine_Vector3_o worldPoint, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController___ctor (Dpr_UI_Capsule3DViewController_o* __this, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController___CreateCapsuleObject_b__58_0 (Dpr_UI_Capsule3DViewController_o* __this, int32_t eventType, System_String_o* assetName, UnityEngine_Object_o* asset, const MethodInfo* method);
void Dpr_UI_Capsule3DViewController___LoadSealObjectPrefab_b__59_0 (Dpr_UI_Capsule3DViewController_o* __this, int32_t eventType, System_String_o* assetName, UnityEngine_Object_o* asset, const MethodInfo* method);
