#pragma once

#include "il2cpp.h"

System_Char_array* System_UriHelper__EscapeString (System_String_o* input, int32_t start, int32_t end, System_Char_array* dest, int32_t* destPos, bool isUriString, uint16_t force1, uint16_t force2, uint16_t rsvd, const MethodInfo* method);
System_Char_array* System_UriHelper__EnsureDestinationSize (uint16_t* pStr, System_Char_array* dest, int32_t currentInputPos, int16_t charsToAdd, int16_t minReallocateChars, int32_t* destPos, int32_t prevInputPos, const MethodInfo* method);
System_Char_array* System_UriHelper__UnescapeString (System_String_o* input, int32_t start, int32_t end, System_Char_array* dest, int32_t* destPosition, uint16_t rsvd1, uint16_t rsvd2, uint16_t rsvd3, int32_t unescapeMode, System_UriParser_o* syntax, bool isQuery, const MethodInfo* method);
System_Char_array* System_UriHelper__UnescapeString (uint16_t* pStr, int32_t start, int32_t end, System_Char_array* dest, int32_t* destPosition, uint16_t rsvd1, uint16_t rsvd2, uint16_t rsvd3, int32_t unescapeMode, System_UriParser_o* syntax, bool isQuery, const MethodInfo* method);
void System_UriHelper__MatchUTF8Sequence (uint16_t* pDest, System_Char_array* dest, int32_t* destOffset, System_Char_array* unescapedChars, int32_t charCount, System_Byte_array* bytes, int32_t byteCount, bool isQuery, bool iriParsing, const MethodInfo* method);
void System_UriHelper__EscapeAsciiChar (uint16_t ch, System_Char_array* to, int32_t* pos, const MethodInfo* method);
uint16_t System_UriHelper__EscapedAscii (uint16_t digit, uint16_t next, const MethodInfo* method);
bool System_UriHelper__IsNotSafeForUnescape (uint16_t ch, const MethodInfo* method);
bool System_UriHelper__IsReservedUnreservedOrHash (uint16_t c, const MethodInfo* method);
bool System_UriHelper__IsUnreserved (uint16_t c, const MethodInfo* method);
bool System_UriHelper__Is3986Unreserved (uint16_t c, const MethodInfo* method);
void System_UriHelper___cctor (const MethodInfo* method);
