#pragma once

#include "il2cpp.hpp"
#include "Dpr/Item/ItemInfo.hpp"
#include "System/Array.hpp"

struct System_Collections_Generic_List_ItemInfo__array;
struct Dpr_Item_ItemListMemory_array;

struct ItemWork_Fields {
	struct System::Array<Dpr::Item::ItemInfo_o*>* _items;
	struct System_Collections_Generic_List_ItemInfo__array* _categorizedItems;
	struct Dpr_Item_ItemListMemory_array* _itemListMemories;
	bool _bagIconSex;
	bool _isShowWazaName;
};

struct ItemWork_RGCTXs {
};

struct ItemWork_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};

struct ItemWork_c {
	Il2CppClass_1 _1;
	struct ItemWork_StaticFields* static_fields;
	ItemWork_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	ItemWork_VTable vtable;
};

struct ItemWork {
	ItemWork_c *klass;
	void *monitor;
	ItemWork_Fields fields;

    static int32_t SubItem(int32_t itemno, int32_t num, MethodInfo * method);
    // 1aeb550
    static bool IsDsPlayer(MethodInfo *method);
    // 1aea5b0
    static Dpr::Item::ItemInfo_o * GetItemInfo(int32_t itemno, MethodInfo *method);
    // 1aea500
    static bool IsAddItem(int32_t itemno, int32_t num, MethodInfo *method);
    // 1aea3a0
    static int32_t AddItem(int32_t itemno, int32_t num, MethodInfo *method);
};

struct ItemWork_StaticFields {
	struct ItemWork* _instance;
	struct ItemWork* _temp_instance;
};
