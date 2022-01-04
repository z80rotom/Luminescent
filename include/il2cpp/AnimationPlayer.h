#pragma once

#include "il2cpp.h"

UnityEngine_AnimationClip_array* AnimationPlayer__get_clips (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_clips (AnimationPlayer_o* __this, UnityEngine_AnimationClip_array* value, const MethodInfo* method);
UnityEngine_AvatarMask_o* AnimationPlayer__get_avatarMask (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_avatarMask (AnimationPlayer_o* __this, UnityEngine_AvatarMask_o* value, const MethodInfo* method);
UnityEngine_AnimationClip_o* AnimationPlayer__get_layerClip (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_layerClip (AnimationPlayer_o* __this, UnityEngine_AnimationClip_o* value, const MethodInfo* method);
UnityEngine_AvatarMask_o* AnimationPlayer__get_additiveAvatarMask (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_additiveAvatarMask (AnimationPlayer_o* __this, UnityEngine_AvatarMask_o* value, const MethodInfo* method);
UnityEngine_AnimationClip_o* AnimationPlayer__get_additiveLayerClip (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_additiveLayerClip (AnimationPlayer_o* __this, UnityEngine_AnimationClip_o* value, const MethodInfo* method);
int32_t AnimationPlayer__get_currentIndex (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_currentIndex (AnimationPlayer_o* __this, int32_t value, const MethodInfo* method);
bool AnimationPlayer__get_forceLoop (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_forceLoop (AnimationPlayer_o* __this, bool value, const MethodInfo* method);
bool AnimationPlayer__get_forcePlay (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_forcePlay (AnimationPlayer_o* __this, bool value, const MethodInfo* method);
UnityEngine_Animations_AnimationClipPlayable_o AnimationPlayer__get_currentPlayable (AnimationPlayer_o* __this, const MethodInfo* method);
float AnimationPlayer__get_currentPlayingTime (AnimationPlayer_o* __this, const MethodInfo* method);
float AnimationPlayer__get_currentRemaingTime (AnimationPlayer_o* __this, const MethodInfo* method);
float AnimationPlayer__get_layerWeight (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_layerWeight (AnimationPlayer_o* __this, float value, const MethodInfo* method);
bool AnimationPlayer__get_IsValidCurrentPlayable (AnimationPlayer_o* __this, const MethodInfo* method);
bool AnimationPlayer__get_IsPlayingEnd (AnimationPlayer_o* __this, const MethodInfo* method);
bool AnimationPlayer__get_IsPlaying (AnimationPlayer_o* __this, const MethodInfo* method);
UnityEngine_Animations_AnimationClipPlayable_o AnimationPlayer__get_layerClipPlayable (AnimationPlayer_o* __this, const MethodInfo* method);
int32_t AnimationPlayer__get_cullingMode (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__set_cullingMode (AnimationPlayer_o* __this, int32_t value, const MethodInfo* method);
void AnimationPlayer__InitializePlayables (AnimationPlayer_o* __this, UnityEngine_Animator_o* animator, const MethodInfo* method);
void AnimationPlayer__Destroy (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__AdvanaceTime (AnimationPlayer_o* __this, float deltaTime, const MethodInfo* method);
void AnimationPlayer__Play (AnimationPlayer_o* __this, int32_t index, float duration, float startTime, const MethodInfo* method);
void AnimationPlayer__Stop (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__Resume (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__SetSpeed (AnimationPlayer_o* __this, float speed, const MethodInfo* method);
void AnimationPlayer__SetTimeUpdateMode (AnimationPlayer_o* __this, int32_t mode, const MethodInfo* method);
void AnimationPlayer__SetAdditiveLayerTime (AnimationPlayer_o* __this, float time, const MethodInfo* method);
void AnimationPlayer__Evalute (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__PlayFrame (AnimationPlayer_o* __this, int32_t index, float duration, float startFrame, bool forceplay, const MethodInfo* method);
void AnimationPlayer__SetAnimSpeed (AnimationPlayer_o* __this, float speed, const MethodInfo* method);
void AnimationPlayer__ResetAnimSpeed (AnimationPlayer_o* __this, const MethodInfo* method);
void AnimationPlayer__RePlay (AnimationPlayer_o* __this, float startFrame, const MethodInfo* method);
void AnimationPlayer___ctor (AnimationPlayer_o* __this, const MethodInfo* method);
UnityEngine_Animations_AnimationClipPlayable_o AnimationPlayer___InitializePlayables_b__64_0 (AnimationPlayer_o* __this, UnityEngine_AnimationClip_o* x, const MethodInfo* method);
