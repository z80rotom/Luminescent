#pragma once

#include "il2cpp.hpp"
#include "Dpr/Battle/Logic/BTL_POKEPARAM.hpp"
#include "Dpr/Battle/Logic/ServerSendData.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct BTL_CLIENT_Fields
            {
                struct MainModule_o* m_mainModule;
                struct BattleEnv_o* m_pBattleEnv;
                struct BTL_POKEPARAM_o* m_procPoke;
                uint8_t m_actCountSum;
                int32_t m_procActionIndex;
                struct BTL_ACTION_PARAM_OBJ_o* m_procActionUIRet;
                int32_t m_currentActionIndex;
                struct rec_Data_o* m_recData;
                struct rec_Reader_o* m_btlRecReader;
                struct BTL_CLIENT_RECPLAYER_CONTROL_o* m_recPlayer;
                struct BTL_CLIENT_ClientMainProc_o* m_mainProc;
                struct FieldStatus_o* m_fldSim;
                uint64_t m_randContext;
                struct Adapter_o* m_adapter;
                struct SendDataContainer_o* m_sendDataContainer;
                struct SendDataContainer_o* m_receiveDataContainer;
                struct Random_o* m_random;
                struct Random_o* m_AIRand;
                struct TrainerMessageManager_o* m_trainerMessageManager;
                struct ClientSeq_TrainerMessage_o* m_seq_TrainerMessage;
                struct ClientSeq_WinWild_o* m_seq_WinWild;
                struct ClientSeq_Capture_o* m_seq_Capture;
                struct BattleSimulator_o* m_battleSimulator;
                struct BattleDriver_o* m_battleDriver;
                struct ServerCommandQueue_o* m_serverCmdQueue;
                struct GameTimer_o* m_gameTimer;
                struct ServerSendData_CLIENT_LIMIT_TIME_o m_syncClientTime;
                struct ServerSendData_RAIDBOSS_CAPTURE_RESULT_o m_raidBossCaptureResult;
                uint32_t m_turnCount;
                uint16_t m_EnemyPokeHPBase;
                struct BTL_CLIENT_SEL_ITEM_WORK_array* m_selItemWork;
                uint8_t m_myID;
                uint8_t m_myType;
                uint8_t m_myState;
                bool m_commWaitInfoOn;
                uint8_t m_bagMode;
                uint8_t* m_change_escape_code;
                bool m_fForceQuitSelAct;
                uint8_t m_cmdCheckTimingCode;
                struct System_Byte_array* m_actionCountWork;
                uint8_t m_wazaInfoPokeIdx;
                uint8_t m_wazaInfoWazaIdx;
                bool m_fAITrainerBGMChanged;
                bool m_fCommError;
                bool m_fSelActForceFinish;
                bool m_fCmdCheckEnable;
                bool m_fRecPlayEndTimeOver;
                bool m_fRecPlayEndBufOver;
                bool m_bRecPlayFadeStarted;
                bool m_isWaitingAdapterCommand;
                bool m_isGSelectedThisTurn;
                bool m_isFirstActionSelectDone;
                uint8_t m_myChangePokeCnt;
                uint8_t m_myPuttablePokeCnt;
                struct BtlPokePos_array* m_myChangePokePos;
                uint16_t m_returnDataSerialNumber;
                uint8_t m_returnDataServerSeq;
                uint8_t m_returnDataServerRequest;
                void* m_returnDataPtr;
                uint32_t m_returnDataSize;
                uint32_t* m_dummyReturnData;
                struct ClientSendData_ACTION_SELECT_o* m_returnData_ActionSelect;
                struct ClientSendData_CLIENT_LIMIT_TIME_o* m_returnData_ClientLimitTime;
                struct ClientSendData_RAID_BALL_SELECT_o* m_returnData_RaidBallSelect;
                uint16_t m_cmdLimitTime;
                uint16_t m_gameLimitTime;
                uint16_t m_clientLimitTime;
                struct BTL_PARTY_o* m_myParty;
                uint8_t m_procPokeIdx;
                uint8_t m_procPokeActIdx;
                int8_t m_prevPokeIdx;
                uint8_t m_firstPokeIdx;
                bool m_fStdMsgChanged;
                bool m_b1stReadyMsgDisped;
                struct BTL_SERVER_o* m_cmdCheckServer;
                struct BattleViewBase_o* _m_viewCore;
                struct BattleViewBase_ExpGetDesc_o* m_viewExpGetDesc;
                struct BattleViewBase_ExpGetResult_o* m_viewExpGetResult;
                struct BTL_ACTION_PARAM_array* m_actionParam;
                struct System_Int32_array* m_cmdArgs;
                struct BTL_CLIENT_VariableArgs_o* m_stdVariableArgs;
                struct BTL_CLIENT_VariableArgs_o* m_tmpVariableArgs;
                struct BattleAi_o* m_ai;
                struct System_UInt16_array* m_AIItem;
                struct System_SByte_array* m_AIChangeIndex;
                struct System_Boolean_array* m_AITrainerMsgCheckedFlag;
                struct BTL_CLIENT_ClientSubProc_o* m_subProc;
                int32_t m_subSeq;
                struct BTL_CLIENT_ClientSubProc_o* m_selActProc;
                int32_t m_selActSeq;
                struct BTLV_STRPARAM_o* m_strParam;
                struct BTLV_STRPARAM_o* m_strParamSub;
                struct PokeSelParam_o* m_pokeSelParam;
                struct PokeSelResult_o* m_pokeSelResult;
                struct BTL_CLIENT_ServerCmdProc_o* m_scProc;
                uint16_t m_serverCmd;
                int32_t m_scSeq;
                struct BtlPokePos_array* m_deadPokePos;
                bool m_isLiveRecSeedSetup;
                uint32_t m_liveRecWaitCameraSeq;
                uint32_t m_liveRecSizeSave;
                struct BTL_CLIENT_WAZAEFF_SYNCDAMAGE_CMD_WORK_o* m_wazaEffDmgSyncWork;
                bool m_bWazaEffectDone;
                bool m_bSyncEffectDone;
                struct BTL_CLIENT_FriendshipEffectProc_o* m_frEffectProc;
                uint32_t m_JK3Joker_PrevTurnAttackToLegends;
                uint32_t m_JK3Legend_PrevTurnUseKyozyuuzan;
                int32_t scProc_MSG_StdSE_subSeq;
                int32_t scProc_MSG_SetSE_subSeq;
                uint32_t scProc_ACT_KinomiPrevWaza_procIdx;
                int32_t scProc_ACT_FriendshipEffectMsg_effSeq;
                int32_t scProc_ACT_FriendshipEffectMsg_msgSeq;
                uint32_t scProc_ACTOP_SwapTokusei_timer;
            };

            struct BTL_CLIENT_c;

            struct BTL_CLIENT_o
            {
                BTL_CLIENT_c *klass;
                void *monitor;
                BTL_CLIENT_Fields fields;

                // 1f574e0
                int32_t checkForbidChangeEscapeCommon(BTL_POKEPARAM_o *procPoke, uint8_t *pokeID,uint16_t *tokuseiID,MethodInfo *method);
            };
        }
    }
}