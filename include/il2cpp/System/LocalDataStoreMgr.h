#pragma once

#include "il2cpp.h"

System_LocalDataStoreHolder_o* System_LocalDataStoreMgr__CreateLocalDataStore (System_LocalDataStoreMgr_o* __this, const MethodInfo* method);
void System_LocalDataStoreMgr__DeleteLocalDataStore (System_LocalDataStoreMgr_o* __this, System_LocalDataStore_o* store, const MethodInfo* method);
System_LocalDataStoreSlot_o* System_LocalDataStoreMgr__AllocateDataSlot (System_LocalDataStoreMgr_o* __this, const MethodInfo* method);
System_LocalDataStoreSlot_o* System_LocalDataStoreMgr__AllocateNamedDataSlot (System_LocalDataStoreMgr_o* __this, System_String_o* name, const MethodInfo* method);
System_LocalDataStoreSlot_o* System_LocalDataStoreMgr__GetNamedDataSlot (System_LocalDataStoreMgr_o* __this, System_String_o* name, const MethodInfo* method);
void System_LocalDataStoreMgr__FreeNamedDataSlot (System_LocalDataStoreMgr_o* __this, System_String_o* name, const MethodInfo* method);
void System_LocalDataStoreMgr__FreeDataSlot (System_LocalDataStoreMgr_o* __this, int32_t slot, int64_t cookie, const MethodInfo* method);
void System_LocalDataStoreMgr__ValidateSlot (System_LocalDataStoreMgr_o* __this, System_LocalDataStoreSlot_o* slot, const MethodInfo* method);
int32_t System_LocalDataStoreMgr__GetSlotTableLength (System_LocalDataStoreMgr_o* __this, const MethodInfo* method);
void System_LocalDataStoreMgr___ctor (System_LocalDataStoreMgr_o* __this, const MethodInfo* method);
