#pragma once

#include "il2cpp.h"

void AkAuxSendValue___ctor (AkAuxSendValue_o* __this, intptr_t cPtr, bool cMemoryOwn, const MethodInfo* method);
intptr_t AkAuxSendValue__getCPtr (AkAuxSendValue_o* obj, const MethodInfo* method);
void AkAuxSendValue__setCPtr (AkAuxSendValue_o* __this, intptr_t cPtr, const MethodInfo* method);
void AkAuxSendValue__Finalize (AkAuxSendValue_o* __this, const MethodInfo* method);
void AkAuxSendValue__Dispose (AkAuxSendValue_o* __this, const MethodInfo* method);
void AkAuxSendValue__set_listenerID (AkAuxSendValue_o* __this, uint64_t value, const MethodInfo* method);
uint64_t AkAuxSendValue__get_listenerID (AkAuxSendValue_o* __this, const MethodInfo* method);
void AkAuxSendValue__set_auxBusID (AkAuxSendValue_o* __this, uint32_t value, const MethodInfo* method);
uint32_t AkAuxSendValue__get_auxBusID (AkAuxSendValue_o* __this, const MethodInfo* method);
void AkAuxSendValue__set_fControlValue (AkAuxSendValue_o* __this, float value, const MethodInfo* method);
float AkAuxSendValue__get_fControlValue (AkAuxSendValue_o* __this, const MethodInfo* method);
void AkAuxSendValue__Set (AkAuxSendValue_o* __this, UnityEngine_GameObject_o* listener, uint32_t id, float value, const MethodInfo* method);
bool AkAuxSendValue__IsSame (AkAuxSendValue_o* __this, UnityEngine_GameObject_o* listener, uint32_t id, const MethodInfo* method);
int32_t AkAuxSendValue__GetSizeOf (const MethodInfo* method);
