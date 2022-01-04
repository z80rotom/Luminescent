#pragma once

#include "il2cpp.h"

void AkDiffractionPathInfo___ctor (AkDiffractionPathInfo_o* __this, intptr_t cPtr, bool cMemoryOwn, const MethodInfo* method);
intptr_t AkDiffractionPathInfo__getCPtr (AkDiffractionPathInfo_o* obj, const MethodInfo* method);
void AkDiffractionPathInfo__setCPtr (AkDiffractionPathInfo_o* __this, intptr_t cPtr, const MethodInfo* method);
void AkDiffractionPathInfo__Finalize (AkDiffractionPathInfo_o* __this, const MethodInfo* method);
void AkDiffractionPathInfo__Dispose (AkDiffractionPathInfo_o* __this, const MethodInfo* method);
void AkDiffractionPathInfo__set_virtualPos (AkDiffractionPathInfo_o* __this, AkTransform_o* value, const MethodInfo* method);
AkTransform_o* AkDiffractionPathInfo__get_virtualPos (AkDiffractionPathInfo_o* __this, const MethodInfo* method);
void AkDiffractionPathInfo__set_nodeCount (AkDiffractionPathInfo_o* __this, uint32_t value, const MethodInfo* method);
uint32_t AkDiffractionPathInfo__get_nodeCount (AkDiffractionPathInfo_o* __this, const MethodInfo* method);
void AkDiffractionPathInfo__set_diffraction (AkDiffractionPathInfo_o* __this, float value, const MethodInfo* method);
float AkDiffractionPathInfo__get_diffraction (AkDiffractionPathInfo_o* __this, const MethodInfo* method);
void AkDiffractionPathInfo__set_totLength (AkDiffractionPathInfo_o* __this, float value, const MethodInfo* method);
float AkDiffractionPathInfo__get_totLength (AkDiffractionPathInfo_o* __this, const MethodInfo* method);
void AkDiffractionPathInfo__set_obstructionValue (AkDiffractionPathInfo_o* __this, float value, const MethodInfo* method);
float AkDiffractionPathInfo__get_obstructionValue (AkDiffractionPathInfo_o* __this, const MethodInfo* method);
int32_t AkDiffractionPathInfo__GetSizeOf (const MethodInfo* method);
UnityEngine_Vector3_o AkDiffractionPathInfo__GetNodes (AkDiffractionPathInfo_o* __this, uint32_t idx, const MethodInfo* method);
float AkDiffractionPathInfo__GetAngles (AkDiffractionPathInfo_o* __this, uint32_t idx, const MethodInfo* method);
uint64_t AkDiffractionPathInfo__GetPortals (AkDiffractionPathInfo_o* __this, uint32_t idx, const MethodInfo* method);
uint64_t AkDiffractionPathInfo__GetRooms (AkDiffractionPathInfo_o* __this, uint32_t idx, const MethodInfo* method);
void AkDiffractionPathInfo__Clone (AkDiffractionPathInfo_o* __this, AkDiffractionPathInfo_o* other, const MethodInfo* method);
void AkDiffractionPathInfo___ctor (AkDiffractionPathInfo_o* __this, const MethodInfo* method);
