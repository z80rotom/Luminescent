#pragma once

#include "il2cpp.h"

int32_t System_Globalization_EncodingTable__GetNumEncodingItems (const MethodInfo* method_info);
System_Globalization_InternalEncodingDataItem_o System_Globalization_EncodingTable__ENC (System_String_o* name, uint16_t cp, const MethodInfo* method_info);
System_Globalization_InternalCodePageDataItem_o System_Globalization_EncodingTable__MapCodePageDataItem (uint16_t cp, uint16_t fcp, System_String_o* names, uint32_t flags, const MethodInfo* method_info);
void System_Globalization_EncodingTable___cctor (const MethodInfo* method_info);
int32_t System_Globalization_EncodingTable__internalGetCodePageFromName (System_String_o* name, const MethodInfo* method_info);
int32_t System_Globalization_EncodingTable__GetCodePageFromName (System_String_o* name, const MethodInfo* method_info);
System_Globalization_CodePageDataItem_o* System_Globalization_EncodingTable__GetCodePageDataItem (int32_t codepage, const MethodInfo* method_info);
