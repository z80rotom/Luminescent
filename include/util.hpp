#pragma once

#include <string>
#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/EventFactor.hpp"

// FUN_0009acf0
void * _system_array_new(void * typeInfo, uint32_t len);
// thunk_FUN_0007d9c0
void _system_array_init(void * array);
// void FUN_000502c0(ulong param_1)
void _system_load_typeinfo(void * typeInfo);

void il2cpp_object_init(void * arg0, void * arg1);


// thunk_FUN_00048708?
// 00048708
void il2cpp_runtime_class_init(void *param_1);

void system_load_typeinfo(void * typeInfo);
void * system_array_new(void * typeInfo, uint32_t len);

MethodInfo * copyMethodInfo(MethodInfo * src, Il2CppMethodPointer methodPointer);
uint32_t GetBadgeCount();
Dpr::Battle::Logic::EventFactor_EventHandlerTable_o * createEventHandlerTable(uint16_t eventID, Il2CppMethodPointer methodPointer);