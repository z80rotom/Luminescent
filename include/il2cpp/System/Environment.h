#pragma once

#include "il2cpp.h"

System_String_o* System_Environment__GetResourceString (System_String_o* key, const MethodInfo* method);
System_String_o* System_Environment__GetResourceString (System_String_o* key, System_Object_array* values, const MethodInfo* method);
System_String_o* System_Environment__GetResourceStringEncodingName (int32_t codePage, const MethodInfo* method);
int32_t System_Environment__get_CurrentManagedThreadId (const MethodInfo* method);
bool System_Environment__get_HasShutdownStarted (const MethodInfo* method);
System_String_o* System_Environment__GetNewLine (const MethodInfo* method);
System_String_o* System_Environment__get_NewLine (const MethodInfo* method);
int32_t System_Environment__get_Platform (const MethodInfo* method);
System_String_o* System_Environment__GetOSVersionString (const MethodInfo* method);
System_OperatingSystem_o* System_Environment__get_OSVersion (const MethodInfo* method);
System_Version_o* System_Environment__CreateVersionFromString (System_String_o* info, const MethodInfo* method);
System_String_o* System_Environment__get_StackTrace (const MethodInfo* method);
int32_t System_Environment__get_TickCount (const MethodInfo* method);
void System_Environment__Exit (int32_t exitCode, const MethodInfo* method);
System_String_o* System_Environment__ExpandEnvironmentVariables (System_String_o* name, const MethodInfo* method);
System_String_o* System_Environment__internalGetEnvironmentVariable_native (intptr_t variable, const MethodInfo* method);
System_String_o* System_Environment__internalGetEnvironmentVariable (System_String_o* variable, const MethodInfo* method);
System_String_o* System_Environment__GetEnvironmentVariable (System_String_o* variable, const MethodInfo* method);
System_Collections_Hashtable_o* System_Environment__GetEnvironmentVariablesNoCase (const MethodInfo* method);
System_String_o* System_Environment__GetFolderPath (int32_t folder, const MethodInfo* method);
System_String_o* System_Environment__GetWindowsFolderPath (int32_t folder, const MethodInfo* method);
System_String_o* System_Environment__GetFolderPath (int32_t folder, int32_t option, const MethodInfo* method);
System_String_o* System_Environment__ReadXdgUserDir (System_String_o* config_dir, System_String_o* home_dir, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
System_String_o* System_Environment__UnixGetFolderPath (int32_t folder, int32_t option, const MethodInfo* method);
void System_Environment__SetEnvironmentVariable (System_String_o* variable, System_String_o* value, const MethodInfo* method);
void System_Environment__InternalSetEnvironmentVariable (System_String_o* variable, System_String_o* value, const MethodInfo* method);
void System_Environment__FailFast (System_String_o* message, System_Exception_o* exception, const MethodInfo* method);
bool System_Environment__get_Is64BitProcess (const MethodInfo* method);
int32_t System_Environment__get_ProcessorCount (const MethodInfo* method);
bool System_Environment__get_IsRunningOnWindows (const MethodInfo* method);
System_String_array* System_Environment__GetEnvironmentVariableNames (const MethodInfo* method);
System_String_o* System_Environment__GetMachineConfigPath (const MethodInfo* method);
System_String_o* System_Environment__internalGetHome (const MethodInfo* method);
int32_t System_Environment__GetPageSize (const MethodInfo* method);
System_String_o* System_Environment__GetStackTrace (System_Exception_o* e, bool needFileInfo, const MethodInfo* method);
