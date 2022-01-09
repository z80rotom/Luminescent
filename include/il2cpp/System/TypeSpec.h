#pragma once

#include "il2cpp.h"

bool System_TypeSpec__get_HasModifiers (System_TypeSpec_o* __this, const MethodInfo* method_info);
System_String_o* System_TypeSpec__GetDisplayFullName (System_TypeSpec_o* __this, int32_t flags, const MethodInfo* method_info);
System_Text_StringBuilder_o* System_TypeSpec__GetModifierString (System_TypeSpec_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method_info);
System_String_o* System_TypeSpec__get_DisplayFullName (System_TypeSpec_o* __this, const MethodInfo* method_info);
System_TypeSpec_o* System_TypeSpec__Parse (System_String_o* typeName, const MethodInfo* method_info);
System_String_o* System_TypeSpec__UnescapeInternalName (System_String_o* displayName, const MethodInfo* method_info);
System_Type_o* System_TypeSpec__Resolve (System_TypeSpec_o* __this, System_Func_AssemblyName__Assembly__o* assemblyResolver, System_Func_Assembly__string__bool__Type__o* typeResolver, bool throwOnError, bool ignoreCase, const MethodInfo* method_info);
void System_TypeSpec__AddName (System_TypeSpec_o* __this, System_String_o* type_name, const MethodInfo* method_info);
void System_TypeSpec__AddModifier (System_TypeSpec_o* __this, System_ModifierSpec_o* md, const MethodInfo* method_info);
void System_TypeSpec__SkipSpace (System_String_o* name, int32_t* pos, const MethodInfo* method_info);
void System_TypeSpec__BoundCheck (int32_t idx, System_String_o* s, const MethodInfo* method_info);
System_TypeIdentifier_o* System_TypeSpec__ParsedTypeIdentifier (System_String_o* displayName, const MethodInfo* method_info);
System_TypeSpec_o* System_TypeSpec__Parse (System_String_o* name, int32_t* p, bool is_recurse, bool allow_aqn, const MethodInfo* method_info);
void System_TypeSpec___ctor (System_TypeSpec_o* __this, const MethodInfo* method_info);
