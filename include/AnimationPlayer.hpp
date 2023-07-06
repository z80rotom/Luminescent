#pragma once

#include "il2cpp.hpp"

struct AnimationPlayer_Fields
{
	// TODO: Add fields and dependencies
};

struct AnimationPlayer_RGCTXs
{
};

struct AnimationPlayer_VTable
{
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};

struct AnimationPlayer_c
{
	Il2CppClass_1 _1;
	struct AnimationPlayer_StaticFields* static_fields;
	AnimationPlayer_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	AnimationPlayer_VTable vtable;
};

struct AnimationPlayer_o
{
	AnimationPlayer_c *klass;
	void *monitor;
	AnimationPlayer_Fields fields;

    // 0211e9b0
    void Play (int32_t index, float duration, float startTime, MethodInfo *method);
};

struct AnimationPlayer_StaticFields
{
};
