#pragma once

#include "il2cpp.h"

bool Dpr_Battle_View_Task__get_IsFinishCondition (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_View_Task__get_IsEffectEnable (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Task__set_IsEffectEnable (Dpr_Battle_View_Task_o* __this, bool value, const MethodInfo* method_info);
Dpr_Battle_View_TaskManager_o* Dpr_Battle_View_Task__get_Parent (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Task__set_Parent (Dpr_Battle_View_Task_o* __this, Dpr_Battle_View_TaskManager_o* value, const MethodInfo* method_info);
bool Dpr_Battle_View_Task__get_IsFinished (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
float Dpr_Battle_View_Task__get_Duration (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Task___ctor (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Task__Dispose (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Task__OnDispose (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Task__Clear (Dpr_Battle_View_Task_o* __this, Dpr_Battle_View_Task_o* iPtrDummyTask, const MethodInfo* method_info);
void Dpr_Battle_View_Task__Delete (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Task__Clear (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Task__Update (Dpr_Battle_View_Task_o* __this, float deltaTime, float currentSequenceTime, int32_t step, const MethodInfo* method_info);
void Dpr_Battle_View_Task__FinishTask (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
Dpr_Battle_View_Task_o* Dpr_Battle_View_Task__SetOnStart (Dpr_Battle_View_Task_o* __this, System_Action_o* onStart, const MethodInfo* method_info);
Dpr_Battle_View_Task_o* Dpr_Battle_View_Task__SetOnFinished (Dpr_Battle_View_Task_o* __this, System_Action_o* onFinished, const MethodInfo* method_info);
Dpr_Battle_View_Task_o* Dpr_Battle_View_Task__SetStartTime (Dpr_Battle_View_Task_o* __this, float startTime, const MethodInfo* method_info);
Dpr_Battle_View_Task_o* Dpr_Battle_View_Task__SetEndTime (Dpr_Battle_View_Task_o* __this, float endTime, const MethodInfo* method_info);
Dpr_Battle_View_Task_o* Dpr_Battle_View_Task__SetDuration (Dpr_Battle_View_Task_o* __this, float duration, const MethodInfo* method_info);
Dpr_Battle_View_Task_o* Dpr_Battle_View_Task__SetAdvanceMode (Dpr_Battle_View_Task_o* __this, int32_t mode, const MethodInfo* method_info);
void Dpr_Battle_View_Task__OnUpdate (Dpr_Battle_View_Task_o* __this, int32_t frame, float raito, const MethodInfo* method_info);
void Dpr_Battle_View_Task__OnFinishTask (Dpr_Battle_View_Task_o* __this, const MethodInfo* method_info);
