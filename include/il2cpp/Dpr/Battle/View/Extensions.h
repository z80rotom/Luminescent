#pragma once

#include "il2cpp.h"

void Dpr_Battle_View_Extensions__SetRotation (UnityEngine_Transform_o* self, int32_t axis, float value, const MethodInfo* method);
void Dpr_Battle_View_Extensions__SetOrigin (UnityEngine_Transform_o* self, UnityEngine_Transform_o* parent, const MethodInfo* method);
void Dpr_Battle_View_Extensions__SetTwist (UnityEngine_Transform_o* self, float twist, bool isLocal, const MethodInfo* method);
void Dpr_Battle_View_Extensions__InverseScale (UnityEngine_Transform_o* self, bool isYInverse, const MethodInfo* method);
DG_Tweening_Tweener_o* Dpr_Battle_View_Extensions__DOVector (UnityEngine_Vector3_o self, UnityEngine_Vector3_o endValue, float duration, const MethodInfo* method);
XLSXContent_BattleDefaultPlacementData_SheetDefaultCharaPlacementData_o* Dpr_Battle_View_Extensions__GetTrainerPlacementData (XLSXContent_BattleDefaultPlacementData_o* self, int32_t rule, int32_t vPos, int32_t pokeSize, int32_t placement, UnityEngine_Vector3_o* pos, int32_t* rotY, const MethodInfo* method);
XLSXContent_BattleDefaultPlacementData_SheetDefaultCharaPlacementData_o* Dpr_Battle_View_Extensions__GetPokemonPlacement (XLSXContent_BattleDefaultPlacementData_o* self, int32_t rule, int32_t vPos, int32_t size, int32_t placement, UnityEngine_Vector3_o* pos, int32_t* rotY, const MethodInfo* method);
XLSXContent_BattleDefaultPlacementData_SheetDefaultCameraPlacementData_o* Dpr_Battle_View_Extensions__GetDefaultCameraPlacementData (XLSXContent_BattleDefaultPlacementData_o* self, int32_t rule, int32_t pokePlayer, int32_t pokeEnemy, const MethodInfo* method);
XLSXContent_BattleWaitCameraData_SheetWaitCameraData_o* Dpr_Battle_View_Extensions__GetWaitCameraData (XLSXContent_BattleWaitCameraData_o* self, int32_t index, const MethodInfo* method);
XLSXContent_BattleWaitCameraData_SheetWaitCameraData_array* Dpr_Battle_View_Extensions__GetWaitCameraDatas (XLSXContent_BattleWaitCameraData_o* self, int32_t rule, const MethodInfo* method);
XLSXContent_BattleWaitCameraData_SheetWaitCameraData_array* Dpr_Battle_View_Extensions__GetTutorialWaitCameraDatas (XLSXContent_BattleWaitCameraData_o* self, const MethodInfo* method);
XLSXContent_BattleWaitCameraData_SheetWaitCameraData_array* Dpr_Battle_View_Extensions__GetDemoCaptureWaitCameraDatas (XLSXContent_BattleWaitCameraData_o* self, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetMaskPattern (XLSXContent_BattleWaitCameraData_SheetWaitCameraData_o* self, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetSetupIntroPlaySequenceData_o* Dpr_Battle_View_Extensions__GetSetupIntroPlaySequenceData (XLSXContent_BattleDataTable_o* self, int32_t id, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetBattleWazaMsgFrameData_o* Dpr_Battle_View_Extensions__FindMsgFrameData (XLSXContent_BattleDataTable_o* self, System_String_o* hashKey, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetBattleMiscEffectData_o* Dpr_Battle_View_Extensions__FindMiscEffectData (XLSXContent_BattleDataTable_o* self, int32_t eff, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetBattleConstant_o* Dpr_Battle_View_Extensions__GetBattleConstant (XLSXContent_BattleDataTable_o* self, int32_t key, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetBattleConstantInt (XLSXContent_BattleDataTable_o* self, int32_t key, const MethodInfo* method);
float Dpr_Battle_View_Extensions__GetBattleConstantFloat (XLSXContent_BattleDataTable_o* self, int32_t key, const MethodInfo* method);
System_String_o* Dpr_Battle_View_Extensions__GetBattleConstantString (XLSXContent_BattleDataTable_o* self, int32_t key, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetMotionTimingData_o* Dpr_Battle_View_Extensions__GetMotionTimingData (XLSXContent_BattleDataTable_o* self, int32_t monsNo, int32_t formNo, uint8_t sex, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetMotionReplaceData_o* Dpr_Battle_View_Extensions__GetMotionReplaceData (XLSXContent_BattleDataTable_o* self, int32_t uniqueId, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetPokemonEntryMotionData_o* Dpr_Battle_View_Extensions__GetPokemonEntryMotionData (XLSXContent_BattleDataTable_o* self, int32_t index, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetAgeEyeBlink_o* Dpr_Battle_View_Extensions__GetAgeEyeBlinkData (XLSXContent_BattleDataTable_o* self, uint8_t age, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetDisableBlinkPokemon_o* Dpr_Battle_View_Extensions__GetDisableBlinkPokemon (XLSXContent_BattleDataTable_o* self, int32_t no, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetPokemonMotionBlendTime_o* Dpr_Battle_View_Extensions__GetPokemonMotionBlendTime (XLSXContent_BattleDataTable_o* self, int32_t no, const MethodInfo* method);
XLSXContent_BattleDataTable_SheetInterpolationSequence_o* Dpr_Battle_View_Extensions__GetInterpolationSequence (XLSXContent_BattleDataTable_o* self, System_String_o* seqName, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetBattleSide (int32_t pos, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetEase (int32_t self, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetWheatherEffect (uint8_t self, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetGroundEffect (uint8_t self, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetBtlvPos (uint8_t self, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetJointName (uint8_t self, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__GetAnimationState (int32_t self, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__ToTrainerAnimationState (int32_t self, const MethodInfo* method);
int32_t Dpr_Battle_View_Extensions__ToDefTrainerMotion (int32_t self, const MethodInfo* method);
void Dpr_Battle_View_Extensions__Reserve_object_ (System_Collections_Generic_List_T__o* self, int32_t capacity, const MethodInfo_1EC0C20* method);
Il2CppObject* Dpr_Battle_View_Extensions__At_object_ (System_Collections_Generic_IList_T__o* self, int32_t index, const MethodInfo_20EF710* method);
void Dpr_Battle_View_Extensions__PushBack_object_ (System_Collections_Generic_IList_T__o* self, Il2CppObject* item, const MethodInfo_1EC0B80* method);
void Dpr_Battle_View_Extensions__EmplaceBack_object_ (System_Collections_Generic_IList_T__o* self, Il2CppObject* item, const MethodInfo_1EC0AE0* method);
Il2CppObject* Dpr_Battle_View_Extensions__Front_object_ (System_Collections_Generic_IList_T__o* self, const MethodInfo_20EF8C0* method);
Il2CppObject* Dpr_Battle_View_Extensions__Back_object_ (System_Collections_Generic_IList_T__o* self, const MethodInfo_20EF7B0* method);
void Dpr_Battle_View_Extensions___cctor (const MethodInfo* method);
