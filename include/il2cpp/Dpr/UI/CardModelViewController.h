#pragma once

#include "il2cpp.h"

bool Dpr_UI_CardModelViewController__get_IsReady (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
bool Dpr_UI_CardModelViewController__get_IsShowBadgeCase (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
bool Dpr_UI_CardModelViewController__get_IsEndBadgeCase (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
bool Dpr_UI_CardModelViewController__get_IsCardFront (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
bool Dpr_UI_CardModelViewController__get_IsAnimation (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
bool Dpr_UI_CardModelViewController__get_IsAnimationAll (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__OnViewportChange (Dpr_UI_CardModelViewController_o* __this, int32_t screenWidth, int32_t screenHeight, const MethodInfo* method);
void Dpr_UI_CardModelViewController__Initialize (Dpr_UI_CardModelViewController_o* __this, Dpr_UI_UIInputController_o* input, UnityEngine_Animator_o* cardAnimator, const MethodInfo* method);
void Dpr_UI_CardModelViewController__Dispose (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__SetEnviromentLight (Dpr_UI_CardModelViewController_o* __this, bool isActive, const MethodInfo* method);
void Dpr_UI_CardModelViewController__OnUpdate (Dpr_UI_CardModelViewController_o* __this, float deltaTime, const MethodInfo* method);
System_Collections_IEnumerator_o* Dpr_UI_CardModelViewController__Redraw (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__CreateRenderTexture (Dpr_UI_CardModelViewController_o* __this, UnityEngine_UI_RawImage_o* rawImage, const MethodInfo* method);
void Dpr_UI_CardModelViewController__Setup (Dpr_UI_CardModelViewController_o* __this, UnityEngine_RenderTexture_o* renderTexture, UnityEngine_Transform_o* bgTransform, const MethodInfo* method);
void Dpr_UI_CardModelViewController__RotatePlayerModel (Dpr_UI_CardModelViewController_o* __this, float value, const MethodInfo* method);
void Dpr_UI_CardModelViewController__ResetRotatePlayerModel (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__ShowCard (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__SwitchCardFrontBack (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__ShowBadgeCase (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__OpenBadgeCase (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__CloseBadgeCase (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController__LoadModels (Dpr_UI_CardModelViewController_o* __this, uint8_t fashion, uint8_t bodyType, bool sex, const MethodInfo* method);
int32_t Dpr_UI_CardModelViewController__GetPlayerWaitAnimationIndex (Dpr_UI_CardModelViewController_o* __this, Dpr_Playables_AnimationLayer_o* animationLayer, const MethodInfo* method);
void Dpr_UI_CardModelViewController__PlayPlayerModelWaitMotion (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
void Dpr_UI_CardModelViewController___ctor (Dpr_UI_CardModelViewController_o* __this, const MethodInfo* method);
