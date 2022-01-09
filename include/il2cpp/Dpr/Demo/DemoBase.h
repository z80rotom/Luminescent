#pragma once

#include "il2cpp.h"

UnityEngine_Camera_o* Dpr_Demo_DemoBase__get_cam (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
SmartPoint_AssetAssistant_AssetRequestOperation_o* Dpr_Demo_DemoBase__PreloadAssetBundles (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
void Dpr_Demo_DemoBase__ReleasePreloadedAssetBundles (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_Demo_DemoBase__GetPokemonAssetBundle (Dpr_Demo_DemoBase_o* __this, int32_t monsNo, uint16_t formNo, uint8_t sex, bool isRare, bool isBattleModel, const MethodInfo* method_info);
void Dpr_Demo_DemoBase__Init (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Demo_DemoBase__Enter (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Demo_DemoBase__Main (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Demo_DemoBase__Exit (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
void Dpr_Demo_DemoBase__Destroy (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
void Dpr_Demo_DemoBase__PostProcessSetting (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
void Dpr_Demo_DemoBase___DebugMethod (Dpr_Demo_DemoBase_o* __this, int32_t TestNo, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_PushA (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_PushB (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_PushX (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_PushY (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_PushAorB (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_KeyLeft (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_KeyRight (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_KeyDown (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_KeyUp (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
void Dpr_Demo_DemoBase__LightUpdate (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_isMessageFinished (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
Dpr_MsgWindow_MsgWindowParam_o* Dpr_Demo_DemoBase__get_nowMSG (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
bool Dpr_Demo_DemoBase__get_isEnableInput (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Demo_DemoBase__WaitMessageWindow (Dpr_Demo_DemoBase_o* __this, bool isCloseWindow, float autoCloseTime, const MethodInfo* method_info);
Dpr_MsgWindow_MsgWindowParam_o* Dpr_Demo_DemoBase__DrawNextMessage (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
Dpr_MsgWindow_MsgWindowParam_o* Dpr_Demo_DemoBase__DrawMessage (Dpr_Demo_DemoBase_o* __this, int32_t NextMessageNo, const MethodInfo* method_info);
void Dpr_Demo_DemoBase__CloseWindow (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
Dpr_MsgWindow_MsgWindowParam_o* Dpr_Demo_DemoBase__CreateMsgWindowParam (Dpr_Demo_DemoBase_o* __this, System_String_o* msgFileName, System_String_o* labelName, bool isCloseMessage, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Demo_DemoBase__LoadBackGround (Dpr_Demo_DemoBase_o* __this, System_Action_GameObject__o* OnLoad, bool useAssetUnloader, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Demo_DemoBase__LoadPokeAsset (Dpr_Demo_DemoBase_o* __this, Pml_PokePara_PokemonParam_o* param, bool isHideRare, bool isBattleModel, bool useAssetUnloader, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Demo_DemoBase__LoadPokeAsset (Dpr_Demo_DemoBase_o* __this, int32_t monsNo, uint16_t formNo, uint8_t sex, bool isRare, bool isEgg, bool isBattleModel, bool useAssetUnloader, const MethodInfo* method_info);
UnityEngine_Color_o Dpr_Demo_DemoBase__get_ClearColor (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
void Dpr_Demo_DemoBase__FadeSetting (Dpr_Demo_DemoBase_o* __this, bool fade1, bool fade2, bool fade3, bool fade4, const MethodInfo* method_info);
void Dpr_Demo_DemoBase__SetFadeTime (Dpr_Demo_DemoBase_o* __this, float t1, float t2, float t3, float t4, const MethodInfo* method_info);
DG_Tweening_Tweener_o* Dpr_Demo_DemoBase__RenderImageFade (Dpr_Demo_DemoBase_o* __this, float alpha, float duration, const MethodInfo* method_info);
DG_Tweening_Tweener_o* Dpr_Demo_DemoBase__RenderImageScale (Dpr_Demo_DemoBase_o* __this, float scale, float duration, const MethodInfo* method_info);
void Dpr_Demo_DemoBase___ctor (Dpr_Demo_DemoBase_o* __this, const MethodInfo* method_info);
void Dpr_Demo_DemoBase___cctor (const MethodInfo* method_info);
