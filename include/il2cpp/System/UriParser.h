#pragma once

#include "il2cpp.h"

System_String_o* System_UriParser__get_SchemeName (System_UriParser_o* __this, const MethodInfo* method_info);
int32_t System_UriParser__get_DefaultPort (System_UriParser_o* __this, const MethodInfo* method_info);
System_UriParser_o* System_UriParser__OnNewUri (System_UriParser_o* __this, const MethodInfo* method_info);
void System_UriParser__InitializeAndValidate (System_UriParser_o* __this, System_Uri_o* uri, System_UriFormatException_o** parsingError, const MethodInfo* method_info);
System_String_o* System_UriParser__Resolve (System_UriParser_o* __this, System_Uri_o* baseUri, System_Uri_o* relativeUri, System_UriFormatException_o** parsingError, const MethodInfo* method_info);
System_String_o* System_UriParser__GetComponents (System_UriParser_o* __this, System_Uri_o* uri, int32_t components, int32_t format, const MethodInfo* method_info);
bool System_UriParser__get_ShouldUseLegacyV2Quirks (const MethodInfo* method_info);
void System_UriParser___cctor (const MethodInfo* method_info);
int32_t System_UriParser__get_Flags (System_UriParser_o* __this, const MethodInfo* method_info);
bool System_UriParser__NotAny (System_UriParser_o* __this, int32_t flags, const MethodInfo* method_info);
bool System_UriParser__InFact (System_UriParser_o* __this, int32_t flags, const MethodInfo* method_info);
bool System_UriParser__IsAllSet (System_UriParser_o* __this, int32_t flags, const MethodInfo* method_info);
bool System_UriParser__IsFullMatch (System_UriParser_o* __this, int32_t flags, int32_t expected, const MethodInfo* method_info);
void System_UriParser___ctor (System_UriParser_o* __this, int32_t flags, const MethodInfo* method_info);
System_UriParser_o* System_UriParser__FindOrFetchAsUnknownV1Syntax (System_String_o* lwrCaseScheme, const MethodInfo* method_info);
bool System_UriParser__get_IsSimple (System_UriParser_o* __this, const MethodInfo* method_info);
System_UriParser_o* System_UriParser__InternalOnNewUri (System_UriParser_o* __this, const MethodInfo* method_info);
void System_UriParser__InternalValidate (System_UriParser_o* __this, System_Uri_o* thisUri, System_UriFormatException_o** parsingError, const MethodInfo* method_info);
System_String_o* System_UriParser__InternalResolve (System_UriParser_o* __this, System_Uri_o* thisBaseUri, System_Uri_o* uriLink, System_UriFormatException_o** parsingError, const MethodInfo* method_info);
System_String_o* System_UriParser__InternalGetComponents (System_UriParser_o* __this, System_Uri_o* thisUri, int32_t uriComponents, int32_t uriFormat, const MethodInfo* method_info);
