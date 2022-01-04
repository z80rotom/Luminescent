#pragma once

#include "il2cpp.h"

void RecodeMatching__Init (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__Open (RecodeMatching_o* __this, int32_t otherStationIndex, System_Action_o* onClose, const MethodInfo* method);
void RecodeMatching__ForceClose (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__Close (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__CloseFlow (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__OnUpdate (RecodeMatching_o* __this, float deltaTime, const MethodInfo* method);
void RecodeMatching__LeaveMine (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__LeaveOther (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__OpenMessageWindow (RecodeMatching_o* __this, Dpr_MsgWindow_MsgWindowParam_o* messageParam, const MethodInfo* method);
void RecodeMatching__ShowCloseMessage (RecodeMatching_o* __this, bool cancel, const MethodInfo* method);
void RecodeMatching__StartRecodeTrade (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__WaitMinTime (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__AddRecodeMatching (RecodeMatching_o* __this, int32_t index, DPData_RANDOM_SEED_o groupData, DPData_RECORD_o recodeData, DPData_RECORD_HEAD_o recodeHeadData, TvWork_RecordData_o* tvRecord, const MethodInfo* method);
void RecodeMatching__StartRecodeTradeFlow (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__ApplyTvRecode (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__RecodeTradeEnd (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__ReceiveData (RecodeMatching_o* __this, Dpr_NetworkUtils_INetData_o* netData, const MethodInfo* method);
void RecodeMatching__ReceiveRecodeData (RecodeMatching_o* __this, Dpr_NetworkUtils_NetDataRecodeData_o* data, const MethodInfo* method);
void RecodeMatching__SendRecodeData (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__PlaySE (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching__StopSE (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching___ctor (RecodeMatching_o* __this, const MethodInfo* method);
void RecodeMatching___ApplyTvRecode_g__SetTvTopic_31_0 (int32_t topicData, TvWork_RecordData_o* recordData, RecodeMatching___c__DisplayClass31_0_o* , const MethodInfo* method);
