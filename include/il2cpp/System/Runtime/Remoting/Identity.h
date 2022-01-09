#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_Identity___ctor (System_Runtime_Remoting_Identity_o* __this, System_String_o* objectUri, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessageSink_o* System_Runtime_Remoting_Identity__get_ChannelSink (System_Runtime_Remoting_Identity_o* __this, const MethodInfo* method_info);
void System_Runtime_Remoting_Identity__set_ChannelSink (System_Runtime_Remoting_Identity_o* __this, System_Runtime_Remoting_Messaging_IMessageSink_o* value, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessageSink_o* System_Runtime_Remoting_Identity__get_EnvoySink (System_Runtime_Remoting_Identity_o* __this, const MethodInfo* method_info);
System_String_o* System_Runtime_Remoting_Identity__get_ObjectUri (System_Runtime_Remoting_Identity_o* __this, const MethodInfo* method_info);
void System_Runtime_Remoting_Identity__set_ObjectUri (System_Runtime_Remoting_Identity_o* __this, System_String_o* value, const MethodInfo* method_info);
bool System_Runtime_Remoting_Identity__get_IsConnected (System_Runtime_Remoting_Identity_o* __this, const MethodInfo* method_info);
bool System_Runtime_Remoting_Identity__get_Disposed (System_Runtime_Remoting_Identity_o* __this, const MethodInfo* method_info);
void System_Runtime_Remoting_Identity__set_Disposed (System_Runtime_Remoting_Identity_o* __this, bool value, const MethodInfo* method_info);
System_Runtime_Remoting_Contexts_DynamicPropertyCollection_o* System_Runtime_Remoting_Identity__get_ClientDynamicProperties (System_Runtime_Remoting_Identity_o* __this, const MethodInfo* method_info);
bool System_Runtime_Remoting_Identity__get_HasServerDynamicSinks (System_Runtime_Remoting_Identity_o* __this, const MethodInfo* method_info);
void System_Runtime_Remoting_Identity__NotifyClientDynamicSinks (System_Runtime_Remoting_Identity_o* __this, bool start, System_Runtime_Remoting_Messaging_IMessage_o* req_msg, bool client_site, bool async, const MethodInfo* method_info);
void System_Runtime_Remoting_Identity__NotifyServerDynamicSinks (System_Runtime_Remoting_Identity_o* __this, bool start, System_Runtime_Remoting_Messaging_IMessage_o* req_msg, bool client_site, bool async, const MethodInfo* method_info);
