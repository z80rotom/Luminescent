#pragma once

#include "il2cpp.h"

void UnityEngine_TextGenerator___ctor (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
void UnityEngine_TextGenerator___ctor (UnityEngine_TextGenerator_o* __this, int32_t initialCapacity, const MethodInfo* method_info);
void UnityEngine_TextGenerator__Finalize (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
void UnityEngine_TextGenerator__System_IDisposable_Dispose (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_TextGenerator__get_characterCountVisible (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
UnityEngine_TextGenerationSettings_o UnityEngine_TextGenerator__ValidatedSettings (UnityEngine_TextGenerator_o* __this, UnityEngine_TextGenerationSettings_o settings, const MethodInfo* method_info);
void UnityEngine_TextGenerator__Invalidate (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
void UnityEngine_TextGenerator__GetCharacters (UnityEngine_TextGenerator_o* __this, System_Collections_Generic_List_UICharInfo__o* characters, const MethodInfo* method_info);
void UnityEngine_TextGenerator__GetLines (UnityEngine_TextGenerator_o* __this, System_Collections_Generic_List_UILineInfo__o* lines, const MethodInfo* method_info);
void UnityEngine_TextGenerator__GetVertices (UnityEngine_TextGenerator_o* __this, System_Collections_Generic_List_UIVertex__o* vertices, const MethodInfo* method_info);
float UnityEngine_TextGenerator__GetPreferredWidth (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_TextGenerationSettings_o settings, const MethodInfo* method_info);
float UnityEngine_TextGenerator__GetPreferredHeight (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_TextGenerationSettings_o settings, const MethodInfo* method_info);
bool UnityEngine_TextGenerator__PopulateWithErrors (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_TextGenerationSettings_o settings, UnityEngine_GameObject_o* context, const MethodInfo* method_info);
bool UnityEngine_TextGenerator__Populate (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_TextGenerationSettings_o settings, const MethodInfo* method_info);
int32_t UnityEngine_TextGenerator__PopulateWithError (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_TextGenerationSettings_o settings, const MethodInfo* method_info);
int32_t UnityEngine_TextGenerator__PopulateAlways (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_TextGenerationSettings_o settings, const MethodInfo* method_info);
System_Collections_Generic_IList_UIVertex__o* UnityEngine_TextGenerator__get_verts (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
System_Collections_Generic_IList_UICharInfo__o* UnityEngine_TextGenerator__get_characters (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
System_Collections_Generic_IList_UILineInfo__o* UnityEngine_TextGenerator__get_lines (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
UnityEngine_Rect_o UnityEngine_TextGenerator__get_rectExtents (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_TextGenerator__get_characterCount (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_TextGenerator__get_lineCount (UnityEngine_TextGenerator_o* __this, const MethodInfo* method_info);
intptr_t UnityEngine_TextGenerator__Internal_Create (const MethodInfo* method_info);
void UnityEngine_TextGenerator__Internal_Destroy (intptr_t ptr, const MethodInfo* method_info);
bool UnityEngine_TextGenerator__Populate_Internal (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_Font_o* font, UnityEngine_Color_o color, int32_t fontSize, float scaleFactor, float lineSpacing, int32_t style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, int32_t anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uint32_t* error, const MethodInfo* method_info);
bool UnityEngine_TextGenerator__Populate_Internal (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_Font_o* font, UnityEngine_Color_o color, int32_t fontSize, float scaleFactor, float lineSpacing, int32_t style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, int32_t anchor, UnityEngine_Vector2_o extents, UnityEngine_Vector2_o pivot, bool generateOutOfBounds, bool alignByGeometry, int32_t* error, const MethodInfo* method_info);
void UnityEngine_TextGenerator__GetVerticesInternal (UnityEngine_TextGenerator_o* __this, Il2CppObject* vertices, const MethodInfo* method_info);
void UnityEngine_TextGenerator__GetCharactersInternal (UnityEngine_TextGenerator_o* __this, Il2CppObject* characters, const MethodInfo* method_info);
void UnityEngine_TextGenerator__GetLinesInternal (UnityEngine_TextGenerator_o* __this, Il2CppObject* lines, const MethodInfo* method_info);
void UnityEngine_TextGenerator__get_rectExtents_Injected (UnityEngine_TextGenerator_o* __this, UnityEngine_Rect_o* ret, const MethodInfo* method_info);
bool UnityEngine_TextGenerator__Populate_Internal_Injected (UnityEngine_TextGenerator_o* __this, System_String_o* str, UnityEngine_Font_o* font, UnityEngine_Color_o* color, int32_t fontSize, float scaleFactor, float lineSpacing, int32_t style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, int32_t anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uint32_t* error, const MethodInfo* method_info);
