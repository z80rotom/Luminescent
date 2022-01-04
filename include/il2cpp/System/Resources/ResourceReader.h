#pragma once

#include "il2cpp.h"

void System_Resources_ResourceReader___ctor (System_Resources_ResourceReader_o* __this, System_IO_Stream_o* stream, System_Collections_Generic_Dictionary_string__ResourceLocator__o* resCache, const MethodInfo* method);
void System_Resources_ResourceReader__Close (System_Resources_ResourceReader_o* __this, const MethodInfo* method);
void System_Resources_ResourceReader__Dispose (System_Resources_ResourceReader_o* __this, const MethodInfo* method);
void System_Resources_ResourceReader__Dispose (System_Resources_ResourceReader_o* __this, bool disposing, const MethodInfo* method);
int32_t System_Resources_ResourceReader__ReadUnalignedI4 (int32_t* p, const MethodInfo* method);
void System_Resources_ResourceReader__SkipString (System_Resources_ResourceReader_o* __this, const MethodInfo* method);
int32_t System_Resources_ResourceReader__GetNameHash (System_Resources_ResourceReader_o* __this, int32_t index, const MethodInfo* method);
int32_t System_Resources_ResourceReader__GetNamePosition (System_Resources_ResourceReader_o* __this, int32_t index, const MethodInfo* method);
System_Collections_IEnumerator_o* System_Resources_ResourceReader__System_Collections_IEnumerable_GetEnumerator (System_Resources_ResourceReader_o* __this, const MethodInfo* method);
System_Collections_IDictionaryEnumerator_o* System_Resources_ResourceReader__GetEnumerator (System_Resources_ResourceReader_o* __this, const MethodInfo* method);
System_Resources_ResourceReader_ResourceEnumerator_o* System_Resources_ResourceReader__GetEnumeratorInternal (System_Resources_ResourceReader_o* __this, const MethodInfo* method);
int32_t System_Resources_ResourceReader__FindPosForResource (System_Resources_ResourceReader_o* __this, System_String_o* name, const MethodInfo* method);
bool System_Resources_ResourceReader__CompareStringEqualsName (System_Resources_ResourceReader_o* __this, System_String_o* name, const MethodInfo* method);
System_String_o* System_Resources_ResourceReader__AllocateStringForNameIndex (System_Resources_ResourceReader_o* __this, int32_t index, int32_t* dataOffset, const MethodInfo* method);
Il2CppObject* System_Resources_ResourceReader__GetValueForNameIndex (System_Resources_ResourceReader_o* __this, int32_t index, const MethodInfo* method);
System_String_o* System_Resources_ResourceReader__LoadString (System_Resources_ResourceReader_o* __this, int32_t pos, const MethodInfo* method);
Il2CppObject* System_Resources_ResourceReader__LoadObject (System_Resources_ResourceReader_o* __this, int32_t pos, const MethodInfo* method);
Il2CppObject* System_Resources_ResourceReader__LoadObject (System_Resources_ResourceReader_o* __this, int32_t pos, int32_t* typeCode, const MethodInfo* method);
Il2CppObject* System_Resources_ResourceReader__LoadObjectV1 (System_Resources_ResourceReader_o* __this, int32_t pos, const MethodInfo* method);
Il2CppObject* System_Resources_ResourceReader___LoadObjectV1 (System_Resources_ResourceReader_o* __this, int32_t pos, const MethodInfo* method);
Il2CppObject* System_Resources_ResourceReader__LoadObjectV2 (System_Resources_ResourceReader_o* __this, int32_t pos, int32_t* typeCode, const MethodInfo* method);
Il2CppObject* System_Resources_ResourceReader___LoadObjectV2 (System_Resources_ResourceReader_o* __this, int32_t pos, int32_t* typeCode, const MethodInfo* method);
Il2CppObject* System_Resources_ResourceReader__DeserializeObject (System_Resources_ResourceReader_o* __this, int32_t typeIndex, const MethodInfo* method);
void System_Resources_ResourceReader__ReadResources (System_Resources_ResourceReader_o* __this, const MethodInfo* method);
void System_Resources_ResourceReader___ReadResources (System_Resources_ResourceReader_o* __this, const MethodInfo* method);
System_RuntimeType_o* System_Resources_ResourceReader__FindType (System_Resources_ResourceReader_o* __this, int32_t typeIndex, const MethodInfo* method);
