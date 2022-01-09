#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_ConfigHandler___ctor (System_Runtime_Remoting_ConfigHandler_o* __this, bool onlyDelayedChannels, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ValidatePath (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* element, System_String_array* paths, const MethodInfo* method_info);
bool System_Runtime_Remoting_ConfigHandler__CheckPath (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* path, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__OnStartParsing (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_o* parser, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__OnProcessingInstruction (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* name, System_String_o* text, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__OnIgnorableWhitespace (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* s, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__OnStartElement (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* name, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ParseElement (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* name, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__OnEndElement (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* name, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadCustomProviderData (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* name, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadLifetine (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
System_TimeSpan_o System_Runtime_Remoting_ConfigHandler__ParseTime (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* s, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadChannel (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, bool isTemplate, const MethodInfo* method_info);
System_Runtime_Remoting_ProviderData_o* System_Runtime_Remoting_ConfigHandler__ReadProvider (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* name, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, bool isTemplate, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadClientActivated (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadServiceActivated (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadClientWellKnown (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadServiceWellKnown (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadInteropXml (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, bool isElement, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__ReadPreload (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_ConfigHandler__GetNotNull (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_IAttrList_o* attrs, System_String_o* name, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_ConfigHandler__ExtractAssembly (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o** type, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__OnChars (System_Runtime_Remoting_ConfigHandler_o* __this, System_String_o* ch, const MethodInfo* method_info);
void System_Runtime_Remoting_ConfigHandler__OnEndParsing (System_Runtime_Remoting_ConfigHandler_o* __this, Mono_Xml_SmallXmlParser_o* parser, const MethodInfo* method_info);
