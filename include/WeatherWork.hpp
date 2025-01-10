#pragma once

#include "il2cpp.hpp"

struct WeatherWork_Fields
{
};

struct WeatherWork_RGCTXs
{
};

struct WeatherWork_VTable
{
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};

struct WeatherWork_c
{
	Il2CppClass_1 _1;
	struct WeatherWork_StaticFields* static_fields;
	WeatherWork_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	WeatherWork_VTable vtable;
};

struct WeatherWork
{
	WeatherWork_c *klass;
	void *monitor;
	WeatherWork_Fields fields;

    // 017d18a0
    static void set_WeatherID(int32_t value, MethodInfo *method);
};

struct WeatherWork_StaticFields
{
};
