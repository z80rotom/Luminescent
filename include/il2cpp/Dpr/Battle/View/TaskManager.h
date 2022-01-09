#pragma once

#include "il2cpp.h"

bool Dpr_Battle_View_TaskManager__get_IsAllFinished (Dpr_Battle_View_TaskManager_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_TaskManager___ctor (Dpr_Battle_View_TaskManager_o* __this, int32_t taskCnt, const MethodInfo* method_info);
void Dpr_Battle_View_TaskManager__Dispose (Dpr_Battle_View_TaskManager_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_TaskManager__RegisterTask (Dpr_Battle_View_TaskManager_o* __this, Dpr_Battle_View_Task_o* task, bool isForward, const MethodInfo* method_info);
void Dpr_Battle_View_TaskManager__Delete (Dpr_Battle_View_TaskManager_o* __this, Dpr_Battle_View_Task_o* iPtrTask, const MethodInfo* method_info);
int32_t Dpr_Battle_View_TaskManager__GetTaskNum (Dpr_Battle_View_TaskManager_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_TaskManager__DeleteTaskFunc (Dpr_Battle_View_TaskManager_o* __this, Dpr_Battle_View_Task_o* iPtrTask, const MethodInfo* method_info);
void Dpr_Battle_View_TaskManager__OnUpdate (Dpr_Battle_View_TaskManager_o* __this, float deltaTime, float currentSequenceTime, int32_t step, const MethodInfo* method_info);
void Dpr_Battle_View_TaskManager__ForceAllFinished (Dpr_Battle_View_TaskManager_o* __this, const MethodInfo* method_info);
