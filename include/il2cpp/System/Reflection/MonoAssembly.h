#pragma once

#include "il2cpp.h"

System_Type_o* System_Reflection_MonoAssembly__GetType (System_Reflection_MonoAssembly_o* __this, System_String_o* name, bool throwOnError, bool ignoreCase, const MethodInfo* method_info);
System_Reflection_Module_o* System_Reflection_MonoAssembly__GetModule (System_Reflection_MonoAssembly_o* __this, System_String_o* name, const MethodInfo* method_info);
System_Reflection_AssemblyName_array* System_Reflection_MonoAssembly__GetReferencedAssemblies (System_Reflection_MonoAssembly_o* __this, const MethodInfo* method_info);
System_Reflection_Module_array* System_Reflection_MonoAssembly__GetModules (System_Reflection_MonoAssembly_o* __this, bool getResourceModules, const MethodInfo* method_info);
void System_Reflection_MonoAssembly___ctor (System_Reflection_MonoAssembly_o* __this, const MethodInfo* method_info);
