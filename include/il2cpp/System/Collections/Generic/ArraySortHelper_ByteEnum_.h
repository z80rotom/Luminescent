#pragma once

#include "il2cpp.h"

void System_Collections_Generic_ArraySortHelper_ByteEnum___Sort (System_ByteEnum_array* keys, int32_t index, int32_t length, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_ByteEnum___BinarySearch (System_ByteEnum_array* array, int32_t index, int32_t length, uint8_t value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_ByteEnum___Sort (System_ByteEnum_array* keys, int32_t index, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_ByteEnum___InternalBinarySearch (System_ByteEnum_array* array, int32_t index, int32_t length, uint8_t value, System_Collections_Generic_IComparer_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_ByteEnum___SwapIfGreater (System_ByteEnum_array* keys, System_Comparison_T__o* comparer, int32_t a, int32_t b, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_ByteEnum___Swap (System_ByteEnum_array* a, int32_t i, int32_t j, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_ByteEnum___IntrospectiveSort (System_ByteEnum_array* keys, int32_t left, int32_t length, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_ByteEnum___IntroSort (System_ByteEnum_array* keys, int32_t lo, int32_t hi, int32_t depthLimit, System_Comparison_T__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_ByteEnum___PickPivotAndPartition (System_ByteEnum_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_ByteEnum___Heapsort (System_ByteEnum_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_ByteEnum___DownHeap (System_ByteEnum_array* keys, int32_t i, int32_t n, int32_t lo, System_Comparison_T__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_ByteEnum___InsertionSort (System_ByteEnum_array* keys, int32_t lo, int32_t hi, System_Comparison_T__o* comparer, const MethodInfo* method_info);
