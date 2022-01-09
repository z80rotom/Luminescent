#pragma once

#include "il2cpp.h"

void System_LocalDataStore___ctor (System_LocalDataStore_o* __this, System_LocalDataStoreMgr_o* mgr, int32_t InitialCapacity, const MethodInfo* method_info);
void System_LocalDataStore__Dispose (System_LocalDataStore_o* __this, const MethodInfo* method_info);
Il2CppObject* System_LocalDataStore__GetData (System_LocalDataStore_o* __this, System_LocalDataStoreSlot_o* slot, const MethodInfo* method_info);
void System_LocalDataStore__SetData (System_LocalDataStore_o* __this, System_LocalDataStoreSlot_o* slot, Il2CppObject* data, const MethodInfo* method_info);
void System_LocalDataStore__FreeData (System_LocalDataStore_o* __this, int32_t slot, int64_t cookie, const MethodInfo* method_info);
System_LocalDataStoreElement_o* System_LocalDataStore__PopulateElement (System_LocalDataStore_o* __this, System_LocalDataStoreSlot_o* slot, const MethodInfo* method_info);
