#pragma once

#include "il2cpp.hpp"

struct BaseEntity_Fields
{
	UnityEngine_MonoBehaviour_Fields super;
	struct System_String_o* _enityName;
	bool _alreadyRegistered;
	float yawAngle;
	struct UnityEngine_Vector3_o worldPosition;
	float savedYawAngle;
	struct UnityEngine_Vector3_o savedPosition;
	struct UnityEngine_Vector3_o _beforePosition_k__BackingField;
	struct UnityEngine_Transform_o* _cacheTransform;
	int32_t _currentSequence_k__BackingField;
	int32_t _nextSequence_k__BackingField;
	float _sequenceTime_k__BackingField;
	struct BaseEntity_o* _target_k__BackingField;
};

struct BaseEntity_RGCTXs
{
};

struct BaseEntity_VTable
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

struct BaseEntity_c
{
	Il2CppClass_1 _1;
	struct BaseEntity_StaticFields* static_fields;
	BaseEntity_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	BaseEntity_VTable vtable;
};

struct BaseEntity_o
{
	BaseEntity_c *klass;
	void *monitor;
	BaseEntity_Fields fields;
};

struct BaseEntity_StaticFields
{
};
