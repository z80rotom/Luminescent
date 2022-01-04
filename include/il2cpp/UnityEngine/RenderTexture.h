#pragma once

#include "il2cpp.h"

int32_t UnityEngine_RenderTexture__get_width (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture__set_width (UnityEngine_RenderTexture_o* __this, int32_t value, const MethodInfo* method);
int32_t UnityEngine_RenderTexture__get_height (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture__set_height (UnityEngine_RenderTexture_o* __this, int32_t value, const MethodInfo* method);
int32_t UnityEngine_RenderTexture__get_graphicsFormat (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture__set_graphicsFormat (UnityEngine_RenderTexture_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_RenderTexture__set_useMipMap (UnityEngine_RenderTexture_o* __this, bool value, const MethodInfo* method);
int32_t UnityEngine_RenderTexture__get_format (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture__set_autoGenerateMips (UnityEngine_RenderTexture_o* __this, bool value, const MethodInfo* method);
void UnityEngine_RenderTexture__set_antiAliasing (UnityEngine_RenderTexture_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_RenderTexture__set_isPowerOfTwo (UnityEngine_RenderTexture_o* __this, bool value, const MethodInfo* method);
UnityEngine_RenderBuffer_o UnityEngine_RenderTexture__GetColorBuffer (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
UnityEngine_RenderBuffer_o UnityEngine_RenderTexture__GetDepthBuffer (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
UnityEngine_RenderBuffer_o UnityEngine_RenderTexture__get_colorBuffer (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
UnityEngine_RenderBuffer_o UnityEngine_RenderTexture__get_depthBuffer (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
bool UnityEngine_RenderTexture__Create (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture__Release (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
bool UnityEngine_RenderTexture__IsCreated (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture__SetSRGBReadWrite (UnityEngine_RenderTexture_o* __this, bool srgb, const MethodInfo* method);
void UnityEngine_RenderTexture__Internal_Create (UnityEngine_RenderTexture_o* rt, const MethodInfo* method);
void UnityEngine_RenderTexture__SetRenderTextureDescriptor (UnityEngine_RenderTexture_o* __this, UnityEngine_RenderTextureDescriptor_o desc, const MethodInfo* method);
UnityEngine_RenderTextureDescriptor_o UnityEngine_RenderTexture__GetDescriptor (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture__set_depth (UnityEngine_RenderTexture_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, UnityEngine_RenderTextureDescriptor_o desc, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, UnityEngine_RenderTexture_o* textureToCopy, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, int32_t width, int32_t height, int32_t depth, int32_t format, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, int32_t width, int32_t height, int32_t depth, int32_t format, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, int32_t width, int32_t height, int32_t depth, int32_t format, int32_t mipCount, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, int32_t width, int32_t height, int32_t depth, int32_t format, int32_t readWrite, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, int32_t width, int32_t height, int32_t depth, int32_t format, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, int32_t width, int32_t height, int32_t depth, const MethodInfo* method);
void UnityEngine_RenderTexture___ctor (UnityEngine_RenderTexture_o* __this, int32_t width, int32_t height, int32_t depth, int32_t format, int32_t mipCount, const MethodInfo* method);
UnityEngine_RenderTextureDescriptor_o UnityEngine_RenderTexture__get_descriptor (UnityEngine_RenderTexture_o* __this, const MethodInfo* method);
void UnityEngine_RenderTexture__set_descriptor (UnityEngine_RenderTexture_o* __this, UnityEngine_RenderTextureDescriptor_o value, const MethodInfo* method);
void UnityEngine_RenderTexture__ValidateRenderTextureDesc (UnityEngine_RenderTextureDescriptor_o desc, const MethodInfo* method);
int32_t UnityEngine_RenderTexture__GetCompatibleFormat (int32_t renderTextureFormat, int32_t readWrite, const MethodInfo* method);
void UnityEngine_RenderTexture__GetColorBuffer_Injected (UnityEngine_RenderTexture_o* __this, UnityEngine_RenderBuffer_o* ret, const MethodInfo* method);
void UnityEngine_RenderTexture__GetDepthBuffer_Injected (UnityEngine_RenderTexture_o* __this, UnityEngine_RenderBuffer_o* ret, const MethodInfo* method);
void UnityEngine_RenderTexture__SetRenderTextureDescriptor_Injected (UnityEngine_RenderTexture_o* __this, UnityEngine_RenderTextureDescriptor_o* desc, const MethodInfo* method);
void UnityEngine_RenderTexture__GetDescriptor_Injected (UnityEngine_RenderTexture_o* __this, UnityEngine_RenderTextureDescriptor_o* ret, const MethodInfo* method);
