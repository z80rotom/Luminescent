#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"

struct GimmickWork_Fields
{
};

struct GimmickWork_RGCTXs
{
};

struct GimmickWork_VTable
{
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};

struct GimmickWork_c
{
	Il2CppClass_1 _1;
	struct GimmickWork_StaticFields* static_fields;
	GimmickWork_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	GimmickWork_VTable vtable;
};

struct GimmickWork_o
{
	GimmickWork_c *klass;
	void *monitor;
	GimmickWork_Fields fields;

    // 02cd72d0
    static int32_t GetGearRotate(int32_t areaId, MethodInfo *method);

    // 02cd7470
    static void SetGearRotate(int32_t areaId, int32_t deg, MethodInfo *method);
};

struct GimmickWork_StaticFields
{
	struct System::Array<int32_t>* GearAreaIdTable;
};

// 04c59d08
extern GimmickWork_c * GimmickWork_TypeInfo;
