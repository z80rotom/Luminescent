#pragma once

#include "il2cpp.h"

bool UnityEngine_Application__get_isPlaying (const MethodInfo* method_info);
System_String_o* UnityEngine_Application__get_dataPath (const MethodInfo* method_info);
System_String_o* UnityEngine_Application__get_streamingAssetsPath (const MethodInfo* method_info);
System_String_o* UnityEngine_Application__get_persistentDataPath (const MethodInfo* method_info);
System_String_o* UnityEngine_Application__get_unityVersion (const MethodInfo* method_info);
System_String_o* UnityEngine_Application__get_productName (const MethodInfo* method_info);
int32_t UnityEngine_Application__get_targetFrameRate (const MethodInfo* method_info);
void UnityEngine_Application__set_targetFrameRate (int32_t value, const MethodInfo* method_info);
void UnityEngine_Application__SetLogCallbackDefined (bool defined, const MethodInfo* method_info);
void UnityEngine_Application__set_backgroundLoadingPriority (int32_t value, const MethodInfo* method_info);
int32_t UnityEngine_Application__get_platform (const MethodInfo* method_info);
bool UnityEngine_Application__get_isMobilePlatform (const MethodInfo* method_info);
void UnityEngine_Application__CallLowMemory (const MethodInfo* method_info);
void UnityEngine_Application__add_logMessageReceivedThreaded (UnityEngine_Application_LogCallback_o* value, const MethodInfo* method_info);
void UnityEngine_Application__remove_logMessageReceivedThreaded (UnityEngine_Application_LogCallback_o* value, const MethodInfo* method_info);
void UnityEngine_Application__CallLogCallback (System_String_o* logString, System_String_o* stackTrace, int32_t type, bool invokedOnMainThread, const MethodInfo* method_info);
void UnityEngine_Application__add_onBeforeRender (UnityEngine_Events_UnityAction_o* value, const MethodInfo* method_info);
void UnityEngine_Application__remove_onBeforeRender (UnityEngine_Events_UnityAction_o* value, const MethodInfo* method_info);
bool UnityEngine_Application__Internal_ApplicationWantsToQuit (const MethodInfo* method_info);
void UnityEngine_Application__Internal_ApplicationQuit (const MethodInfo* method_info);
void UnityEngine_Application__InvokeOnBeforeRender (const MethodInfo* method_info);
void UnityEngine_Application__InvokeFocusChanged (bool focus, const MethodInfo* method_info);
void UnityEngine_Application__InvokeDeepLinkActivated (System_String_o* url, const MethodInfo* method_info);
bool UnityEngine_Application__get_isEditor (const MethodInfo* method_info);
