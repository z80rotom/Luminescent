#pragma once

#include "il2cpp.h"

void SessionManager__Init (SessionManager_o* __this, const MethodInfo* method);
void SessionManager__Clear (SessionManager_o* __this, const MethodInfo* method);
void SessionManager__SetCallBack (SessionManager_o* __this, const MethodInfo* method);
void SessionManager__Destroy (SessionManager_o* __this, const MethodInfo* method);
void SessionManager__StartSession (SessionManager_o* __this, Dpr_SubContents_MatchingParam_o param, const MethodInfo* method);
void SessionManager__OnReceivePacket (SessionManager_o* __this, INL1_PacketReader_o* pr, const MethodInfo* method);
void SessionManager__OnSessionEvent (SessionManager_o* __this, Dpr_NetworkUtils_SessionEventData_o data, const MethodInfo* method);
void SessionManager__OnFinishedSession (SessionManager_o* __this, const MethodInfo* method);
void SessionManager___ctor (SessionManager_o* __this, const MethodInfo* method);
void SessionManager___StartSession_b__8_0 (SessionManager_o* __this, Dpr_NetworkUtils_StartSessionResult_o result, const MethodInfo* method);
