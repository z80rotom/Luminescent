#pragma once

#include "il2cpp.h"

void Dpr_Message_FontAssetLoader__OnAwake (Dpr_Message_FontAssetLoader_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontAssetLoader__OnFinalize (Dpr_Message_FontAssetLoader_o* __this, const MethodInfo* method_info);
bool Dpr_Message_FontAssetLoader__get_RunningLoad (Dpr_Message_FontAssetLoader_o* __this, const MethodInfo* method_info);
bool Dpr_Message_FontAssetLoader__HasLoadTaskByLanguageId (Dpr_Message_FontAssetLoader_o* __this, int32_t langId, const MethodInfo* method_info);
void Dpr_Message_FontAssetLoader__RegistLoadFontAssetTask (Dpr_Message_FontAssetLoader_o* __this, int32_t langId, System_Action_LoadFontAssetTask__o* onCompleteLoad, const MethodInfo* method_info);
System_String_o* Dpr_Message_FontAssetLoader__GetFileNameByLanguageId (Dpr_Message_FontAssetLoader_o* __this, int32_t langId, const MethodInfo* method_info);
void Dpr_Message_FontAssetLoader__PerformLoad (Dpr_Message_FontAssetLoader_o* __this, const MethodInfo* method_info);
void Dpr_Message_FontAssetLoader__OnUpdate (Dpr_Message_FontAssetLoader_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Message_FontAssetLoader___ctor (Dpr_Message_FontAssetLoader_o* __this, const MethodInfo* method_info);
