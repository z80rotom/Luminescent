#pragma once

#include "il2cpp.h"

void AkAudioInputManager_AudioSamplesDelegate___ctor (AkAudioInputManager_AudioSamplesDelegate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method_info);
bool AkAudioInputManager_AudioSamplesDelegate__Invoke (AkAudioInputManager_AudioSamplesDelegate_o* __this, uint32_t playingID, uint32_t channelIndex, System_Single_array* samples, const MethodInfo* method_info);
System_IAsyncResult_o* AkAudioInputManager_AudioSamplesDelegate__BeginInvoke (AkAudioInputManager_AudioSamplesDelegate_o* __this, uint32_t playingID, uint32_t channelIndex, System_Single_array* samples, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method_info);
bool AkAudioInputManager_AudioSamplesDelegate__EndInvoke (AkAudioInputManager_AudioSamplesDelegate_o* __this, System_IAsyncResult_o* result, const MethodInfo* method_info);
