#pragma once

#include "il2cpp.h"

bool UnityEngine_Animator__get_hasRootMotion (UnityEngine_Animator_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_Animator__GetInteger (UnityEngine_Animator_o* __this, int32_t id, const MethodInfo* method_info);
void UnityEngine_Animator__SetInteger (UnityEngine_Animator_o* __this, System_String_o* name, int32_t value, const MethodInfo* method_info);
void UnityEngine_Animator__SetInteger (UnityEngine_Animator_o* __this, int32_t id, int32_t value, const MethodInfo* method_info);
void UnityEngine_Animator__SetTrigger (UnityEngine_Animator_o* __this, System_String_o* name, const MethodInfo* method_info);
void UnityEngine_Animator__ResetTrigger (UnityEngine_Animator_o* __this, System_String_o* name, const MethodInfo* method_info);
int32_t UnityEngine_Animator__get_layerCount (UnityEngine_Animator_o* __this, const MethodInfo* method_info);
System_String_o* UnityEngine_Animator__GetLayerName (UnityEngine_Animator_o* __this, int32_t layerIndex, const MethodInfo* method_info);
int32_t UnityEngine_Animator__GetLayerIndex (UnityEngine_Animator_o* __this, System_String_o* layerName, const MethodInfo* method_info);
void UnityEngine_Animator__SetLayerWeight (UnityEngine_Animator_o* __this, int32_t layerIndex, float weight, const MethodInfo* method_info);
void UnityEngine_Animator__GetAnimatorStateInfo (UnityEngine_Animator_o* __this, int32_t layerIndex, int32_t stateInfoIndex, UnityEngine_AnimatorStateInfo_o* info, const MethodInfo* method_info);
UnityEngine_AnimatorStateInfo_o UnityEngine_Animator__GetCurrentAnimatorStateInfo (UnityEngine_Animator_o* __this, int32_t layerIndex, const MethodInfo* method_info);
int32_t UnityEngine_Animator__GetAnimatorClipInfoCount (UnityEngine_Animator_o* __this, int32_t layerIndex, bool current, const MethodInfo* method_info);
int32_t UnityEngine_Animator__GetCurrentAnimatorClipInfoCount (UnityEngine_Animator_o* __this, int32_t layerIndex, const MethodInfo* method_info);
UnityEngine_AnimatorClipInfo_array* UnityEngine_Animator__GetCurrentAnimatorClipInfo (UnityEngine_Animator_o* __this, int32_t layerIndex, const MethodInfo* method_info);
void UnityEngine_Animator__set_speed (UnityEngine_Animator_o* __this, float value, const MethodInfo* method_info);
void UnityEngine_Animator__Play (UnityEngine_Animator_o* __this, System_String_o* stateName, int32_t layer, const MethodInfo* method_info);
void UnityEngine_Animator__Play (UnityEngine_Animator_o* __this, System_String_o* stateName, const MethodInfo* method_info);
void UnityEngine_Animator__Play (UnityEngine_Animator_o* __this, System_String_o* stateName, int32_t layer, float normalizedTime, const MethodInfo* method_info);
void UnityEngine_Animator__Play (UnityEngine_Animator_o* __this, int32_t stateNameHash, int32_t layer, float normalizedTime, const MethodInfo* method_info);
void UnityEngine_Animator__Play (UnityEngine_Animator_o* __this, int32_t stateNameHash, int32_t layer, const MethodInfo* method_info);
void UnityEngine_Animator__Play (UnityEngine_Animator_o* __this, int32_t stateNameHash, const MethodInfo* method_info);
int32_t UnityEngine_Animator__get_cullingMode (UnityEngine_Animator_o* __this, const MethodInfo* method_info);
void UnityEngine_Animator__set_cullingMode (UnityEngine_Animator_o* __this, int32_t value, const MethodInfo* method_info);
UnityEngine_RuntimeAnimatorController_o* UnityEngine_Animator__get_runtimeAnimatorController (UnityEngine_Animator_o* __this, const MethodInfo* method_info);
void UnityEngine_Animator__set_runtimeAnimatorController (UnityEngine_Animator_o* __this, UnityEngine_RuntimeAnimatorController_o* value, const MethodInfo* method_info);
bool UnityEngine_Animator__get_hasBoundPlayables (UnityEngine_Animator_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_Animator__StringToHash (System_String_o* name, const MethodInfo* method_info);
void UnityEngine_Animator__SetIntegerString (UnityEngine_Animator_o* __this, System_String_o* name, int32_t value, const MethodInfo* method_info);
void UnityEngine_Animator__SetIntegerID (UnityEngine_Animator_o* __this, int32_t id, int32_t value, const MethodInfo* method_info);
int32_t UnityEngine_Animator__GetIntegerID (UnityEngine_Animator_o* __this, int32_t id, const MethodInfo* method_info);
void UnityEngine_Animator__SetTriggerString (UnityEngine_Animator_o* __this, System_String_o* name, const MethodInfo* method_info);
void UnityEngine_Animator__ResetTriggerString (UnityEngine_Animator_o* __this, System_String_o* name, const MethodInfo* method_info);
void UnityEngine_Animator__Update (UnityEngine_Animator_o* __this, float deltaTime, const MethodInfo* method_info);
void UnityEngine_Animator__Rebind (UnityEngine_Animator_o* __this, const MethodInfo* method_info);
void UnityEngine_Animator__Rebind (UnityEngine_Animator_o* __this, bool writeDefaultValues, const MethodInfo* method_info);
void UnityEngine_Animator___ctor (UnityEngine_Animator_o* __this, const MethodInfo* method_info);
