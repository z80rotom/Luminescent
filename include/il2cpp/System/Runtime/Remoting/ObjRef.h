#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_ObjRef___ctor (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef___ctor (System_Runtime_Remoting_ObjRef_o* __this, System_String_o* uri, System_Runtime_Remoting_IChannelInfo_o* cinfo, const MethodInfo* method);
System_Runtime_Remoting_ObjRef_o* System_Runtime_Remoting_ObjRef__DeserializeInTheCurrentDomain (System_Runtime_Remoting_ObjRef_o* __this, int32_t domainId, System_Byte_array* tInfo, const MethodInfo* method);
System_Byte_array* System_Runtime_Remoting_ObjRef__SerializeType (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef___ctor (System_Runtime_Remoting_ObjRef_o* __this, System_Type_o* type, System_String_o* url, Il2CppObject* remoteChannelData, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef___ctor (System_Runtime_Remoting_ObjRef_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
bool System_Runtime_Remoting_ObjRef__get_IsReferenceToWellKnow (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
System_Runtime_Remoting_IChannelInfo_o* System_Runtime_Remoting_ObjRef__get_ChannelInfo (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
System_Runtime_Remoting_IEnvoyInfo_o* System_Runtime_Remoting_ObjRef__get_EnvoyInfo (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef__set_EnvoyInfo (System_Runtime_Remoting_ObjRef_o* __this, System_Runtime_Remoting_IEnvoyInfo_o* value, const MethodInfo* method);
System_Runtime_Remoting_IRemotingTypeInfo_o* System_Runtime_Remoting_ObjRef__get_TypeInfo (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef__set_TypeInfo (System_Runtime_Remoting_ObjRef_o* __this, System_Runtime_Remoting_IRemotingTypeInfo_o* value, const MethodInfo* method);
System_String_o* System_Runtime_Remoting_ObjRef__get_URI (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef__set_URI (System_Runtime_Remoting_ObjRef_o* __this, System_String_o* value, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef__GetObjectData (System_Runtime_Remoting_ObjRef_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
Il2CppObject* System_Runtime_Remoting_ObjRef__GetRealObject (System_Runtime_Remoting_ObjRef_o* __this, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef__UpdateChannelInfo (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
System_Type_o* System_Runtime_Remoting_ObjRef__get_ServerType (System_Runtime_Remoting_ObjRef_o* __this, const MethodInfo* method);
void System_Runtime_Remoting_ObjRef___cctor (const MethodInfo* method);
