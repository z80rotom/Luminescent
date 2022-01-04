#pragma once

#include "il2cpp.h"

void System_Security_SecurityElement___ctor (System_Security_SecurityElement_o* __this, System_String_o* tag, const MethodInfo* method);
void System_Security_SecurityElement___ctor (System_Security_SecurityElement_o* __this, System_String_o* tag, System_String_o* text, const MethodInfo* method);
System_Collections_Hashtable_o* System_Security_SecurityElement__get_Attributes (System_Security_SecurityElement_o* __this, const MethodInfo* method);
System_Collections_ArrayList_o* System_Security_SecurityElement__get_Children (System_Security_SecurityElement_o* __this, const MethodInfo* method);
System_String_o* System_Security_SecurityElement__get_Tag (System_Security_SecurityElement_o* __this, const MethodInfo* method);
System_String_o* System_Security_SecurityElement__get_Text (System_Security_SecurityElement_o* __this, const MethodInfo* method);
void System_Security_SecurityElement__set_Text (System_Security_SecurityElement_o* __this, System_String_o* value, const MethodInfo* method);
void System_Security_SecurityElement__AddAttribute (System_Security_SecurityElement_o* __this, System_String_o* name, System_String_o* value, const MethodInfo* method);
void System_Security_SecurityElement__AddChild (System_Security_SecurityElement_o* __this, System_Security_SecurityElement_o* child, const MethodInfo* method);
System_String_o* System_Security_SecurityElement__Escape (System_String_o* str, const MethodInfo* method);
System_String_o* System_Security_SecurityElement__Unescape (System_String_o* str, const MethodInfo* method);
System_Security_SecurityElement_o* System_Security_SecurityElement__FromString (System_String_o* xml, const MethodInfo* method);
bool System_Security_SecurityElement__IsValidAttributeName (System_String_o* name, const MethodInfo* method);
bool System_Security_SecurityElement__IsValidAttributeValue (System_String_o* value, const MethodInfo* method);
bool System_Security_SecurityElement__IsValidTag (System_String_o* tag, const MethodInfo* method);
bool System_Security_SecurityElement__IsValidText (System_String_o* text, const MethodInfo* method);
System_String_o* System_Security_SecurityElement__ToString (System_Security_SecurityElement_o* __this, const MethodInfo* method);
void System_Security_SecurityElement__ToXml (System_Security_SecurityElement_o* __this, System_Text_StringBuilder_o** s, int32_t level, const MethodInfo* method);
System_Security_SecurityElement_SecurityAttribute_o* System_Security_SecurityElement__GetAttribute (System_Security_SecurityElement_o* __this, System_String_o* name, const MethodInfo* method);
void System_Security_SecurityElement___cctor (const MethodInfo* method);
