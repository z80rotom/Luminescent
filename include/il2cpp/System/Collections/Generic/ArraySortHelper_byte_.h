#pragma once

#include "il2cpp.h"

void System_Collections_Generic_ArraySortHelper_byte___Sort (System_Byte_array* keys, int32_t index, int32_t length, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_byte___BinarySearch (System_Byte_array* array, int32_t index, int32_t length, uint8_t value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_byte___Sort (System_Byte_array* keys, int32_t index, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_byte___InternalBinarySearch (System_Byte_array* array, int32_t index, int32_t length, uint8_t value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_byte___SwapIfGreater (System_Byte_array* keys, System_Comparison_T__o* comparer, int32_t a, int32_t b, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_byte___Swap (System_Byte_array* a, int32_t i, int32_t j, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_byte___IntrospectiveSort (System_Byte_array* keys, int32_t left, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_byte___IntroSort (System_Byte_array* keys, int32_t lo, int32_t hi, int32_t depthLimit, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_byte___PickPivotAndPartition (System_Byte_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_byte___Heapsort (System_Byte_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_byte___DownHeap (System_Byte_array* keys, int32_t i, int32_t n, int32_t lo, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_byte___InsertionSort (System_Byte_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
