#pragma once

#include "il2cpp.h"

void TransitionAnimation__GuruguruRisingStart (const MethodInfo* method_info);
void TransitionAnimation__GuruguruFallStart (FieldCharacterEntity_o* targetEntity, const MethodInfo* method_info);
System_Collections_IEnumerator_o* TransitionAnimation__PlayerGuruguruStop (FieldCharacterEntity_o* targetEntity, float angle, float height, bool isRising, System_Action_o* OnComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* TransitionAnimation__EntityTransitionAnimationStop (FieldCharacterEntity_o* targetEntity, float height, float angle, bool isRising, System_Action_o* OnComplete, bool isGuruGuru, const MethodInfo* method_info);
System_Collections_IEnumerator_o* TransitionAnimation__AgEntityTransitionAnimationStop (FieldCharacterEntity_o* targetEntity, float height, float angle, bool isRising, System_Action_o* OnComplete, bool isGuruGuru, const MethodInfo* method_info);
void TransitionAnimation__PlayerGuruguru (float deltaTime, const MethodInfo* method_info);
void TransitionAnimation__PlayerRising (float deltaTime, const MethodInfo* method_info);
void TransitionAnimation__PlayerFall (float deltaTime, const MethodInfo* method_info);
float TransitionAnimation__GetGuruGuruHeight (int32_t zoneID, const MethodInfo* method_info);
bool TransitionAnimation___PlayerGuruguruStop_g__CheckHeight_6_0 (TransitionAnimation___c__DisplayClass6_0_o* , const MethodInfo* method_info);
bool TransitionAnimation___EntityTransitionAnimationStop_g__CheckHeight_7_0 (TransitionAnimation___c__DisplayClass7_0_o* , const MethodInfo* method_info);
bool TransitionAnimation___AgEntityTransitionAnimationStop_g__CheckHeight_8_0 (TransitionAnimation___c__DisplayClass8_0_o* , const MethodInfo* method_info);
