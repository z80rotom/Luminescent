#pragma once

#include "il2cpp.h"

void AkAudioFormat___ctor (AkAudioFormat_o* __this, intptr_t cPtr, bool cMemoryOwn, const MethodInfo* method);
intptr_t AkAudioFormat__getCPtr (AkAudioFormat_o* obj, const MethodInfo* method);
void AkAudioFormat__setCPtr (AkAudioFormat_o* __this, intptr_t cPtr, const MethodInfo* method);
void AkAudioFormat__Finalize (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat__Dispose (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat__set_uSampleRate (AkAudioFormat_o* __this, uint32_t value, const MethodInfo* method);
uint32_t AkAudioFormat__get_uSampleRate (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat__set_channelConfig (AkAudioFormat_o* __this, AkChannelConfig_o* value, const MethodInfo* method);
AkChannelConfig_o* AkAudioFormat__get_channelConfig (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat__set_uBitsPerSample (AkAudioFormat_o* __this, uint32_t value, const MethodInfo* method);
uint32_t AkAudioFormat__get_uBitsPerSample (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat__set_uBlockAlign (AkAudioFormat_o* __this, uint32_t value, const MethodInfo* method);
uint32_t AkAudioFormat__get_uBlockAlign (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat__set_uTypeID (AkAudioFormat_o* __this, uint32_t value, const MethodInfo* method);
uint32_t AkAudioFormat__get_uTypeID (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat__set_uInterleaveID (AkAudioFormat_o* __this, uint32_t value, const MethodInfo* method);
uint32_t AkAudioFormat__get_uInterleaveID (AkAudioFormat_o* __this, const MethodInfo* method);
uint32_t AkAudioFormat__GetNumChannels (AkAudioFormat_o* __this, const MethodInfo* method);
uint32_t AkAudioFormat__GetBitsPerSample (AkAudioFormat_o* __this, const MethodInfo* method);
uint32_t AkAudioFormat__GetBlockAlign (AkAudioFormat_o* __this, const MethodInfo* method);
uint32_t AkAudioFormat__GetTypeID (AkAudioFormat_o* __this, const MethodInfo* method);
uint32_t AkAudioFormat__GetInterleaveID (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat__SetAll (AkAudioFormat_o* __this, uint32_t in_uSampleRate, AkChannelConfig_o* in_channelConfig, uint32_t in_uBitsPerSample, uint32_t in_uBlockAlign, uint32_t in_uTypeID, uint32_t in_uInterleaveID, const MethodInfo* method);
bool AkAudioFormat__IsChannelConfigSupported (AkAudioFormat_o* __this, const MethodInfo* method);
void AkAudioFormat___ctor (AkAudioFormat_o* __this, const MethodInfo* method);
