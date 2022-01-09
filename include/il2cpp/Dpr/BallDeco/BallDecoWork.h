#pragma once

#include "il2cpp.h"

Dpr_BallDeco_SaveBallDecoData_o* Dpr_BallDeco_BallDecoWork__get_m_ballDecoData (const MethodInfo* method_info);
int32_t Dpr_BallDeco_BallDecoWork__GetCapsuleCount (const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__AddCapsuleCount (int32_t count, const MethodInfo* method_info);
bool Dpr_BallDeco_BallDecoWork__Get3DEditMode (int32_t capsuleId, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__Set3DEditMode (int32_t capsuleId, bool is3DEditMode, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__SetAppliedTemplate (int32_t capsuleId, bool isAppliedTemplate, const MethodInfo* method_info);
int32_t Dpr_BallDeco_BallDecoWork__GetAttachCapsuleId (uint32_t pokemonId, uint32_t personalRnd, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__SetAttachCapsule (int32_t capsuleId, uint32_t pokemonId, uint32_t personalRnd, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__SwapCapsuleData (int32_t capsuleId1, int32_t capsuleId2, const MethodInfo* method_info);
int32_t Dpr_BallDeco_BallDecoWork__GetCanCopySealCount (int32_t capsuleId, const MethodInfo* method_info);
int32_t Dpr_BallDeco_BallDecoWork__GetCanCopySealCount (Dpr_BallDeco_CapsuleData_o capsuleData, const MethodInfo* method_info);
bool Dpr_BallDeco_BallDecoWork__CopyCapsuleData (int32_t fromCapsuleId, int32_t toCapsuleId, const MethodInfo* method_info);
bool Dpr_BallDeco_BallDecoWork__CopyCapsuleData (Dpr_BallDeco_CapsuleData_o capsuleData, int32_t toCapsuleId, const MethodInfo* method_info);
bool Dpr_BallDeco_BallDecoWork__CopyTradeCapsuleData (Dpr_BallDeco_CapsuleData_o capsuleData, int32_t toCapsuleId, const MethodInfo* method_info);
int32_t Dpr_BallDeco_BallDecoWork__GetAffixSealCount (int32_t capsuleId, const MethodInfo* method_info);
Dpr_BallDeco_AffixSealData_o Dpr_BallDeco_BallDecoWork__GetAffixSealData (int32_t capsuleId, int32_t affixSealId, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__SetAffixSealData (int32_t capsuleId, int32_t affixSealId, uint16_t sealId, UnityEngine_Vector3_o pos, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__SetAffixSealData (int32_t capsuleId, Dpr_BallDeco_AffixSealData_array* affixSealDatas, uint8_t affixSealCount, const MethodInfo* method_info);
bool Dpr_BallDeco_BallDecoWork__AddAffixSealData (int32_t capsuleId, uint16_t sealId, UnityEngine_Vector3_o pos, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__RemoveAffixSealData (int32_t capsuleId, int32_t affixSealId, const MethodInfo* method_info);
bool Dpr_BallDeco_BallDecoWork__GetSealIsGet (int32_t id, const MethodInfo* method_info);
int32_t Dpr_BallDeco_BallDecoWork__GetSealCount (int32_t id, const MethodInfo* method_info);
int32_t Dpr_BallDeco_BallDecoWork__GetSealTotalCount (int32_t id, const MethodInfo* method_info);
int32_t Dpr_BallDeco_BallDecoWork__GetCanAddSealCount (int32_t id, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__AddSealCount (int32_t id, int32_t count, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__SubSealCount (int32_t id, int32_t count, bool isAffixSeal, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork__ReturnSealCount (int32_t id, int32_t count, const MethodInfo* method_info);
Dpr_BallDeco_CapsuleData_o* Dpr_BallDeco_BallDecoWork__GetCapsuleData (int32_t capsuleId, const MethodInfo* method_info);
UnityEngine_Vector3_o Dpr_BallDeco_BallDecoWork__Convert2DPosition (int32_t x, int32_t y, bool isFront, const MethodInfo* method_info);
float Dpr_BallDeco_BallDecoWork__GetEffectPositionOffset (int32_t size, const MethodInfo* method_info);
System_String_o* Dpr_BallDeco_BallDecoWork__GetBallLightEffectAssetBundleName (uint8_t ballId, const MethodInfo* method_info);
bool Dpr_BallDeco_BallDecoWork__GetFixedEffectData (int32_t sealID, UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* rot, UnityEngine_Vector3_o* scaleRate, const MethodInfo* method_info);
void Dpr_BallDeco_BallDecoWork___cctor (const MethodInfo* method_info);
