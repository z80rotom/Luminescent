#pragma once

#include "il2cpp.h"

bool Dpr_UI_MultiModelView__get_bIsInitialize (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__set_bIsInitialize (Dpr_UI_MultiModelView_o* __this, bool value, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__Start (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__Initialize (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__CreateRenderTexture (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__SetRawImage (Dpr_UI_MultiModelView_o* __this, UnityEngine_UI_RawImage_array* rawImages, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__SettingRawImages (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
UnityEngine_Rect_o Dpr_UI_MultiModelView__CalcRawImageRect (Dpr_UI_MultiModelView_o* __this, int32_t index, float width, float height, UnityEngine_Rect_o* rect, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__OnDestroy (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_MultiModelView__get_ModelViewCount (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_MultiModelView__get_TotalModelViewCount (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
bool Dpr_UI_MultiModelView__HasViewModelByIndex (Dpr_UI_MultiModelView_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__LoadCharacterModel (Dpr_UI_MultiModelView_o* __this, int32_t index, System_String_o* modelPath, System_Action_MultiModelView_ViewModelData__o* onCompleteLoad, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__SettingModelData (Dpr_UI_MultiModelView_o* __this, int32_t createIndex, System_String_o* modelPath, UnityEngine_GameObject_o* modelObj, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__DestroyModel (Dpr_UI_MultiModelView_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_MultiModelView__ChangeModelMotion (Dpr_UI_MultiModelView_o* __this, int32_t index, int32_t motionIndex, const MethodInfo* method_info);
void Dpr_UI_MultiModelView___ctor (Dpr_UI_MultiModelView_o* __this, const MethodInfo* method_info);
