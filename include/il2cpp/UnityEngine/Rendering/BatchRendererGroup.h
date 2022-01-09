#pragma once

#include "il2cpp.h"

void UnityEngine_Rendering_BatchRendererGroup___ctor (UnityEngine_Rendering_BatchRendererGroup_o* __this, UnityEngine_Rendering_BatchRendererGroup_OnPerformCulling_o* cullingCallback, const MethodInfo* method_info);
void UnityEngine_Rendering_BatchRendererGroup__Dispose (UnityEngine_Rendering_BatchRendererGroup_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_Rendering_BatchRendererGroup__AddBatch (UnityEngine_Rendering_BatchRendererGroup_o* __this, UnityEngine_Mesh_o* mesh, int32_t subMeshIndex, UnityEngine_Material_o* material, int32_t layer, int32_t castShadows, bool receiveShadows, bool invertCulling, UnityEngine_Bounds_o bounds, int32_t instanceCount, UnityEngine_MaterialPropertyBlock_o* customProps, UnityEngine_GameObject_o* associatedSceneObject, uint64_t sceneCullingMask, const MethodInfo* method_info);
Unity_Collections_NativeArray_Matrix4x4__o UnityEngine_Rendering_BatchRendererGroup__GetBatchMatrices (UnityEngine_Rendering_BatchRendererGroup_o* __this, int32_t batchIndex, const MethodInfo* method_info);
void* UnityEngine_Rendering_BatchRendererGroup__GetBatchMatrices (UnityEngine_Rendering_BatchRendererGroup_o* __this, int32_t batchIndex, int32_t* matrixCount, const MethodInfo* method_info);
intptr_t UnityEngine_Rendering_BatchRendererGroup__Create (UnityEngine_Rendering_BatchRendererGroup_o* group, const MethodInfo* method_info);
void UnityEngine_Rendering_BatchRendererGroup__Destroy (intptr_t groupHandle, const MethodInfo* method_info);
void UnityEngine_Rendering_BatchRendererGroup__InvokeOnPerformCulling (UnityEngine_Rendering_BatchRendererGroup_o* group, UnityEngine_Rendering_BatchRendererCullingOutput_o* context, UnityEngine_Rendering_LODParameters_o* lodParameters, const MethodInfo* method_info);
int32_t UnityEngine_Rendering_BatchRendererGroup__AddBatch_Injected (UnityEngine_Rendering_BatchRendererGroup_o* __this, UnityEngine_Mesh_o* mesh, int32_t subMeshIndex, UnityEngine_Material_o* material, int32_t layer, int32_t castShadows, bool receiveShadows, bool invertCulling, UnityEngine_Bounds_o* bounds, int32_t instanceCount, UnityEngine_MaterialPropertyBlock_o* customProps, UnityEngine_GameObject_o* associatedSceneObject, uint64_t sceneCullingMask, const MethodInfo* method_info);
