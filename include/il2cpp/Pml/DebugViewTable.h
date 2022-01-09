#pragma once

#include "il2cpp.h"

System_String_o* Pml_DebugViewTable__GetMonsName (int32_t monsNo, const MethodInfo* method_info);
System_String_o* Pml_DebugViewTable__GetWazaName (int32_t wazaNo, const MethodInfo* method_info);
System_String_o* Pml_DebugViewTable__GetTokuseiName (int32_t tokuseiNo, const MethodInfo* method_info);
System_String_o* Pml_DebugViewTable__GetItemName (uint16_t itemNo, const MethodInfo* method_info);
int32_t Pml_DebugViewTable__GetMonsNo (System_String_o* monsName, const MethodInfo* method_info);
int32_t Pml_DebugViewTable__GetWazaNo (System_String_o* wazaName, const MethodInfo* method_info);
int32_t Pml_DebugViewTable__GetTokuseiNo (System_String_o* tokuseiName, const MethodInfo* method_info);
uint16_t Pml_DebugViewTable__GetItemNo (System_String_o* itemName, const MethodInfo* method_info);
System_String_o* Pml_DebugViewTable__GetStringFromTable (System_String_array* table, int32_t index, const MethodInfo* method_info);
int32_t Pml_DebugViewTable__GetIndexFromTable (System_String_array* table, System_String_o* s, const MethodInfo* method_info);
void Pml_DebugViewTable___cctor (const MethodInfo* method_info);
