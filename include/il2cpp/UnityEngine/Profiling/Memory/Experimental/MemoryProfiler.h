#pragma once

#include "il2cpp.h"

System_Byte_array* UnityEngine_Profiling_Memory_Experimental_MemoryProfiler__PrepareMetadata (const MethodInfo* method_info);
int32_t UnityEngine_Profiling_Memory_Experimental_MemoryProfiler__WriteIntToByteArray (System_Byte_array* array, int32_t offset, int32_t value, const MethodInfo* method_info);
int32_t UnityEngine_Profiling_Memory_Experimental_MemoryProfiler__WriteStringToByteArray (System_Byte_array* array, int32_t offset, System_String_o* value, const MethodInfo* method_info);
void UnityEngine_Profiling_Memory_Experimental_MemoryProfiler__FinalizeSnapshot (System_String_o* path, bool result, const MethodInfo* method_info);
void UnityEngine_Profiling_Memory_Experimental_MemoryProfiler__SaveScreenshotToDisk (System_String_o* path, bool result, intptr_t pixelsPtr, int32_t pixelsCount, int32_t format, int32_t width, int32_t height, const MethodInfo* method_info);
