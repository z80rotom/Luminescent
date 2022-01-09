#pragma once

#include "il2cpp.h"

WwiseObjectReference_o* AK_Wwise_Event__get_ObjectReference (AK_Wwise_Event_o* __this, const MethodInfo* method_info);
void AK_Wwise_Event__set_ObjectReference (AK_Wwise_Event_o* __this, WwiseObjectReference_o* value, const MethodInfo* method_info);
int32_t AK_Wwise_Event__get_WwiseObjectType (AK_Wwise_Event_o* __this, const MethodInfo* method_info);
void AK_Wwise_Event__VerifyPlayingID (AK_Wwise_Event_o* __this, uint32_t playingId, const MethodInfo* method_info);
uint32_t AK_Wwise_Event__Post (AK_Wwise_Event_o* __this, UnityEngine_GameObject_o* gameObject, const MethodInfo* method_info);
uint32_t AK_Wwise_Event__Post (AK_Wwise_Event_o* __this, UnityEngine_GameObject_o* gameObject, AK_Wwise_CallbackFlags_o* flags, AkCallbackManager_EventCallback_o* callback, Il2CppObject* cookie, const MethodInfo* method_info);
uint32_t AK_Wwise_Event__Post (AK_Wwise_Event_o* __this, UnityEngine_GameObject_o* gameObject, uint32_t flags, AkCallbackManager_EventCallback_o* callback, Il2CppObject* cookie, const MethodInfo* method_info);
void AK_Wwise_Event__Stop (AK_Wwise_Event_o* __this, UnityEngine_GameObject_o* gameObject, int32_t transitionDuration, int32_t curveInterpolation, const MethodInfo* method_info);
void AK_Wwise_Event__ExecuteAction (AK_Wwise_Event_o* __this, UnityEngine_GameObject_o* gameObject, int32_t actionOnEventType, int32_t transitionDuration, int32_t curveInterpolation, const MethodInfo* method_info);
void AK_Wwise_Event__PostMIDI (AK_Wwise_Event_o* __this, UnityEngine_GameObject_o* gameObject, AkMIDIPostArray_o* array, const MethodInfo* method_info);
void AK_Wwise_Event__PostMIDI (AK_Wwise_Event_o* __this, UnityEngine_GameObject_o* gameObject, AkMIDIPostArray_o* array, int32_t count, const MethodInfo* method_info);
void AK_Wwise_Event__StopMIDI (AK_Wwise_Event_o* __this, UnityEngine_GameObject_o* gameObject, const MethodInfo* method_info);
void AK_Wwise_Event__StopMIDI (AK_Wwise_Event_o* __this, const MethodInfo* method_info);
void AK_Wwise_Event___ctor (AK_Wwise_Event_o* __this, const MethodInfo* method_info);
