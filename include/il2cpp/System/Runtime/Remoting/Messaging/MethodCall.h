#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_Messaging_MethodCall___ctor (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall___ctor (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_Runtime_Remoting_Messaging_CADMethodCallMessage_o* msg, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall___ctor (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__CopyFrom (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_Runtime_Remoting_Messaging_IMethodMessage_o* call, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__InitMethodProperty (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_String_o* key, Il2CppObject* value, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__GetObjectData (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
int32_t System_Runtime_Remoting_Messaging_MethodCall__get_ArgCount (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
System_Object_array* System_Runtime_Remoting_Messaging_MethodCall__get_Args (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
System_Runtime_Remoting_Messaging_LogicalCallContext_o* System_Runtime_Remoting_Messaging_MethodCall__get_LogicalCallContext (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
System_Reflection_MethodBase_o* System_Runtime_Remoting_Messaging_MethodCall__get_MethodBase (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_Messaging_MethodCall__get_MethodName (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_Messaging_MethodCall__get_MethodSignature (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
System_Collections_IDictionary_o* System_Runtime_Remoting_Messaging_MethodCall__get_Properties (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__InitDictionary (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_Messaging_MethodCall__get_TypeName (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_Messaging_MethodCall__get_Uri (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__set_Uri (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_Messaging_MethodCall__System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_String_o* value, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_Messaging_MethodCall__GetArg (System_Runtime_Remoting_Messaging_MethodCall_o* __this, int32_t argNum, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__Init (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__ResolveMethod (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
System_Type_o* System_Runtime_Remoting_Messaging_MethodCall__CastTo (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_String_o* clientType, System_Type_o* serverType, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_Messaging_MethodCall__GetTypeNameFromAssemblyQualifiedName (System_String_o* aqname, const MethodInfo* method);
System_Runtime_Remoting_Identity_o* System_Runtime_Remoting_Messaging_MethodCall__System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_Messaging_MethodCall__System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity (System_Runtime_Remoting_Messaging_MethodCall_o* __this, System_Runtime_Remoting_Identity_o* value, const MethodInfo* method);
System_Type_array* System_Runtime_Remoting_Messaging_MethodCall__get_GenericArguments (System_Runtime_Remoting_Messaging_MethodCall_o* __this, const MethodInfo* method);
