#pragma once

#include "il2cpp.h"

void System_Collections_Generic_ArraySortHelper_object___Sort (System_Object_array* keys, int32_t index, int32_t length, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_object___BinarySearch (System_Object_array* array, int32_t index, int32_t length, Il2CppObject* value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object___Sort (System_Object_array* keys, int32_t index, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_object___InternalBinarySearch (System_Object_array* array, int32_t index, int32_t length, Il2CppObject* value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object___SwapIfGreater (System_Object_array* keys, System_Comparison_T__o* comparer, int32_t a, int32_t b, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object___Swap (System_Object_array* a, int32_t i, int32_t j, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object___IntrospectiveSort (System_Object_array* keys, int32_t left, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object___IntroSort (System_Object_array* keys, int32_t lo, int32_t hi, int32_t depthLimit, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_object___PickPivotAndPartition (System_Object_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object___Heapsort (System_Object_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object___DownHeap (System_Object_array* keys, int32_t i, int32_t n, int32_t lo, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object___InsertionSort (System_Object_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
