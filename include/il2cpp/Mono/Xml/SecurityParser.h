#pragma once

#include "il2cpp.h"

void Mono_Xml_SecurityParser___ctor (Mono_Xml_SecurityParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SecurityParser__LoadXml (Mono_Xml_SecurityParser_o* __this, System_String_o* xml, const MethodInfo* method_info);
System_Security_SecurityElement_o* Mono_Xml_SecurityParser__ToXml (Mono_Xml_SecurityParser_o* __this, const MethodInfo* method_info);
void Mono_Xml_SecurityParser__OnStartParsing (Mono_Xml_SecurityParser_o* __this, Mono_Xml_SmallXmlParser_o* parser, const MethodInfo* method_info);
void Mono_Xml_SecurityParser__OnProcessingInstruction (Mono_Xml_SecurityParser_o* __this, System_String_o* name, System_String_o* text, const MethodInfo* method_info);
void Mono_Xml_SecurityParser__OnIgnorableWhitespace (Mono_Xml_SecurityParser_o* __this, System_String_o* s, const MethodInfo* method_info);
void Mono_Xml_SecurityParser__OnStartElement (Mono_Xml_SecurityParser_o* __this, System_String_o* name, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
void Mono_Xml_SecurityParser__OnEndElement (Mono_Xml_SecurityParser_o* __this, System_String_o* name, const MethodInfo* method_info);
void Mono_Xml_SecurityParser__OnChars (Mono_Xml_SecurityParser_o* __this, System_String_o* ch, const MethodInfo* method_info);
void Mono_Xml_SecurityParser__OnEndParsing (Mono_Xml_SecurityParser_o* __this, Mono_Xml_SmallXmlParser_o* parser, const MethodInfo* method_info);
