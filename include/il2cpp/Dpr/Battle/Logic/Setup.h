#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Setup__BATTLE_SETUP_FIELD_SITUATION_Init (Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetBtlStatusFlag (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, int32_t status_f, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_ResetBtlStatusFlag (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, int32_t status_f, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Setup__BATTLE_PARAM_CheckBtlStatusFlag (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, int32_t status_f, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_Init (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_Clear (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_Wild (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, Pml_PokeParty_o* playerParty, Pml_PokeParty_o* partyEnemy, int32_t partnerTrainerID, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, int32_t rule, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_Wild (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, Pml_PokeParty_o* playerParty, Pml_PokeParty_o* partyEnemy, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, int32_t rule, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_DemoCapture (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, Pml_PokeParty_o* playerParty, Pml_PokeParty_o* partyEnemy, int32_t trainerID, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__setBoxFull (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* pSetupParam, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Setup__checkBoxFull (const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BTL_SETUP_Trainer (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, Pml_PokeParty_o* playerParty, int32_t trID, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, int32_t rule, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BTL_SETUP_Trainer_Tag (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, Pml_PokeParty_o** playerParty, int32_t trID_1, int32_t trID_2, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, int32_t rule, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BTL_SETUP_Trainer_Multi (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, Pml_PokeParty_o** playerParty, int32_t trID_friend, int32_t trID_1, int32_t trID_2, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, int32_t rule, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_Comm (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, Pml_PokeParty_o** playerParty, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, uint8_t commMode, uint8_t commPos, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_ToMultiMode (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_ToAIMultiMode (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, int32_t trid_enemy1, int32_t trid_enemy2, int32_t competitor, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__setupParty (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* pSetupParam, int32_t clientID, Pml_PokeParty_o* pParty, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetTimeLimit (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, uint32_t GameLimitSec, uint32_t ClientLimitSec, uint32_t CommandLimitSec, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetSkyBattle (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetSakasaBattle (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetMustCaptureMode (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetNoGainMode (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetMoneyRate (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, float rate, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetPokeParty (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, Pml_PokeParty_o* party, int32_t id, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetRegulation (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, Dpr_Regulation_Data_o* regulation, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_SetRatingValue (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, uint16_t rate1, uint16_t rate2, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_AllocRecBuffer (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bsp, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Setup__getBattleInstTrainerAIBit (int32_t rule, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BTL_SETUP_BattleInst (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* pSetupParam, Pml_PokeParty_o* pPlayerParty, int32_t instTrainerEnemy1, Pml_PokeParty_o* instEnemy1Party, Dpr_Trainer_SealTemplateID_array* instEnemy1SealTIDs, int32_t instTrainerEnemy2, Pml_PokeParty_o* instEnemy2Party, Dpr_Trainer_SealTemplateID_array* instEnemy2SealTIDs, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* pFieldSituation, int32_t rule, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BTL_SETUP_VoiceChatOn (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_PARAM_AddWildPokemonAi (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* pSetupParam, int32_t scriptNo, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__common_base (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* dst, Dpr_Battle_Logic_BTL_FIELD_SITUATION_o* sit, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Setup__GetMaxFollowPokeLevel (const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Setup__GetCaptureLevelCap (const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_Setup__GetExpLevelCap (const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__BATTLE_SETUP_PARAM_InitPartyParam (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* setupParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__player_param (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* dst, Pml_PokeParty_o* party, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__clearEgg (Pml_PokeParty_o* party, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__player_balldeco (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* dst, Pml_PokeParty_o* party, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__normalTrainer (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* dst, int32_t clientID, int32_t tr_id, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__instTrainer (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* dst, int32_t clientID, int32_t trainerID, Pml_PokeParty_o* trainerParty, Dpr_Trainer_SealTemplateID_array* sealTIDs, int32_t rule, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup__settingByTrainerData (Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* bp, Dpr_Battle_Logic_BSP_TRAINER_DATA_o** trData, const MethodInfo* method_info);
void Dpr_Battle_Logic_Setup___cctor (const MethodInfo* method_info);
