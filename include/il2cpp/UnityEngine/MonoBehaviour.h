#pragma once

#include "il2cpp.h"

bool UnityEngine_MonoBehaviour__IsInvoking (UnityEngine_MonoBehaviour_o* __this, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__CancelInvoke (UnityEngine_MonoBehaviour_o* __this, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__Invoke (UnityEngine_MonoBehaviour_o* __this, System_String_o* methodName, float time, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__InvokeRepeating (UnityEngine_MonoBehaviour_o* __this, System_String_o* methodName, float time, float repeatRate, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__CancelInvoke (UnityEngine_MonoBehaviour_o* __this, System_String_o* methodName, const MethodInfo* method_info);
bool UnityEngine_MonoBehaviour__IsInvoking (UnityEngine_MonoBehaviour_o* __this, System_String_o* methodName, const MethodInfo* method_info);
UnityEngine_Coroutine_o* UnityEngine_MonoBehaviour__StartCoroutine (UnityEngine_MonoBehaviour_o* __this, System_String_o* methodName, const MethodInfo* method_info);
UnityEngine_Coroutine_o* UnityEngine_MonoBehaviour__StartCoroutine (UnityEngine_MonoBehaviour_o* __this, System_String_o* methodName, Il2CppObject* value, const MethodInfo* method_info);
UnityEngine_Coroutine_o* UnityEngine_MonoBehaviour__StartCoroutine (UnityEngine_MonoBehaviour_o* __this, System_Collections_IEnumerator_o* routine, const MethodInfo* method_info);
UnityEngine_Coroutine_o* UnityEngine_MonoBehaviour__StartCoroutine_Auto (UnityEngine_MonoBehaviour_o* __this, System_Collections_IEnumerator_o* routine, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__StopCoroutine (UnityEngine_MonoBehaviour_o* __this, System_Collections_IEnumerator_o* routine, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__StopCoroutine (UnityEngine_MonoBehaviour_o* __this, UnityEngine_Coroutine_o* routine, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__StopCoroutine (UnityEngine_MonoBehaviour_o* __this, System_String_o* methodName, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__StopAllCoroutines (UnityEngine_MonoBehaviour_o* __this, const MethodInfo* method_info);
bool UnityEngine_MonoBehaviour__get_useGUILayout (UnityEngine_MonoBehaviour_o* __this, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__set_useGUILayout (UnityEngine_MonoBehaviour_o* __this, bool value, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__print (Il2CppObject* message, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__Internal_CancelInvokeAll (UnityEngine_MonoBehaviour_o* self, const MethodInfo* method_info);
bool UnityEngine_MonoBehaviour__Internal_IsInvokingAll (UnityEngine_MonoBehaviour_o* self, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__InvokeDelayed (UnityEngine_MonoBehaviour_o* self, System_String_o* methodName, float time, float repeatRate, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__CancelInvoke (UnityEngine_MonoBehaviour_o* self, System_String_o* methodName, const MethodInfo* method_info);
bool UnityEngine_MonoBehaviour__IsInvoking (UnityEngine_MonoBehaviour_o* self, System_String_o* methodName, const MethodInfo* method_info);
bool UnityEngine_MonoBehaviour__IsObjectMonoBehaviour (UnityEngine_Object_o* obj, const MethodInfo* method_info);
UnityEngine_Coroutine_o* UnityEngine_MonoBehaviour__StartCoroutineManaged (UnityEngine_MonoBehaviour_o* __this, System_String_o* methodName, Il2CppObject* value, const MethodInfo* method_info);
UnityEngine_Coroutine_o* UnityEngine_MonoBehaviour__StartCoroutineManaged2 (UnityEngine_MonoBehaviour_o* __this, System_Collections_IEnumerator_o* enumerator, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__StopCoroutineManaged (UnityEngine_MonoBehaviour_o* __this, UnityEngine_Coroutine_o* routine, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour__StopCoroutineFromEnumeratorManaged (UnityEngine_MonoBehaviour_o* __this, System_Collections_IEnumerator_o* routine, const MethodInfo* method_info);
System_String_o* UnityEngine_MonoBehaviour__GetScriptClassName (UnityEngine_MonoBehaviour_o* __this, const MethodInfo* method_info);
void UnityEngine_MonoBehaviour___ctor (UnityEngine_MonoBehaviour_o* __this, const MethodInfo* method_info);
