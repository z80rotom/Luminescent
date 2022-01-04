#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_RemotingServices___cctor (const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__InternalExecute (System_Reflection_MethodBase_o* method, Il2CppObject* obj, System_Object_array* parameters, System_Object_array** out_args, const MethodInfo* method);
System_Reflection_MethodBase_o* System_Runtime_Remoting_RemotingServices__GetVirtualMethod (System_Type_o* type, System_Reflection_MethodBase_o* method, const MethodInfo* method);
bool System_Runtime_Remoting_RemotingServices__IsTransparentProxy (Il2CppObject* proxy, const MethodInfo* method);
System_Runtime_Remoting_Messaging_IMethodReturnMessage_o* System_Runtime_Remoting_RemotingServices__InternalExecuteMessage (System_MarshalByRefObject_o* target, System_Runtime_Remoting_Messaging_IMethodCallMessage_o* reqMsg, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__Connect (System_Type_o* classToProxy, System_String_o* url, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__Connect (System_Type_o* classToProxy, System_String_o* url, Il2CppObject* data, const MethodInfo* method);
System_Type_o* System_Runtime_Remoting_RemotingServices__GetServerTypeForUri (System_String_o* URI, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__Unmarshal (System_Runtime_Remoting_ObjRef_o* objectRef, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__Unmarshal (System_Runtime_Remoting_ObjRef_o* objectRef, bool fRefine, const MethodInfo* method);
System_Runtime_Remoting_ObjRef_o* System_Runtime_Remoting_RemotingServices__Marshal (System_MarshalByRefObject_o* Obj, const MethodInfo* method);
System_Runtime_Remoting_ObjRef_o* System_Runtime_Remoting_RemotingServices__Marshal (System_MarshalByRefObject_o* Obj, System_String_o* ObjURI, System_Type_o* RequestedType, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_RemotingServices__NewUri (const MethodInfo* method);
System_Runtime_Remoting_Proxies_RealProxy_o* System_Runtime_Remoting_RemotingServices__GetRealProxy (Il2CppObject* proxy, const MethodInfo* method);
System_Reflection_MethodBase_o* System_Runtime_Remoting_RemotingServices__GetMethodBaseFromMethodMessage (System_Runtime_Remoting_Messaging_IMethodMessage_o* msg, const MethodInfo* method);
System_Reflection_MethodBase_o* System_Runtime_Remoting_RemotingServices__GetMethodBaseFromName (System_Type_o* type, System_String_o* methodName, System_Type_array* signature, const MethodInfo* method);
System_Reflection_MethodBase_o* System_Runtime_Remoting_RemotingServices__FindInterfaceMethod (System_Type_o* type, System_String_o* methodName, System_Type_array* signature, const MethodInfo* method);
void System_Runtime_Remoting_RemotingServices__GetObjectData (Il2CppObject* obj, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
bool System_Runtime_Remoting_RemotingServices__IsOneWay (System_Reflection_MethodBase_o* method, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__CreateClientProxy (System_Runtime_Remoting_ActivatedClientTypeEntry_o* entry, System_Object_array* activationAttributes, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__CreateClientProxy (System_Type_o* objectType, System_String_o* url, System_Object_array* activationAttributes, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__CreateClientProxy (System_Runtime_Remoting_WellKnownClientTypeEntry_o* entry, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__CreateClientProxyForContextBound (System_Type_o* type, System_Object_array* activationAttributes, const MethodInfo* method);
System_Runtime_Remoting_Identity_o* System_Runtime_Remoting_RemotingServices__GetIdentityForUri (System_String_o* uri, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_RemotingServices__RemoveAppNameFromUri (System_String_o* uri, const MethodInfo* method);
System_Runtime_Remoting_ClientIdentity_o* System_Runtime_Remoting_RemotingServices__GetOrCreateClientIdentity (System_Runtime_Remoting_ObjRef_o* objRef, System_Type_o* proxyType, Il2CppObject** clientProxy, const MethodInfo* method);
System_Runtime_Remoting_Messaging_IMessageSink_o* System_Runtime_Remoting_RemotingServices__GetClientChannelSinkChain (System_String_o* url, Il2CppObject* channelData, System_String_o** objectUri, const MethodInfo* method);
System_Runtime_Remoting_ClientActivatedIdentity_o* System_Runtime_Remoting_RemotingServices__CreateContextBoundObjectIdentity (System_Type_o* objectType, const MethodInfo* method);
System_Runtime_Remoting_ClientActivatedIdentity_o* System_Runtime_Remoting_RemotingServices__CreateClientActivatedServerIdentity (System_MarshalByRefObject_o* realObject, System_Type_o* objectType, System_String_o* objectUri, const MethodInfo* method);
System_Runtime_Remoting_ServerIdentity_o* System_Runtime_Remoting_RemotingServices__CreateWellKnownServerIdentity (System_Type_o* objectType, System_String_o* objectUri, int32_t mode, const MethodInfo* method);
void System_Runtime_Remoting_RemotingServices__RegisterServerIdentity (System_Runtime_Remoting_ServerIdentity_o* identity, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__GetProxyForRemoteObject (System_Runtime_Remoting_ObjRef_o* objref, System_Type_o* classToProxy, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__GetRemoteObject (System_Runtime_Remoting_ObjRef_o* objRef, System_Type_o* proxyType, const MethodInfo* method);
System_Byte_array* System_Runtime_Remoting_RemotingServices__SerializeCallData (Il2CppObject* obj, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_RemotingServices__DeserializeCallData (System_Byte_array* array, const MethodInfo* method);
System_Byte_array* System_Runtime_Remoting_RemotingServices__SerializeExceptionData (System_Exception_o* ex, const MethodInfo* method);
void System_Runtime_Remoting_RemotingServices__RegisterInternalChannels (const MethodInfo* method);
void System_Runtime_Remoting_RemotingServices__DisposeIdentity (System_Runtime_Remoting_Identity_o* ident, const MethodInfo* method);
System_Runtime_Remoting_Identity_o* System_Runtime_Remoting_RemotingServices__GetMessageTargetIdentity (System_Runtime_Remoting_Messaging_IMessage_o* msg, const MethodInfo* method);
void System_Runtime_Remoting_RemotingServices__SetMessageTargetIdentity (System_Runtime_Remoting_Messaging_IMessage_o* msg, System_Runtime_Remoting_Identity_o* ident, const MethodInfo* method);
bool System_Runtime_Remoting_RemotingServices__UpdateOutArgObject (System_Reflection_ParameterInfo_o* pi, Il2CppObject* local, Il2CppObject* remote, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_RemotingServices__GetNormalizedUri (System_String_o* uri, const MethodInfo* method);
