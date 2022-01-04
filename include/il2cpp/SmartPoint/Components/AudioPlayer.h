#pragma once

#include "il2cpp.h"

void SmartPoint_Components_AudioPlayer__OnSceneLoaded (UnityEngine_SceneManagement_Scene_o scene, int32_t sceneMode, const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__Initialize (const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__OnBeforeSceneChanged (SmartPoint_AssetAssistant_SceneEntity_o* currentScene, SmartPoint_AssetAssistant_SceneEntity_o* targetScene, const MethodInfo* method);
float SmartPoint_Components_AudioPlayer__get_globalStreamVolume (const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__set_globalStreamVolume (float value, const MethodInfo* method);
float SmartPoint_Components_AudioPlayer__get_globalEffectVolume (const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__set_globalEffectVolume (float value, const MethodInfo* method);
float SmartPoint_Components_AudioPlayer__get_globalVoiceVolume (const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__set_globalVoiceVolume (float value, const MethodInfo* method);
bool SmartPoint_Components_AudioPlayer__IsExistReservation (SmartPoint_Components_AudioChannel_array* channels, UnityEngine_AudioClip_o* clip, const MethodInfo* method);
SmartPoint_Components_AudioChannel_o* SmartPoint_Components_AudioPlayer__GetEmptyChannel (SmartPoint_Components_AudioChannel_array* channels, const MethodInfo* method);
SmartPoint_Components_AudioChannel_o* SmartPoint_Components_AudioPlayer__PlayEffect (System_String_o* soundName, float pitch, const MethodInfo* method);
SmartPoint_Components_AudioChannel_o* SmartPoint_Components_AudioPlayer__CrossFadeStreamDirect (UnityEngine_AudioClip_o* clip, float duration, float time, const MethodInfo* method);
SmartPoint_Components_AudioChannel_o* SmartPoint_Components_AudioPlayer__PlayStreamDirect (int32_t channelIndex, UnityEngine_AudioClip_o* clip, float time, const MethodInfo* method);
System_ValueTuple_AudioChannel__AudioChannel__o SmartPoint_Components_AudioPlayer__PlayStreamWithIntro (System_String_o* introStreamName, System_String_o* loopStreamName, const MethodInfo* method);
SmartPoint_Components_AudioChannel_o* SmartPoint_Components_AudioPlayer__PlayStream (int32_t channelIndex, System_String_o* soundName, float time, const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__StopStream (int32_t channelIndex, float duration, const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__PauseStream (int32_t channelIndex, const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__Update (float deltaTime, const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__OnDestroy (const MethodInfo* method);
bool SmartPoint_Components_AudioPlayer__AddClip (System_String_o* clipName, UnityEngine_AudioClip_o* clip, const MethodInfo* method);
void SmartPoint_Components_AudioPlayer__RemoveClip (System_String_o* clipName, const MethodInfo* method);
void SmartPoint_Components_AudioPlayer___ctor (SmartPoint_Components_AudioPlayer_o* __this, const MethodInfo* method);
void SmartPoint_Components_AudioPlayer___cctor (const MethodInfo* method);
