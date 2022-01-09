#pragma once

#include "il2cpp.h"

bool Dpr_UI_CapsuleViewController__get_IsInitialized (Dpr_UI_CapsuleViewController_o* __this, const MethodInfo* method_info);
Dpr_UI_Capsule2DViewController_o* Dpr_UI_CapsuleViewController__get_View2DController (Dpr_UI_CapsuleViewController_o* __this, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController__set_View2DController (Dpr_UI_CapsuleViewController_o* __this, Dpr_UI_Capsule2DViewController_o* value, const MethodInfo* method_info);
Dpr_UI_Capsule3DViewController_o* Dpr_UI_CapsuleViewController__get_View3DController (Dpr_UI_CapsuleViewController_o* __this, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController__set_View3DController (Dpr_UI_CapsuleViewController_o* __this, Dpr_UI_Capsule3DViewController_o* value, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_CapsuleViewController__Initialize (Dpr_UI_CapsuleViewController_o* __this, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController__Dispose (Dpr_UI_CapsuleViewController_o* __this, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController__Setup (Dpr_UI_CapsuleViewController_o* __this, Dpr_UI_CapsuleInfo_o* capsuleInfo, bool isResetView, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController__Set3DCapsuleActive (Dpr_UI_CapsuleViewController_o* __this, bool isAvtive, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController__SetDisablePreviewGuide (Dpr_UI_CapsuleViewController_o* __this, bool isEnable, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_CapsuleViewController__ShowPreviewScene (Dpr_UI_CapsuleViewController_o* __this, Dpr_UI_CapsuleInfo_o* capsuleInfo, Dpr_UI_CapsuleInfo_o* subCapsuleInfo, System_Collections_IEnumerator_o* playFadeWindow, System_Action_o* onBeforeFadeIn, bool isCallStopScript, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_CapsuleViewController__HidePreviewScene (Dpr_UI_CapsuleViewController_o* __this, System_Collections_IEnumerator_o* playFadeWindow, System_Action_o* onBeforeFadeIn, bool isCallOnOpenMenu, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController__UpdatePreviewKeyGuide (Dpr_UI_CapsuleViewController_o* __this, Dpr_UI_Keyguide_o* keyguide, const MethodInfo* method_info);
bool Dpr_UI_CapsuleViewController__CheckWaitFade (Dpr_UI_CapsuleViewController_o* __this, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController__SetupRawImage (Dpr_UI_CapsuleViewController_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController___ctor (Dpr_UI_CapsuleViewController_o* __this, const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController___cctor (const MethodInfo* method_info);
void Dpr_UI_CapsuleViewController___UpdatePreviewKeyGuide_b__28_0 (Dpr_UI_CapsuleViewController_o* __this, Dpr_UI_UIWindow_o* __, const MethodInfo* method_info);
