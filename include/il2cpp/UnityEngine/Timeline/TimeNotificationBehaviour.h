#pragma once

#include "il2cpp.h"

void UnityEngine_Timeline_TimeNotificationBehaviour__set_timeSource (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, UnityEngine_Playables_Playable_o value, const MethodInfo* method);
UnityEngine_Playables_ScriptPlayable_TimeNotificationBehaviour__o UnityEngine_Timeline_TimeNotificationBehaviour__Create (UnityEngine_Playables_PlayableGraph_o graph, double duration, int32_t loopMode, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__AddNotification (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, double time, UnityEngine_Playables_INotification_o* payload, int16_t flags, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__OnGraphStart (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__OnBehaviourPause (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__PrepareFrame (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__SortNotifications (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, const MethodInfo* method);
bool UnityEngine_Timeline_TimeNotificationBehaviour__CanRestoreNotification (UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntry_o e, UnityEngine_Playables_FrameData_o info, double currentTime, double previousTime, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__TriggerNotificationsInRange (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, double start, double end, UnityEngine_Playables_FrameData_o info, UnityEngine_Playables_Playable_o playable, bool checkState, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__SyncDurationWithExternalSource (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, UnityEngine_Playables_Playable_o playable, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__Trigger_internal (UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_PlayableOutput_o output, UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntry_o* e, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour__Restore_internal (UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntry_o* e, const MethodInfo* method);
void UnityEngine_Timeline_TimeNotificationBehaviour___ctor (UnityEngine_Timeline_TimeNotificationBehaviour_o* __this, const MethodInfo* method);
