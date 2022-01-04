#pragma once

#include "il2cpp.h"

int64_t UnityEngine_UIElements_EventBase__RegisterEventType (const MethodInfo* method);
int64_t UnityEngine_UIElements_EventBase__get_eventTypeId (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_timestamp (UnityEngine_UIElements_EventBase_o* __this, int64_t value, const MethodInfo* method);
uint64_t UnityEngine_UIElements_EventBase__get_eventId (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_eventId (UnityEngine_UIElements_EventBase_o* __this, uint64_t value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_triggerEventId (UnityEngine_UIElements_EventBase_o* __this, uint64_t value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__SetTriggerEventId (UnityEngine_UIElements_EventBase_o* __this, uint64_t id, const MethodInfo* method);
int32_t UnityEngine_UIElements_EventBase__get_propagation (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_propagation (UnityEngine_UIElements_EventBase_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_UIElements_PropagationPaths_o* UnityEngine_UIElements_EventBase__get_path (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_path (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_UIElements_PropagationPaths_o* value, const MethodInfo* method);
int32_t UnityEngine_UIElements_EventBase__get_lifeCycleStatus (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_lifeCycleStatus (UnityEngine_UIElements_EventBase_o* __this, int32_t value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__PreDispatch (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__PreDispatch (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_UIElements_IPanel_o* panel, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__PostDispatch (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__PostDispatch (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_UIElements_IPanel_o* panel, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_bubbles (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_tricklesDown (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
UnityEngine_UIElements_IEventHandler_o* UnityEngine_UIElements_EventBase__get_leafTarget (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_leafTarget (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_UIElements_IEventHandler_o* value, const MethodInfo* method);
UnityEngine_UIElements_IEventHandler_o* UnityEngine_UIElements_EventBase__get_target (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_target (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_UIElements_IEventHandler_o* value, const MethodInfo* method);
System_Collections_Generic_List_IEventHandler__o* UnityEngine_UIElements_EventBase__get_skipElements (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__Skip (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_UIElements_IEventHandler_o* h, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_isPropagationStopped (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_isPropagationStopped (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__StopPropagation (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_isImmediatePropagationStopped (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_isImmediatePropagationStopped (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__StopImmediatePropagation (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_isDefaultPrevented (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_isDefaultPrevented (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__PreventDefault (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
int32_t UnityEngine_UIElements_EventBase__get_propagationPhase (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_propagationPhase (UnityEngine_UIElements_EventBase_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_UIElements_IEventHandler_o* UnityEngine_UIElements_EventBase__get_currentTarget (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_currentTarget (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_UIElements_IEventHandler_o* value, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_dispatch (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_dispatch (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__MarkReceivedByDispatcher (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_dispatched (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_dispatched (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_processed (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_processed (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_stopDispatch (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_stopDispatch (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_propagateToIMGUI (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_propagateToIMGUI (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_imguiEventIsValid (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_imguiEventIsValid (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
UnityEngine_Event_o* UnityEngine_UIElements_EventBase__get_imguiEvent (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_imguiEvent (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_Event_o* value, const MethodInfo* method);
UnityEngine_Vector2_o UnityEngine_UIElements_EventBase__get_originalMousePosition (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_originalMousePosition (UnityEngine_UIElements_EventBase_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__Init (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__LocalInit (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase___ctor (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
bool UnityEngine_UIElements_EventBase__get_pooled (UnityEngine_UIElements_EventBase_o* __this, const MethodInfo* method);
void UnityEngine_UIElements_EventBase__set_pooled (UnityEngine_UIElements_EventBase_o* __this, bool value, const MethodInfo* method);
void UnityEngine_UIElements_EventBase___cctor (const MethodInfo* method);
