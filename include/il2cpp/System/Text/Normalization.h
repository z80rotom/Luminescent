#pragma once

#include "il2cpp.h"

uint32_t System_Text_Normalization__PropValue (int32_t cp, const MethodInfo* method);
int32_t System_Text_Normalization__CharMapIdx (int32_t cp, const MethodInfo* method);
uint8_t System_Text_Normalization__GetCombiningClass (int32_t c, const MethodInfo* method);
int32_t System_Text_Normalization__GetPrimaryCompositeFromMapIndex (int32_t src, const MethodInfo* method);
int32_t System_Text_Normalization__GetPrimaryCompositeHelperIndex (int32_t cp, const MethodInfo* method);
System_String_o* System_Text_Normalization__Compose (System_String_o* source, int32_t checkType, const MethodInfo* method);
System_Text_StringBuilder_o* System_Text_Normalization__Combine (System_String_o* source, int32_t start, int32_t checkType, const MethodInfo* method);
void System_Text_Normalization__Combine (System_Text_StringBuilder_o* sb, int32_t i, int32_t checkType, const MethodInfo* method);
int32_t System_Text_Normalization__CombineHangul (System_Text_StringBuilder_o* sb, System_String_o* s, int32_t current, const MethodInfo* method);
int32_t System_Text_Normalization__Fetch (System_Text_StringBuilder_o* sb, System_String_o* s, int32_t i, const MethodInfo* method);
int32_t System_Text_Normalization__TryComposeWithPreviousStarter (System_Text_StringBuilder_o* sb, System_String_o* s, int32_t current, const MethodInfo* method);
int32_t System_Text_Normalization__TryCompose (int32_t i, int32_t starter, int32_t candidate, const MethodInfo* method);
System_String_o* System_Text_Normalization__Decompose (System_String_o* source, int32_t checkType, const MethodInfo* method);
void System_Text_Normalization__Decompose (System_String_o* source, System_Text_StringBuilder_o** sb, int32_t checkType, const MethodInfo* method);
void System_Text_Normalization__ReorderCanonical (System_String_o* src, System_Text_StringBuilder_o** sb, int32_t start, const MethodInfo* method);
void System_Text_Normalization__DecomposeChar (System_Text_StringBuilder_o** sb, System_Int32_array** buf, System_String_o* s, int32_t i, int32_t checkType, int32_t* start, const MethodInfo* method);
int32_t System_Text_Normalization__QuickCheck (uint16_t c, int32_t type, const MethodInfo* method);
int32_t System_Text_Normalization__GetCanonicalHangul (int32_t s, System_Int32_array* buf, int32_t bufIdx, const MethodInfo* method);
int32_t System_Text_Normalization__GetCanonical (int32_t c, System_Int32_array* buf, int32_t bufIdx, int32_t checkType, const MethodInfo* method);
System_String_o* System_Text_Normalization__Normalize (System_String_o* source, int32_t normalizationForm, const MethodInfo* method);
System_String_o* System_Text_Normalization__Normalize (System_String_o* source, int32_t type, const MethodInfo* method);
void System_Text_Normalization__load_normalization_resource (intptr_t* props, intptr_t* mappedChars, intptr_t* charMapIndex, intptr_t* helperIndex, intptr_t* mapIdxToComposite, intptr_t* combiningClass, const MethodInfo* method);
void System_Text_Normalization___cctor (const MethodInfo* method);
