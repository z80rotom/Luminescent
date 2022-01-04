#pragma once

#include "il2cpp.h"

System_String_o* SmartPoint_Components_DebugMonitor__get_logPath (const MethodInfo* method);
bool SmartPoint_Components_DebugMonitor__get_isVisible (const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__set_isVisible (bool value, const MethodInfo* method);
bool SmartPoint_Components_DebugMonitor__get_displayWatch (const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__set_displayWatch (bool value, const MethodInfo* method);
bool SmartPoint_Components_DebugMonitor__Awake (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__Start (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__OnEnable (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__OnDisable (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__OnFliterValueChanged (SmartPoint_Components_DebugMonitor_o* __this, System_String_o* value, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__ToggleSubMonitor (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__UpdateSubMonitor (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__Close (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__ClearLog (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__OnUpdate (SmartPoint_Components_DebugMonitor_o* __this, float deltaTime, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__Show (const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__ShowToggle (const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__Output (System_String_o* label, Il2CppObject* value, float life, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__Subscribe (System_String_o* label, System_Func_object__o* getter, float life, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__Subscribe (System_String_o* label, Il2CppObject* value, float life, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__Unsubscribe (System_String_o* label, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor__LogCallback (SmartPoint_Components_DebugMonitor_o* __this, System_String_o* condition, System_String_o* stackTrace, int32_t type, const MethodInfo* method);
System_String_o* SmartPoint_Components_DebugMonitor__OmittedStackTrace (System_String_o* stackTrace, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor___ctor (SmartPoint_Components_DebugMonitor_o* __this, const MethodInfo* method);
void SmartPoint_Components_DebugMonitor___cctor (const MethodInfo* method);
