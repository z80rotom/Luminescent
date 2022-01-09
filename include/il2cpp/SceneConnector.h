#pragma once

#include "il2cpp.h"

System_Collections_IEnumerator_o* SceneConnector__PrepareOperation (SceneConnector_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* SceneConnector__SetupOperation (SceneConnector_o* __this, const MethodInfo* method_info);
bool SceneConnector__SwitchingOperation (SceneConnector_o* __this, int32_t target, const MethodInfo* method_info);
UnityEngine_SceneManagement_Scene_o SceneConnector__get_scene (SceneConnector_o* __this, const MethodInfo* method_info);
void SceneConnector__set_scene (SceneConnector_o* __this, UnityEngine_SceneManagement_Scene_o value, const MethodInfo* method_info);
UnityEngine_Transform_o* SceneConnector__get_bgCacheObjects (SceneConnector_o* __this, const MethodInfo* method_info);
UnityEngine_Transform_o* SceneConnector__get_characterCacheObjects (SceneConnector_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* SceneConnector__ActivateOperation (SceneConnector_o* __this, UnityEngine_Transform_o* cluster, const MethodInfo* method_info);
void SceneConnector__OnEnable (SceneConnector_o* __this, const MethodInfo* method_info);
void SceneConnector__ResetLight (SceneConnector_o* __this, bool isForceCurrentPeriodOfDay, const MethodInfo* method_info);
void SceneConnector__OnDisable (SceneConnector_o* __this, const MethodInfo* method_info);
void SceneConnector__OnUpdate (SceneConnector_o* __this, float deltaTime, const MethodInfo* method_info);
void SceneConnector__ClearBGCache (SceneConnector_o* __this, const MethodInfo* method_info);
void SceneConnector__ClearCharacterCache (SceneConnector_o* __this, const MethodInfo* method_info);
void SceneConnector___ctor (SceneConnector_o* __this, const MethodInfo* method_info);
