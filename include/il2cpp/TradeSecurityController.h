#pragma once

#include "il2cpp.h"

void TradeSecurityController__Init (TradeSecurityController_o* __this, int32_t stationIndex, UnionTradeManager_BoxPokeData_o boxPokeData, const MethodInfo* method);
void TradeSecurityController__Clear (TradeSecurityController_o* __this, const MethodInfo* method);
void TradeSecurityController__Error (TradeSecurityController_o* __this, const MethodInfo* method);
void TradeSecurityController__SetIsRecruiment (TradeSecurityController_o* __this, bool Recruiment, const MethodInfo* method);
void TradeSecurityController__SetInitCallBack (TradeSecurityController_o* __this, System_Action_o* func, System_Action_int__bool__o* startOpenTradeBoxWindow, System_Action_UnionTradeManager_TradeFlowState__o* setState, const MethodInfo* method);
void TradeSecurityController__SetTargetPokeData (TradeSecurityController_o* __this, Pml_PokePara_PokemonParam_o* pokeData, const MethodInfo* method);
void TradeSecurityController__SetBoxPokeData (TradeSecurityController_o* __this, UnionTradeManager_BoxPokeData_o boxPokeData, const MethodInfo* method);
void TradeSecurityController__SetTragetTranerParam (TradeSecurityController_o* __this, UnionTradeManager_TargetTranerParam_o* param, const MethodInfo* method);
int32_t TradeSecurityController__GetCurrentState (TradeSecurityController_o* __this, const MethodInfo* method);
void TradeSecurityController__SendState (TradeSecurityController_o* __this, const MethodInfo* method);
void TradeSecurityController__ReciveState (TradeSecurityController_o* __this, Dpr_NetworkUtils_NetDataTradeReadyOkData_o* data, const MethodInfo* method);
void TradeSecurityController__SetTradeParent (TradeSecurityController_o* __this, int32_t parent, const MethodInfo* method);
bool TradeSecurityController__CheckPokeRarity (TradeSecurityController_o* __this, const MethodInfo* method);
void TradeSecurityController__CreateTradeStateModel (TradeSecurityController_o* __this, int32_t stationIndex, const MethodInfo* method);
void TradeSecurityController__ChangeTradeModelState (TradeSecurityController_o* __this, int32_t state, const MethodInfo* method);
int32_t TradeSecurityController__GetTradeState (TradeSecurityController_o* __this, const MethodInfo* method);
void TradeSecurityController__SetIsTradeReadyOk (TradeSecurityController_o* __this, bool isTrade, const MethodInfo* method);
void TradeSecurityController__DisconnectVictim_ResetSave (TradeSecurityController_o* __this, const MethodInfo* method);
void TradeSecurityController___ctor (TradeSecurityController_o* __this, const MethodInfo* method);
void TradeSecurityController___cctor (const MethodInfo* method);
