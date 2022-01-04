#pragma once

#include "il2cpp.h"

void DG_Tweening_EaseFunction___ctor (DG_Tweening_EaseFunction_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
float DG_Tweening_EaseFunction__Invoke (DG_Tweening_EaseFunction_o* __this, float time, float duration, float overshootOrAmplitude, float period, const MethodInfo* method);
System_IAsyncResult_o* DG_Tweening_EaseFunction__BeginInvoke (DG_Tweening_EaseFunction_o* __this, float time, float duration, float overshootOrAmplitude, float period, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
float DG_Tweening_EaseFunction__EndInvoke (DG_Tweening_EaseFunction_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
