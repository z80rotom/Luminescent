#pragma once

#include "il2cpp.h"

void AkMIDIPostArray___ctor (AkMIDIPostArray_o* __this, int32_t size, const MethodInfo* method);
AkMIDIPost_o* AkMIDIPostArray__get_Item (AkMIDIPostArray_o* __this, int32_t index, const MethodInfo* method);
void AkMIDIPostArray__set_Item (AkMIDIPostArray_o* __this, int32_t index, AkMIDIPost_o* value, const MethodInfo* method);
void AkMIDIPostArray__Finalize (AkMIDIPostArray_o* __this, const MethodInfo* method);
void AkMIDIPostArray__PostOnEvent (AkMIDIPostArray_o* __this, uint32_t in_eventID, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void AkMIDIPostArray__PostOnEvent (AkMIDIPostArray_o* __this, uint32_t in_eventID, UnityEngine_GameObject_o* gameObject, int32_t count, const MethodInfo* method);
intptr_t AkMIDIPostArray__GetBuffer (AkMIDIPostArray_o* __this, const MethodInfo* method);
int32_t AkMIDIPostArray__Count (AkMIDIPostArray_o* __this, const MethodInfo* method);
intptr_t AkMIDIPostArray__GetObjectPtr (AkMIDIPostArray_o* __this, int32_t index, const MethodInfo* method);
