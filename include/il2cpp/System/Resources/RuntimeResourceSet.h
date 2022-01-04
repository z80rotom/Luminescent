#pragma once

#include "il2cpp.h"

void System_Resources_RuntimeResourceSet___ctor (System_Resources_RuntimeResourceSet_o* __this, System_String_o* fileName, const MethodInfo* method);
void System_Resources_RuntimeResourceSet___ctor (System_Resources_RuntimeResourceSet_o* __this, System_IO_Stream_o* stream, const MethodInfo* method);
void System_Resources_RuntimeResourceSet__Dispose (System_Resources_RuntimeResourceSet_o* __this, bool disposing, const MethodInfo* method);
System_Collections_IDictionaryEnumerator_o* System_Resources_RuntimeResourceSet__GetEnumerator (System_Resources_RuntimeResourceSet_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* System_Resources_RuntimeResourceSet__System_Collections_IEnumerable_GetEnumerator (System_Resources_RuntimeResourceSet_o* __this, const MethodInfo* method);
System_Collections_IDictionaryEnumerator_o* System_Resources_RuntimeResourceSet__GetEnumeratorHelper (System_Resources_RuntimeResourceSet_o* __this, const MethodInfo* method);
System_String_o* System_Resources_RuntimeResourceSet__GetString (System_Resources_RuntimeResourceSet_o* __this, System_String_o* key, const MethodInfo* method);
System_String_o* System_Resources_RuntimeResourceSet__GetString (System_Resources_RuntimeResourceSet_o* __this, System_String_o* key, bool ignoreCase, const MethodInfo* method);
Il2CppObject* System_Resources_RuntimeResourceSet__GetObject (System_Resources_RuntimeResourceSet_o* __this, System_String_o* key, const MethodInfo* method);
Il2CppObject* System_Resources_RuntimeResourceSet__GetObject (System_Resources_RuntimeResourceSet_o* __this, System_String_o* key, bool ignoreCase, const MethodInfo* method);
Il2CppObject* System_Resources_RuntimeResourceSet__GetObject (System_Resources_RuntimeResourceSet_o* __this, System_String_o* key, bool ignoreCase, bool isString, const MethodInfo* method);
Il2CppObject* System_Resources_RuntimeResourceSet__ResolveResourceLocator (System_Resources_RuntimeResourceSet_o* __this, System_Resources_ResourceLocator_o resLocation, System_String_o* key, System_Collections_Generic_Dictionary_string__ResourceLocator__o* copyOfCache, bool keyInWrongCase, const MethodInfo* method);
