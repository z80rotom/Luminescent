#pragma once

#include "il2cpp.h"

void UnityEngine_UI_VertexHelper___ctor (UnityEngine_UI_VertexHelper_o* __this, const MethodInfo* method);
void UnityEngine_UI_VertexHelper___ctor (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_Mesh_o* m, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__InitializeListIfRequired (UnityEngine_UI_VertexHelper_o* __this, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__Dispose (UnityEngine_UI_VertexHelper_o* __this, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__Clear (UnityEngine_UI_VertexHelper_o* __this, const MethodInfo* method);
int32_t UnityEngine_UI_VertexHelper__get_currentVertCount (UnityEngine_UI_VertexHelper_o* __this, const MethodInfo* method);
int32_t UnityEngine_UI_VertexHelper__get_currentIndexCount (UnityEngine_UI_VertexHelper_o* __this, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__PopulateUIVertex (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_UIVertex_o* vertex, int32_t i, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__SetUIVertex (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_UIVertex_o vertex, int32_t i, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__FillMesh (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__AddVert (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_Vector3_o position, UnityEngine_Color32_o color, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv1, UnityEngine_Vector2_o uv2, UnityEngine_Vector2_o uv3, UnityEngine_Vector3_o normal, UnityEngine_Vector4_o tangent, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__AddVert (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_Vector3_o position, UnityEngine_Color32_o color, UnityEngine_Vector2_o uv0, UnityEngine_Vector2_o uv1, UnityEngine_Vector3_o normal, UnityEngine_Vector4_o tangent, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__AddVert (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_Vector3_o position, UnityEngine_Color32_o color, UnityEngine_Vector2_o uv0, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__AddVert (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_UIVertex_o v, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__AddTriangle (UnityEngine_UI_VertexHelper_o* __this, int32_t idx0, int32_t idx1, int32_t idx2, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__AddUIVertexQuad (UnityEngine_UI_VertexHelper_o* __this, UnityEngine_UIVertex_array* verts, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__AddUIVertexStream (UnityEngine_UI_VertexHelper_o* __this, System_Collections_Generic_List_UIVertex__o* verts, System_Collections_Generic_List_int__o* indices, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream (UnityEngine_UI_VertexHelper_o* __this, System_Collections_Generic_List_UIVertex__o* verts, const MethodInfo* method);
void UnityEngine_UI_VertexHelper__GetUIVertexStream (UnityEngine_UI_VertexHelper_o* __this, System_Collections_Generic_List_UIVertex__o* stream, const MethodInfo* method);
void UnityEngine_UI_VertexHelper___cctor (const MethodInfo* method);
