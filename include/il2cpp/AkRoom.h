#pragma once

#include "il2cpp.h"

uint64_t AkRoom__GetAkRoomID (AkRoom_o* room, const MethodInfo* method_info);
int32_t AkRoom__get_RoomCount (const MethodInfo* method_info);
void AkRoom__set_RoomCount (int32_t value, const MethodInfo* method_info);
bool AkRoom__TryEnter (AkRoom_o* __this, AkRoomAwareObject_o* roomAwareObject, const MethodInfo* method_info);
void AkRoom__Exit (AkRoom_o* __this, AkRoomAwareObject_o* roomAwareObject, const MethodInfo* method_info);
uint64_t AkRoom__GetID (AkRoom_o* __this, const MethodInfo* method_info);
void AkRoom__OnEnable (AkRoom_o* __this, const MethodInfo* method_info);
void AkRoom__OnDisable (AkRoom_o* __this, const MethodInfo* method_info);
void AkRoom__OnTriggerEnter (AkRoom_o* __this, UnityEngine_Collider_o* in_other, const MethodInfo* method_info);
void AkRoom__OnTriggerExit (AkRoom_o* __this, UnityEngine_Collider_o* in_other, const MethodInfo* method_info);
void AkRoom__HandleEvent (AkRoom_o* __this, UnityEngine_GameObject_o* in_gameObject, const MethodInfo* method_info);
void AkRoom___ctor (AkRoom_o* __this, const MethodInfo* method_info);
void AkRoom___cctor (const MethodInfo* method_info);
