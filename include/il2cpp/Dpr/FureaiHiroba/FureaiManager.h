#pragma once

#include "il2cpp.h"

bool Dpr_FureaiHiroba_FureaiManager__get_isCanCreatePoke (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
bool Dpr_FureaiHiroba_FureaiManager__get_isCanSyuugou (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
bool Dpr_FureaiHiroba_FureaiManager__get_isCanKaisan (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
bool Dpr_FureaiHiroba_FureaiManager__get_isOn_PulsOrMinus (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
bool Dpr_FureaiHiroba_FureaiManager__get_isRelease_PulsOrMinus (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_FureaiHiroba_FureaiManager__Start (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__SetDataManager (Dpr_FureaiHiroba_FureaiManager_o* __this, Dpr_FureaiHiroba_FureaiDataManager_o* dataManager, const MethodInfo* method);
bool Dpr_FureaiHiroba_FureaiManager__IsEnterble (Dpr_FureaiHiroba_FureaiManager_o* __this, int32_t monsNo, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__MyUpdate (Dpr_FureaiHiroba_FureaiManager_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_FureaiHiroba_FureaiManager__CheckLongPush (Dpr_FureaiHiroba_FureaiManager_o* __this, float duration, const MethodInfo* method);
bool Dpr_FureaiHiroba_FureaiManager__KutibueInput (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__Kutibue_Yobiyose (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__Kutibue_Kaisan (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
DG_Tweening_Tweener_o* Dpr_FureaiHiroba_FureaiManager__ToCameraDefault (Dpr_FureaiHiroba_FureaiManager_o* __this, float duration, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__MyLateUpdate (Dpr_FureaiHiroba_FureaiManager_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__WalkCountClear (Dpr_FureaiHiroba_FureaiManager_o* __this, int32_t TemotiNo, const MethodInfo* method);
FieldObjectEntity_o* Dpr_FureaiHiroba_FureaiManager__GetPokeEntityByTemotiNo (Dpr_FureaiHiroba_FureaiManager_o* __this, int32_t temotiNo, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__DelPoke (Dpr_FureaiHiroba_FureaiManager_o* __this, Dpr_FureaiHiroba_FureaiPokeModel_o* model, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__Destroy (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__FureaiEnterPokeCreate (Dpr_FureaiHiroba_FureaiManager_o* __this, uint32_t SelectTemotiNo, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_FureaiHiroba_FureaiManager__CreatePokeForFureaiEnter (Dpr_FureaiHiroba_FureaiManager_o* __this, uint32_t SelectPoke_TemotiNo, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__HirobaEnterKaisan (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__HirobaExitSyuugou (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_FureaiHiroba_FureaiManager__DoEndofFrame (Dpr_FureaiHiroba_FureaiManager_o* __this, System_Action_o* act, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_FureaiHiroba_FureaiManager__RouteCheck (Dpr_FureaiHiroba_FureaiManager_o* __this, System_Collections_Generic_List_FureaiPokeModel__o* list, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__AddFirstPoke (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__SetSelectWalkingPoke (Dpr_FureaiHiroba_FureaiManager_o* __this, uint32_t temotiNo, const MethodInfo* method);
int32_t Dpr_FureaiHiroba_FureaiManager__GetSelectWalkingPokeTemotiNo (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__SelectPokeHide (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__SelectPokeGotoPlayerNear (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__TalkStart (Dpr_FureaiHiroba_FureaiManager_o* __this, int32_t temoti, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_FureaiHiroba_FureaiManager__WaitEventEnd (Dpr_FureaiHiroba_FureaiManager_o* __this, Dpr_FureaiHiroba_FureaiPokeModel_o* poke, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__PlayVoice_TemotiID (Dpr_FureaiHiroba_FureaiManager_o* __this, uint32_t temoti, const MethodInfo* method);
System_Collections_Generic_List_FureaiPokeModel__o* Dpr_FureaiHiroba_FureaiManager__GetWalkingPokes (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__OnDestroy (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__DebugSE (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__AddPokeWalkDebug (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__DebugAddPoke (Dpr_FureaiHiroba_FureaiManager_o* __this, bool CreatePlayerPosition, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__DelPoke (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__SubPoke (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__Debug_EnterPokeCreate (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager___DebugGetNearEmptyPosition (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__DebugStopTime (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager__DebugCreatePoke (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager___ctor (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager___cctor (const MethodInfo* method);
float Dpr_FureaiHiroba_FureaiManager___ToCameraDefault_b__53_0 (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager___ToCameraDefault_b__53_1 (Dpr_FureaiHiroba_FureaiManager_o* __this, float x, const MethodInfo* method);
float Dpr_FureaiHiroba_FureaiManager___ToCameraDefault_b__53_2 (Dpr_FureaiHiroba_FureaiManager_o* __this, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager___ToCameraDefault_b__53_3 (Dpr_FureaiHiroba_FureaiManager_o* __this, float x, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager___OnDestroy_b__75_0 (Dpr_FureaiHiroba_FureaiManager_o* __this, Dpr_FureaiHiroba_FureaiPokeModel_o* x, const MethodInfo* method);
void Dpr_FureaiHiroba_FureaiManager___DebugAddPoke_b__80_0 (Dpr_FureaiHiroba_FureaiManager_o* __this, Dpr_FureaiHiroba_FureaiPokeModel_o* model, const MethodInfo* method);
