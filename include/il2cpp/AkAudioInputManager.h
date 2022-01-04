#pragma once

#include "il2cpp.h"

uint32_t AkAudioInputManager__PostAudioInputEvent (AK_Wwise_Event_o* akEvent, UnityEngine_GameObject_o* gameObject, AkAudioInputManager_AudioSamplesDelegate_o* sampleDelegate, AkAudioInputManager_AudioFormatDelegate_o* formatDelegate, const MethodInfo* method);
uint32_t AkAudioInputManager__PostAudioInputEvent (uint32_t akEventID, UnityEngine_GameObject_o* gameObject, AkAudioInputManager_AudioSamplesDelegate_o* sampleDelegate, AkAudioInputManager_AudioFormatDelegate_o* formatDelegate, const MethodInfo* method);
uint32_t AkAudioInputManager__PostAudioInputEvent (System_String_o* akEventName, UnityEngine_GameObject_o* gameObject, AkAudioInputManager_AudioSamplesDelegate_o* sampleDelegate, AkAudioInputManager_AudioFormatDelegate_o* formatDelegate, const MethodInfo* method);
bool AkAudioInputManager__InternalAudioSamplesDelegate (uint32_t playingID, System_Single_array* samples, uint32_t channelIndex, uint32_t frames, const MethodInfo* method);
void AkAudioInputManager__InternalAudioFormatDelegate (uint32_t playingID, intptr_t format, const MethodInfo* method);
void AkAudioInputManager__TryInitialize (const MethodInfo* method);
void AkAudioInputManager__AddPlayingID (uint32_t playingID, AkAudioInputManager_AudioSamplesDelegate_o* sampleDelegate, AkAudioInputManager_AudioFormatDelegate_o* formatDelegate, const MethodInfo* method);
void AkAudioInputManager__EventCallback (Il2CppObject* cookie, int32_t type, AkCallbackInfo_o* callbackInfo, const MethodInfo* method);
void AkAudioInputManager___cctor (const MethodInfo* method);
