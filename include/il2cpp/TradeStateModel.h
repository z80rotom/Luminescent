#pragma once

#include "il2cpp.h"

void TradeStateModel__Init (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__Clear (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__FirstSave (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__SecondSave (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__DisconnectVictim_ResetSave (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__PlayerSave (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__SetInitCallBack (TradeStateModel_o* __this, System_Action_o* func, System_Action_int__bool__o* startOpenTradeBoxWindow, System_Action_UnionTradeManager_TradeFlowState__o* setState, const MethodInfo* method_info);
void TradeStateModel__SetTargetTransitionIndex (TradeStateModel_o* __this, int32_t index, const MethodInfo* method_info);
int32_t TradeStateModel__GetTargetTransitionIndex (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__SetTargetTranerParam (TradeStateModel_o* __this, UnionTradeManager_TargetTranerParam_o* param, const MethodInfo* method_info);
void TradeStateModel__SetTragetPokeData (TradeStateModel_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, const MethodInfo* method_info);
void TradeStateModel__SetBoxPokeData (TradeStateModel_o* __this, UnionTradeManager_BoxPokeData_o boxPoke, const MethodInfo* method_info);
void TradeStateModel__SetTradeParent (TradeStateModel_o* __this, int32_t parentState, const MethodInfo* method_info);
int32_t TradeStateModel__GetTradeParent (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__SendPokeData (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__RecivePokeData (TradeStateModel_o* __this, System_Byte_array* pokeData, const MethodInfo* method_info);
void TradeStateModel__SendTradeState (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__WriteSaveData (TradeStateModel_o* __this, const MethodInfo* method_info);
bool TradeStateModel__CheckReplacePokeData (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__InitState (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__OnUpdate (TradeStateModel_o* __this, float deltaTime, const MethodInfo* method_info);
void TradeStateModel__PlayTradeDemo (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__ReturnTradePokeSelectWindow (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__SetNetModelState (TradeStateModel_o* __this, int32_t tradeState, const MethodInfo* method_info);
int32_t TradeStateModel__GetCurrentTradeState (TradeStateModel_o* __this, const MethodInfo* method_info);
bool TradeStateModel__IsTargetPokeData (TradeStateModel_o* __this, const MethodInfo* method_info);
bool TradeStateModel__IsShowFatalError (TradeStateModel_o* __this, const MethodInfo* method_info);
bool TradeStateModel__CheckNetworkConnect (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__OpenErrorMessage (TradeStateModel_o* __this, Dpr_NetworkUtils_ErrorAppletResult_o* errorAppletResult, const MethodInfo* method_info);
bool TradeStateModel__IsNetworkCheck (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__TradeCancelReturn (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__ReplacePoke (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel__SetPlayReport (TradeStateModel_o* __this, const MethodInfo* method_info);
void TradeStateModel___ctor (TradeStateModel_o* __this, const MethodInfo* method_info);
