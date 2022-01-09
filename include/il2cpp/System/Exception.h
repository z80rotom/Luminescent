#pragma once

#include "il2cpp.h"

void System_Exception__Init (System_Exception_o* __this, const MethodInfo* method_info);
void System_Exception___ctor (System_Exception_o* __this, const MethodInfo* method_info);
void System_Exception___ctor (System_Exception_o* __this, System_String_o* message, const MethodInfo* method_info);
void System_Exception___ctor (System_Exception_o* __this, System_String_o* message, System_Exception_o* innerException, const MethodInfo* method_info);
void System_Exception___ctor (System_Exception_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
System_String_o* System_Exception__get_Message (System_Exception_o* __this, const MethodInfo* method_info);
System_Collections_IDictionary_o* System_Exception__get_Data (System_Exception_o* __this, const MethodInfo* method_info);
bool System_Exception__IsImmutableAgileException (System_Exception_o* e, const MethodInfo* method_info);
System_String_o* System_Exception__GetClassName (System_Exception_o* __this, const MethodInfo* method_info);
System_Exception_o* System_Exception__GetBaseException (System_Exception_o* __this, const MethodInfo* method_info);
System_Exception_o* System_Exception__get_InnerException (System_Exception_o* __this, const MethodInfo* method_info);
System_IRuntimeMethodInfo_o* System_Exception__GetMethodFromStackTrace (Il2CppObject* stackTrace, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_Exception__get_TargetSite (System_Exception_o* __this, const MethodInfo* method_info);
System_String_o* System_Exception__get_StackTrace (System_Exception_o* __this, const MethodInfo* method_info);
System_String_o* System_Exception__GetStackTrace (System_Exception_o* __this, bool needFileInfo, const MethodInfo* method_info);
void System_Exception__SetErrorCode (System_Exception_o* __this, int32_t hr, const MethodInfo* method_info);
System_String_o* System_Exception__get_HelpLink (System_Exception_o* __this, const MethodInfo* method_info);
void System_Exception__set_HelpLink (System_Exception_o* __this, System_String_o* value, const MethodInfo* method_info);
System_String_o* System_Exception__get_Source (System_Exception_o* __this, const MethodInfo* method_info);
void System_Exception__set_Source (System_Exception_o* __this, System_String_o* value, const MethodInfo* method_info);
System_String_o* System_Exception__ToString (System_Exception_o* __this, const MethodInfo* method_info);
System_String_o* System_Exception__ToString (System_Exception_o* __this, bool needFileLineInfo, bool needMessage, const MethodInfo* method_info);
void System_Exception__add_SerializeObjectState (System_Exception_o* __this, System_EventHandler_SafeSerializationEventArgs__o* value, const MethodInfo* method_info);
void System_Exception__remove_SerializeObjectState (System_Exception_o* __this, System_EventHandler_SafeSerializationEventArgs__o* value, const MethodInfo* method_info);
void System_Exception__GetObjectData (System_Exception_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
System_Exception_o* System_Exception__PrepForRemoting (System_Exception_o* __this, const MethodInfo* method_info);
void System_Exception__OnDeserialized (System_Exception_o* __this, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
void System_Exception__InternalPreserveStackTrace (System_Exception_o* __this, const MethodInfo* method_info);
System_String_o* System_Exception__get_RemoteStackTrace (System_Exception_o* __this, const MethodInfo* method_info);
System_String_o* System_Exception__StripFileInfo (System_Exception_o* __this, System_String_o* stackTrace, bool isRemoteStackTrace, const MethodInfo* method_info);
void System_Exception__RestoreExceptionDispatchInfo (System_Exception_o* __this, System_Runtime_ExceptionServices_ExceptionDispatchInfo_o* exceptionDispatchInfo, const MethodInfo* method_info);
int32_t System_Exception__get_HResult (System_Exception_o* __this, const MethodInfo* method_info);
void System_Exception__set_HResult (System_Exception_o* __this, int32_t value, const MethodInfo* method_info);
System_String_o* System_Exception__InternalToString (System_Exception_o* __this, const MethodInfo* method_info);
System_Type_o* System_Exception__GetType (System_Exception_o* __this, const MethodInfo* method_info);
bool System_Exception__get_IsTransient (System_Exception_o* __this, const MethodInfo* method_info);
bool System_Exception__nIsTransient (int32_t hr, const MethodInfo* method_info);
System_String_o* System_Exception__GetMessageFromNativeResources (int32_t kind, const MethodInfo* method_info);
void System_Exception__SetMessage (System_Exception_o* __this, System_String_o* s, const MethodInfo* method_info);
void System_Exception__SetStackTrace (System_Exception_o* __this, System_String_o* s, const MethodInfo* method_info);
System_Exception_o* System_Exception__FixRemotingException (System_Exception_o* __this, const MethodInfo* method_info);
void System_Exception__ReportUnhandledException (System_Exception_o* exception, const MethodInfo* method_info);
void System_Exception___cctor (const MethodInfo* method_info);
