#pragma once

#include "il2cpp.h"

void System_Reflection_AssemblyName___ctor (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
bool System_Reflection_AssemblyName__ParseAssemblyName (intptr_t name, Mono_MonoAssemblyName_o* aname, bool* is_version_definited, bool* is_token_defined, const MethodInfo* method_info);
void System_Reflection_AssemblyName___ctor (System_Reflection_AssemblyName_o* __this, System_String_o* assemblyName, const MethodInfo* method_info);
void System_Reflection_AssemblyName___ctor (System_Reflection_AssemblyName_o* __this, System_Runtime_Serialization_SerializationInfo_o* si, System_Runtime_Serialization_StreamingContext_o sc, const MethodInfo* method_info);
System_String_o* System_Reflection_AssemblyName__get_Name (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
System_Globalization_CultureInfo_o* System_Reflection_AssemblyName__get_CultureInfo (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
int32_t System_Reflection_AssemblyName__get_Flags (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
System_String_o* System_Reflection_AssemblyName__get_FullName (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
System_Version_o* System_Reflection_AssemblyName__get_Version (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
void System_Reflection_AssemblyName__set_Version (System_Reflection_AssemblyName_o* __this, System_Version_o* value, const MethodInfo* method_info);
System_String_o* System_Reflection_AssemblyName__ToString (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
System_Byte_array* System_Reflection_AssemblyName__GetPublicKeyToken (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
bool System_Reflection_AssemblyName__get_IsPublicKeyValid (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
System_Byte_array* System_Reflection_AssemblyName__InternalGetPublicKeyToken (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
void System_Reflection_AssemblyName__get_public_token (uint8_t* token, uint8_t* pubkey, int32_t len, const MethodInfo* method_info);
System_Byte_array* System_Reflection_AssemblyName__ComputePublicKeyToken (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
void System_Reflection_AssemblyName__GetObjectData (System_Reflection_AssemblyName_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
Il2CppObject* System_Reflection_AssemblyName__Clone (System_Reflection_AssemblyName_o* __this, const MethodInfo* method_info);
void System_Reflection_AssemblyName__OnDeserialization (System_Reflection_AssemblyName_o* __this, Il2CppObject* sender, const MethodInfo* method_info);
Mono_MonoAssemblyName_o* System_Reflection_AssemblyName__GetNativeName (intptr_t assembly_ptr, const MethodInfo* method_info);
void System_Reflection_AssemblyName__FillName (System_Reflection_AssemblyName_o* __this, Mono_MonoAssemblyName_o* native, System_String_o* codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef, const MethodInfo* method_info);
System_Reflection_AssemblyName_o* System_Reflection_AssemblyName__Create (System_Reflection_Assembly_o* assembly, bool fillCodebase, const MethodInfo* method_info);
