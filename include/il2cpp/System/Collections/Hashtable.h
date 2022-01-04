#pragma once

#include "il2cpp.h"

void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, bool trash, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, int32_t capacity, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, int32_t capacity, float loadFactor, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, int32_t capacity, float loadFactor, System_Collections_IHashCodeProvider_o* hcp, System_Collections_IComparer_o* comparer, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, int32_t capacity, float loadFactor, System_Collections_IEqualityComparer_o* equalityComparer, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, System_Collections_IHashCodeProvider_o* hcp, System_Collections_IComparer_o* comparer, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, System_Collections_IEqualityComparer_o* equalityComparer, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, int32_t capacity, System_Collections_IEqualityComparer_o* equalityComparer, const MethodInfo* method);
void System_Collections_Hashtable___ctor (System_Collections_Hashtable_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
uint32_t System_Collections_Hashtable__InitHash (System_Collections_Hashtable_o* __this, Il2CppObject* key, int32_t hashsize, uint32_t* seed, uint32_t* incr, const MethodInfo* method);
void System_Collections_Hashtable__Add (System_Collections_Hashtable_o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo* method);
void System_Collections_Hashtable__Clear (System_Collections_Hashtable_o* __this, const MethodInfo* method);
Il2CppObject* System_Collections_Hashtable__Clone (System_Collections_Hashtable_o* __this, const MethodInfo* method);
bool System_Collections_Hashtable__Contains (System_Collections_Hashtable_o* __this, Il2CppObject* key, const MethodInfo* method);
bool System_Collections_Hashtable__ContainsKey (System_Collections_Hashtable_o* __this, Il2CppObject* key, const MethodInfo* method);
void System_Collections_Hashtable__CopyKeys (System_Collections_Hashtable_o* __this, System_Array_o* array, int32_t arrayIndex, const MethodInfo* method);
void System_Collections_Hashtable__CopyEntries (System_Collections_Hashtable_o* __this, System_Array_o* array, int32_t arrayIndex, const MethodInfo* method);
void System_Collections_Hashtable__CopyTo (System_Collections_Hashtable_o* __this, System_Array_o* array, int32_t arrayIndex, const MethodInfo* method);
void System_Collections_Hashtable__CopyValues (System_Collections_Hashtable_o* __this, System_Array_o* array, int32_t arrayIndex, const MethodInfo* method);
Il2CppObject* System_Collections_Hashtable__get_Item (System_Collections_Hashtable_o* __this, Il2CppObject* key, const MethodInfo* method);
void System_Collections_Hashtable__set_Item (System_Collections_Hashtable_o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo* method);
void System_Collections_Hashtable__expand (System_Collections_Hashtable_o* __this, const MethodInfo* method);
void System_Collections_Hashtable__rehash (System_Collections_Hashtable_o* __this, const MethodInfo* method);
void System_Collections_Hashtable__UpdateVersion (System_Collections_Hashtable_o* __this, const MethodInfo* method);
void System_Collections_Hashtable__rehash (System_Collections_Hashtable_o* __this, int32_t newsize, bool forceNewHashCode, const MethodInfo* method);
System_Collections_IEnumerator_o* System_Collections_Hashtable__System_Collections_IEnumerable_GetEnumerator (System_Collections_Hashtable_o* __this, const MethodInfo* method);
System_Collections_IDictionaryEnumerator_o* System_Collections_Hashtable__GetEnumerator (System_Collections_Hashtable_o* __this, const MethodInfo* method);
int32_t System_Collections_Hashtable__GetHash (System_Collections_Hashtable_o* __this, Il2CppObject* key, const MethodInfo* method);
bool System_Collections_Hashtable__KeyEquals (System_Collections_Hashtable_o* __this, Il2CppObject* item, Il2CppObject* key, const MethodInfo* method);
System_Collections_ICollection_o* System_Collections_Hashtable__get_Keys (System_Collections_Hashtable_o* __this, const MethodInfo* method);
void System_Collections_Hashtable__Insert (System_Collections_Hashtable_o* __this, Il2CppObject* key, Il2CppObject* nvalue, bool add, const MethodInfo* method);
void System_Collections_Hashtable__putEntry (System_Collections_Hashtable_o* __this, System_Collections_Hashtable_bucket_array* newBuckets, Il2CppObject* key, Il2CppObject* nvalue, int32_t hashcode, const MethodInfo* method);
void System_Collections_Hashtable__Remove (System_Collections_Hashtable_o* __this, Il2CppObject* key, const MethodInfo* method);
Il2CppObject* System_Collections_Hashtable__get_SyncRoot (System_Collections_Hashtable_o* __this, const MethodInfo* method);
int32_t System_Collections_Hashtable__get_Count (System_Collections_Hashtable_o* __this, const MethodInfo* method);
System_Collections_Hashtable_o* System_Collections_Hashtable__Synchronized (System_Collections_Hashtable_o* table, const MethodInfo* method);
void System_Collections_Hashtable__GetObjectData (System_Collections_Hashtable_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Collections_Hashtable__OnDeserialization (System_Collections_Hashtable_o* __this, Il2CppObject* sender, const MethodInfo* method);
