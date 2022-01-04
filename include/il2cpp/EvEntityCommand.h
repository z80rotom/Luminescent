#pragma once

#include "il2cpp.h"

void EvEntityCommand___ctor (EvEntityCommand_o* __this, FieldObjectEntity_o* entity, const MethodInfo* method);
void EvEntityCommand__ScriptMove (EvEntityCommand_o* __this, float deltatime, const MethodInfo* method);
void EvEntityCommand__SetScriptMoveData (EvEntityCommand_o* __this, EvData_Script_o* evmove, float startFrame, const MethodInfo* method);
void EvEntityCommand__ForceScriptMove (EvEntityCommand_o* __this, const MethodInfo* method);
bool EvEntityCommand__IsScriptMoveEnd (EvEntityCommand_o* __this, const MethodInfo* method);
void EvEntityCommand__ScriptMovePause (EvEntityCommand_o* __this, bool flag, const MethodInfo* method);
void EvEntityCommand__SetAnimation (EvEntityCommand_o* __this, int32_t anime, float duration, bool restart, const MethodInfo* method);
void EvEntityCommand__SetMoveData (EvEntityCommand_o* __this, const MethodInfo* method);
void EvEntityCommand__ScritpStopState (EvEntityCommand_o* __this, const MethodInfo* method);
void EvEntityCommand__ScritpStopStateEnd (EvEntityCommand_o* __this, const MethodInfo* method);
void EvEntityCommand__ReleaseMoveData (EvEntityCommand_o* __this, const MethodInfo* method);
void EvEntityCommand__SetResetIdleAnimEnable (EvEntityCommand_o* __this, bool enable, const MethodInfo* method);
void EvEntityCommand__SetDirPause (EvEntityCommand_o* __this, bool pause, const MethodInfo* method);
void EvEntityCommand__SetAnimPause (EvEntityCommand_o* __this, bool pause, const MethodInfo* method);
void EvEntityCommand__ApplyAnimSpeed (EvEntityCommand_o* __this, const MethodInfo* method);
void EvEntityCommand__SetEventNeckRotate (EvEntityCommand_o* __this, UnityEngine_Transform_o* target, const MethodInfo* method);
bool EvEntityCommand__UpdateEventNeck (EvEntityCommand_o* __this, float deltatime, const MethodInfo* method);
void EvEntityCommand__CalcNeckRotate (EvEntityCommand_o* __this, const MethodInfo* method);
void EvEntityCommand__ReleaseEventNeck (EvEntityCommand_o* __this, const MethodInfo* method);
void EvEntityCommand__StopFootEffect (EvEntityCommand_o* __this, bool stop, const MethodInfo* method);
bool EvEntityCommand__GetIsDirPlayWalking (EvEntityCommand_o* __this, const MethodInfo* method);
float EvEntityCommand__GetDirMoveTime (EvEntityCommand_o* __this, const MethodInfo* method);
float EvEntityCommand__GetWalkTime (EvEntityCommand_o* __this, const MethodInfo* method);
