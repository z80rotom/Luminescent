#pragma once

#include "il2cpp.h"

void UnityEngine_CanvasRenderer__set_hasPopInstruction (UnityEngine_CanvasRenderer_o* __this, bool value, const MethodInfo* method);
int32_t UnityEngine_CanvasRenderer__get_materialCount (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
void UnityEngine_CanvasRenderer__set_materialCount (UnityEngine_CanvasRenderer_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_CanvasRenderer__set_popMaterialCount (UnityEngine_CanvasRenderer_o* __this, int32_t value, const MethodInfo* method);
int32_t UnityEngine_CanvasRenderer__get_absoluteDepth (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
bool UnityEngine_CanvasRenderer__get_hasMoved (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
bool UnityEngine_CanvasRenderer__get_cullTransparentMesh (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
void UnityEngine_CanvasRenderer__set_cullTransparentMesh (UnityEngine_CanvasRenderer_o* __this, bool value, const MethodInfo* method);
bool UnityEngine_CanvasRenderer__get_cull (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
void UnityEngine_CanvasRenderer__set_cull (UnityEngine_CanvasRenderer_o* __this, bool value, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetColor (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
UnityEngine_Color_o UnityEngine_CanvasRenderer__GetColor (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
void UnityEngine_CanvasRenderer__EnableRectClipping (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Rect_o rect, const MethodInfo* method);
void UnityEngine_CanvasRenderer__set_clippingSoftness (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
void UnityEngine_CanvasRenderer__DisableRectClipping (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetMaterial (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Material_o* material, int32_t index, const MethodInfo* method);
UnityEngine_Material_o* UnityEngine_CanvasRenderer__GetMaterial (UnityEngine_CanvasRenderer_o* __this, int32_t index, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetPopMaterial (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Material_o* material, int32_t index, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetTexture (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Texture_o* texture, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetAlphaTexture (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Texture_o* texture, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetMesh (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
void UnityEngine_CanvasRenderer__Clear (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetAlpha (UnityEngine_CanvasRenderer_o* __this, float alpha, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetMaterial (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Material_o* material, UnityEngine_Texture_o* texture, const MethodInfo* method);
UnityEngine_Material_o* UnityEngine_CanvasRenderer__GetMaterial (UnityEngine_CanvasRenderer_o* __this, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SplitUIVertexStreams (System_Collections_Generic_List_UIVertex__o* verts, System_Collections_Generic_List_Vector3__o* positions, System_Collections_Generic_List_Color32__o* colors, System_Collections_Generic_List_Vector2__o* uv0S, System_Collections_Generic_List_Vector2__o* uv1S, System_Collections_Generic_List_Vector2__o* uv2S, System_Collections_Generic_List_Vector2__o* uv3S, System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector4__o* tangents, System_Collections_Generic_List_int__o* indices, const MethodInfo* method);
void UnityEngine_CanvasRenderer__CreateUIVertexStream (System_Collections_Generic_List_UIVertex__o* verts, System_Collections_Generic_List_Vector3__o* positions, System_Collections_Generic_List_Color32__o* colors, System_Collections_Generic_List_Vector2__o* uv0S, System_Collections_Generic_List_Vector2__o* uv1S, System_Collections_Generic_List_Vector2__o* uv2S, System_Collections_Generic_List_Vector2__o* uv3S, System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector4__o* tangents, System_Collections_Generic_List_int__o* indices, const MethodInfo* method);
void UnityEngine_CanvasRenderer__AddUIVertexStream (System_Collections_Generic_List_UIVertex__o* verts, System_Collections_Generic_List_Vector3__o* positions, System_Collections_Generic_List_Color32__o* colors, System_Collections_Generic_List_Vector2__o* uv0S, System_Collections_Generic_List_Vector2__o* uv1S, System_Collections_Generic_List_Vector2__o* uv2S, System_Collections_Generic_List_Vector2__o* uv3S, System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector4__o* tangents, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SplitIndicesStreamsInternal (Il2CppObject* verts, Il2CppObject* indices, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SplitUIVertexStreamsInternal (Il2CppObject* verts, Il2CppObject* positions, Il2CppObject* colors, Il2CppObject* uv0S, Il2CppObject* uv1S, Il2CppObject* uv2S, Il2CppObject* uv3S, Il2CppObject* normals, Il2CppObject* tangents, const MethodInfo* method);
void UnityEngine_CanvasRenderer__CreateUIVertexStreamInternal (Il2CppObject* verts, Il2CppObject* positions, Il2CppObject* colors, Il2CppObject* uv0S, Il2CppObject* uv1S, Il2CppObject* uv2S, Il2CppObject* uv3S, Il2CppObject* normals, Il2CppObject* tangents, Il2CppObject* indices, const MethodInfo* method);
void UnityEngine_CanvasRenderer__SetColor_Injected (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Color_o* color, const MethodInfo* method);
void UnityEngine_CanvasRenderer__GetColor_Injected (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Color_o* ret, const MethodInfo* method);
void UnityEngine_CanvasRenderer__EnableRectClipping_Injected (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Rect_o* rect, const MethodInfo* method);
void UnityEngine_CanvasRenderer__set_clippingSoftness_Injected (UnityEngine_CanvasRenderer_o* __this, UnityEngine_Vector2_o* value, const MethodInfo* method);
