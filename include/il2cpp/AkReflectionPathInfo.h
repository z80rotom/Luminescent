#pragma once

#include "il2cpp.h"

void AkReflectionPathInfo___ctor (AkReflectionPathInfo_o* __this, intptr_t cPtr, bool cMemoryOwn, const MethodInfo* method_info);
intptr_t AkReflectionPathInfo__getCPtr (AkReflectionPathInfo_o* obj, const MethodInfo* method_info);
void AkReflectionPathInfo__setCPtr (AkReflectionPathInfo_o* __this, intptr_t cPtr, const MethodInfo* method_info);
void AkReflectionPathInfo__Finalize (AkReflectionPathInfo_o* __this, const MethodInfo* method_info);
void AkReflectionPathInfo__Dispose (AkReflectionPathInfo_o* __this, const MethodInfo* method_info);
void AkReflectionPathInfo__set_imageSource (AkReflectionPathInfo_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method_info);
UnityEngine_Vector3_o AkReflectionPathInfo__get_imageSource (AkReflectionPathInfo_o* __this, const MethodInfo* method_info);
void AkReflectionPathInfo__set_numPathPoints (AkReflectionPathInfo_o* __this, uint32_t value, const MethodInfo* method_info);
uint32_t AkReflectionPathInfo__get_numPathPoints (AkReflectionPathInfo_o* __this, const MethodInfo* method_info);
void AkReflectionPathInfo__set_numReflections (AkReflectionPathInfo_o* __this, uint32_t value, const MethodInfo* method_info);
uint32_t AkReflectionPathInfo__get_numReflections (AkReflectionPathInfo_o* __this, const MethodInfo* method_info);
void AkReflectionPathInfo__set_level (AkReflectionPathInfo_o* __this, float value, const MethodInfo* method_info);
float AkReflectionPathInfo__get_level (AkReflectionPathInfo_o* __this, const MethodInfo* method_info);
void AkReflectionPathInfo__set_isOccluded (AkReflectionPathInfo_o* __this, bool value, const MethodInfo* method_info);
bool AkReflectionPathInfo__get_isOccluded (AkReflectionPathInfo_o* __this, const MethodInfo* method_info);
int32_t AkReflectionPathInfo__GetSizeOf (const MethodInfo* method_info);
UnityEngine_Vector3_o AkReflectionPathInfo__GetPathPoint (AkReflectionPathInfo_o* __this, uint32_t idx, const MethodInfo* method_info);
AkAcousticSurface_o* AkReflectionPathInfo__GetAcousticSurface (AkReflectionPathInfo_o* __this, uint32_t idx, const MethodInfo* method_info);
float AkReflectionPathInfo__GetDiffraction (AkReflectionPathInfo_o* __this, uint32_t idx, const MethodInfo* method_info);
void AkReflectionPathInfo__Clone (AkReflectionPathInfo_o* __this, AkReflectionPathInfo_o* other, const MethodInfo* method_info);
void AkReflectionPathInfo___ctor (AkReflectionPathInfo_o* __this, const MethodInfo* method_info);
