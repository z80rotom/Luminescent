#pragma once

#include "il2cpp.h"

int32_t DG_Tweening_Core_Debugger__get_logPriority (const MethodInfo* method);
void DG_Tweening_Core_Debugger__Log (Il2CppObject* message, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogWarning (Il2CppObject* message, DG_Tweening_Tween_o* t, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogError (Il2CppObject* message, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogReport (Il2CppObject* message, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogSafeModeReport (Il2CppObject* message, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogInvalidTween (DG_Tweening_Tween_o* t, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogNestedTween (DG_Tweening_Tween_o* t, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogNullTween (DG_Tweening_Tween_o* t, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogNonPathTween (DG_Tweening_Tween_o* t, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogMissingMaterialProperty (System_String_o* propertyName, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogMissingMaterialProperty (int32_t propertyId, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogRemoveActiveTweenError (System_String_o* errorInfo, DG_Tweening_Tween_o* t, const MethodInfo* method);
void DG_Tweening_Core_Debugger__LogAddActiveTweenError (System_String_o* errorInfo, DG_Tweening_Tween_o* t, const MethodInfo* method);
void DG_Tweening_Core_Debugger__SetLogPriority (int32_t logBehaviour, const MethodInfo* method);
