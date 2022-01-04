#pragma once

#include "il2cpp.h"

void INL1_IlcaNetServerDelivery__Init (const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__MountStorageAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
System_Collections_IEnumerator_o* INL1_IlcaNetServerDelivery__MountStorageAsyncCore (INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
System_Collections_IEnumerator_o* INL1_IlcaNetServerDelivery__MountStorageAsyncCoreSub2 (const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__UnMountStorage (const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__ImmediateSyncRequestAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__ImmediateSyncRequestAsync (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, bool mount, const MethodInfo* method);
System_Collections_IEnumerator_o* INL1_IlcaNetServerDelivery__ImmediateSyncRequestAsyncCore (INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, bool mount, const MethodInfo* method);
int32_t INL1_IlcaNetServerDelivery__FileCountGet (uint32_t directoryNum, const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__OkurimonoIdFlagCheck (int32_t OkurimonoID, System_Byte_array* OkurimonoIdFlagArray256, const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__OkurimonoIdFlagSet (int32_t OkurimonoID, System_Byte_array** OkurimonoIdFlagArray256, const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__OkurimonoIdFlagInit (System_Byte_array** OkurimonoIdFlagArray256, const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__FileFlagCheck (uint8_t fileName, System_Byte_array* fileFlagArray, const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__FileFlagSet (uint8_t fileName, System_Byte_array** fileFlagArray, const MethodInfo* method);
System_Collections_Generic_List_byte__o* INL1_IlcaNetServerDelivery__FileListGetWithFlag (uint32_t directoryNum, System_Byte_array* fileFlagArray, const MethodInfo* method);
int32_t INL1_IlcaNetServerDelivery__FileCountNameArrayGet (uint32_t directoryNum, System_Byte_array* fileNameArray, const MethodInfo* method);
int64_t INL1_IlcaNetServerDelivery__FileSizeGet (uint32_t directoryNum, uint32_t fileNum, const MethodInfo* method);
int32_t INL1_IlcaNetServerDelivery__FileRead (uint32_t directoryNum, uint32_t fileNum, System_Byte_array* data, const MethodInfo* method);
bool INL1_IlcaNetServerDelivery__FileReadAsync (UnityEngine_MonoBehaviour_o* callobj, uint32_t directoryNum, uint32_t fileNum, System_Byte_array* data, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
System_Collections_IEnumerator_o* INL1_IlcaNetServerDelivery__FileReadAsyncCore (uint32_t directoryNum, uint32_t fileNum, System_Byte_array* data, INL1_IlcaNetServer_IlcaNetServerAsyncCallback_o* callback, const MethodInfo* method);
void INL1_IlcaNetServerDelivery__FileReadWorkerThread (const MethodInfo* method);
void INL1_IlcaNetServerDelivery___ctor (INL1_IlcaNetServerDelivery_o* __this, const MethodInfo* method);
void INL1_IlcaNetServerDelivery___cctor (const MethodInfo* method);
