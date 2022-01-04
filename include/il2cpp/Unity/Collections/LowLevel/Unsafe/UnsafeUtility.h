#pragma once

#include "il2cpp.h"

void* Unity_Collections_LowLevel_Unsafe_UnsafeUtility__Malloc (int64_t size, int32_t alignment, int32_t allocator, const MethodInfo* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__Free (void* memory, int32_t allocator, const MethodInfo* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemCpy (void* destination, void* source, int64_t size, const MethodInfo* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet (void* destination, uint8_t value, int64_t size, const MethodInfo* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemClear (void* destination, int64_t size, const MethodInfo* method);
int32_t Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemCmp (void* ptr1, void* ptr2, int64_t size, const MethodInfo* method);
uint8_t Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement_byte_ (void* source, int32_t index, const MethodInfo_2364570* method);
int32_t Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement_int_ (void* source, int32_t index, const MethodInfo_2364580* method);
Il2CppObject* Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement_object_ (void* source, int32_t index, const MethodInfo_2364590* method);
UnityEngine_Experimental_GlobalIllumination_LightDataGI_o Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement_LightDataGI_ (void* source, int32_t index, const MethodInfo_23645A0* method);
UnityEngine_Matrix4x4_o Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement_Matrix4x4_ (void* source, int32_t index, const MethodInfo_23645C0* method);
UnityEngine_Plane_o Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement_Plane_ (void* source, int32_t index, const MethodInfo_23645F0* method);
UnityEngine_Rendering_BatchVisibility_o Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement_BatchVisibility_ (void* source, int32_t index, const MethodInfo_2364600* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement_byte_ (void* destination, int32_t index, uint8_t value, const MethodInfo_20E8F90* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement_int_ (void* destination, int32_t index, int32_t value, const MethodInfo_20E8FA0* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement_object_ (void* destination, int32_t index, Il2CppObject* value, const MethodInfo_20E8FB0* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement_LightDataGI_ (void* destination, int32_t index, UnityEngine_Experimental_GlobalIllumination_LightDataGI_o value, const MethodInfo_20E8FC0* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement_Matrix4x4_ (void* destination, int32_t index, UnityEngine_Matrix4x4_o value, const MethodInfo_20E8FF0* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement_Plane_ (void* destination, int32_t index, UnityEngine_Plane_o value, const MethodInfo_20E9020* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement_BatchVisibility_ (void* destination, int32_t index, UnityEngine_Rendering_BatchVisibility_o value, const MethodInfo_20E9040* method);
int32_t Unity_Collections_LowLevel_Unsafe_UnsafeUtility__EnumToInt_Int32Enum_ (int32_t enumValue, const MethodInfo_232C1C0* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__InternalEnumToInt_Int32Enum_ (int32_t* enumValue, int32_t* intValue, const MethodInfo_20E8F70* method);
void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__InternalEnumToInt_object_ (Il2CppObject** enumValue, int32_t* intValue, const MethodInfo_20E8F80* method);
