#pragma once

#include "il2cpp.h"

System_Collections_IEnumerator_o* SceneConnector__PrepareOperation (SceneConnector_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* SceneConnector__SetupOperation (SceneConnector_o* __this, const MethodInfo* method);
bool SceneConnector__SwitchingOperation (SceneConnector_o* __this, int32_t target, const MethodInfo* method);
UnityEngine_SceneManagement_Scene_o SceneConnector__get_scene (SceneConnector_o* __this, const MethodInfo* method);
void SceneConnector__set_scene (SceneConnector_o* __this, UnityEngine_SceneManagement_Scene_o value, const MethodInfo* method);
UnityEngine_Transform_o* SceneConnector__get_bgCacheObjects (SceneConnector_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* SceneConnector__get_characterCacheObjects (SceneConnector_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* SceneConnector__ActivateOperation (SceneConnector_o* __this, UnityEngine_Transform_o* cluster, const MethodInfo* method);
void SceneConnector__OnEnable (SceneConnector_o* __this, const MethodInfo* method);
void SceneConnector__ResetLight (SceneConnector_o* __this, bool isForceCurrentPeriodOfDay, const MethodInfo* method);
void SceneConnector__OnDisable (SceneConnector_o* __this, const MethodInfo* method);
void SceneConnector__OnUpdate (SceneConnector_o* __this, float deltaTime, const MethodInfo* method);
void SceneConnector__ClearBGCache (SceneConnector_o* __this, const MethodInfo* method);
void SceneConnector__ClearCharacterCache (SceneConnector_o* __this, const MethodInfo* method);
void SceneConnector___ctor (SceneConnector_o* __this, const MethodInfo* method);
