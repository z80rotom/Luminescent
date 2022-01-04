#pragma once

#include "il2cpp.h"

void INL1_IlcaNetBase__Init (int32_t version, const MethodInfo* method);
void INL1_IlcaNetBase__CallObjSet (UnityEngine_MonoBehaviour_o* callobj, const MethodInfo* method);
void INL1_IlcaNetBase__EmergencyCall (PiaPlugin_Result_o result, const MethodInfo* method);
void INL1_IlcaNetBase__EmergencyInit (const MethodInfo* method);
bool INL1_IlcaNetBase__EmergencyCheck (const MethodInfo* method);
void INL1_IlcaNetBase__EmergencyFinal (const MethodInfo* method);
bool INL1_IlcaNetBase__IsPlatformLibraryInitialized (const MethodInfo* method);
bool INL1_IlcaNetBase__IsNetSessionInitialized (const MethodInfo* method);
bool INL1_IlcaNetBase__IsNetStationInitialized (const MethodInfo* method);
void INL1_IlcaNetBase__OnDestroy (const MethodInfo* method);
uint32_t INL1_IlcaNetBase__MemoryUsage (const MethodInfo* method);
void INL1_IlcaNetBase__NonBlockWorkerThreadUse (bool flag, const MethodInfo* method);
void INL1_IlcaNetBase__RandomNumLocalFuncSet (INL1_IlcaNetBase_IlcaNetUserRandomNumFunc_o* func, const MethodInfo* method);
uint16_t INL1_IlcaNetBase__RandomNumLocal (const MethodInfo* method);
void INL1_IlcaNetBase__ErrorViewerAsycnSet (bool flag, const MethodInfo* method);
void INL1_IlcaNetBase__ErrorViewerDispCancel (bool flag, const MethodInfo* method);
PiaPlugin_Result_o INL1_IlcaNetBase__PlatformInitialize (const MethodInfo* method);
PiaPlugin_Result_o INL1_IlcaNetBase__PlatformInitialize2 (const MethodInfo* method);
void INL1_IlcaNetBase__ErrorViewer (PiaPlugin_Result_o result, const MethodInfo* method);
void INL1_IlcaNetBase__ErrorViewer (nn_Result_o nnRes, const MethodInfo* method);
void INL1_IlcaNetBase__ErrorViewerWorker (const MethodInfo* method);
bool INL1_IlcaNetBase__LastErrorViewerAppletGet (const MethodInfo* method);
void INL1_IlcaNetBase__LastErrorViewerAppletSet (bool flag, const MethodInfo* method);
bool INL1_IlcaNetBase__ErrorViewerOriginal (uint32_t code, System_String_o* dialog, System_String_o* screen, System_String_o* lang, const MethodInfo* method);
void INL1_IlcaNetBase__DisplayErrorAppletWorkerThread (const MethodInfo* method);
int32_t INL1_IlcaNetBase__GeneralNexInitialize (NexPlugin_AsyncResultCB_o* func, const MethodInfo* method);
int32_t INL1_IlcaNetBase__GeneralNexInitialize2 (NexPlugin_AsyncResultCB_o* func, const MethodInfo* method);
void INL1_IlcaNetBase__GeneralNexInitialize2Callback (NexPlugin_AsyncResult_o* rsul, const MethodInfo* method);
bool INL1_IlcaNetBase__IsNexServerConnected (const MethodInfo* method);
void INL1_IlcaNetBase__GeneraNexTerminateImmediatelySet (const MethodInfo* method);
void INL1_IlcaNetBase__DebugLog (System_String_o* msg, const MethodInfo* method);
void INL1_IlcaNetBase___ctor (INL1_IlcaNetBase_o* __this, const MethodInfo* method);
void INL1_IlcaNetBase___cctor (const MethodInfo* method);
