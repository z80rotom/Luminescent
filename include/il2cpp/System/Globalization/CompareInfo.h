#pragma once

#include "il2cpp.h"

void System_Globalization_CompareInfo___ctor (System_Globalization_CompareInfo_o* __this, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
System_Globalization_CompareInfo_o* System_Globalization_CompareInfo__GetCompareInfo (System_String_o* name, const MethodInfo* method_info);
void System_Globalization_CompareInfo__OnDeserializing (System_Globalization_CompareInfo_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method_info);
void System_Globalization_CompareInfo__OnDeserialized (System_Globalization_CompareInfo_o* __this, const MethodInfo* method_info);
void System_Globalization_CompareInfo__OnDeserialized (System_Globalization_CompareInfo_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method_info);
void System_Globalization_CompareInfo__OnSerializing (System_Globalization_CompareInfo_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method_info);
void System_Globalization_CompareInfo__System_Runtime_Serialization_IDeserializationCallback_OnDeserialization (System_Globalization_CompareInfo_o* __this, Il2CppObject* sender, const MethodInfo* method_info);
System_String_o* System_Globalization_CompareInfo__get_Name (System_Globalization_CompareInfo_o* __this, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__Compare (System_Globalization_CompareInfo_o* __this, System_String_o* string1, System_String_o* string2, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__Compare (System_Globalization_CompareInfo_o* __this, System_String_o* string1, System_String_o* string2, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__Compare (System_Globalization_CompareInfo_o* __this, System_String_o* string1, int32_t offset1, int32_t length1, System_String_o* string2, int32_t offset2, int32_t length2, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__CompareOrdinal (System_String_o* string1, int32_t offset1, int32_t length1, System_String_o* string2, int32_t offset2, int32_t length2, const MethodInfo* method_info);
bool System_Globalization_CompareInfo__IsPrefix (System_Globalization_CompareInfo_o* __this, System_String_o* source, System_String_o* prefix, int32_t options, const MethodInfo* method_info);
bool System_Globalization_CompareInfo__IsSuffix (System_Globalization_CompareInfo_o* __this, System_String_o* source, System_String_o* suffix, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__IndexOf (System_Globalization_CompareInfo_o* __this, System_String_o* source, System_String_o* value, int32_t startIndex, int32_t count, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__LastIndexOf (System_Globalization_CompareInfo_o* __this, System_String_o* source, System_String_o* value, int32_t startIndex, int32_t count, int32_t options, const MethodInfo* method_info);
System_Globalization_SortKey_o* System_Globalization_CompareInfo__GetSortKey (System_Globalization_CompareInfo_o* __this, System_String_o* source, int32_t options, const MethodInfo* method_info);
System_Globalization_SortKey_o* System_Globalization_CompareInfo__CreateSortKey (System_Globalization_CompareInfo_o* __this, System_String_o* source, int32_t options, const MethodInfo* method_info);
bool System_Globalization_CompareInfo__Equals (System_Globalization_CompareInfo_o* __this, Il2CppObject* value, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__GetHashCode (System_Globalization_CompareInfo_o* __this, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__GetHashCodeOfString (System_Globalization_CompareInfo_o* __this, System_String_o* source, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__GetHashCodeOfString (System_Globalization_CompareInfo_o* __this, System_String_o* source, int32_t options, bool forceRandomizedHashing, int64_t additionalEntropy, const MethodInfo* method_info);
System_String_o* System_Globalization_CompareInfo__ToString (System_Globalization_CompareInfo_o* __this, const MethodInfo* method_info);
bool System_Globalization_CompareInfo__get_UseManagedCollation (const MethodInfo* method_info);
Mono_Globalization_Unicode_SimpleCollator_o* System_Globalization_CompareInfo__GetCollator (System_Globalization_CompareInfo_o* __this, const MethodInfo* method_info);
System_Globalization_SortKey_o* System_Globalization_CompareInfo__CreateSortKeyCore (System_Globalization_CompareInfo_o* __this, System_String_o* source, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__internal_index_switch (System_Globalization_CompareInfo_o* __this, System_String_o* s1, int32_t sindex, int32_t count, System_String_o* s2, int32_t opt, bool first, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__internal_compare_switch (System_Globalization_CompareInfo_o* __this, System_String_o* str1, int32_t offset1, int32_t length1, System_String_o* str2, int32_t offset2, int32_t length2, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__internal_compare_managed (System_Globalization_CompareInfo_o* __this, System_String_o* str1, int32_t offset1, int32_t length1, System_String_o* str2, int32_t offset2, int32_t length2, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__internal_index_managed (System_Globalization_CompareInfo_o* __this, System_String_o* s1, int32_t sindex, int32_t count, System_String_o* s2, int32_t opt, bool first, const MethodInfo* method_info);
void System_Globalization_CompareInfo__assign_sortkey (System_Globalization_CompareInfo_o* __this, Il2CppObject* key, System_String_o* source, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__internal_compare (System_Globalization_CompareInfo_o* __this, System_String_o* str1, int32_t offset1, int32_t length1, System_String_o* str2, int32_t offset2, int32_t length2, int32_t options, const MethodInfo* method_info);
int32_t System_Globalization_CompareInfo__internal_index (System_Globalization_CompareInfo_o* __this, System_String_o* source, int32_t sindex, int32_t count, System_String_o* value, int32_t options, bool first, const MethodInfo* method_info);
void System_Globalization_CompareInfo___ctor (System_Globalization_CompareInfo_o* __this, const MethodInfo* method_info);
