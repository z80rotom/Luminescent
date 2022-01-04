#pragma once

#include "il2cpp.h"

void AkEventPlayableBehavior__CallbackHandler (AkEventPlayableBehavior_o* __this, Il2CppObject* in_cookie, int32_t in_type, AkCallbackInfo_o* in_info, const MethodInfo* method);
bool AkEventPlayableBehavior__IsScrubbing (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void AkEventPlayableBehavior__PrepareFrame (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void AkEventPlayableBehavior__OnBehaviourPlay (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void AkEventPlayableBehavior__OnBehaviourPause (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void AkEventPlayableBehavior__ProcessFrame (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, Il2CppObject* playerData, const MethodInfo* method);
bool AkEventPlayableBehavior__ShouldPlay (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkEventPlayableBehavior__CheckForFadeInFadeOut (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkEventPlayableBehavior__CheckForFadeOut (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, double currentClipTime, const MethodInfo* method);
void AkEventPlayableBehavior__TriggerFadeIn (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkEventPlayableBehavior__TriggerFadeOut (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkEventPlayableBehavior__StopEvent (AkEventPlayableBehavior_o* __this, int32_t transition, const MethodInfo* method);
bool AkEventPlayableBehavior__PostEvent (AkEventPlayableBehavior_o* __this, const MethodInfo* method);
void AkEventPlayableBehavior__PlayEvent (AkEventPlayableBehavior_o* __this, const MethodInfo* method);
void AkEventPlayableBehavior__RetriggerEvent (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
float AkEventPlayableBehavior__GetProportionalTime (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
float AkEventPlayableBehavior__SeekToTime (AkEventPlayableBehavior_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void AkEventPlayableBehavior___ctor (AkEventPlayableBehavior_o* __this, const MethodInfo* method);
