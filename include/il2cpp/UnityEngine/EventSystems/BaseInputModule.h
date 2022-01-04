#pragma once

#include "il2cpp.h"

UnityEngine_EventSystems_BaseInput_o* UnityEngine_EventSystems_BaseInputModule__get_input (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
UnityEngine_EventSystems_BaseInput_o* UnityEngine_EventSystems_BaseInputModule__get_inputOverride (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_BaseInputModule__set_inputOverride (UnityEngine_EventSystems_BaseInputModule_o* __this, UnityEngine_EventSystems_BaseInput_o* value, const MethodInfo* method);
UnityEngine_EventSystems_EventSystem_o* UnityEngine_EventSystems_BaseInputModule__get_eventSystem (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_BaseInputModule__OnEnable (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_BaseInputModule__OnDisable (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
UnityEngine_EventSystems_RaycastResult_o UnityEngine_EventSystems_BaseInputModule__FindFirstRaycast (System_Collections_Generic_List_RaycastResult__o* candidates, const MethodInfo* method);
int32_t UnityEngine_EventSystems_BaseInputModule__DetermineMoveDirection (float x, float y, const MethodInfo* method);
int32_t UnityEngine_EventSystems_BaseInputModule__DetermineMoveDirection (float x, float y, float deadZone, const MethodInfo* method);
UnityEngine_GameObject_o* UnityEngine_EventSystems_BaseInputModule__FindCommonRoot (UnityEngine_GameObject_o* g1, UnityEngine_GameObject_o* g2, const MethodInfo* method);
void UnityEngine_EventSystems_BaseInputModule__HandlePointerExitAndEnter (UnityEngine_EventSystems_BaseInputModule_o* __this, UnityEngine_EventSystems_PointerEventData_o* currentPointerData, UnityEngine_GameObject_o* newEnterTarget, const MethodInfo* method);
UnityEngine_EventSystems_AxisEventData_o* UnityEngine_EventSystems_BaseInputModule__GetAxisEventData (UnityEngine_EventSystems_BaseInputModule_o* __this, float x, float y, float moveDeadZone, const MethodInfo* method);
UnityEngine_EventSystems_BaseEventData_o* UnityEngine_EventSystems_BaseInputModule__GetBaseEventData (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
bool UnityEngine_EventSystems_BaseInputModule__IsPointerOverGameObject (UnityEngine_EventSystems_BaseInputModule_o* __this, int32_t pointerId, const MethodInfo* method);
bool UnityEngine_EventSystems_BaseInputModule__ShouldActivateModule (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_BaseInputModule__DeactivateModule (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_BaseInputModule__ActivateModule (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_BaseInputModule__UpdateModule (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
bool UnityEngine_EventSystems_BaseInputModule__IsModuleSupported (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
void UnityEngine_EventSystems_BaseInputModule___ctor (UnityEngine_EventSystems_BaseInputModule_o* __this, const MethodInfo* method);
