#pragma once

#include "il2cpp.h"

void System_Array_SorterObjectArray___ctor (System_Array_SorterObjectArray_o __this, System_Object_array* keys, System_Object_array* items, System_Collections_IComparer_o* comparer, const MethodInfo* method);
void System_Array_SorterObjectArray__SwapIfGreaterWithItems (System_Array_SorterObjectArray_o __this, int32_t a, int32_t b, const MethodInfo* method);
void System_Array_SorterObjectArray__Swap (System_Array_SorterObjectArray_o __this, int32_t i, int32_t j, const MethodInfo* method);
void System_Array_SorterObjectArray__Sort (System_Array_SorterObjectArray_o __this, int32_t left, int32_t length, const MethodInfo* method);
void System_Array_SorterObjectArray__IntrospectiveSort (System_Array_SorterObjectArray_o __this, int32_t left, int32_t length, const MethodInfo* method);
void System_Array_SorterObjectArray__IntroSort (System_Array_SorterObjectArray_o __this, int32_t lo, int32_t hi, int32_t depthLimit, const MethodInfo* method);
int32_t System_Array_SorterObjectArray__PickPivotAndPartition (System_Array_SorterObjectArray_o __this, int32_t lo, int32_t hi, const MethodInfo* method);
void System_Array_SorterObjectArray__Heapsort (System_Array_SorterObjectArray_o __this, int32_t lo, int32_t hi, const MethodInfo* method);
void System_Array_SorterObjectArray__DownHeap (System_Array_SorterObjectArray_o __this, int32_t i, int32_t n, int32_t lo, const MethodInfo* method);
void System_Array_SorterObjectArray__InsertionSort (System_Array_SorterObjectArray_o __this, int32_t lo, int32_t hi, const MethodInfo* method);
