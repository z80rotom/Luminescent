#pragma once

#include "il2cpp.h"

void Mono_Xml_SmallXmlParser___ctor (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
System_Exception_o* Mono_Xml_SmallXmlParser__Error (Mono_Xml_SmallXmlParser_o* __this, System_String_o* msg, const MethodInfo* method_info);
System_Exception_o* Mono_Xml_SmallXmlParser__UnexpectedEndError (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
bool Mono_Xml_SmallXmlParser__IsNameChar (Mono_Xml_SmallXmlParser_o* __this, uint16_t c, bool start, const MethodInfo* method_info);
bool Mono_Xml_SmallXmlParser__IsWhitespace (Mono_Xml_SmallXmlParser_o* __this, int32_t c, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__SkipWhitespaces (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__HandleWhitespaces (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__SkipWhitespaces (Mono_Xml_SmallXmlParser_o* __this, bool expected, const MethodInfo* method_info);
int32_t Mono_Xml_SmallXmlParser__Peek (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
int32_t Mono_Xml_SmallXmlParser__Read (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__Expect (Mono_Xml_SmallXmlParser_o* __this, int32_t c, const MethodInfo* method_info);
System_String_o* Mono_Xml_SmallXmlParser__ReadUntil (Mono_Xml_SmallXmlParser_o* __this, uint16_t until, bool handleReferences, const MethodInfo* method_info);
System_String_o* Mono_Xml_SmallXmlParser__ReadName (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__Parse (Mono_Xml_SmallXmlParser_o* __this, System_IO_TextReader_o* input, Mono_Xml_SmallXmlParser_IContentHandler_o* handler, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__Cleanup (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__ReadContent (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__HandleBufferedContent (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__ReadCharacters (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__ReadReference (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
int32_t Mono_Xml_SmallXmlParser__ReadCharacterReference (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__ReadAttribute (Mono_Xml_SmallXmlParser_o* __this, Mono_Xml_SmallXmlParser_AttrListImpl_o* a, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__ReadCDATASection (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SmallXmlParser__ReadComment (Mono_Xml_SmallXmlParser_o* __this, const MethodInfo* method_info);
