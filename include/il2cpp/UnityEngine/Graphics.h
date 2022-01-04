#pragma once

#include "il2cpp.h"

int32_t UnityEngine_Graphics__Internal_GetMaxDrawMeshInstanceCount (const MethodInfo* method);
UnityEngine_RenderBuffer_o UnityEngine_Graphics__GetActiveColorBuffer (const MethodInfo* method);
UnityEngine_RenderBuffer_o UnityEngine_Graphics__GetActiveDepthBuffer (const MethodInfo* method);
void UnityEngine_Graphics__Internal_DrawMesh (UnityEngine_Mesh_o* mesh, int32_t submeshIndex, UnityEngine_Matrix4x4_o matrix, UnityEngine_Material_o* material, int32_t layer, UnityEngine_Camera_o* camera, UnityEngine_MaterialPropertyBlock_o* properties, int32_t castShadows, bool receiveShadows, UnityEngine_Transform_o* probeAnchor, int32_t lightProbeUsage, UnityEngine_LightProbeProxyVolume_o* lightProbeProxyVolume, const MethodInfo* method);
void UnityEngine_Graphics__Internal_DrawMeshInstanced (UnityEngine_Mesh_o* mesh, int32_t submeshIndex, UnityEngine_Material_o* material, UnityEngine_Matrix4x4_array* matrices, int32_t count, UnityEngine_MaterialPropertyBlock_o* properties, int32_t castShadows, bool receiveShadows, int32_t layer, UnityEngine_Camera_o* camera, int32_t lightProbeUsage, UnityEngine_LightProbeProxyVolume_o* lightProbeProxyVolume, const MethodInfo* method);
void UnityEngine_Graphics__Internal_BlitMaterial5 (UnityEngine_Texture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* mat, int32_t pass, bool setRT, const MethodInfo* method);
void UnityEngine_Graphics__Blit2 (UnityEngine_Texture_o* source, UnityEngine_RenderTexture_o* dest, const MethodInfo* method);
void UnityEngine_Graphics__ExecuteCommandBuffer (UnityEngine_Rendering_CommandBuffer_o* buffer, const MethodInfo* method);
UnityEngine_RenderBuffer_o UnityEngine_Graphics__get_activeColorBuffer (const MethodInfo* method);
UnityEngine_RenderBuffer_o UnityEngine_Graphics__get_activeDepthBuffer (const MethodInfo* method);
void UnityEngine_Graphics__DrawMesh (UnityEngine_Mesh_o* mesh, UnityEngine_Matrix4x4_o matrix, UnityEngine_Material_o* material, int32_t layer, UnityEngine_Camera_o* camera, int32_t submeshIndex, UnityEngine_MaterialPropertyBlock_o* properties, int32_t castShadows, bool receiveShadows, UnityEngine_Transform_o* probeAnchor, int32_t lightProbeUsage, UnityEngine_LightProbeProxyVolume_o* lightProbeProxyVolume, const MethodInfo* method);
void UnityEngine_Graphics__DrawMeshInstanced (UnityEngine_Mesh_o* mesh, int32_t submeshIndex, UnityEngine_Material_o* material, UnityEngine_Matrix4x4_array* matrices, int32_t count, UnityEngine_MaterialPropertyBlock_o* properties, int32_t castShadows, bool receiveShadows, int32_t layer, UnityEngine_Camera_o* camera, int32_t lightProbeUsage, UnityEngine_LightProbeProxyVolume_o* lightProbeProxyVolume, const MethodInfo* method);
void UnityEngine_Graphics__Blit (UnityEngine_Texture_o* source, UnityEngine_RenderTexture_o* dest, const MethodInfo* method);
void UnityEngine_Graphics__Blit (UnityEngine_Texture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* mat, int32_t pass, const MethodInfo* method);
void UnityEngine_Graphics__Blit (UnityEngine_Texture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* mat, const MethodInfo* method);
void UnityEngine_Graphics__DrawMesh (UnityEngine_Mesh_o* mesh, UnityEngine_Matrix4x4_o matrix, UnityEngine_Material_o* material, int32_t layer, const MethodInfo* method);
void UnityEngine_Graphics__DrawMeshInstanced (UnityEngine_Mesh_o* mesh, int32_t submeshIndex, UnityEngine_Material_o* material, UnityEngine_Matrix4x4_array* matrices, int32_t count, UnityEngine_MaterialPropertyBlock_o* properties, int32_t castShadows, bool receiveShadows, int32_t layer, UnityEngine_Camera_o* camera, const MethodInfo* method);
void UnityEngine_Graphics___cctor (const MethodInfo* method);
void UnityEngine_Graphics__GetActiveColorBuffer_Injected (UnityEngine_RenderBuffer_o* ret, const MethodInfo* method);
void UnityEngine_Graphics__GetActiveDepthBuffer_Injected (UnityEngine_RenderBuffer_o* ret, const MethodInfo* method);
void UnityEngine_Graphics__Internal_DrawMesh_Injected (UnityEngine_Mesh_o* mesh, int32_t submeshIndex, UnityEngine_Matrix4x4_o* matrix, UnityEngine_Material_o* material, int32_t layer, UnityEngine_Camera_o* camera, UnityEngine_MaterialPropertyBlock_o* properties, int32_t castShadows, bool receiveShadows, UnityEngine_Transform_o* probeAnchor, int32_t lightProbeUsage, UnityEngine_LightProbeProxyVolume_o* lightProbeProxyVolume, const MethodInfo* method);
