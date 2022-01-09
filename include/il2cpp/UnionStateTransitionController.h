#pragma once

#include "il2cpp.h"

UnionSystemController_o* UnionStateTransitionController__get_systemController (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__set_systemController (UnionStateTransitionController_o* __this, UnionSystemController_o* value, const MethodInfo* method_info);
void UnionStateTransitionController___ctor (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__MyUpdate (UnionStateTransitionController_o* __this, float deltaTime, const MethodInfo* method_info);
void UnionStateTransitionController__Clear (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__SetCallback (UnionStateTransitionController_o* __this, System_Action_o* closeWindow, System_Action_o* initPlayerState, System_Action_o* sendTransitionAfterFunc, System_Action_o* startRecodeTradeFunc, const MethodInfo* method_info);
void UnionStateTransitionController__SetIsTransitionAfter (UnionStateTransitionController_o* __this, System_Action_bool__o* func, const MethodInfo* method_info);
void UnionStateTransitionController__RemoveCallback (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__SetTradeManager (UnionStateTransitionController_o* __this, UnionTradeManager_o* manager, const MethodInfo* method_info);
void UnionStateTransitionController__SetBattleMatchingManager (UnionStateTransitionController_o* __this, BattleMatchingManager_o* manager, const MethodInfo* method_info);
void UnionStateTransitionController__SetTransitionState (UnionStateTransitionController_o* __this, int32_t onlineState, const MethodInfo* method_info);
void UnionStateTransitionController__SetIsRecruiment (UnionStateTransitionController_o* __this, bool flag, const MethodInfo* method_info);
void UnionStateTransitionController__SetStanbyWaitDataList (UnionStateTransitionController_o* __this, System_Collections_Generic_List_UnionMatchWaitData__o* unionMatchWaitDatas, const MethodInfo* method_info);
void UnionStateTransitionController__AddStanbyData (UnionStateTransitionController_o* __this, Dpr_BattleMatching_UnionMatchWaitData_o* data, const MethodInfo* method_info);
int32_t UnionStateTransitionController__GetStationIndex (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__StartFadeOut (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__StartFadeIn (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__ResetBattleMachingReceiveData (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__TransitionBattle (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__TransitionTradePoke (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__TransitionMixRecode (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__TransitionShowTrainerCard (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__TransitionTradeBallDeco (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__SwitchTransition (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__SendTranerData (UnionStateTransitionController_o* __this, int32_t index, const MethodInfo* method_info);
void UnionStateTransitionController__SendOpcStateData (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__CheckSendIsMatchWait (UnionStateTransitionController_o* __this, int32_t state, const MethodInfo* method_info);
void UnionStateTransitionController__CreateUIRecodeMatching (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__ReceiveRecodeData (UnionStateTransitionController_o* __this, Dpr_NetworkUtils_INetData_o* netData, const MethodInfo* method_info);
void UnionStateTransitionController__RecodeLeaveMine (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__RecodeLeaveOther (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__InitRecodeData (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__RecodeForceClose (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__CreateUIBallDecoMatching (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__ReceiveBallDecoData (UnionStateTransitionController_o* __this, Dpr_NetworkUtils_INetData_o* netData, const MethodInfo* method_info);
void UnionStateTransitionController__BallDecoLeaveMine (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__BallDecoLeaveOther (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__InitBallDecoData (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController__BallDecoForceClose (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
bool UnionStateTransitionController__GetIsFade (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController___TransitionTradePoke_b__40_0 (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController___CreateUIRecodeMatching_b__48_0 (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
void UnionStateTransitionController___CreateUIBallDecoMatching_b__54_0 (UnionStateTransitionController_o* __this, const MethodInfo* method_info);
