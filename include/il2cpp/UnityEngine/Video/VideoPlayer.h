#pragma once

#include "il2cpp.h"

void UnityEngine_Video_VideoPlayer__set_url (UnityEngine_Video_VideoPlayer_o* __this, System_String_o* value, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__set_targetTexture (UnityEngine_Video_VideoPlayer_o* __this, UnityEngine_RenderTexture_o* value, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__Play (UnityEngine_Video_VideoPlayer_o* __this, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__Stop (UnityEngine_Video_VideoPlayer_o* __this, const MethodInfo* method_info);
double UnityEngine_Video_VideoPlayer__get_time (UnityEngine_Video_VideoPlayer_o* __this, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__set_time (UnityEngine_Video_VideoPlayer_o* __this, double value, const MethodInfo* method_info);
bool UnityEngine_Video_VideoPlayer__get_isLooping (UnityEngine_Video_VideoPlayer_o* __this, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__set_isLooping (UnityEngine_Video_VideoPlayer_o* __this, bool value, const MethodInfo* method_info);
double UnityEngine_Video_VideoPlayer__get_length (UnityEngine_Video_VideoPlayer_o* __this, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__InvokePrepareCompletedCallback_Internal (UnityEngine_Video_VideoPlayer_o* source, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__InvokeFrameReadyCallback_Internal (UnityEngine_Video_VideoPlayer_o* source, int64_t frameIdx, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__InvokeLoopPointReachedCallback_Internal (UnityEngine_Video_VideoPlayer_o* source, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__InvokeStartedCallback_Internal (UnityEngine_Video_VideoPlayer_o* source, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__InvokeFrameDroppedCallback_Internal (UnityEngine_Video_VideoPlayer_o* source, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__InvokeErrorReceivedCallback_Internal (UnityEngine_Video_VideoPlayer_o* source, System_String_o* errorStr, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__InvokeSeekCompletedCallback_Internal (UnityEngine_Video_VideoPlayer_o* source, const MethodInfo* method_info);
void UnityEngine_Video_VideoPlayer__InvokeClockResyncOccurredCallback_Internal (UnityEngine_Video_VideoPlayer_o* source, double seconds, const MethodInfo* method_info);
