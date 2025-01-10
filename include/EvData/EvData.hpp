#pragma once

#include "il2cpp.hpp"
#include "System/String.hpp"

struct EvData_Fields
{
	UnityEngine_ScriptableObject_Fields super;
	struct System_Collections_Generic_List_EvData_Script__o* Scripts;
	struct System_Collections_Generic_List_string__o* StrList;
};

struct EvData_RGCTXs
{
};

struct EvData_VTable
{
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};

struct EvData_c
{
	Il2CppClass_1 _1;
	struct EvData_StaticFields* static_fields;
	EvData_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	EvData_VTable vtable;
};

struct EvData_o
{
	EvData_c *klass;
	void *monitor;
	EvData_Fields fields;

    // 01f115b0
    System::String * GetString(int32_t index, MethodInfo *method);
};

struct EvData_StaticFields
{
};
