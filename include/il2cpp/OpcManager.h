#pragma once

#include "il2cpp.h"

void OpcManager__set__DataTable (OpcManager_o* __this, XLSXContent_UnionCharacterTable_SheetSheet1_array* value, const MethodInfo* method_info);
XLSXContent_UnionCharacterTable_SheetSheet1_array* OpcManager__get__DataTable (OpcManager_o* __this, const MethodInfo* method_info);
XLSXContent_UnionNpcColorTable_SheetSheet1_array* OpcManager__get__ColorDataTable (OpcManager_o* __this, const MethodInfo* method_info);
void OpcManager__set__ColorDataTable (OpcManager_o* __this, XLSXContent_UnionNpcColorTable_SheetSheet1_array* value, const MethodInfo* method_info);
int32_t OpcManager__get_characterCreateCount (OpcManager_o* __this, const MethodInfo* method_info);
void OpcManager__set_characterCreateCount (OpcManager_o* __this, int32_t value, const MethodInfo* method_info);
void OpcManager__Init (OpcManager_o* __this, const MethodInfo* method_info);
void OpcManager__Destroy (OpcManager_o* __this, const MethodInfo* method_info);
void OpcManager__SetDataTable (OpcManager_o* __this, XLSXContent_UnionCharacterTable_SheetSheet1_array* table, const MethodInfo* method_info);
void OpcManager__SetNpcColorDataTable (OpcManager_o* __this, XLSXContent_UnionNpcColorTable_SheetSheet1_array* table, const MethodInfo* method_info);
bool OpcManager__IsOverCreateCount (OpcManager_o* __this, const MethodInfo* method_info);
void OpcManager__SetRequestNetDataCallBack (OpcManager_o* __this, System_Action_byte__o* RequestNetData, const MethodInfo* method_info);
void OpcManager__SetNetData (OpcManager_o* __this, Dpr_NetworkUtils_INetData_o* netData, const MethodInfo* method_info);
OpcManager_CharaData_o OpcManager__CreateCharaData (OpcManager_o* __this, Dpr_NetworkUtils_ANetData_JoinData__o* netJoinData, const MethodInfo* method_info);
OpcController_o* OpcManager__GetOpc (OpcManager_o* __this, int32_t id, const MethodInfo* method_info);
int32_t OpcManager__GetSexId (OpcManager_o* __this, int32_t id, const MethodInfo* method_info);
OpcManager_CharaData_o OpcManager__GetCharaData (OpcManager_o* __this, int32_t id, const MethodInfo* method_info);
int32_t OpcManager__GetNpcColorId (OpcManager_o* __this, int32_t avaterId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* OpcManager__OpLoadCharacter (OpcManager_o* __this, System_String_o* path, SmartPoint_AssetAssistant_RequestEventCallback_o* callback, const MethodInfo* method_info);
void OpcManager__RemoveCharacter (OpcManager_o* __this, int32_t stationIndex, bool isGameObjectDestroy, const MethodInfo* method_info);
void OpcManager__RemoveAllCharacter (OpcManager_o* __this, const MethodInfo* method_info);
void OpcManager__SetCopyOpcCharaController (OpcManager_o* __this, System_Collections_Generic_List_OpcController__o* opcCharacterControllers, const MethodInfo* method_info);
System_Collections_Generic_List_OpcController__o* OpcManager__GetCopyOpcCharaController (OpcManager_o* __this, const MethodInfo* method_info);
void OpcManager__ChangeOpcState (OpcManager_o* __this, int32_t state, const MethodInfo* method_info);
void OpcManager__CreateEmoticon (OpcManager_o* __this, Dpr_NetworkUtils_NetEmotionData_o* data, const MethodInfo* method_info);
System_Collections_Generic_List_OpcController__o* OpcManager__GetOpcControllerList (OpcManager_o* __this, const MethodInfo* method_info);
void OpcManager__TargetOpcTalk (OpcManager_o* __this, int32_t targetIndex, const MethodInfo* method_info);
void OpcManager__AddPosition (OpcManager_o* __this, int32_t index, UnityEngine_Vector2_o pos, float rotY, const MethodInfo* method_info);
int32_t OpcManager__GetOpcSexId (OpcManager_o* __this, int32_t avaterId, const MethodInfo* method_info);
void OpcManager___ctor (OpcManager_o* __this, const MethodInfo* method_info);
