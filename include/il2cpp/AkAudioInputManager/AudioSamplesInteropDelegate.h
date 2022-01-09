#pragma once

#include "il2cpp.h"

void AkAudioInputManager_AudioSamplesInteropDelegate___ctor (AkAudioInputManager_AudioSamplesInteropDelegate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method_info);
bool AkAudioInputManager_AudioSamplesInteropDelegate__Invoke (AkAudioInputManager_AudioSamplesInteropDelegate_o* __this, uint32_t playingID, System_Single_array* samples, uint32_t channelIndex, uint32_t frames, const MethodInfo* method_info);
System_IAsyncResult_o* AkAudioInputManager_AudioSamplesInteropDelegate__BeginInvoke (AkAudioInputManager_AudioSamplesInteropDelegate_o* __this, uint32_t playingID, System_Single_array* samples, uint32_t channelIndex, uint32_t frames, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method_info);
bool AkAudioInputManager_AudioSamplesInteropDelegate__EndInvoke (AkAudioInputManager_AudioSamplesInteropDelegate_o* __this, System_IAsyncResult_o* result, const MethodInfo* method_info);
