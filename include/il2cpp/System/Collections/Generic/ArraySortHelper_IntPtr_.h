#pragma once

#include "il2cpp.h"

void System_Collections_Generic_ArraySortHelper_IntPtr___Sort (System_IntPtr_array* keys, int32_t index, int32_t length, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_IntPtr___BinarySearch (System_IntPtr_array* array, int32_t index, int32_t length, intptr_t value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_IntPtr___Sort (System_IntPtr_array* keys, int32_t index, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_IntPtr___InternalBinarySearch (System_IntPtr_array* array, int32_t index, int32_t length, intptr_t value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_IntPtr___SwapIfGreater (System_IntPtr_array* keys, System_Comparison_T__o* comparer, int32_t a, int32_t b, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_IntPtr___Swap (System_IntPtr_array* a, int32_t i, int32_t j, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_IntPtr___IntrospectiveSort (System_IntPtr_array* keys, int32_t left, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_IntPtr___IntroSort (System_IntPtr_array* keys, int32_t lo, int32_t hi, int32_t depthLimit, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_IntPtr___PickPivotAndPartition (System_IntPtr_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_IntPtr___Heapsort (System_IntPtr_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_IntPtr___DownHeap (System_IntPtr_array* keys, int32_t i, int32_t n, int32_t lo, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_IntPtr___InsertionSort (System_IntPtr_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
