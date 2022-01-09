#pragma once

#include "il2cpp.h"

void System_Text_RegularExpressions_RegexCharClass___cctor (const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass___ctor (System_Text_RegularExpressions_RegexCharClass_o* __this, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass___ctor (System_Text_RegularExpressions_RegexCharClass_o* __this, bool negate, System_Collections_Generic_List_RegexCharClass_SingleRange__o* ranges, System_Text_StringBuilder_o* categories, System_Text_RegularExpressions_RegexCharClass_o* subtraction, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__get_CanMerge (System_Text_RegularExpressions_RegexCharClass_o* __this, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__set_Negate (System_Text_RegularExpressions_RegexCharClass_o* __this, bool value, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddChar (System_Text_RegularExpressions_RegexCharClass_o* __this, uint16_t c, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddCharClass (System_Text_RegularExpressions_RegexCharClass_o* __this, System_Text_RegularExpressions_RegexCharClass_o* cc, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddSet (System_Text_RegularExpressions_RegexCharClass_o* __this, System_String_o* set, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddSubtraction (System_Text_RegularExpressions_RegexCharClass_o* __this, System_Text_RegularExpressions_RegexCharClass_o* sub, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddRange (System_Text_RegularExpressions_RegexCharClass_o* __this, uint16_t first, uint16_t last, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddCategoryFromName (System_Text_RegularExpressions_RegexCharClass_o* __this, System_String_o* categoryName, bool invert, bool caseInsensitive, System_String_o* pattern, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddCategory (System_Text_RegularExpressions_RegexCharClass_o* __this, System_String_o* category, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddLowercase (System_Text_RegularExpressions_RegexCharClass_o* __this, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddLowercaseRange (System_Text_RegularExpressions_RegexCharClass_o* __this, uint16_t chMin, uint16_t chMax, System_Globalization_CultureInfo_o* culture, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddWord (System_Text_RegularExpressions_RegexCharClass_o* __this, bool ecma, bool negate, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddSpace (System_Text_RegularExpressions_RegexCharClass_o* __this, bool ecma, bool negate, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__AddDigit (System_Text_RegularExpressions_RegexCharClass_o* __this, bool ecma, bool negate, System_String_o* pattern, const MethodInfo* method_info);
uint16_t System_Text_RegularExpressions_RegexCharClass__SingletonChar (System_String_o* set, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__IsMergeable (System_String_o* charClass, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__IsEmpty (System_String_o* charClass, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__IsSingleton (System_String_o* set, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__IsSingletonInverse (System_String_o* set, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__IsSubtraction (System_String_o* charClass, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__IsNegated (System_String_o* set, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__IsECMAWordChar (uint16_t ch, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__IsWordChar (uint16_t ch, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__CharInClass (uint16_t ch, System_String_o* set, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__CharInClassRecursive (uint16_t ch, System_String_o* set, int32_t start, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__CharInClassInternal (uint16_t ch, System_String_o* set, int32_t start, int32_t mySetLength, int32_t myCategoryLength, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__CharInCategory (uint16_t ch, System_String_o* set, int32_t start, int32_t mySetLength, int32_t myCategoryLength, const MethodInfo* method_info);
bool System_Text_RegularExpressions_RegexCharClass__CharInCategoryGroup (uint16_t ch, int32_t chcategory, System_String_o* category, int32_t* i, const MethodInfo* method_info);
System_String_o* System_Text_RegularExpressions_RegexCharClass__NegateCategory (System_String_o* category, const MethodInfo* method_info);
System_Text_RegularExpressions_RegexCharClass_o* System_Text_RegularExpressions_RegexCharClass__Parse (System_String_o* charClass, const MethodInfo* method_info);
System_Text_RegularExpressions_RegexCharClass_o* System_Text_RegularExpressions_RegexCharClass__ParseRecursive (System_String_o* charClass, int32_t start, const MethodInfo* method_info);
int32_t System_Text_RegularExpressions_RegexCharClass__RangeCount (System_Text_RegularExpressions_RegexCharClass_o* __this, const MethodInfo* method_info);
System_String_o* System_Text_RegularExpressions_RegexCharClass__ToStringClass (System_Text_RegularExpressions_RegexCharClass_o* __this, const MethodInfo* method_info);
System_Text_RegularExpressions_RegexCharClass_SingleRange_o* System_Text_RegularExpressions_RegexCharClass__GetRangeAt (System_Text_RegularExpressions_RegexCharClass_o* __this, int32_t i, const MethodInfo* method_info);
void System_Text_RegularExpressions_RegexCharClass__Canonicalize (System_Text_RegularExpressions_RegexCharClass_o* __this, const MethodInfo* method_info);
System_String_o* System_Text_RegularExpressions_RegexCharClass__SetFromProperty (System_String_o* capname, bool invert, System_String_o* pattern, const MethodInfo* method_info);
