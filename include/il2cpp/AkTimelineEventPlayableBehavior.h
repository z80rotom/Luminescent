#pragma once

#include "il2cpp.h"

void AkTimelineEventPlayableBehavior__CallbackHandler (AkTimelineEventPlayableBehavior_o* __this, Il2CppObject* in_cookie, int32_t in_type, AkCallbackInfo_o* in_info, const MethodInfo* method);
bool AkTimelineEventPlayableBehavior__IsScrubbing (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__PrepareFrame (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__OnBehaviourPlay (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__OnBehaviourPause (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__ProcessFrame (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, Il2CppObject* playerData, const MethodInfo* method);
bool AkTimelineEventPlayableBehavior__ShouldPlay (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__CheckForFadeInFadeOut (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__CheckForFadeOut (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, double currentClipTime, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__TriggerFadeIn (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__TriggerFadeOut (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__StopEvent (AkTimelineEventPlayableBehavior_o* __this, int32_t transition, const MethodInfo* method);
bool AkTimelineEventPlayableBehavior__PostEvent (AkTimelineEventPlayableBehavior_o* __this, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__PlayEvent (AkTimelineEventPlayableBehavior_o* __this, const MethodInfo* method);
void AkTimelineEventPlayableBehavior__RetriggerEvent (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
float AkTimelineEventPlayableBehavior__GetProportionalTime (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
float AkTimelineEventPlayableBehavior__SeekToTime (AkTimelineEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkTimelineEventPlayableBehavior___ctor (AkTimelineEventPlayableBehavior_o* __this, const MethodInfo* method);
