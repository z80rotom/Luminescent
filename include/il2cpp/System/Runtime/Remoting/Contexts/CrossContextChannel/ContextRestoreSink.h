#pragma once

#include "il2cpp.h"

void System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink___ctor (System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink_o* __this, System_Runtime_Remoting_Messaging_IMessageSink_o* next, System_Runtime_Remoting_Contexts_Context_o* context, System_Runtime_Remoting_Messaging_IMessage_o* call, const MethodInfo* method);
System_Runtime_Remoting_Messaging_IMessage_o* System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink__SyncProcessMessage (System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink_o* __this, System_Runtime_Remoting_Messaging_IMessage_o* msg, const MethodInfo* method);
System_Runtime_Remoting_Messaging_IMessageCtrl_o* System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink__AsyncProcessMessage (System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink_o* __this, System_Runtime_Remoting_Messaging_IMessage_o* msg, System_Runtime_Remoting_Messaging_IMessageSink_o* replySink, const MethodInfo* method);
