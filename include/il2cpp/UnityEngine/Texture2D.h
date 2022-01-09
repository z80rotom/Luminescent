#pragma once

#include "il2cpp.h"

UnityEngine_Texture2D_o* UnityEngine_Texture2D__get_whiteTexture (const MethodInfo* method_info);
UnityEngine_Texture2D_o* UnityEngine_Texture2D__get_blackTexture (const MethodInfo* method_info);
UnityEngine_Texture2D_o* UnityEngine_Texture2D__get_grayTexture (const MethodInfo* method_info);
UnityEngine_Texture2D_o* UnityEngine_Texture2D__get_normalTexture (const MethodInfo* method_info);
bool UnityEngine_Texture2D__Internal_CreateImpl (UnityEngine_Texture2D_o* mono, int32_t w, int32_t h, int32_t mipCount, int32_t format, int32_t flags, intptr_t nativeTex, const MethodInfo* method_info);
void UnityEngine_Texture2D__Internal_Create (UnityEngine_Texture2D_o* mono, int32_t w, int32_t h, int32_t mipCount, int32_t format, int32_t flags, intptr_t nativeTex, const MethodInfo* method_info);
bool UnityEngine_Texture2D__get_isReadable (UnityEngine_Texture2D_o* __this, const MethodInfo* method_info);
void UnityEngine_Texture2D__ApplyImpl (UnityEngine_Texture2D_o* __this, bool updateMipmaps, bool makeNoLongerReadable, const MethodInfo* method_info);
bool UnityEngine_Texture2D__ResizeImpl (UnityEngine_Texture2D_o* __this, int32_t width, int32_t height, const MethodInfo* method_info);
UnityEngine_Color_o UnityEngine_Texture2D__GetPixelBilinearImpl (UnityEngine_Texture2D_o* __this, int32_t image, float u, float v, const MethodInfo* method_info);
bool UnityEngine_Texture2D__ResizeWithFormatImpl (UnityEngine_Texture2D_o* __this, int32_t width, int32_t height, int32_t format, bool hasMipMap, const MethodInfo* method_info);
void UnityEngine_Texture2D__ReadPixelsImpl (UnityEngine_Texture2D_o* __this, UnityEngine_Rect_o source, int32_t destX, int32_t destY, bool recalculateMipMaps, const MethodInfo* method_info);
void UnityEngine_Texture2D__SetPixelsImpl (UnityEngine_Texture2D_o* __this, int32_t x, int32_t y, int32_t w, int32_t h, UnityEngine_Color_array* pixel, int32_t miplevel, int32_t frame, const MethodInfo* method_info);
void UnityEngine_Texture2D__SetAllPixels32 (UnityEngine_Texture2D_o* __this, UnityEngine_Color32_array* colors, int32_t miplevel, const MethodInfo* method_info);
UnityEngine_Color_array* UnityEngine_Texture2D__GetPixels (UnityEngine_Texture2D_o* __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel, const MethodInfo* method_info);
void UnityEngine_Texture2D___ctor (UnityEngine_Texture2D_o* __this, int32_t width, int32_t height, int32_t textureFormat, int32_t mipCount, bool linear, intptr_t nativeTex, const MethodInfo* method_info);
void UnityEngine_Texture2D___ctor (UnityEngine_Texture2D_o* __this, int32_t width, int32_t height, int32_t textureFormat, bool mipChain, bool linear, const MethodInfo* method_info);
void UnityEngine_Texture2D___ctor (UnityEngine_Texture2D_o* __this, int32_t width, int32_t height, int32_t textureFormat, bool mipChain, const MethodInfo* method_info);
void UnityEngine_Texture2D__SetPixels (UnityEngine_Texture2D_o* __this, int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, UnityEngine_Color_array* colors, int32_t miplevel, const MethodInfo* method_info);
void UnityEngine_Texture2D__SetPixels (UnityEngine_Texture2D_o* __this, UnityEngine_Color_array* colors, int32_t miplevel, const MethodInfo* method_info);
void UnityEngine_Texture2D__SetPixels (UnityEngine_Texture2D_o* __this, UnityEngine_Color_array* colors, const MethodInfo* method_info);
UnityEngine_Color_o UnityEngine_Texture2D__GetPixelBilinear (UnityEngine_Texture2D_o* __this, float u, float v, const MethodInfo* method_info);
void UnityEngine_Texture2D__Apply (UnityEngine_Texture2D_o* __this, bool updateMipmaps, bool makeNoLongerReadable, const MethodInfo* method_info);
void UnityEngine_Texture2D__Apply (UnityEngine_Texture2D_o* __this, bool updateMipmaps, const MethodInfo* method_info);
void UnityEngine_Texture2D__Apply (UnityEngine_Texture2D_o* __this, const MethodInfo* method_info);
bool UnityEngine_Texture2D__Resize (UnityEngine_Texture2D_o* __this, int32_t width, int32_t height, const MethodInfo* method_info);
bool UnityEngine_Texture2D__Resize (UnityEngine_Texture2D_o* __this, int32_t width, int32_t height, int32_t format, bool hasMipMap, const MethodInfo* method_info);
void UnityEngine_Texture2D__ReadPixels (UnityEngine_Texture2D_o* __this, UnityEngine_Rect_o source, int32_t destX, int32_t destY, bool recalculateMipMaps, const MethodInfo* method_info);
void UnityEngine_Texture2D__ReadPixels (UnityEngine_Texture2D_o* __this, UnityEngine_Rect_o source, int32_t destX, int32_t destY, const MethodInfo* method_info);
void UnityEngine_Texture2D__SetPixels32 (UnityEngine_Texture2D_o* __this, UnityEngine_Color32_array* colors, int32_t miplevel, const MethodInfo* method_info);
UnityEngine_Color_array* UnityEngine_Texture2D__GetPixels (UnityEngine_Texture2D_o* __this, int32_t miplevel, const MethodInfo* method_info);
UnityEngine_Color_array* UnityEngine_Texture2D__GetPixels (UnityEngine_Texture2D_o* __this, const MethodInfo* method_info);
void UnityEngine_Texture2D__GetPixelBilinearImpl_Injected (UnityEngine_Texture2D_o* __this, int32_t image, float u, float v, UnityEngine_Color_o* ret, const MethodInfo* method_info);
void UnityEngine_Texture2D__ReadPixelsImpl_Injected (UnityEngine_Texture2D_o* __this, UnityEngine_Rect_o* source, int32_t destX, int32_t destY, bool recalculateMipMaps, const MethodInfo* method_info);
