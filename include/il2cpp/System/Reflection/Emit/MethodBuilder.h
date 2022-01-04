#pragma once

#include "il2cpp.h"

int32_t System_Reflection_Emit_MethodBuilder__get_Attributes (System_Reflection_Emit_MethodBuilder_o* __this, const MethodInfo* method);
System_Type_o* System_Reflection_Emit_MethodBuilder__get_DeclaringType (System_Reflection_Emit_MethodBuilder_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_Emit_MethodBuilder__get_Name (System_Reflection_Emit_MethodBuilder_o* __this, const MethodInfo* method);
System_Reflection_ParameterInfo_array* System_Reflection_Emit_MethodBuilder__GetParameters (System_Reflection_Emit_MethodBuilder_o* __this, const MethodInfo* method);
System_RuntimeMethodHandle_o System_Reflection_Emit_MethodBuilder__get_MethodHandle (System_Reflection_Emit_MethodBuilder_o* __this, const MethodInfo* method);
System_Type_o* System_Reflection_Emit_MethodBuilder__get_ReflectedType (System_Reflection_Emit_MethodBuilder_o* __this, const MethodInfo* method);
System_Object_array* System_Reflection_Emit_MethodBuilder__GetCustomAttributes (System_Reflection_Emit_MethodBuilder_o* __this, bool inherit, const MethodInfo* method);
System_Object_array* System_Reflection_Emit_MethodBuilder__GetCustomAttributes (System_Reflection_Emit_MethodBuilder_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
int32_t System_Reflection_Emit_MethodBuilder__GetMethodImplementationFlags (System_Reflection_Emit_MethodBuilder_o* __this, const MethodInfo* method);
Il2CppObject* System_Reflection_Emit_MethodBuilder__Invoke (System_Reflection_Emit_MethodBuilder_o* __this, Il2CppObject* obj, int32_t invokeAttr, System_Reflection_Binder_o* binder, System_Object_array* parameters, System_Globalization_CultureInfo_o* culture, const MethodInfo* method);
bool System_Reflection_Emit_MethodBuilder__IsDefined (System_Reflection_Emit_MethodBuilder_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
