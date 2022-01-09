#pragma once

#include "il2cpp.h"

uint64_t AkSurfaceReflector__GetID (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
void AkSurfaceReflector__SetGeometryFromMesh (UnityEngine_Mesh_o* mesh, AK_Wwise_AcousticTexture_array* acousticTextures, System_Single_array* occlusionValues, UnityEngine_Transform_o* transform, uint64_t geometryID, uint64_t associatedRoomID, bool enableDiffraction, bool enableDiffractionOnBoundaryEdges, System_String_o* name, const MethodInfo* method_info);
void AkSurfaceReflector__SetAssociatedRoom (AkSurfaceReflector_o* __this, AkRoom_o* room, const MethodInfo* method_info);
void AkSurfaceReflector__SetGeometry (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
void AkSurfaceReflector__UpdateGeometry (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
void AkSurfaceReflector__RemoveGeometry (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
void AkSurfaceReflector__RemoveGeometrySet (UnityEngine_MeshFilter_o* meshFilter, const MethodInfo* method_info);
void AkSurfaceReflector__Awake (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
void AkSurfaceReflector__OnEnable (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
void AkSurfaceReflector__OnDisable (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
uint64_t AkSurfaceReflector__GetAkGeometrySetID (UnityEngine_MeshFilter_o* meshFilter, const MethodInfo* method_info);
void AkSurfaceReflector__AddGeometrySet (AK_Wwise_AcousticTexture_o* acousticTexture, UnityEngine_MeshFilter_o* meshFilter, uint64_t roomID, bool enableDiffraction, bool enableDiffractionOnBoundaryEdges, const MethodInfo* method_info);
AK_Wwise_AcousticTexture_o* AkSurfaceReflector__get_AcousticTexture (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
void AkSurfaceReflector__set_AcousticTexture (AkSurfaceReflector_o* __this, AK_Wwise_AcousticTexture_o* value, const MethodInfo* method_info);
void AkSurfaceReflector___ctor (AkSurfaceReflector_o* __this, const MethodInfo* method_info);
