#pragma once

#include "il2cpp.hpp"
#include "FieldCharacterEntity.hpp"
#include "UnityEngine/GameObject.hpp"

struct FieldPlayerEntity_Fields
{
	FieldCharacterEntity_Fields super;
	struct UnityEngine_Renderer_array* _hatRenderers;
	struct UnityEngine_Renderer_array* _shoesRenderers;
	struct UnityEngine::GameObject_o* _meshGroup;
	struct UnityEngine::GameObject_o* _bicycleObject;
	struct UnityEngine_Renderer_array* _rodRenderers;
	struct UnityEngine_Renderer_o* _podRenderer;
	struct UnityEngine_Renderer_o* _beadaruRenderer;
	struct UnityEngine_Renderer_o* _mukuhawkRenderer;
	struct UnityEngine_Color_array* _bicycleColors;
	struct UnityEngine_Renderer_o* _bicycleRenderer;
	int32_t _bicycleMaterialIndex;
	int32_t _bicycleColorIndex_k__BackingField;
	bool isExtrudable;
	bool _DashFlag_k__BackingField;
	struct JumpCalculator_o* _path;
	bool _setupMaterials;
	bool _hit_se_request;
	float _hit_se_wait;
	struct UnityEngine_Vector3_o InputMoveVector;
	struct System_Func_FieldPlayerEntity__bool__o* _LateUpdateEvent_k__BackingField;
	float _MoveSpeed_k__BackingField;
	float _beforeAngle;
	int32_t FormType;
	struct XLSXContent_MapAttributeTable_SheetData_o* nowAttribute;
	bool isAttributeStop;
	int32_t _FashionTableID_k__BackingField;
	bool FootSeWalkStartEvent;
	struct FieldPlayerEntity_CheckGridCollisionFunc_o* CheckGridCollision;
	int32_t _sandFallSeq;
	float _sandFallWait;
	float _sandFallPosZ;
	bool UpdateInputAngleDisable;
	int32_t KairikiPushObjectIndex;
	float KairikiPushTime;
	float debugInputTime;
	float debugInputVectolX;
	bool _isCrossUpdate;
	struct UnityEngine_Vector2_o _crossInputVectol;
	struct UnityEngine_Vector2_o _crossStopPosition;
	int32_t _crossInputDir;
	float _crossKey_pushTime;
	struct UnityEngine_Vector3_o _eventMoveTargetPosition;
	float _eventMoveTargetAngle;
	bool _eventMoveEnd;
	bool _eventRotateEnd;
	int32_t currentForm;
	int32_t nextForm;
	struct System_Action_o* formFinish;
	bool changeFormRetInput;
	struct BicycleJump_o* _bicJump;
	bool _isCycDownHillMode;
	float _bicOldAcceleration;
	float _bicAccelerationTime;
	float _bicDecelerateTime;
	bool _isBicMaxSpeed;
	int32_t IceFloorState;
	struct UnityEngine_Vector3_o IceFloorDirection;
	int32_t IceSlidingLevel;
	float IceSlidingSpeed;
	bool IsIceSlope;
	float IceFloorStopTime;
	struct UnityEngine_Vector3_o IceFloorStartGridCenterPos;
	struct Dpr_FieldObjectMove_o* IceSlopeDownMove;
	struct Dpr_FieldObjectRotateYaw_o* IceSlidingRotate;
	int32_t IceFloorDirtyNextDir;
	int32_t CurrentMoveFloor;
	int32_t NextMoveFloor;
	float MoveFloorTime;
	float PrevRotateOffset;
	struct Dpr_FieldObjectRotateYaw_o* MoveFloorRotate;
	bool ForcePlayNaminoriEffect;
	struct Effect_EffectInstance_o* NaminoriEffect;
	struct Audio_AudioInstance_o* NaminoriAudio;
	bool IsPlayNaminoriEffect;
	float NaminoriSeWait;
	int32_t NaminoriEventRequest;
	struct FieldPlayerEntity_CheckGridCollisionCheckSwimFunc_o* CheckGridCollisionCheckSwim;
	struct FieldPlayerEntity_CheckGridCollisionCalcSwimFunc_o* CheckGridCollisionCalcSwim;
	struct FieldPlayerEntity_CheckGridCollisionEndSwimFunc_o* CheckGridCollisionEndSwim;
	struct FieldPlayerEntity_CheckGridCollisionCalcSwimEndFunc_o* CheckGridCollisionCalcSwimEnd;
	struct UnityEngine_Transform_o* _BiidaruTransform_k__BackingField;
	struct UnityEngine_Vector3_o BiidaruPosOriginal;
	struct UnityEngine_Vector3_o BiidaruMoveStartPos;
	struct UnityEngine_Vector3_o BiidaruMoveEndPos;
	struct Dpr_FieldFloatMove_o* BiidaruMoveTime;
	struct Dpr_FieldFloatMove_o* _VisiblePodMove_k__BackingField;
	struct Effect_EffectInstance_o* RockClimbEffect;
	int32_t SwampDeepInputDir;
	int32_t SwampDeepInputCount;
	int32_t SwampPhase;
	struct Dpr_FieldObjectMove_o* SwampMove;
	struct Dpr_FieldFloatMove_o* SwampWait;
	bool isPlayedSwampStartEffect;
	bool isSwampLoopEffect;
};

struct FieldPlayerEntity_RGCTXs
{
};

struct FieldPlayerEntity_VTable
{
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
	VirtualInvokeData _4_get_entityType;
	VirtualInvokeData _5_GetAnimationPlayer;
	VirtualInvokeData _6_Awake;
	VirtualInvokeData _7_OnEnable;
	VirtualInvokeData _8_OnDisable;
	VirtualInvokeData _9_OnDestroy;
	VirtualInvokeData _10_OnUpdate;
	VirtualInvokeData _11_OnLateUpdate;
	VirtualInvokeData _12_SwitchToNext;
	VirtualInvokeData _13_ProcessSequence;
	VirtualInvokeData _14_OnFootSE;
	VirtualInvokeData _15_OnFootEffect;
	VirtualInvokeData _16_GetIdleAnimationIndex;
};

struct FieldPlayerEntity_c
{
	Il2CppClass_1 _1;
	struct FieldPlayerEntity_StaticFields* static_fields;
	FieldPlayerEntity_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	FieldPlayerEntity_VTable vtable;
};

struct FieldPlayerEntity_o
{
	FieldPlayerEntity_c *klass;
	void *monitor;
	FieldPlayerEntity_Fields fields;

    // 01dad950
    void PlayWalk(MethodInfo *method);
};

struct FieldPlayerEntity_StaticFields
{
	int32_t _StencilRefID;
};
