#pragma once

#include "il2cpp.h"

Dpr_SequenceEditor_SequenceFile_o* Dpr_Sequence_SequenceSystem__get_SequenceFile (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__set_SequenceFile (Dpr_Sequence_SequenceSystem_o* __this, Dpr_SequenceEditor_SequenceFile_o* value, const MethodInfo* method);
int32_t Dpr_Sequence_SequenceSystem__get_CurrentFrame (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__set_CurrentFrame (Dpr_Sequence_SequenceSystem_o* __this, int32_t value, const MethodInfo* method);
float Dpr_Sequence_SequenceSystem__get_CurrentTime (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
int32_t Dpr_Sequence_SequenceSystem__get_MaxFrame (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__set_MaxFrame (Dpr_Sequence_SequenceSystem_o* __this, int32_t value, const MethodInfo* method);
float Dpr_Sequence_SequenceSystem__get_MaxTime (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
System_Collections_Generic_List_CommandParam__o* Dpr_Sequence_SequenceSystem__get_Commands (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__set_Commands (Dpr_Sequence_SequenceSystem_o* __this, System_Collections_Generic_List_CommandParam__o* value, const MethodInfo* method);
bool Dpr_Sequence_SequenceSystem__get_IsCommandSkip (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__set_IsCommandSkip (Dpr_Sequence_SequenceSystem_o* __this, bool value, const MethodInfo* method);
bool Dpr_Sequence_SequenceSystem__get_IsPause (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__set_IsPause (Dpr_Sequence_SequenceSystem_o* __this, bool value, const MethodInfo* method);
bool Dpr_Sequence_SequenceSystem__get_IsLoadedSequenceFile (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
bool Dpr_Sequence_SequenceSystem__get_IsPreLoaded (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
bool Dpr_Sequence_SequenceSystem__get_IsFinishSequence (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__set_IsFinishSequence (Dpr_Sequence_SequenceSystem_o* __this, bool value, const MethodInfo* method);
bool Dpr_Sequence_SequenceSystem__get_IsInterpolationTime (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__set_IsInterpolationTime (Dpr_Sequence_SequenceSystem_o* __this, bool value, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem___ctor (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__Dispose (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__UnInitialize (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__Update (Dpr_Sequence_SequenceSystem_o* __this, float deltaTime, int32_t step, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__LateUpdate (Dpr_Sequence_SequenceSystem_o* __this, float deltaTime, const MethodInfo* method);
bool Dpr_Sequence_SequenceSystem__IsUpdateValid (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__CheckPreLoadCount (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__StepFrame (Dpr_Sequence_SequenceSystem_o* __this, float deltaTime, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__OnUpdate (Dpr_Sequence_SequenceSystem_o* __this, float deltaTime, int32_t step, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__OnLateUpdate (Dpr_Sequence_SequenceSystem_o* __this, float deltaTime, int32_t step, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__OnComplete (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__SetSkipCommand (Dpr_Sequence_SequenceSystem_o* __this, bool isSkip, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__SkipFrame (Dpr_Sequence_SequenceSystem_o* __this, int32_t frame, bool isReset, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__CommandCallback (Dpr_Sequence_SequenceSystem_o* __this, Dpr_SequenceEditor_SequenceFile_o* file, Dpr_SequenceEditor_CommandParam_o* param, bool isSkip, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__CommandCallbackLate (Dpr_Sequence_SequenceSystem_o* __this, Dpr_SequenceEditor_SequenceFile_o* file, Dpr_SequenceEditor_CommandParam_o* param, bool isSkip, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem__SetupEnvironmentParam (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
Dpr_Battle_View_BTLV_ENVIRONMENT_PARAM_o Dpr_Sequence_SequenceSystem__GetEnvironmentParam (Dpr_Sequence_SequenceSystem_o* __this, const MethodInfo* method);
System_Collections_Generic_List_CommandParam__o* Dpr_Sequence_SequenceSystem__FindCommands (Dpr_Sequence_SequenceSystem_o* __this, int32_t commandNo, const MethodInfo* method);
void Dpr_Sequence_SequenceSystem___cctor (const MethodInfo* method);
