#pragma once

#include "il2cpp.h"

void System_Array_SorterGenericArray___ctor (System_Array_SorterGenericArray_o __this, System_Array_o* keys, System_Array_o* items, System_Collections_IComparer_o* comparer, const MethodInfo* method_info);
void System_Array_SorterGenericArray__SwapIfGreaterWithItems (System_Array_SorterGenericArray_o __this, int32_t a, int32_t b, const MethodInfo* method_info);
void System_Array_SorterGenericArray__Swap (System_Array_SorterGenericArray_o __this, int32_t i, int32_t j, const MethodInfo* method_info);
void System_Array_SorterGenericArray__Sort (System_Array_SorterGenericArray_o __this, int32_t left, int32_t length, const MethodInfo* method_info);
void System_Array_SorterGenericArray__IntrospectiveSort (System_Array_SorterGenericArray_o __this, int32_t left, int32_t length, const MethodInfo* method_info);
void System_Array_SorterGenericArray__IntroSort (System_Array_SorterGenericArray_o __this, int32_t lo, int32_t hi, int32_t depthLimit, const MethodInfo* method_info);
int32_t System_Array_SorterGenericArray__PickPivotAndPartition (System_Array_SorterGenericArray_o __this, int32_t lo, int32_t hi, const MethodInfo* method_info);
void System_Array_SorterGenericArray__Heapsort (System_Array_SorterGenericArray_o __this, int32_t lo, int32_t hi, const MethodInfo* method_info);
void System_Array_SorterGenericArray__DownHeap (System_Array_SorterGenericArray_o __this, int32_t i, int32_t n, int32_t lo, const MethodInfo* method_info);
void System_Array_SorterGenericArray__InsertionSort (System_Array_SorterGenericArray_o __this, int32_t lo, int32_t hi, const MethodInfo* method_info);
