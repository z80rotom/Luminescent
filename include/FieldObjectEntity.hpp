#pragma once

#include "il2cpp.hpp"
#include "BaseEntity.hpp"

struct FieldObjectEntity_Fields
{
	BaseEntity_Fields super;
	struct UnityEngine_Vector3_o moveVector;
	bool isExtruded;
	bool isLanding;
	struct UnityEngine_Vector3_o _oldMoveVector_k__BackingField;
	struct Dpr_RouteSearch_FieldObjectRouteMove_o* _routeMove;
	bool IsIgnorePlayerCollision;
	struct EvEntityCommand_o* _evEntityCmd;
	struct UnityEngine_Vector2Int_o _oldGridPosition_k__BackingField;
	struct UnityEngine_Vector3_array* logPosition;
	uint8_t logcount;
	bool _scaleChangeFlag;
	float _scaleStart;
	float _scaleEnd;
	float _scaleTime;
	float _scaleProgressTime;
	struct Dpr_EvScript_EvDataManager_EntityParam_o* EventParams;
};

struct FieldObjectEntity_RGCTXs
{
};

struct FieldObjectEntity_VTable
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
};

struct FieldObjectEntity_c
{
	Il2CppClass_1 _1;
	struct FieldObjectEntity_StaticFields* static_fields;
	FieldObjectEntity_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	FieldObjectEntity_VTable vtable;
};

struct FieldObjectEntity_o
{
	FieldObjectEntity_c *klass;
	void *monitor;
	FieldObjectEntity_Fields fields;

    // 01d50aa0
    UnityEngine_Vector2Int_o get_gridPosition(MethodInfo *method);
};

struct FieldObjectEntity_StaticFields
{
};
