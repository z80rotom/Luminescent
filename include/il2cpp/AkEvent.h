#pragma once

#include "il2cpp.h"

AK_Wwise_BaseType_o* AkEvent__get_WwiseType (AkEvent_o* __this, const MethodInfo* method);
void AkEvent__Start (AkEvent_o* __this, const MethodInfo* method);
void AkEvent__Callback (AkEvent_o* __this, Il2CppObject* in_cookie, int32_t in_type, AkCallbackInfo_o* in_info, const MethodInfo* method);
void AkEvent__HandleEvent (AkEvent_o* __this, UnityEngine_GameObject_o* in_gameObject, const MethodInfo* method);
void AkEvent__Stop (AkEvent_o* __this, int32_t _transitionDuration, const MethodInfo* method);
void AkEvent__Stop (AkEvent_o* __this, int32_t _transitionDuration, int32_t _curveInterpolation, const MethodInfo* method);
int32_t AkEvent__get_eventID (AkEvent_o* __this, const MethodInfo* method);
System_Byte_array* AkEvent__get_valueGuid (AkEvent_o* __this, const MethodInfo* method);
AkEventCallbackData_o* AkEvent__get_m_callbackData (AkEvent_o* __this, const MethodInfo* method);
void AkEvent___ctor (AkEvent_o* __this, const MethodInfo* method);
