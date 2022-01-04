#pragma once

#include "il2cpp.h"

System_String_o* System_DomainNameHelper__ParseCanonicalName (System_String_o* str, int32_t start, int32_t end, bool* loopback, const MethodInfo* method);
bool System_DomainNameHelper__IsValid (uint16_t* name, uint16_t pos, int32_t* returnedEnd, bool* notCanonical, bool notImplicitFile, const MethodInfo* method);
bool System_DomainNameHelper__IsValidByIri (uint16_t* name, uint16_t pos, int32_t* returnedEnd, bool* notCanonical, bool notImplicitFile, const MethodInfo* method);
System_String_o* System_DomainNameHelper__IdnEquivalent (uint16_t* hostname, int32_t start, int32_t end, bool* allAscii, bool* atLeastOneValidIdn, const MethodInfo* method);
System_String_o* System_DomainNameHelper__IdnEquivalent (uint16_t* hostname, int32_t start, int32_t end, bool* allAscii, System_String_o** bidiStrippedHost, const MethodInfo* method);
bool System_DomainNameHelper__IsIdnAce (System_String_o* input, int32_t index, const MethodInfo* method);
bool System_DomainNameHelper__IsIdnAce (uint16_t* input, int32_t index, const MethodInfo* method);
System_String_o* System_DomainNameHelper__UnicodeEquivalent (System_String_o* idnHost, uint16_t* hostname, int32_t start, int32_t end, const MethodInfo* method);
System_String_o* System_DomainNameHelper__UnicodeEquivalent (uint16_t* hostname, int32_t start, int32_t end, bool* allAscii, bool* atLeastOneValidIdn, const MethodInfo* method);
bool System_DomainNameHelper__IsASCIILetterOrDigit (uint16_t character, bool* notCanonical, const MethodInfo* method);
bool System_DomainNameHelper__IsValidDomainLabelCharacter (uint16_t character, bool* notCanonical, const MethodInfo* method);
