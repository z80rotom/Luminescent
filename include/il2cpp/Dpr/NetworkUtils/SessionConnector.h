#pragma once

#include "il2cpp.h"

void Dpr_NetworkUtils_SessionConnector__Initialize (Dpr_NetworkUtils_SessionConnector_o* __this, UnityEngine_MonoBehaviour_o* callObj, System_Action_SessionEventData__o* onSessionEvent, System_Action_SessionErrorType__o* onSessionError, System_Action_o* onFinishedSession, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnDestroy (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__ClearNetSetting (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__get_IsConnect (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__get_IsDisconnect (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__get_IsRunning (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
int32_t Dpr_NetworkUtils_SessionConnector__get_SessionState (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__get_IsSessionWait (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
int32_t Dpr_NetworkUtils_SessionConnector__get_NetworkType (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__ResetParam (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__SetCallOnFinishedSessionFlag (Dpr_NetworkUtils_SessionConnector_o* __this, bool flag, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__StartSession (Dpr_NetworkUtils_SessionConnector_o* __this, Dpr_NetworkUtils_NetworkParam_o* networkParam, System_Action_StartSessionResult__o* onCompleteStartSession, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__CanPerformStartSession (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__JoinRandomSession (Dpr_NetworkUtils_SessionConnector_o* __this, System_Action_StartSessionResult__o* onSessionEventCallback, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__CheckJoinSession (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__SessionRestartRequestAsync (Dpr_NetworkUtils_SessionConnector_o* __this, System_UInt32_array* attributeValueArray, System_UInt32_array* attributeMinValueArray, System_UInt32_array* attributeMaxValueArray, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__SetSessionAttribute (Dpr_NetworkUtils_SessionConnector_o* __this, System_UInt32_array* attributeValueArray, System_UInt32_array* attributeMinValueArray, System_UInt32_array* attributeMaxValueArray, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__CheckValidAttributeArray (Dpr_NetworkUtils_SessionConnector_o* __this, System_UInt32_array* value, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__LeaveSession (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__FinishSession (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
uint32_t Dpr_NetworkUtils_SessionConnector__GetSessionListSize (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__RefreshSessionList (Dpr_NetworkUtils_SessionConnector_o* __this, System_Action_bool__o* onCompleteSearch, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_NetworkUtils_SessionConnector__IE_SearchSessionList (Dpr_NetworkUtils_SessionConnector_o* __this, System_Action_bool__o* onCompleteSearch, const MethodInfo* method);
INL1_IlcaNetSessionProperty_o* Dpr_NetworkUtils_SessionConnector__GetSessionProperty (Dpr_NetworkUtils_SessionConnector_o* __this, uint32_t index, const MethodInfo* method);
INL1_IlcaNetSessionProperty_array* Dpr_NetworkUtils_SessionConnector__GetAllSessionProperty (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__CheckSessionStateWait (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__CheckProcessing (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
int32_t Dpr_NetworkUtils_SessionConnector__SendTo (Dpr_NetworkUtils_SessionConnector_o* __this, INL1_PacketWriter_o* pw, int32_t sendType, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method);
int32_t Dpr_NetworkUtils_SessionConnector__SendAll (Dpr_NetworkUtils_SessionConnector_o* __this, INL1_PacketWriter_o* pw, int32_t sendType, int32_t transportType, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnUpdate (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnChangeSessionState (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnChangeState_SS_MatchingWait (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnChangeState_SS_GamingFront (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnChangeState_SS_Gaming (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnChangeState_SS_GamingLeave (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnChangeState_SS_GamingError (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnChangeState_SS_Crash (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnChangeState_SS_Final (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnLateUpdate (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__CallCompleteStartSession (Dpr_NetworkUtils_SessionConnector_o* __this, bool isSuccess, int32_t errorType, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnSessionEventCallback (Dpr_NetworkUtils_SessionConnector_o* __this, int32_t callbackType, int32_t stationIndex, const MethodInfo* method);
bool Dpr_NetworkUtils_SessionConnector__CheckMySessionEvent (Dpr_NetworkUtils_SessionConnector_o* __this, int32_t statinIndex, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector__OnSessionFinalCallback (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
INL1_IlcaNetTransport_o* Dpr_NetworkUtils_SessionConnector__GetTransport (Dpr_NetworkUtils_SessionConnector_o* __this, int32_t transportType, int32_t _stationIndex, const MethodInfo* method);
void Dpr_NetworkUtils_SessionConnector___ctor (Dpr_NetworkUtils_SessionConnector_o* __this, const MethodInfo* method);
