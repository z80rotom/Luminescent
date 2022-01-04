#pragma once

#include "il2cpp.h"

TMPro_TMP_UpdateManager_o* TMPro_TMP_UpdateManager__get_instance (const MethodInfo* method);
void TMPro_TMP_UpdateManager___ctor (TMPro_TMP_UpdateManager_o* __this, const MethodInfo* method);
void TMPro_TMP_UpdateManager__RegisterTextObjectForUpdate (TMPro_TMP_Text_o* textObject, const MethodInfo* method);
void TMPro_TMP_UpdateManager__InternalRegisterTextObjectForUpdate (TMPro_TMP_UpdateManager_o* __this, TMPro_TMP_Text_o* textObject, const MethodInfo* method);
void TMPro_TMP_UpdateManager__RegisterTextElementForLayoutRebuild (TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__InternalRegisterTextElementForLayoutRebuild (TMPro_TMP_UpdateManager_o* __this, TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__RegisterTextElementForGraphicRebuild (TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__InternalRegisterTextElementForGraphicRebuild (TMPro_TMP_UpdateManager_o* __this, TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__RegisterTextElementForCullingUpdate (TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__InternalRegisterTextElementForCullingUpdate (TMPro_TMP_UpdateManager_o* __this, TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__OnCameraPreCull (TMPro_TMP_UpdateManager_o* __this, const MethodInfo* method);
void TMPro_TMP_UpdateManager__DoRebuilds (TMPro_TMP_UpdateManager_o* __this, const MethodInfo* method);
void TMPro_TMP_UpdateManager__UnRegisterTextObjectForUpdate (TMPro_TMP_Text_o* textObject, const MethodInfo* method);
void TMPro_TMP_UpdateManager__UnRegisterTextElementForRebuild (TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__InternalUnRegisterTextElementForGraphicRebuild (TMPro_TMP_UpdateManager_o* __this, TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__InternalUnRegisterTextElementForLayoutRebuild (TMPro_TMP_UpdateManager_o* __this, TMPro_TMP_Text_o* element, const MethodInfo* method);
void TMPro_TMP_UpdateManager__InternalUnRegisterTextObjectForUpdate (TMPro_TMP_UpdateManager_o* __this, TMPro_TMP_Text_o* textObject, const MethodInfo* method);
void TMPro_TMP_UpdateManager___cctor (const MethodInfo* method);
