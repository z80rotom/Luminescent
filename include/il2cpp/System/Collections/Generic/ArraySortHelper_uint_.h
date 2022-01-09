#pragma once

#include "il2cpp.h"

void System_Collections_Generic_ArraySortHelper_uint___Sort (System_UInt32_array* keys, int32_t index, int32_t length, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_uint___BinarySearch (System_UInt32_array* array, int32_t index, int32_t length, uint32_t value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_uint___Sort (System_UInt32_array* keys, int32_t index, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_uint___InternalBinarySearch (System_UInt32_array* array, int32_t index, int32_t length, uint32_t value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_uint___SwapIfGreater (System_UInt32_array* keys, System_Comparison_T__o* comparer, int32_t a, int32_t b, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_uint___Swap (System_UInt32_array* a, int32_t i, int32_t j, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_uint___IntrospectiveSort (System_UInt32_array* keys, int32_t left, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_uint___IntroSort (System_UInt32_array* keys, int32_t lo, int32_t hi, int32_t depthLimit, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_uint___PickPivotAndPartition (System_UInt32_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_uint___Heapsort (System_UInt32_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_uint___DownHeap (System_UInt32_array* keys, int32_t i, int32_t n, int32_t lo, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_uint___InsertionSort (System_UInt32_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
