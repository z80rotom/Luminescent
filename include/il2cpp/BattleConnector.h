#pragma once

#include "il2cpp.h"

int32_t BattleConnector__get_arenaIndex (const MethodInfo* method_info);
void BattleConnector__set_arenaIndex (int32_t value, const MethodInfo* method_info);
XLSXContent_ArenaInfo_SheetArenaData_o* BattleConnector__get_currentArenaData (const MethodInfo* method_info);
void BattleConnector__set_currentArenaData (XLSXContent_ArenaInfo_SheetArenaData_o* value, const MethodInfo* method_info);
UnityEngine_GameObject_o* BattleConnector__get_cachedBackgroundObject (BattleConnector_o* __this, const MethodInfo* method_info);
UnityEngine_GameObject_o* BattleConnector__get_cachedSkyObject (BattleConnector_o* __this, const MethodInfo* method_info);
Dpr_Battle_View_Objects_BattleFieldObject_o* BattleConnector__get_BattleFieldObject (const MethodInfo* method_info);
bool BattleConnector__SwitchingOperation (BattleConnector_o* __this, int32_t target, const MethodInfo* method_info);
System_Collections_IEnumerator_o* BattleConnector__PrepareOperation (BattleConnector_o* __this, const MethodInfo* method_info);
void BattleConnector__PrepareOperationStatic (const MethodInfo* method_info);
System_Collections_IEnumerator_o* BattleConnector__SetupOperation (BattleConnector_o* __this, const MethodInfo* method_info);
void BattleConnector__DestroyBackgrounds (const MethodInfo* method_info);
void BattleConnector__PrefetchAssetBundles (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, const MethodInfo* method_info);
void BattleConnector__prefetchPlayer (Dpr_Battle_Logic_MyStatus_o* myStatus, const MethodInfo* method_info);
void BattleConnector__prefetchTrainer (Dpr_Battle_Logic_BSP_TRAINER_DATA_o* trainerData, const MethodInfo* method_info);
void BattleConnector__prefetchPoke (Pml_PokePara_PokemonParam_o* pp, System_String_o* forcedAssetBundleName, const MethodInfo* method_info);
void BattleConnector__ReleasePrefetchAssetBundles (const MethodInfo* method_info);
void BattleConnector__prefetchAssetBundleRequest (System_String_o* path, const MethodInfo* method_info);
bool BattleConnector__isKeepWaitingPrefetchAssetBundles (const MethodInfo* method_info);
void BattleConnector___ctor (BattleConnector_o* __this, const MethodInfo* method_info);
void BattleConnector___cctor (const MethodInfo* method_info);
System_Collections_IEnumerator_o* BattleConnector____n__0 (BattleConnector_o* __this, const MethodInfo* method_info);
