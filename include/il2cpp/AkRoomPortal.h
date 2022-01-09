#pragma once

#include "il2cpp.h"

bool AkRoomPortal__get_portalActive (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__set_portalActive (AkRoomPortal_o* __this, bool value, const MethodInfo* method_info);
uint64_t AkRoomPortal__get_frontRoomID (AkRoomPortal_o* __this, const MethodInfo* method_info);
uint64_t AkRoomPortal__get_backRoomID (AkRoomPortal_o* __this, const MethodInfo* method_info);
AkRoom_o* AkRoomPortal__GetRoom (AkRoomPortal_o* __this, int32_t index, const MethodInfo* method_info);
AkRoom_o* AkRoomPortal__get_frontRoom (AkRoomPortal_o* __this, const MethodInfo* method_info);
AkRoom_o* AkRoomPortal__get_backRoom (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__SetRoomPortal (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__UpdateRoomPortal (AkRoomPortal_o* __this, const MethodInfo* method_info);
bool AkRoomPortal__Overlaps (AkRoomPortal_o* __this, AkRoom_o* room, const MethodInfo* method_info);
bool AkRoomPortal__get_IsValid (AkRoomPortal_o* __this, const MethodInfo* method_info);
uint64_t AkRoomPortal__GetID (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__Awake (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__Start (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__HandleEvent (AkRoomPortal_o* __this, UnityEngine_GameObject_o* in_gameObject, const MethodInfo* method_info);
void AkRoomPortal__ClosePortal (AkRoomPortal_o* __this, UnityEngine_GameObject_o* in_gameObject, const MethodInfo* method_info);
void AkRoomPortal__OnDestroy (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__OnEnable (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__OnDisable (AkRoomPortal_o* __this, const MethodInfo* method_info);
bool AkRoomPortal__IsRoomActive (AkRoomPortal_o* __this, AkRoom_o* in_room, const MethodInfo* method_info);
void AkRoomPortal__Open (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__Close (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__FindOverlappingRooms (AkRoomPortal_o* __this, AkRoom_PriorityList_array* roomList, const MethodInfo* method_info);
void AkRoomPortal__FillRoomList (AkRoomPortal_o* __this, UnityEngine_Vector3_o position, AkRoom_PriorityList_o* list, const MethodInfo* method_info);
void AkRoomPortal__UpdateRooms (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__SetRoom (AkRoomPortal_o* __this, int32_t in_roomIndex, AkRoom_o* in_room, const MethodInfo* method_info);
void AkRoomPortal__SetFrontRoom (AkRoomPortal_o* __this, AkRoom_o* room, const MethodInfo* method_info);
void AkRoomPortal__SetBackRoom (AkRoomPortal_o* __this, AkRoom_o* room, const MethodInfo* method_info);
void AkRoomPortal__UpdateSoundEngineRoomIDs (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal__UpdateOverlappingRooms (AkRoomPortal_o* __this, const MethodInfo* method_info);
void AkRoomPortal___ctor (AkRoomPortal_o* __this, const MethodInfo* method_info);
