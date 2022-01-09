#pragma once

#include "il2cpp.h"

void DG_Tweening_Sequence___ctor (DG_Tweening_Sequence_o* __this, const MethodInfo* method_info);
DG_Tweening_Sequence_o* DG_Tweening_Sequence__DoPrepend (DG_Tweening_Sequence_o* inSequence, DG_Tweening_Tween_o* t, const MethodInfo* method_info);
DG_Tweening_Sequence_o* DG_Tweening_Sequence__DoInsert (DG_Tweening_Sequence_o* inSequence, DG_Tweening_Tween_o* t, float atPosition, const MethodInfo* method_info);
DG_Tweening_Sequence_o* DG_Tweening_Sequence__DoAppendInterval (DG_Tweening_Sequence_o* inSequence, float interval, const MethodInfo* method_info);
DG_Tweening_Sequence_o* DG_Tweening_Sequence__DoPrependInterval (DG_Tweening_Sequence_o* inSequence, float interval, const MethodInfo* method_info);
DG_Tweening_Sequence_o* DG_Tweening_Sequence__DoInsertCallback (DG_Tweening_Sequence_o* inSequence, DG_Tweening_TweenCallback_o* callback, float atPosition, const MethodInfo* method_info);
void DG_Tweening_Sequence__Reset (DG_Tweening_Sequence_o* __this, const MethodInfo* method_info);
bool DG_Tweening_Sequence__Validate (DG_Tweening_Sequence_o* __this, const MethodInfo* method_info);
bool DG_Tweening_Sequence__Startup (DG_Tweening_Sequence_o* __this, const MethodInfo* method_info);
bool DG_Tweening_Sequence__ApplyTween (DG_Tweening_Sequence_o* __this, float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, int32_t updateMode, int32_t updateNotice, const MethodInfo* method_info);
void DG_Tweening_Sequence__Setup (DG_Tweening_Sequence_o* s, const MethodInfo* method_info);
bool DG_Tweening_Sequence__DoStartup (DG_Tweening_Sequence_o* s, const MethodInfo* method_info);
bool DG_Tweening_Sequence__DoApplyTween (DG_Tweening_Sequence_o* s, float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, int32_t updateMode, const MethodInfo* method_info);
bool DG_Tweening_Sequence__ApplyInternalCycle (DG_Tweening_Sequence_o* s, float fromPos, float toPos, int32_t updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep, const MethodInfo* method_info);
void DG_Tweening_Sequence__StableSortSequencedObjs (System_Collections_Generic_List_ABSSequentiable__o* list, const MethodInfo* method_info);
bool DG_Tweening_Sequence__IsAnyCallbackSet (DG_Tweening_Sequence_o* s, const MethodInfo* method_info);
