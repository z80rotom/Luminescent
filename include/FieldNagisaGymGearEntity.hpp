#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "FieldEventEntity.hpp"

struct FieldNagisaGymGearEntity_Fields
{
	FieldEventEntity_Fields super;
	int32_t GearGroupNo;
	int32_t GearRotateButton;
	int32_t GearRotateAxis;
	struct System_String_o* GearRotateEventLabel;
	struct Dpr_FieldFloatMove_o* DegMove;
	struct UnityEngine_Vector3_o originalLocalEulerAngles;
	bool IsSetuped;
	int32_t InitSequence;
};

struct FieldNagisaGymGearEntity_RGCTXs
{
};

struct FieldNagisaGymGearEntity_VTable
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

struct FieldNagisaGymGearEntity_c
{
	Il2CppClass_1 _1;
	struct FieldNagisaGymGearEntity_StaticFields* static_fields;
	FieldNagisaGymGearEntity_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	FieldNagisaGymGearEntity_VTable vtable;
};

struct FieldNagisaGymGearEntity_o
{
	FieldNagisaGymGearEntity_c *klass;
	void *monitor;
	FieldNagisaGymGearEntity_Fields fields;

    // 01d52b20
    bool IsRotating(MethodInfo *method);

    // 01d52990
    static float GetDegRotateType(int32_t rotateType, MethodInfo *method);

    // 01d529c0
    void Rotate(int32_t rotateType, int32_t triggerGroupNo, MethodInfo *method);
};

struct FieldNagisaGymGearEntity_StaticFields
{
};
