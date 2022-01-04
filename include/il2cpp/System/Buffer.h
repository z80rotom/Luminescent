#pragma once

#include "il2cpp.h"

bool System_Buffer__InternalBlockCopy (System_Array_o* src, int32_t srcOffsetBytes, System_Array_o* dst, int32_t dstOffsetBytes, int32_t byteCount, const MethodInfo* method);
int32_t System_Buffer__IndexOfByte (uint8_t* src, uint8_t value, int32_t index, int32_t count, const MethodInfo* method);
int32_t System_Buffer___ByteLength (System_Array_o* array, const MethodInfo* method);
void System_Buffer__ZeroMemory (uint8_t* src, int64_t len, const MethodInfo* method);
void System_Buffer__Memcpy (System_Byte_array* dest, int32_t destIndex, uint8_t* src, int32_t srcIndex, int32_t len, const MethodInfo* method);
void System_Buffer__Memcpy (uint8_t* pDest, int32_t destIndex, System_Byte_array* src, int32_t srcIndex, int32_t len, const MethodInfo* method);
int32_t System_Buffer__ByteLength (System_Array_o* array, const MethodInfo* method);
void System_Buffer__BlockCopy (System_Array_o* src, int32_t srcOffset, System_Array_o* dst, int32_t dstOffset, int32_t count, const MethodInfo* method);
void System_Buffer__memcpy4 (uint8_t* dest, uint8_t* src, int32_t size, const MethodInfo* method);
void System_Buffer__memcpy2 (uint8_t* dest, uint8_t* src, int32_t size, const MethodInfo* method);
void System_Buffer__memcpy1 (uint8_t* dest, uint8_t* src, int32_t size, const MethodInfo* method);
void System_Buffer__Memcpy (uint8_t* dest, uint8_t* src, int32_t size, const MethodInfo* method);
