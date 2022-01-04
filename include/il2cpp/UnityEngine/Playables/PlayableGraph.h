#pragma once

#include "il2cpp.h"

UnityEngine_Playables_Playable_o UnityEngine_Playables_PlayableGraph__GetRootPlayable (UnityEngine_Playables_PlayableGraph_o __this, int32_t index, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__Connect_AnimationClipPlayable__AnimationLayerMixerPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Animations_AnimationClipPlayable_o source, int32_t sourceOutputPort, UnityEngine_Animations_AnimationLayerMixerPlayable_o destination, int32_t destinationInputPort, const MethodInfo_22EFD60* method);
bool UnityEngine_Playables_PlayableGraph__Connect_AnimationClipPlayable__AnimationMixerPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Animations_AnimationClipPlayable_o source, int32_t sourceOutputPort, UnityEngine_Animations_AnimationMixerPlayable_o destination, int32_t destinationInputPort, const MethodInfo_22EFDF0* method);
bool UnityEngine_Playables_PlayableGraph__Connect_AnimationClipPlayable__Playable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Animations_AnimationClipPlayable_o source, int32_t sourceOutputPort, UnityEngine_Playables_Playable_o destination, int32_t destinationInputPort, const MethodInfo_22EFE80* method);
bool UnityEngine_Playables_PlayableGraph__Connect_AnimationMixerPlayable__AnimationLayerMixerPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Animations_AnimationMixerPlayable_o source, int32_t sourceOutputPort, UnityEngine_Animations_AnimationLayerMixerPlayable_o destination, int32_t destinationInputPort, const MethodInfo_22EFF10* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__AnimationLayerMixerPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Animations_AnimationLayerMixerPlayable_o destination, int32_t destinationInputPort, const MethodInfo_22EFFA0* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__AnimationMixerPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Animations_AnimationMixerPlayable_o destination, int32_t destinationInputPort, const MethodInfo_22F0030* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__AnimationMotionXToDeltaPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Animations_AnimationMotionXToDeltaPlayable_o destination, int32_t destinationInputPort, const MethodInfo_22F00C0* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__AnimationOffsetPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Animations_AnimationOffsetPlayable_o destination, int32_t destinationInputPort, const MethodInfo_22F0150* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__AnimationRemoveScalePlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Animations_AnimationRemoveScalePlayable_o destination, int32_t destinationInputPort, const MethodInfo_22F01E0* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__AudioMixerPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Audio_AudioMixerPlayable_o destination, int32_t destinationInputPort, const MethodInfo_22F0270* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__Playable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Playables_Playable_o destination, int32_t destinationInputPort, const MethodInfo_22F0300* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__ScriptPlayable_object__ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Playables_ScriptPlayable_object__o destination, int32_t destinationInputPort, const MethodInfo_22F0390* method);
bool UnityEngine_Playables_PlayableGraph__Connect_Playable__ScriptPlayable_TimeNotificationBehaviour__ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o source, int32_t sourceOutputPort, UnityEngine_Playables_ScriptPlayable_TimeNotificationBehaviour__o destination, int32_t destinationInputPort, const MethodInfo_22F0390* method);
void UnityEngine_Playables_PlayableGraph__Disconnect_AnimationLayerMixerPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Animations_AnimationLayerMixerPlayable_o input, int32_t inputPort, const MethodInfo_20EC480* method);
void UnityEngine_Playables_PlayableGraph__Disconnect_AnimationMixerPlayable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Animations_AnimationMixerPlayable_o input, int32_t inputPort, const MethodInfo_20EC4E0* method);
void UnityEngine_Playables_PlayableGraph__Disconnect_Playable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o input, int32_t inputPort, const MethodInfo_20EC540* method);
void UnityEngine_Playables_PlayableGraph__DestroyPlayable_Playable_ (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_Playable_o playable, const MethodInfo_20EC430* method);
void UnityEngine_Playables_PlayableGraph__Evaluate (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
UnityEngine_Playables_PlayableGraph_o UnityEngine_Playables_PlayableGraph__Create (const MethodInfo* method);
UnityEngine_Playables_PlayableGraph_o UnityEngine_Playables_PlayableGraph__Create (System_String_o* name, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Destroy (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__IsValid (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__IsPlaying (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Play (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Stop (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Evaluate (UnityEngine_Playables_PlayableGraph_o __this, float deltaTime, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__SetTimeUpdateMode (UnityEngine_Playables_PlayableGraph_o __this, int32_t value, const MethodInfo* method);
UnityEngine_IExposedPropertyTable_o* UnityEngine_Playables_PlayableGraph__GetResolver (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
int32_t UnityEngine_Playables_PlayableGraph__GetPlayableCount (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
int32_t UnityEngine_Playables_PlayableGraph__GetRootPlayableCount (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
UnityEngine_Playables_PlayableHandle_o UnityEngine_Playables_PlayableGraph__CreatePlayableHandle (UnityEngine_Playables_PlayableGraph_o __this, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__CreateScriptOutputInternal (UnityEngine_Playables_PlayableGraph_o __this, System_String_o* name, UnityEngine_Playables_PlayableOutputHandle_o* handle, const MethodInfo* method);
UnityEngine_Playables_PlayableHandle_o UnityEngine_Playables_PlayableGraph__GetRootPlayableInternal (UnityEngine_Playables_PlayableGraph_o __this, int32_t index, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__ConnectInternal (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_PlayableHandle_o source, int32_t sourceOutputPort, UnityEngine_Playables_PlayableHandle_o destination, int32_t destinationInputPort, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__DisconnectInternal (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_PlayableHandle_o playable, int32_t inputPort, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__DestroyPlayableInternal (UnityEngine_Playables_PlayableGraph_o __this, UnityEngine_Playables_PlayableHandle_o playable, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Create_Injected (System_String_o* name, UnityEngine_Playables_PlayableGraph_o* ret, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Destroy_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__IsValid_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__IsPlaying_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Play_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Stop_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__Evaluate_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, float deltaTime, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__SetTimeUpdateMode_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, int32_t value, const MethodInfo* method);
UnityEngine_IExposedPropertyTable_o* UnityEngine_Playables_PlayableGraph__GetResolver_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, const MethodInfo* method);
int32_t UnityEngine_Playables_PlayableGraph__GetPlayableCount_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, const MethodInfo* method);
int32_t UnityEngine_Playables_PlayableGraph__GetRootPlayableCount_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__CreatePlayableHandle_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, UnityEngine_Playables_PlayableHandle_o* ret, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__CreateScriptOutputInternal_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, System_String_o* name, UnityEngine_Playables_PlayableOutputHandle_o* handle, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__GetRootPlayableInternal_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, int32_t index, UnityEngine_Playables_PlayableHandle_o* ret, const MethodInfo* method);
bool UnityEngine_Playables_PlayableGraph__ConnectInternal_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, UnityEngine_Playables_PlayableHandle_o* source, int32_t sourceOutputPort, UnityEngine_Playables_PlayableHandle_o* destination, int32_t destinationInputPort, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__DisconnectInternal_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, UnityEngine_Playables_PlayableHandle_o* playable, int32_t inputPort, const MethodInfo* method);
void UnityEngine_Playables_PlayableGraph__DestroyPlayableInternal_Injected (UnityEngine_Playables_PlayableGraph_o* _unity_self, UnityEngine_Playables_PlayableHandle_o* playable, const MethodInfo* method);
