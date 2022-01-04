#pragma once

#include "il2cpp.h"

void System_Reflection_Assembly___ctor (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_Assembly__get_code_base (System_Reflection_Assembly_o* __this, bool escaped, const MethodInfo* method);
System_String_o* System_Reflection_Assembly__get_fullname (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_Assembly__get_location (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_Assembly__GetAotId (const MethodInfo* method);
System_String_o* System_Reflection_Assembly__GetCodeBase (System_Reflection_Assembly_o* __this, bool escaped, const MethodInfo* method);
System_String_o* System_Reflection_Assembly__get_CodeBase (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_Assembly__get_FullName (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_Assembly__get_Location (System_Reflection_Assembly_o* __this, const MethodInfo* method);
void System_Reflection_Assembly__GetObjectData (System_Reflection_Assembly_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
bool System_Reflection_Assembly__IsDefined (System_Reflection_Assembly_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
System_Object_array* System_Reflection_Assembly__GetCustomAttributes (System_Reflection_Assembly_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method);
intptr_t System_Reflection_Assembly__GetManifestResourceInternal (System_Reflection_Assembly_o* __this, System_String_o* name, int32_t* size, System_Reflection_Module_o** module, const MethodInfo* method);
System_Type_array* System_Reflection_Assembly__GetTypes (System_Reflection_Assembly_o* __this, bool exportedOnly, const MethodInfo* method);
System_Type_array* System_Reflection_Assembly__GetTypes (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_Type_o* System_Reflection_Assembly__GetType (System_Reflection_Assembly_o* __this, System_String_o* name, const MethodInfo* method);
System_Type_o* System_Reflection_Assembly__InternalGetType (System_Reflection_Assembly_o* __this, System_Reflection_Module_o* module, System_String_o* name, bool throwOnError, bool ignoreCase, const MethodInfo* method);
System_Reflection_AssemblyName_o* System_Reflection_Assembly__GetName (System_Reflection_Assembly_o* __this, bool copiedName, const MethodInfo* method);
System_Reflection_AssemblyName_o* System_Reflection_Assembly__GetName (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_String_o* System_Reflection_Assembly__ToString (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__GetAssembly (System_Type_o* type, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__LoadFrom (System_String_o* assemblyFile, bool refonly, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__LoadFrom (System_String_o* assemblyFile, System_Security_Policy_Evidence_o* securityEvidence, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__LoadFile (System_String_o* path, System_Security_Policy_Evidence_o* securityEvidence, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__LoadFile (System_String_o* path, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__Load (System_String_o* assemblyString, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__load_with_partial_name (System_String_o* name, System_Security_Policy_Evidence_o* e, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__LoadWithPartialName (System_String_o* partialName, System_Security_Policy_Evidence_o* securityEvidence, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__LoadWithPartialName (System_String_o* partialName, System_Security_Policy_Evidence_o* securityEvidence, bool oldBehavior, const MethodInfo* method);
System_Reflection_Module_array* System_Reflection_Assembly__GetModulesInternal (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__GetExecutingAssembly (const MethodInfo* method);
System_Reflection_Assembly_o* System_Reflection_Assembly__GetCallingAssembly (const MethodInfo* method);
intptr_t System_Reflection_Assembly__InternalGetReferencedAssemblies (System_Reflection_Assembly_o* module, const MethodInfo* method);
System_Reflection_AssemblyName_array* System_Reflection_Assembly__GetReferencedAssemblies (System_Reflection_Assembly_o* module, const MethodInfo* method);
int32_t System_Reflection_Assembly__GetHashCode (System_Reflection_Assembly_o* __this, const MethodInfo* method);
bool System_Reflection_Assembly__Equals (System_Reflection_Assembly_o* __this, Il2CppObject* o, const MethodInfo* method);
System_Exception_o* System_Reflection_Assembly__CreateNIE (const MethodInfo* method);
bool System_Reflection_Assembly__get_IsFullyTrusted (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_Type_o* System_Reflection_Assembly__GetType (System_Reflection_Assembly_o* __this, System_String_o* name, bool throwOnError, bool ignoreCase, const MethodInfo* method);
System_Reflection_Module_o* System_Reflection_Assembly__GetModule (System_Reflection_Assembly_o* __this, System_String_o* name, const MethodInfo* method);
System_Reflection_AssemblyName_array* System_Reflection_Assembly__GetReferencedAssemblies (System_Reflection_Assembly_o* __this, const MethodInfo* method);
System_Reflection_Module_array* System_Reflection_Assembly__GetModules (System_Reflection_Assembly_o* __this, bool getResourceModules, const MethodInfo* method);
bool System_Reflection_Assembly__op_Equality (System_Reflection_Assembly_o* left, System_Reflection_Assembly_o* right, const MethodInfo* method);
bool System_Reflection_Assembly__op_Inequality (System_Reflection_Assembly_o* left, System_Reflection_Assembly_o* right, const MethodInfo* method);
