#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"

struct ZukanWork_StaticFields {
	System::Array<int32_t> * ShinouZukanNos;
	System::Array<int32_t> * ShinouZukanCompSeeExcludeNos;
	System::Array<int32_t> * ZenkokuZukanCompGetExcludeNos;
	System::Array<int32_t> * ZukanRatingExcludeNos;
	int32_t zukanSortType;
	System::Array<int32_t> * viewModelUniqueIDs;
	int32_t ListIndex;
	float ListScrollPosition;
	int32_t SelectLanguageIndex;
	bool IsShowFootPrintBoth;
	bool IsShowDescription;
	bool IsShowShinouZukan;
};

struct ZukanWork_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};

struct ZukanWork_RGCTXs;

struct ZukanWork_c {
	Il2CppClass_1 _1;
	struct ZukanWork_StaticFields* static_fields;
	ZukanWork_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	ZukanWork_VTable vtable;
};

struct ZukanWork
{
    static System::Array<bool> * GetFormFlags(uint32_t monsno,uint8_t sex,bool color,MethodInfo *method);
    static bool GetZenkokuFlag(MethodInfo *method);
    static void SetPoke(Pml::PokePara::PokemonParam_o* mons, int32_t get, MethodInfo *method);
};

extern ZukanWork_c * ZukanWork_TypeInfo;
