#pragma once

#include "il2cpp.h"

System_Globalization_TextInfo_o* System_Globalization_TextInfo__get_Invariant (const MethodInfo* method);
void System_Globalization_TextInfo___ctor (System_Globalization_TextInfo_o* __this, System_Globalization_CultureData_o* cultureData, const MethodInfo* method);
void System_Globalization_TextInfo__OnDeserializing (System_Globalization_TextInfo_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method);
void System_Globalization_TextInfo__OnDeserialized (System_Globalization_TextInfo_o* __this, const MethodInfo* method);
void System_Globalization_TextInfo__OnDeserialized (System_Globalization_TextInfo_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method);
void System_Globalization_TextInfo__OnSerializing (System_Globalization_TextInfo_o* __this, System_Runtime_Serialization_StreamingContext_o ctx, const MethodInfo* method);
int32_t System_Globalization_TextInfo__GetHashCodeOrdinalIgnoreCase (System_String_o* s, const MethodInfo* method);
int32_t System_Globalization_TextInfo__GetHashCodeOrdinalIgnoreCase (System_String_o* s, bool forceRandomizedHashing, int64_t additionalEntropy, const MethodInfo* method);
int32_t System_Globalization_TextInfo__CompareOrdinalIgnoreCase (System_String_o* str1, System_String_o* str2, const MethodInfo* method);
int32_t System_Globalization_TextInfo__CompareOrdinalIgnoreCaseEx (System_String_o* strA, int32_t indexA, System_String_o* strB, int32_t indexB, int32_t lengthA, int32_t lengthB, const MethodInfo* method);
int32_t System_Globalization_TextInfo__IndexOfStringOrdinalIgnoreCase (System_String_o* source, System_String_o* value, int32_t startIndex, int32_t count, const MethodInfo* method);
int32_t System_Globalization_TextInfo__LastIndexOfStringOrdinalIgnoreCase (System_String_o* source, System_String_o* value, int32_t startIndex, int32_t count, const MethodInfo* method);
System_String_o* System_Globalization_TextInfo__get_CultureName (System_Globalization_TextInfo_o* __this, const MethodInfo* method);
Il2CppObject* System_Globalization_TextInfo__Clone (System_Globalization_TextInfo_o* __this, const MethodInfo* method);
void System_Globalization_TextInfo__SetReadOnlyState (System_Globalization_TextInfo_o* __this, bool readOnly, const MethodInfo* method);
uint16_t System_Globalization_TextInfo__ToLower (System_Globalization_TextInfo_o* __this, uint16_t c, const MethodInfo* method);
System_String_o* System_Globalization_TextInfo__ToLower (System_Globalization_TextInfo_o* __this, System_String_o* str, const MethodInfo* method);
uint16_t System_Globalization_TextInfo__ToLowerAsciiInvariant (uint16_t c, const MethodInfo* method);
uint16_t System_Globalization_TextInfo__ToUpper (System_Globalization_TextInfo_o* __this, uint16_t c, const MethodInfo* method);
System_String_o* System_Globalization_TextInfo__ToUpper (System_Globalization_TextInfo_o* __this, System_String_o* str, const MethodInfo* method);
uint16_t System_Globalization_TextInfo__ToUpperAsciiInvariant (uint16_t c, const MethodInfo* method);
bool System_Globalization_TextInfo__IsAscii (uint16_t c, const MethodInfo* method);
bool System_Globalization_TextInfo__get_IsAsciiCasingSameAsInvariant (System_Globalization_TextInfo_o* __this, const MethodInfo* method);
bool System_Globalization_TextInfo__Equals (System_Globalization_TextInfo_o* __this, Il2CppObject* obj, const MethodInfo* method);
int32_t System_Globalization_TextInfo__GetHashCode (System_Globalization_TextInfo_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_TextInfo__ToString (System_Globalization_TextInfo_o* __this, const MethodInfo* method);
System_String_o* System_Globalization_TextInfo__ToTitleCase (System_Globalization_TextInfo_o* __this, System_String_o* str, const MethodInfo* method);
int32_t System_Globalization_TextInfo__AddNonLetter (System_Text_StringBuilder_o** result, System_String_o** input, int32_t inputIndex, int32_t charLen, const MethodInfo* method);
int32_t System_Globalization_TextInfo__AddTitlecaseLetter (System_Globalization_TextInfo_o* __this, System_Text_StringBuilder_o** result, System_String_o** input, int32_t inputIndex, int32_t charLen, const MethodInfo* method);
bool System_Globalization_TextInfo__IsWordSeparator (int32_t category, const MethodInfo* method);
bool System_Globalization_TextInfo__IsLetterCategory (int32_t uc, const MethodInfo* method);
void System_Globalization_TextInfo__System_Runtime_Serialization_IDeserializationCallback_OnDeserialization (System_Globalization_TextInfo_o* __this, Il2CppObject* sender, const MethodInfo* method);
int32_t System_Globalization_TextInfo__GetCaseInsensitiveHashCode (System_Globalization_TextInfo_o* __this, System_String_o* str, const MethodInfo* method);
int32_t System_Globalization_TextInfo__GetCaseInsensitiveHashCode (System_Globalization_TextInfo_o* __this, System_String_o* str, bool forceRandomizedHashing, int64_t additionalEntropy, const MethodInfo* method);
int32_t System_Globalization_TextInfo__GetInvariantCaseInsensitiveHashCode (System_Globalization_TextInfo_o* __this, System_String_o* str, const MethodInfo* method);
System_String_o* System_Globalization_TextInfo__ToUpperInternal (System_Globalization_TextInfo_o* __this, System_String_o* str, const MethodInfo* method);
System_String_o* System_Globalization_TextInfo__ToLowerInternal (System_Globalization_TextInfo_o* __this, System_String_o* str, const MethodInfo* method);
uint16_t System_Globalization_TextInfo__ToUpperInternal (System_Globalization_TextInfo_o* __this, uint16_t c, const MethodInfo* method);
uint16_t System_Globalization_TextInfo__ToLowerInternal (System_Globalization_TextInfo_o* __this, uint16_t c, const MethodInfo* method);
int32_t System_Globalization_TextInfo__InternalCompareStringOrdinalIgnoreCase (System_String_o* strA, int32_t indexA, System_String_o* strB, int32_t indexB, int32_t lenA, int32_t lenB, const MethodInfo* method);
void System_Globalization_TextInfo___ctor (System_Globalization_TextInfo_o* __this, const MethodInfo* method);
