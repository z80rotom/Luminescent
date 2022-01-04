#pragma once

#include "il2cpp.h"

UnityEngine_Shader_o* UnityEngine_Shader__Find (System_String_o* name, const MethodInfo* method);
void UnityEngine_Shader__EnableKeyword (System_String_o* keyword, const MethodInfo* method);
void UnityEngine_Shader__DisableKeyword (System_String_o* keyword, const MethodInfo* method);
bool UnityEngine_Shader__IsKeywordEnabled (System_String_o* keyword, const MethodInfo* method);
void UnityEngine_Shader__WarmupAllShaders (const MethodInfo* method);
int32_t UnityEngine_Shader__PropertyToID (System_String_o* name, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloatImpl (int32_t name, float value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorImpl (int32_t name, UnityEngine_Vector4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixImpl (int32_t name, UnityEngine_Matrix4x4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalTextureImpl (int32_t name, UnityEngine_Texture_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalFloat (int32_t nameID, float value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVector (int32_t nameID, UnityEngine_Vector4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalColor (int32_t nameID, UnityEngine_Color_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrix (int32_t nameID, UnityEngine_Matrix4x4_o value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalTexture (int32_t nameID, UnityEngine_Texture_o* value, const MethodInfo* method);
void UnityEngine_Shader___ctor (UnityEngine_Shader_o* __this, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalVectorImpl_Injected (int32_t name, UnityEngine_Vector4_o* value, const MethodInfo* method);
void UnityEngine_Shader__SetGlobalMatrixImpl_Injected (int32_t name, UnityEngine_Matrix4x4_o* value, const MethodInfo* method);
