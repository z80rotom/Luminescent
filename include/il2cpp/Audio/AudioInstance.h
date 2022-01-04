#pragma once

#include "il2cpp.h"

AkGameObj_o* Audio_AudioInstance__get_akGameObj (Audio_AudioInstance_o* __this, const MethodInfo* method);
int32_t Audio_AudioInstance__get_listenerType (Audio_AudioInstance_o* __this, const MethodInfo* method);
uint32_t Audio_AudioInstance__get_playEventId (Audio_AudioInstance_o* __this, const MethodInfo* method);
uint32_t Audio_AudioInstance__get_stopEventId (Audio_AudioInstance_o* __this, const MethodInfo* method);
uint32_t Audio_AudioInstance__get_postEventNumber (Audio_AudioInstance_o* __this, const MethodInfo* method);
float Audio_AudioInstance__get_duration (Audio_AudioInstance_o* __this, const MethodInfo* method);
bool Audio_AudioInstance__get__isCleanup (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance__IObjectPoolInstance_SetGameObject (Audio_AudioInstance_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
UnityEngine_GameObject_o* Audio_AudioInstance__IObjectPoolInstance_GetGameObject (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance__IObjectPoolInstance_OnCreate (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance__IObjectPoolInstance_OnRelease (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance___Setup (Audio_AudioInstance_o* __this, int32_t listenerType, uint32_t playEventId, uint32_t stopEventId, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* attachedTransform, const MethodInfo* method);
Audio_AudioInstance_o* Audio_AudioInstance__Play (Audio_AudioInstance_o* __this, UnityEngine_Events_UnityAction_AudioInstance__o* onFinished, bool isManualRemoved, const MethodInfo* method);
System_Collections_IEnumerator_o* Audio_AudioInstance__OpDelayPlayComplete (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance__OnPostEvent (Il2CppObject* in_cookie, int32_t in_type, AkCallbackInfo_o* in_info, const MethodInfo* method);
void Audio_AudioInstance__PostCleanupEvent (Audio_AudioInstance_o* __this, bool isForce, const MethodInfo* method);
void Audio_AudioInstance__Cleanup (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance__Stop (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance__OnStopComplete (Il2CppObject* in_cookie, int32_t in_type, AkCallbackInfo_o* in_info, const MethodInfo* method);
void Audio_AudioInstance__SetLocalPosition (Audio_AudioInstance_o* __this, UnityEngine_Vector3_o localPos, const MethodInfo* method);
void Audio_AudioInstance___Update (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance__UpdateTransform (Audio_AudioInstance_o* __this, const MethodInfo* method);
float Audio_AudioInstance__GetPlayPosition (Audio_AudioInstance_o* __this, bool isExtrapolate, const MethodInfo* method);
float Audio_AudioInstance__GetVolume (Audio_AudioInstance_o* __this, const MethodInfo* method);
void Audio_AudioInstance__SetVolume (Audio_AudioInstance_o* __this, float volume, const MethodInfo* method);
float Audio_AudioInstance__GetRTPCValue (Audio_AudioInstance_o* __this, uint32_t gameParamId, const MethodInfo* method);
void Audio_AudioInstance__SetRTPCValue (Audio_AudioInstance_o* __this, uint32_t gameParamId, float value, const MethodInfo* method);
uint32_t Audio_AudioInstance__GetSwitch (Audio_AudioInstance_o* __this, uint32_t groupId, const MethodInfo* method);
void Audio_AudioInstance__SetSwitch (Audio_AudioInstance_o* __this, uint32_t groupId, uint32_t state, const MethodInfo* method);
void Audio_AudioInstance___ctor (Audio_AudioInstance_o* __this, const MethodInfo* method);
