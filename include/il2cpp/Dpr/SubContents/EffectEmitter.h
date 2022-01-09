#pragma once

#include "il2cpp.h"

bool Dpr_SubContents_EffectEmitter__get_IsReady (Dpr_SubContents_EffectEmitter_o* __this, const MethodInfo* method_info);
void Dpr_SubContents_EffectEmitter__Initialize (Dpr_SubContents_EffectEmitter_o* __this, UnityEngine_Transform_o* fxParent, Dpr_SubContents_EmitEffectParam_array* loadEffectIDArray, const MethodInfo* method_info);
void Dpr_SubContents_EffectEmitter__OnFinalize (Dpr_SubContents_EffectEmitter_o* __this, const MethodInfo* method_info);
void Dpr_SubContents_EffectEmitter__LoadFx (Dpr_SubContents_EffectEmitter_o* __this, Dpr_SubContents_EmitEffectParam_o* param, UnityEngine_Transform_o* fxParent, System_Action_o* onCompletedLoad, const MethodInfo* method_info);
void Dpr_SubContents_EffectEmitter__OnCompleteLoad (Dpr_SubContents_EffectEmitter_o* __this, const MethodInfo* method_info);
Effect_EffectInstance_o* Dpr_SubContents_EffectEmitter__PlayFx (Dpr_SubContents_EffectEmitter_o* __this, int32_t fxID, UnityEngine_Vector3_o emitPos, System_Action_o* onComplete, const MethodInfo* method_info);
void Dpr_SubContents_EffectEmitter__StopFx (Dpr_SubContents_EffectEmitter_o* __this, int32_t fxID, float fadeTime, const MethodInfo* method_info);
void Dpr_SubContents_EffectEmitter___ctor (Dpr_SubContents_EffectEmitter_o* __this, const MethodInfo* method_info);
