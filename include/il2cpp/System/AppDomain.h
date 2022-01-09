#pragma once

#include "il2cpp.h"

void System_AppDomain___ctor (System_AppDomain_o* __this, const MethodInfo* method_info);
System_String_o* System_AppDomain__getFriendlyName (System_AppDomain_o* __this, const MethodInfo* method_info);
System_AppDomain_o* System_AppDomain__getCurDomain (const MethodInfo* method_info);
System_AppDomain_o* System_AppDomain__get_CurrentDomain (const MethodInfo* method_info);
System_Reflection_Assembly_array* System_AppDomain__GetAssemblies (System_AppDomain_o* __this, bool refOnly, const MethodInfo* method_info);
System_Reflection_Assembly_array* System_AppDomain__GetAssemblies (System_AppDomain_o* __this, const MethodInfo* method_info);
Il2CppObject* System_AppDomain__GetData (System_AppDomain_o* __this, System_String_o* name, const MethodInfo* method_info);
Il2CppObject* System_AppDomain__InitializeLifetimeService (System_AppDomain_o* __this, const MethodInfo* method_info);
System_Reflection_Assembly_o* System_AppDomain__LoadAssembly (System_AppDomain_o* __this, System_String_o* assemblyRef, System_Security_Policy_Evidence_o* securityEvidence, bool refOnly, const MethodInfo* method_info);
System_Reflection_Assembly_o* System_AppDomain__Load (System_AppDomain_o* __this, System_String_o* assemblyString, const MethodInfo* method_info);
System_Reflection_Assembly_o* System_AppDomain__Load (System_AppDomain_o* __this, System_String_o* assemblyString, System_Security_Policy_Evidence_o* assemblySecurity, bool refonly, const MethodInfo* method_info);
System_AppDomain_o* System_AppDomain__InternalSetDomainByID (int32_t domain_id, const MethodInfo* method_info);
System_AppDomain_o* System_AppDomain__InternalSetDomain (System_AppDomain_o* context, const MethodInfo* method_info);
void System_AppDomain__InternalPushDomainRefByID (int32_t domain_id, const MethodInfo* method_info);
void System_AppDomain__InternalPopDomainRef (const MethodInfo* method_info);
System_Runtime_Remoting_Contexts_Context_o* System_AppDomain__InternalSetContext (System_Runtime_Remoting_Contexts_Context_o* context, const MethodInfo* method_info);
System_Runtime_Remoting_Contexts_Context_o* System_AppDomain__InternalGetContext (const MethodInfo* method_info);
System_Runtime_Remoting_Contexts_Context_o* System_AppDomain__InternalGetDefaultContext (const MethodInfo* method_info);
System_String_o* System_AppDomain__InternalGetProcessGuid (System_String_o* newguid, const MethodInfo* method_info);
Il2CppObject* System_AppDomain__InvokeInDomainByID (int32_t domain_id, System_Reflection_MethodInfo_o* method, Il2CppObject* obj, System_Object_array* args, const MethodInfo* method_info);
System_String_o* System_AppDomain__GetProcessGuid (const MethodInfo* method_info);
bool System_AppDomain__InternalIsFinalizingForUnload (int32_t domain_id, const MethodInfo* method_info);
bool System_AppDomain__IsFinalizingForUnload (System_AppDomain_o* __this, const MethodInfo* method_info);
int32_t System_AppDomain__getDomainID (System_AppDomain_o* __this, const MethodInfo* method_info);
System_String_o* System_AppDomain__ToString (System_AppDomain_o* __this, const MethodInfo* method_info);
void System_AppDomain__DoAssemblyLoad (System_AppDomain_o* __this, System_Reflection_Assembly_o* assembly, const MethodInfo* method_info);
System_Reflection_Assembly_o* System_AppDomain__DoAssemblyResolve (System_AppDomain_o* __this, System_String_o* name, System_Reflection_Assembly_o* requestingAssembly, bool refonly, const MethodInfo* method_info);
System_Reflection_Assembly_o* System_AppDomain__DoTypeResolve (System_AppDomain_o* __this, Il2CppObject* name_or_tb, const MethodInfo* method_info);
void System_AppDomain__DoDomainUnload (System_AppDomain_o* __this, const MethodInfo* method_info);
System_Byte_array* System_AppDomain__GetMarshalledDomainObjRef (System_AppDomain_o* __this, const MethodInfo* method_info);
void System_AppDomain__ProcessMessageInDomain (System_AppDomain_o* __this, System_Byte_array* arrRequest, System_Runtime_Remoting_Messaging_CADMethodCallMessage_o* cadMsg, System_Byte_array** arrResponse, System_Runtime_Remoting_Messaging_CADMethodReturnMessage_o** cadMrm, const MethodInfo* method_info);
void System_AppDomain__add_DomainUnload (System_AppDomain_o* __this, System_EventHandler_o* value, const MethodInfo* method_info);
void System_AppDomain__remove_DomainUnload (System_AppDomain_o* __this, System_EventHandler_o* value, const MethodInfo* method_info);
void System_AppDomain__add_UnhandledException (System_AppDomain_o* __this, System_UnhandledExceptionEventHandler_o* value, const MethodInfo* method_info);
void System_AppDomain__remove_UnhandledException (System_AppDomain_o* __this, System_UnhandledExceptionEventHandler_o* value, const MethodInfo* method_info);
