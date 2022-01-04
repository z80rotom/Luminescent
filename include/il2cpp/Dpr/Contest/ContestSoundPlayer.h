#pragma once

#include "il2cpp.h"

void Dpr_Contest_ContestSoundPlayer__CreateInstance (const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__DestroyInstance (const MethodInfo* method);
bool Dpr_Contest_ContestSoundPlayer__get_PlayingMusic (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__Initialize (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__OnFinalize (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__Stop (const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__SetBGMVolumeRatio (Dpr_Contest_ContestSoundPlayer_o* __this, float ratio, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__ResetBGMVolume (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__StartBGMFade (Dpr_Contest_ContestSoundPlayer_o* __this, float volume, const MethodInfo* method);
float Dpr_Contest_ContestSoundPlayer__GetBGMOptionVolume (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__StopBGM (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlayTitleBgm (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlayVisualBgm (Dpr_Contest_ContestSoundPlayer_o* __this, System_Action_o* onFinished, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlayBGM (Dpr_Contest_ContestSoundPlayer_o* __this, uint32_t eventId, System_Action_o* onFinished, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__CreateMainBGM (Dpr_Contest_ContestSoundPlayer_o* __this, uint32_t eventId, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlayMainBGM (Dpr_Contest_ContestSoundPlayer_o* __this, System_Action_o* onFinished, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlayResultBGM (Dpr_Contest_ContestSoundPlayer_o* __this, bool isBestPerformer, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__StopResultBGM (Dpr_Contest_ContestSoundPlayer_o* __this, bool isBestPerformer, const MethodInfo* method);
float Dpr_Contest_ContestSoundPlayer__GetBGMPlayPosition (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlaySeByID (Dpr_Contest_ContestSoundPlayer_o* __this, int32_t seID, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlayLoopSeByID (Dpr_Contest_ContestSoundPlayer_o* __this, int32_t seID, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlayTapNoteSE (Dpr_Contest_ContestSoundPlayer_o* __this, int32_t timingId, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__StopSE (Dpr_Contest_ContestSoundPlayer_o* __this, int32_t seID, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__PlayVoice (Dpr_Contest_ContestSoundPlayer_o* __this, System_String_o* eventName, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__SendAudioEvent (Dpr_Contest_ContestSoundPlayer_o* __this, uint32_t seId, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__OnUpdate (Dpr_Contest_ContestSoundPlayer_o* __this, float deltaTime, const MethodInfo* method);
float Dpr_Contest_ContestSoundPlayer__UpdateFadeTimer (Dpr_Contest_ContestSoundPlayer_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer__SetBGMVolume (Dpr_Contest_ContestSoundPlayer_o* __this, float volume, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer___ctor (Dpr_Contest_ContestSoundPlayer_o* __this, const MethodInfo* method);
void Dpr_Contest_ContestSoundPlayer___cctor (const MethodInfo* method);
