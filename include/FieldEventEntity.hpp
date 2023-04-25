#pragma once

#include "il2cpp.hpp"
#include "FieldObjectEntity.hpp"

struct UnityEngine_Playables_PlayableGraph_Fields
{
	intptr_t m_Handle;
	uint32_t m_Version;
};

struct UnityEngine_Playables_PlayableGraph_o
{
	UnityEngine_Playables_PlayableGraph_Fields fields;
};

struct UnityEngine_Playables_PlayableOutputHandle_Fields
{
	intptr_t m_Handle;
	uint32_t m_Version;
};

struct UnityEngine_Playables_PlayableOutputHandle_o
{
	UnityEngine_Playables_PlayableOutputHandle_Fields fields;
};

struct UnityEngine_Playables_PlayableOutput_Fields
{
	struct UnityEngine_Playables_PlayableOutputHandle_o m_Handle;
};

struct UnityEngine_Playables_PlayableOutput_o
{
	UnityEngine_Playables_PlayableOutput_Fields fields;
};

struct FieldEventEntity_Fields
{
	FieldObjectEntity_Fields super;
	int32_t shapeType;
	float radius;
	struct UnityEngine_Vector2_o offset;
	struct UnityEngine_Vector2_o size;
	int32_t transitionZone;
	int32_t locatorIndex;
	bool playOnAwake;
	int32_t clipIndex;
	struct System_Collections_Generic_List_TweenClip__o* clips;
	bool checkHeight;
	struct UnityEngine_Animator_o* _animator;
	struct UnityEngine_Playables_PlayableGraph_o _graph;
	struct UnityEngine_Playables_PlayableOutput_o _output;
	int32_t correctionDir;
	bool isLandingEntity;
	bool _hit;
};

struct FieldEventEntity_RGCTXs
{
};

struct FieldEventEntity_VTable
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

struct FieldEventEntity_c
{
	Il2CppClass_1 _1;
	struct FieldEventEntity_StaticFields* static_fields;
	FieldEventEntity_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	FieldEventEntity_VTable vtable;
};

struct FieldEventEntity_o
{
	FieldEventEntity_c *klass;
	void *monitor;
	FieldEventEntity_Fields fields;
};

struct FieldEventEntity_StaticFields
{
};
