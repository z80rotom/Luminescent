#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_PokeActionContainer___ctor (Dpr_Battle_Logic_PokeActionContainer_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeActionContainer__Clear (Dpr_Battle_Logic_PokeActionContainer_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_PokeActionContainer__GetCount (Dpr_Battle_Logic_PokeActionContainer_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_PokeActionContainer__GetIndex (Dpr_Battle_Logic_PokeActionContainer_o* __this, Dpr_Battle_Logic_PokeAction_o* action, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeActionContainer__IsAllActDoneByPokeID (Dpr_Battle_Logic_PokeActionContainer_o* __this, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeActionContainer__Add (Dpr_Battle_Logic_PokeActionContainer_o* __this, Dpr_Battle_Logic_PokeAction_o** action, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeActionContainer__IsAllActionDone (Dpr_Battle_Logic_PokeActionContainer_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeAction_o* Dpr_Battle_Logic_PokeActionContainer__Next (Dpr_Battle_Logic_PokeActionContainer_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeAction_o* Dpr_Battle_Logic_PokeActionContainer__Get (Dpr_Battle_Logic_PokeActionContainer_o* __this, uint8_t index, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeActionContainer__Swap (Dpr_Battle_Logic_PokeActionContainer_o* __this, uint8_t index1, uint8_t index2, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeActionContainer__ForceDone (Dpr_Battle_Logic_PokeActionContainer_o* __this, uint8_t pokeID, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeAction_o* Dpr_Battle_Logic_PokeActionContainer__SearchByPokeID (Dpr_Battle_Logic_PokeActionContainer_o* __this, uint8_t pokeID, bool isSkipGStart, bool isSkipNull, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeAction_o* Dpr_Battle_Logic_PokeActionContainer__SearchNextByPokeID (Dpr_Battle_Logic_PokeActionContainer_o* __this, Dpr_Battle_Logic_PokeAction_o* start, uint8_t pokeID, bool isSkipGStart, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeAction_o* Dpr_Battle_Logic_PokeActionContainer__searchByPokeID_Core (Dpr_Battle_Logic_PokeActionContainer_o* __this, uint8_t pokeID, uint8_t startIdx, bool isSkipGStart, bool isSkipNull, bool isSkipDone, int32_t wazano, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeAction_o* Dpr_Battle_Logic_PokeActionContainer__SearchByWazaID (Dpr_Battle_Logic_PokeActionContainer_o* __this, int32_t waza, uint8_t startIndex, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeAction_o* Dpr_Battle_Logic_PokeActionContainer__SearchForCombiWaza (Dpr_Battle_Logic_PokeActionContainer_o* __this, Dpr_Battle_Logic_MainModule_o* pMainModule, int32_t waza, uint8_t pokeID, uint8_t targetPos, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeActionContainer__PostponeAction (Dpr_Battle_Logic_PokeActionContainer_o* __this, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeActionContainer__PostponeAction (Dpr_Battle_Logic_PokeActionContainer_o* __this, Dpr_Battle_Logic_PokeAction_o* action, const MethodInfo* method_info);
void Dpr_Battle_Logic_PokeActionContainer__InterruptAction (Dpr_Battle_Logic_PokeActionContainer_o* __this, Dpr_Battle_Logic_PokeAction_o* action, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeActionContainer__ReserveInterruptAction (Dpr_Battle_Logic_PokeActionContainer_o* __this, uint8_t intrPokeID, int32_t wazano, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeActionContainer__ReserveInterruptActionByWaza (Dpr_Battle_Logic_PokeActionContainer_o* __this, int32_t waza, const MethodInfo* method_info);
bool Dpr_Battle_Logic_PokeActionContainer__InsertAction (Dpr_Battle_Logic_PokeActionContainer_o* __this, Dpr_Battle_Logic_PokeAction_o** action, const MethodInfo* method_info);
