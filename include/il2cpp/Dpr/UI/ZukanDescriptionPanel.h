#pragma once

#include "il2cpp.h"

Dpr_UI_ZukanInfo_o* Dpr_UI_ZukanDescriptionPanel__get_CurrentZukanInfo (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__set_CurrentZukanInfo (Dpr_UI_ZukanDescriptionPanel_o* __this, Dpr_UI_ZukanInfo_o* value, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__get_IsTweening (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__set_IsTweening (Dpr_UI_ZukanDescriptionPanel_o* __this, bool value, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__get_IsShow (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__set_IsShow (Dpr_UI_ZukanDescriptionPanel_o* __this, bool value, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__get_IsModelViewOnly (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__set_IsModelViewOnly (Dpr_UI_ZukanDescriptionPanel_o* __this, bool value, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__get_CanSwitchLanguage (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__set_CanSwitchLanguage (Dpr_UI_ZukanDescriptionPanel_o* __this, bool value, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__get_CanShowMoving (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__get_CanShowCompare (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__Initialize (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__Dispose (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__SetZukanInfos (Dpr_UI_ZukanDescriptionPanel_o* __this, Dpr_UI_ZukanInfo_array* infos, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_UI_ZukanDescriptionPanel__GetModelViewPosition (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Dpr_UI_ZukanDescriptionPanel__GetInfoButtonPosition (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__SetArrowsActive (Dpr_UI_ZukanDescriptionPanel_o* __this, bool isUpDownActive, bool isLeftRightActive, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__SetBgHead (Dpr_UI_ZukanDescriptionPanel_o* __this, bool isZenkoku, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__OnUpdateModelView (Dpr_UI_ZukanDescriptionPanel_o* __this, float deltaTime, Dpr_UI_UIInputController_o* input, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__SetHidePositions (Dpr_UI_ZukanDescriptionPanel_o* __this, UnityEngine_Vector2_o modelViewPos, UnityEngine_Vector2_o infoButtonPos, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__Set (Dpr_UI_ZukanDescriptionPanel_o* __this, Dpr_UI_ZukanPokemonInfoButton_o* button, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__Set (Dpr_UI_ZukanDescriptionPanel_o* __this, Dpr_UI_ZukanInfo_o* zukanInfo, bool isAllowSwitchLanguage, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__SetUnknownModelView (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__SetModelView (Dpr_UI_ZukanDescriptionPanel_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, bool isPlayVoice, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__ShowDescription (Dpr_UI_ZukanDescriptionPanel_o* __this, bool isImmidiate, bool isMoveInfoButton, System_Action_o* onCompleteAction, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__HideDescription (Dpr_UI_ZukanDescriptionPanel_o* __this, bool isImmidiate, bool isHideBg, bool isMoveInfoButton, System_Action_o* onCompleteAction, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__ShowModelViewOnly (Dpr_UI_ZukanDescriptionPanel_o* __this, System_Action_o* onCompleteAction, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__HideModelViewOnly (Dpr_UI_ZukanDescriptionPanel_o* __this, System_Action_o* onCompleteAction, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__UpdateAshiatoIcon (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__MoveLanguageButtonSelect (Dpr_UI_ZukanDescriptionPanel_o* __this, int32_t value, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__ResumeLanguageButtonSelect (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__MoveZukanInfoSelect (Dpr_UI_ZukanDescriptionPanel_o* __this, int32_t addValue, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__ResumeZukanInfoSelect (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
bool Dpr_UI_ZukanDescriptionPanel__MoveCatalogSelect (Dpr_UI_ZukanDescriptionPanel_o* __this, int32_t addValue, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__SetupLanguageButtons (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__UpdateLanguageButtons (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__OnSelectLanguageButton (Dpr_UI_ZukanDescriptionPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__OnUnSelectLanguageButton (Dpr_UI_ZukanDescriptionPanel_o* __this, Dpr_UI_IUIButton_o* button, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__UpdateSexType (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__UpdateRareIcon (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__UpdateFormTextActive (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__UpdateTypes (Dpr_UI_ZukanDescriptionPanel_o* __this, int32_t langId, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel__PlayVoice (Dpr_UI_ZukanDescriptionPanel_o* __this, Pml_PokePara_PokemonParam_o* pokemonParam, const MethodInfo* method);
void Dpr_UI_ZukanDescriptionPanel___ctor (Dpr_UI_ZukanDescriptionPanel_o* __this, const MethodInfo* method);
