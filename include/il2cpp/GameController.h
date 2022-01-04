#pragma once

#include "il2cpp.h"

void GameController__OnApplicationPlaying (const MethodInfo* method);
void GameController__Shutdown (const MethodInfo* method);
void GameController__Update (float deltaTime, const MethodInfo* method);
bool GameController__UpdateNpadState (const MethodInfo* method);
UnityEngine_Vector2_o GameController__CalcNpadAnalogValue (nn_hid_AnalogStickState_o analogState, float dead, const MethodInfo* method);
int32_t GameController__GetAnalogStickButtonIndex (UnityEngine_Vector2_o analogStick, const MethodInfo* method);
void GameController__Subscribe (GameController_LogicalInput_o* logicalInput, const MethodInfo* method);
void GameController__Remove (GameController_LogicalInput_o* logicalInput, const MethodInfo* method);
void GameController___ctor (GameController_o* __this, const MethodInfo* method);
void GameController___cctor (const MethodInfo* method);
