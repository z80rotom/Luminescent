#pragma once

#include "il2cpp.h"

System_String_o* UnityEngine_Timeline_TimelineCreateUtilities__GenerateUniqueActorName (System_Collections_Generic_List_ScriptableObject__o* tracks, System_String_o* name, const MethodInfo* method_info);
void UnityEngine_Timeline_TimelineCreateUtilities__SaveAssetIntoObject (UnityEngine_Object_o* childAsset, UnityEngine_Object_o* masterAsset, const MethodInfo* method_info);
UnityEngine_AnimationClip_o* UnityEngine_Timeline_TimelineCreateUtilities__CreateAnimationClipForTrack (System_String_o* name, UnityEngine_Timeline_TrackAsset_o* track, bool isLegacy, const MethodInfo* method_info);
bool UnityEngine_Timeline_TimelineCreateUtilities__ValidateParentTrack (UnityEngine_Timeline_TrackAsset_o* parent, System_Type_o* childType, const MethodInfo* method_info);
