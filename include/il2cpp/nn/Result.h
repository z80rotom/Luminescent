#pragma once

#include "il2cpp.h"

void nn_Result___ctor (nn_Result_o __this, int32_t module, int32_t description, const MethodInfo* method_info);
bool nn_Result__IsSuccess (nn_Result_o __this, const MethodInfo* method_info);
void nn_Result__abortUnlessSuccess (nn_Result_o __this, const MethodInfo* method_info);
int32_t nn_Result__GetModule (nn_Result_o __this, const MethodInfo* method_info);
int32_t nn_Result__GetDescription (nn_Result_o __this, const MethodInfo* method_info);
System_String_o* nn_Result__ToString (nn_Result_o __this, const MethodInfo* method_info);
bool nn_Result__Equals (nn_Result_o __this, Il2CppObject* obj, const MethodInfo* method_info);
bool nn_Result__Equals (nn_Result_o __this, nn_Result_o other, const MethodInfo* method_info);
int32_t nn_Result__GetHashCode (nn_Result_o __this, const MethodInfo* method_info);
bool nn_Result__op_Equality (nn_Result_o lhs, nn_Result_o rhs, const MethodInfo* method_info);
bool nn_Result__op_Inequality (nn_Result_o lhs, nn_Result_o rhs, const MethodInfo* method_info);
