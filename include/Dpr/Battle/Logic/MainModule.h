#pragma once

#include "Pml/MonsNo.h"

#include "types.h"

namespace rec
{
    struct Reader {

    };
} // namespace rec

namespace TrainerTable
{
    struct SheetTrainerData;
    struct SheetTrainerType;
} // namespace TrainerTable

namespace PGLRecord
{
    struct RecParam;
} // namespace PGLRecord

struct BTL_POKEPARAM
{
    enum ValueID {

    };
};

namespace ServerSendData {
    struct CLIENT_LIMIT_TIME;
};

struct BATTLE_SETUP_PARAM;
struct BattleViewBase;
struct Random;
struct PokeParty;
struct MyStatus;
struct BtlRule {
    byte padding[0x4];
};
struct MSGSPEED;
struct BtlResult;
struct ResultCause;
struct BtlPokePos;
struct BATTLERULE;
struct BTL_SERVER;
struct ClientPublicInformation;
struct AdapterFactory;
struct PokeIDRec;
struct BattleEnv;
struct Client;
struct CapsuleData;
struct IEnumerator;
struct BtlBagMode;
struct MiseaiData;
struct BattleEnv;
struct BtlBagMode;
struct BattleEnv;
struct BTL_CLIENT_ID;
struct BtlCommMode;
struct BtlEscapeMode;
struct BTL_FIELD_SITUATION;
struct BtlWeather;
struct BattleEffectComponentData;
struct BTL_CLIENT_ID;
struct BtlMultiMode;
struct BtlSide;
struct POKECON;
struct BtlvPos;
struct CaptureInfo;
struct ResultCause;
struct ResultCause;
struct MoneyDblUpCause;
struct DaisukiType;
struct BTL_PARTY;
struct BTL_STATUS_FLAG;
struct RECORD_ID;
struct RECORD_ID;
struct EvolveSituation;
struct BTL_CLIENT;
struct TRAINER_DATA;
struct BSP_TRAINER_DATA;
struct TrainerID;
struct TrainerMessageID;
struct TrainerSequenceID;
struct TrainerMessageID;
struct Sex;
struct TrainerType;
struct TrainerTypeGroup;
struct HandDominance;
struct HandDominance;
struct ClientPublicInformation;
struct PokemonParam;
struct PartyDesc;
struct RaidBattleParam;
struct BATTLE_CONVENTION_INFO;
struct AffixSealData;
struct CapsuleData;
struct PokemonParam;


namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            class MainModule {
                public:
                byte alignment[0x10]; // 0x0
                BATTLE_SETUP_PARAM *m_setupParam; // 0x10
                BattleViewBase *m_viewCore; // 0x18
                Random *m_randSys; // 0x20
                ulong m_randomSeed; // 0x28
                void* m_subProc; // 0x30
                int m_subSeq; // 0x38
                int m_setupStep; // 0x3C
                void* m_mainLoop; // 0x40
                PokeParty* m_srcParty; // 0x48
                PokeParty* m_srcPartyForServer; // 0x50
                PokeParty *m_tmpParty; // 0x58
                MyStatus *m_playerStatus; // 0x60
                bool* m_fClientQuit; // 0x68
                BtlRule m_rule; // 0x70
                uint m_regularMoney; // 0x74
                uint m_bonusMoney; // 0x78
                uint m_loseMoney; // 0x7C
                MSGSPEED *m_msgSpeed; // 0x80
                ushort *m_LimitTimeGame; // 0x84
                ushort *m_LimitTimeClient; // 0x86
                ushort *m_LimitTimeCommand; // 0x88
                BtlResult *m_serverResult; // 0x8C
                ResultCause *m_serverResultCause; // 0x90
                byte m_myClientID; // 0x94
                BtlPokePos *m_myOrgPos; // 0x95
                BATTLERULE *m_changeMode; // 0x98
                byte m_MultiAIDataSeq; // 0x9C
                byte m_MultiAIClientNum; // 0x9D
                byte* m_MultiAIClientID; // 0xA0
                bool m_fCommError; // 0xA8
                bool m_fCommErrorMainQuit; // 0xA9
                bool m_fWazaEffectEnable; // 0xAA
                bool m_fGetMoneyFixed; // 0xAB
                bool m_fLoseMoneyFixed; // 0xAC
                bool m_padding; // 0xAD
                bool m_isFinalizeStarted; // 0xAE
                BTL_SERVER* m_server; // 0xB0
                BTL_SERVER* m_cmdCheckServer; // 0xB8
                BTL_CLIENT* m_client; // 0xC0
                BTL_CLIENT* m_dummyClient; // 0xC8
                TRAINER_DATA* m_trainerParam; // 0xD0
                ClientPublicInformation* m_clientPublicInformation; // 0xD8
                AdapterFactory* m_adapterFactory; // 0xE0
                rec::Reader m_recReader; // 0xE8
                bool* m_moneyDblUpCause; // 0xF0
                uint** m_zukanDataOnBattleStart; // 0xF8
                PokeIDRec *m_deadPokeIDRec; // 0x100
                BattleEnv *m_battleEnvForClient; // 0x108
                BattleEnv *m_battleEnvForServer; // 0x110
                Client *m_iPtrNetClient; // 0x118
                bool isInitialized; // 0x120
                bool isFinalized; // 0x121
                static BtlvPos** rule_double_vpos; // 0x0
                static BtlvPos** rule_double_vpos_PA_A; // 0x8
                static BtlvPos** rule_raid_vpos1; // 0x10
                static BtlvPos** rule_raid_vpos2; // 0x18
                static BtlvPos** rule_raid_vpos3; // 0x20
                static BtlvPos** rule_raid_vpos4; // 0x28
                CapsuleData *DummyCapsuleData; // 0x128

                enum BtlDetailRule {

                };

                // RVA: 0x238FE60 Offset: 0x238FF61 VA: 0x238FE60
                BATTLE_SETUP_PARAM GetBattleSetupParam();

                // RVA: 0x238FE70 Offset: 0x238FF71 VA: 0x238FE70
                bool GetEnableTimeStop();

                // RVA: 0x238FE80 Offset: 0x238FF81 VA: 0x238FE80
                bool GetEnableVoiceChat();

                // RVA: 0x238FE90 Offset: 0x238FF91 VA: 0x238FE90
                bool IsSkyBattle();

                // RVA: 0x238FEA0 Offset: 0x238FFA1 VA: 0x238FEA0
                bool IsMustCaptureMode();

                // RVA: 0x238FEB0 Offset: 0x238FFB1 VA: 0x238FEB0
                void SetFairyGymResult(byte result);

                // RVA: 0x238FEC0 Offset: 0x238FFC1 VA: 0x238FEC0
                byte GetFairyGymResult();

                // RVA: 0x238FED0 Offset: 0x238FFD1 VA: 0x238FED0
                BattleViewBase GetBattleViewSystem();

                // RVA: 0x238FEE0 Offset: 0x238FFE1 VA: 0x238FEE0
                //void .ctor(BATTLE_SETUP_PARAM setupParam);

                // RVA: 0x2390230 Offset: 0x2390331 VA: 0x2390230
                void Dispose();

                //// [IteratorStateMachineAttribute] // RVA: 0x14D3D0 Offset: 0x14D4D1 VA: 0x14D3D0
                // RVA: 0x23904C0 Offset: 0x23905C1 VA: 0x23904C0
                IEnumerator InitializeCoroutine();

                // RVA: 0x2390570 Offset: 0x2390671 VA: 0x2390570
                void createBattleEnv();

                // RVA: 0x2390670 Offset: 0x2390771 VA: 0x2390670
                void initializeBattleAiSystem();

                // RVA: 0x23906E0 Offset: 0x23907E1 VA: 0x23906E0
                uint** createZukanDataClone();

                // RVA: 0x2390890 Offset: 0x2390991 VA: 0x2390890
                bool MainLoop(int* seq);

                // RVA: 0x2390A20 Offset: 0x2390B21 VA: 0x2390A20
                void storeBattleResult();

                // RVA: 0x2391180 Offset: 0x2391281 VA: 0x2391180
                bool isBgmFadeOutDisable();

                // RVA: 0x2391050 Offset: 0x2391151 VA: 0x2391050
                bool checkRecReadComplete();

                // [IteratorStateMachineAttribute] // RVA: 0x14D440 Offset: 0x14D541 VA: 0x14D440
                // RVA: 0x2391380 Offset: 0x2391481 VA: 0x2391380
                IEnumerator FinalizeCoroutine();

                // RVA: 0x2391430 Offset: 0x2391531 VA: 0x2391430
                bool FinalizeApp(int* seq);

                // [IteratorStateMachineAttribute] // RVA: 0x14D4B0 Offset: 0x14D5B1 VA: 0x14D4B0
                // RVA: 0x2391A50 Offset: 0x2391B51 VA: 0x2391A50
                IEnumerator LeavenOnErrorCoroutine();

                // RVA: 0x2391B00 Offset: 0x2391C01 VA: 0x2391B00
                void StartForceRemoveView();

                // RVA: 0x2391B10 Offset: 0x2391C11 VA: 0x2391B10
                bool WaitForceRemoveView();

                // RVA: 0x2391B30 Offset: 0x2391C31 VA: 0x2391B30
                void setMainLoop(void* proc);

                // RVA: 0x2390A00 Offset: 0x2390B01 VA: 0x2390A00
                bool callMainLoop();

                // RVA: 0x2391D80 Offset: 0x2391E81 VA: 0x2391D80
                void setSubProc(void* subProc);

                // RVA: 0x2391A20 Offset: 0x2391B21 VA: 0x2391A20
                bool callSubProc();

                // RVA: 0x2392030 Offset: 0x2392131 VA: 0x2392030
                void setSubProcForSetup(BATTLE_SETUP_PARAM setup_param);

                // RVA: 0x2391990 Offset: 0x2391A91 VA: 0x2391990
                void setSubProcForCleanUp(BATTLE_SETUP_PARAM setup_param);

                // RVA: 0x23921E0 Offset: 0x23922E1 VA: 0x23921E0
                void setupCommon_TrainerParam(BATTLE_SETUP_PARAM sp);

                // RVA: 0x23928D0 Offset: 0x23929D1 VA: 0x23928D0
                void setupCommon_SetRecplayerClientMode(BATTLE_SETUP_PARAM sp);

                // RVA: 0x23929B0 Offset: 0x2392AB1 VA: 0x23929B0
                void setupCommon_CreateViewModule(BATTLE_SETUP_PARAM sp, BtlBagMode bagMode);

                // RVA: 0x2392AD0 Offset: 0x2392BD1 VA: 0x2392AD0
                bool setupCommon_InitViewModule();

                // RVA: 0x2392B50 Offset: 0x2392C51 VA: 0x2392B50
                void setupCommon_ClientPublicInformation(BATTLE_SETUP_PARAM setupParam);

                // RVA: 0x2392CE0 Offset: 0x2392DE1 VA: 0x2392CE0
                void setupCommon_ClientPublicInformation(ClientPublicInformation publicInfo, byte clientId, MiseaiData miseaiData);

                // RVA: 0x2392F60 Offset: 0x2393061 VA: 0x2392F60
                bool setup_alone_single(int* seq);

                // RVA: 0x2393FE0 Offset: 0x23940E1 VA: 0x2393FE0
                bool setup_alone_double(int* seq);

                // RVA: 0x23941D0 Offset: 0x23942D1 VA: 0x23941D0
                bool setup_alone_double_multi(int* seq);

                // RVA: 0x2394340 Offset: 0x2394441 VA: 0x2394340
                bool setup_alone_double_multi_00(int* seq);

                // RVA: 0x2394350 Offset: 0x2394451 VA: 0x2394350
                bool setup_alone_double_multi_01(int* seq);

                // RVA: 0x23943A0 Offset: 0x23944A1 VA: 0x23943A0
                bool setup_alone_double_multi_02(int* seq);

                // RVA: 0x2394510 Offset: 0x2394611 VA: 0x2394510
                bool setup_alone_double_multi_03(int* seq);

                // RVA: 0x2394520 Offset: 0x2394621 VA: 0x2394520
                bool setup_alone_double_multi_04(int* seq);

                // RVA: 0x23945D0 Offset: 0x23946D1 VA: 0x23945D0
                bool setup_alone_double_multi_05(int* seq);

                // RVA: 0x23945E0 Offset: 0x23946E1 VA: 0x23945E0
                bool setup_alone_double_multi_06(int* seq);

                // RVA: 0x2394620 Offset: 0x2394721 VA: 0x2394620
                bool setup_alone_double_multi_07(int* seq);

                // RVA: 0x2394800 Offset: 0x2394901 VA: 0x2394800
                bool setup_alone_double_multi_08(int* seq);

                // RVA: 0x2394880 Offset: 0x2394981 VA: 0x2394880
                bool setup_alone_double_multi_09(int* seq);

                // RVA: 0x2394920 Offset: 0x2394A21 VA: 0x2394920
                bool setup_alone_raid(int* seq);

                // RVA: 0x2394ED0 Offset: 0x2394FD1 VA: 0x2394ED0
                bool setup_comm_raid(int* seq);

                // RVA: 0x23953B0 Offset: 0x23954B1 VA: 0x23953B0
                bool setupseq_comm_raid(int* seq);

                // RVA: 0x2394C20 Offset: 0x2394D21 VA: 0x2394C20
                void setup_raid_srcParty();

                // RVA: 0x2394CF0 Offset: 0x2394DF1 VA: 0x2394CF0
                void setup_raid_trainerParam();

                // RVA: 0x2394DD0 Offset: 0x2394ED1 VA: 0x2394DD0
                void setup_raid_battleEnv(BattleEnv env, bool forServer);

                // RVA: 0x2394E60 Offset: 0x2394F61 VA: 0x2394E60
                void setup_raid_boss(BattleEnv env);

                // RVA: 0x2393600 Offset: 0x2393701 VA: 0x2393600
                void setupCommon_SetupBattleEnv();

                // RVA: 0x23955E0 Offset: 0x23956E1 VA: 0x23955E0
                void setupCommon_SetupBattleEnv(BattleEnv env);

                // RVA: 0x2395670 Offset: 0x2395771 VA: 0x2395670
                void setupCommon_SetupBattleEnv_TimeLimit(BattleEnv env);

                // RVA: 0x23956F0 Offset: 0x23957F1 VA: 0x23956F0
                void setupCommon_SetupBattleEnv_GRights(BattleEnv env);

                // RVA: 0x2395800 Offset: 0x2395901 VA: 0x2395800
                void setupCommon_SetupBattleEnv_BattleTalk(BattleEnv env);

                // RVA: 0x2393700 Offset: 0x2393801 VA: 0x2393700
                void setupCommon_CreateServerClient(BATTLE_SETUP_PARAM setupParam);

                // RVA: 0x2393180 Offset: 0x2393281 VA: 0x2393180
                BtlBagMode checkBagMode(BATTLE_SETUP_PARAM sp);

                // RVA: 0x23931A0 Offset: 0x23932A1 VA: 0x23931A0
                void setup_alone_common_ClientID(BATTLE_SETUP_PARAM sp);

                // RVA: 0x23931D0 Offset: 0x23932D1 VA: 0x23931D0
                void setupCommon_srcParty(BATTLE_SETUP_PARAM sp);

                // RVA: 0x2393540 Offset: 0x2393641 VA: 0x2393540
                void setSrcPartyToBattleEnv(BattleEnv battleEnv, byte clientID, bool forServer);

                // RVA: 0x2395850 Offset: 0x2395951 VA: 0x2395850
                byte ClientIDtoRelation(byte myClientID, byte targetClientID);

                // RVA: 0x2395BB0 Offset: 0x2395CB1 VA: 0x2395BB0
                bool cleanup_common(int* seq);

                // RVA: 0x2395D90 Offset: 0x2395E91 VA: 0x2395D90
                bool setup_comm_single(int* seq);

                // RVA: 0x2395F00 Offset: 0x2396001 VA: 0x2395F00
                bool setup_comm_double(int* seq);

                // RVA: 0x23960C0 Offset: 0x23961C1 VA: 0x23960C0
                bool setupseq_comm_determine_server(int* seq);

                // RVA: 0x2396A40 Offset: 0x2396B41 VA: 0x2396A40
                bool setupseq_comm_store_party_data(int* seq);

                // RVA: 0x2396CA0 Offset: 0x2396DA1 VA: 0x2396CA0
                bool setupseq_comm_store_player_data(int* seq);

                // RVA: 0x2396E10 Offset: 0x2396F11 VA: 0x2396E10
                bool setupseq_comm_create_server_client(int* seq);

                // RVA: 0x2396E90 Offset: 0x2396F91 VA: 0x2396E90
                bool setupseq_comm_start_server(int* seq);

                // RVA: 0x2397110 Offset: 0x2397211 VA: 0x2397110
                bool MainLoop_StandAlone();

                // RVA: 0x2397210 Offset: 0x2397311 VA: 0x2397210
                bool MainLoop_Comm_Server();

                // RVA: 0x23974B0 Offset: 0x23975B1 VA: 0x23974B0
                void watchRemoteClientCommunication();

                // RVA: 0x2397600 Offset: 0x2397701 VA: 0x2397600
                void watchMyClientCommunication();

                // RVA: 0x2397710 Offset: 0x2397811 VA: 0x2397710
                bool canLaunchDammyClient();

                // RVA: 0x2397780 Offset: 0x2397881 VA: 0x2397780
                void launchDammyClient(BTL_CLIENT_ID clientId);

                // RVA: 0x23978B0 Offset: 0x23979B1 VA: 0x23978B0
                bool MainLoop_Comm_NotServer();

                // RVA: 0x2397A10 Offset: 0x2397B11 VA: 0x2397A10
                void watchRemoteServerLoss();

                // RVA: 0x2397AE0 Offset: 0x2397BE1 VA: 0x2397AE0
                void changeServerSelf();

                // RVA: 0x2397C80 Offset: 0x2397D81 VA: 0x2397C80
                bool MainLoop_Comm_Error();

                // RVA: 0x2397440 Offset: 0x2397541 VA: 0x2397440
                void OnCommError();

                // RVA: 0x2397C90 Offset: 0x2397D91 VA: 0x2397C90
                void NotifyCommErrorToLocalClient();

                // RVA: 0x2397610 Offset: 0x2397711 VA: 0x2397610
                bool CheckAllClientQuit();

                // RVA: 0x2397D60 Offset: 0x2397E61 VA: 0x2397D60
                BtlRule GetRule();

                // RVA: 0x2397D70 Offset: 0x2397E71 VA: 0x2397D70
                bool IsWazaEffectEnable();

                // RVA: 0x2397D80 Offset: 0x2397E81 VA: 0x2397D80
                byte GetMaxFollowPokeLevel();

                // RVA: 0x2397D90 Offset: 0x2397E91 VA: 0x2397D90
                bool NeedReduleHighLevelCaptureRate();

                // RVA: 0x2397DA0 Offset: 0x2397EA1 VA: 0x2397DA0
                byte GetCaptureLevelCap();

                // RVA: 0x2397DB0 Offset: 0x2397EB1 VA: 0x2397DB0
                byte GetExpLevelCap();

                // RVA: 0x2397DC0 Offset: 0x2397EC1 VA: 0x2397DC0
                bool IsIrekaeMode();

                // RVA: 0x2397E00 Offset: 0x2397F01 VA: 0x2397E00
                bool IsCompetitorScenarioMode();

                // RVA: 0x2397E50 Offset: 0x2397F51 VA: 0x2397E50
                bool IsScenarioMultiBattle();

                // RVA: 0x2397E40 Offset: 0x2397F41 VA: 0x2397E40
                bool IsScenarioRaidBattle();

                // RVA: 0x2397EA0 Offset: 0x2397FA1 VA: 0x2397EA0
                bool IsPokeItemConsumeBattle();

                // RVA: 0x2397EE0 Offset: 0x2397FE1 VA: 0x2397EE0
                bool CanAddBonusMoney();

                // RVA: 0x2397F10 Offset: 0x2398011 VA: 0x2397F10
                bool IsEscapeEnableBattle();

                // RVA: 0x2397F90 Offset: 0x2398091 VA: 0x2397F90
                bool IsExpSeqEnable();

                // RVA: 0x2397FD0 Offset: 0x23980D1 VA: 0x2397FD0
                bool IsMoneySeqEnable();

                // RVA: 0x2397FF0 Offset: 0x23980F1 VA: 0x2397FF0
                BtlPokePos GetValidPosMax();

                // RVA: 0x2398060 Offset: 0x2398161 VA: 0x2398060
                uint GetFrontPosNum(byte clientID);

                // RVA: 0x23981C0 Offset: 0x23982C1 VA: 0x23981C0
                uint GetSidePosNum(BtlSide side);

                // RVA: 0x2398250 Offset: 0x2398351 VA: 0x2398250
                uint GetOpponentFrontPosNum(byte clientID);

                // RVA: 0x23982B0 Offset: 0x23983B1 VA: 0x23982B0
                bool IsPokePosExist(BtlPokePos pos);

                // RVA: 0x2398340 Offset: 0x2398441 VA: 0x2398340
                bool IsFrontPos(BtlPokePos pos);

                // RVA: 0x23912C0 Offset: 0x23913C1 VA: 0x23912C0
                // BtlCompetitor GetCompetitor(bool isDemoCaptureConvert);

                // RVA: 0x23970E0 Offset: 0x23971E1 VA: 0x23970E0
                BtlCommMode GetCommMode();

                // RVA: 0x23983D0 Offset: 0x23984D1 VA: 0x23983D0
                const char * GetWinBGMStr();

                // RVA: 0x2397F50 Offset: 0x2398051 VA: 0x2397F50
                BtlEscapeMode GetEscapeMode();

                // RVA: 0x23983E0 Offset: 0x23984E1 VA: 0x23983E0
                bool CanUseEscapeItem();

                // RVA: 0x2398410 Offset: 0x2398511 VA: 0x2398410
                BTL_FIELD_SITUATION GetFieldSituation();

                // RVA: 0x2398420 Offset: 0x2398521 VA: 0x2398420
                BtlWeather GetDefaultWeather();

                // RVA: 0x2398430 Offset: 0x2398531 VA: 0x2398430
                byte GetDefaultGround();

                // RVA: 0x2398440 Offset: 0x2398541 VA: 0x2398440
                BattleEffectComponentData GetBattleEffectData();

                // RVA: 0x2398450 Offset: 0x2398551 VA: 0x2398450
                byte GetForceQuitTurnCount();

                // RVA: 0x2398470 Offset: 0x2398571 VA: 0x2398470
                MyStatus GetPlayerStatus();

                // RVA: 0x2398480 Offset: 0x2398581 VA: 0x2398480
                bool IsZukanRegistered(MonsNo monsno);

                // RVA: 0x23984F0 Offset: 0x23985F1 VA: 0x23984F0
                bool IsZukanRegistered(BTL_POKEPARAM bpp);

                // RVA: 0x2398570 Offset: 0x2398671 VA: 0x2398570
                uint GetZukanCapturedCount();

                // RVA: 0x23985E0 Offset: 0x23986E1 VA: 0x23985E0
                bool IsZukanPokeSeeOnBattleStart(MonsNo monsno);

                // RVA: 0x2398660 Offset: 0x2398761 VA: 0x2398660
                void RegisterZukanSeeFlag(BTL_POKEPARAM bpp);

                // RVA: 0x2398770 Offset: 0x2398871 VA: 0x2398770
                bool canRegisterZukanSeeFlag(BTL_POKEPARAM pTarget);

                // RVA: 0x23988D0 Offset: 0x23989D1 VA: 0x23988D0
                void RegisterZukanSpGGetFlag(BTL_POKEPARAM bpp);

                // RVA: 0x23988E0 Offset: 0x23989E1 VA: 0x23988E0
                void IncrementZukanBattleCount(BTL_POKEPARAM bpp, bool isCaptured);

                // RVA: 0x23989D0 Offset: 0x2398AD1 VA: 0x23989D0
                uint GetClientCoverPosNum(byte clientID);

                // RVA: 0x2398A60 Offset: 0x2398B61 VA: 0x2398A60
                BTL_CLIENT_ID GetPosCoverClientId(BtlPokePos pos);

                // RVA: 0x2391360 Offset: 0x2391461 VA: 0x2391360
                bool IsExistClient(byte clientID);

                // RVA: 0x2397760 Offset: 0x2397861 VA: 0x2397760
                BtlMultiMode GetMultiMode();

                // RVA: 0x2398AF0 Offset: 0x2398BF1 VA: 0x2398AF0
                bool IsMultiMode();

                // RVA: 0x2398B10 Offset: 0x2398C11 VA: 0x2398B10
                bool IsPlayerRatingDisplay();

                // RVA: 0x2398B20 Offset: 0x2398C21 VA: 0x2398B20
                bool IsWatchMember();

                // RVA: 0x2398140 Offset: 0x2398241 VA: 0x2398140
                BtlSide GetClientSide(byte clientID);

                // RVA: 0x2398B30 Offset: 0x2398C31 VA: 0x2398B30
                bool IsPlayerSide(BtlSide side);

                // RVA: 0x2398C00 Offset: 0x2398D01 VA: 0x2398C00
                bool IsSideExist(BtlSide side);

                // RVA: 0x2398C80 Offset: 0x2398D81 VA: 0x2398C80
                void ExpandSide(BtlSide* expandSide, byte expandSideNum, BtlSide side);

                // RVA: 0x2398D20 Offset: 0x2398E21 VA: 0x2398D20
                BtlPokePos GetSidePos(BtlSide side, byte index);

                // RVA: 0x2398DB0 Offset: 0x2398EB1 VA: 0x2398DB0
                byte GetSideNum();

                // RVA: 0x2396DF0 Offset: 0x2396EF1 VA: 0x2396DF0
                byte GetClientNum();

                // RVA: 0x2398E20 Offset: 0x2398F21 VA: 0x2398E20
                byte GetClientNum(BtlSide side);

                // RVA: 0x2398EB0 Offset: 0x2398FB1 VA: 0x2398EB0
                byte GetEnemyClientNum(byte clientID);

                // RVA: 0x2398ED0 Offset: 0x2398FD1 VA: 0x2398ED0
                BtlPokePos GetOpponentPokePos(BtlPokePos basePos, byte idx);

                // RVA: 0x2398F60 Offset: 0x2399061 VA: 0x2398F60
                BtlPokePos GetFriendPokePos(BtlPokePos basePos, byte idx);

                // RVA: 0x2398FF0 Offset: 0x23990F1 VA: 0x2398FF0
                bool IsFriendPokePos(BtlPokePos pos1, BtlPokePos pos2);

                // RVA: 0x2399080 Offset: 0x2399181 VA: 0x2399080
                bool IsOpponentClientID(byte clientID1, byte clientID2);

                // RVA: 0x23990A0 Offset: 0x23991A1 VA: 0x23990A0
                byte btlPos_to_clientID(BtlPokePos btlPos);

                // RVA: 0x2399130 Offset: 0x2399231 VA: 0x2399130
                void btlPos_to_cliendID_and_posIdx(BtlPokePos btlPos, byte clientID, byte posIdx);

                // RVA: 0x2399290 Offset: 0x2399391 VA: 0x2399290
                BtlPokePos PokeIDtoPokePos(POKECON pokeCon, byte pokeID);

                // RVA: 0x2399510 Offset: 0x2399611 VA: 0x2399510
                BtlvPos PokeIDtoViewPos(POKECON pokeCon, byte pokeID);

                // RVA: 0x2399870 Offset: 0x2399971 VA: 0x2399870
                byte BtlPosToClientID(BtlPokePos pos);

                // RVA: 0x2399900 Offset: 0x2399A01 VA: 0x2399900
                byte BtlPosToPosIdx(BtlPokePos pos);

                // RVA: 0x23983C0 Offset: 0x23984C1 VA: 0x23983C0
                void BtlPosToClientID_and_PosIdx(BtlPokePos pos, byte clientID, byte posIdx);

                // RVA: 0x2399930 Offset: 0x2399A31 VA: 0x2399930
                BtlvPos ClientIDtoTrainerViewPos(byte clientID);

                // RVA: 0x2399560 Offset: 0x2399661 VA: 0x2399560
                BtlvPos BtlPosToViewPos(BtlPokePos pos);

                // RVA: 0x2399A20 Offset: 0x2399B21 VA: 0x2399A20
                BtlPokePos ViewPosToBtlPos(byte vpos);

                // RVA: 0x2399AD0 Offset: 0x2399BD1 VA: 0x2399AD0
                byte GetPlayerClientID();

                // RVA: 0x2399AE0 Offset: 0x2399BE1 VA: 0x2399AE0
                byte GetPlayerFriendCleintID();

                // RVA: 0x2399B10 Offset: 0x2399C11 VA: 0x2399B10
                byte GetFriendCleintID(byte clientID);

                // RVA: 0x2399B40 Offset: 0x2399C41 VA: 0x2399B40
                byte GetEnemyClientID(byte idx);

                // RVA: 0x2398290 Offset: 0x2398391 VA: 0x2398290
                uint GetOpponentClientID(byte clientID, byte idx);

                // RVA: 0x2399B70 Offset: 0x2399C71 VA: 0x2399B70
                bool DecrementPlayerItem(byte clientID, ushort itemID);

                // RVA: 0x2399C60 Offset: 0x2399D61 VA: 0x2399C60
                bool AddItem(byte clientID, ushort itemID);

                // RVA: 0x2399D40 Offset: 0x2399E41 VA: 0x2399D40
                bool IsRecordEnable();

                // RVA: 0x2399D70 Offset: 0x2399E71 VA: 0x2399D70
                void NotifyCapturedInfo(CaptureInfo info);

                // RVA: 0x2399DE0 Offset: 0x2399EE1 VA: 0x2399DE0
                void NotifyTurnedLevelUpPokePos(byte pokeID);

                // RVA: 0x2399FC0 Offset: 0x239A0C1 VA: 0x2399FC0
                bool CheckTurnedLevelUp(byte pokeID);

                // RVA: 0x239A140 Offset: 0x239A241 VA: 0x239A140
                void NotifyRaidCaptureStart();

                // RVA: 0x239A160 Offset: 0x239A261 VA: 0x239A160
                void NotifyRaidExitLose();

                // RVA: 0x239A170 Offset: 0x239A271 VA: 0x239A170
                void NotifyBattleResult(BtlResult result, ResultCause resultCause, bool isForceSetEnable);

                // RVA: 0x239A190 Offset: 0x239A291 VA: 0x239A190
                BtlResult GetBattleResult();

                // RVA: 0x239A1A0 Offset: 0x239A2A1 VA: 0x239A1A0
                ResultCause GetBattleResultCause();

                // RVA: 0x239A1B0 Offset: 0x239A2B1 VA: 0x239A1B0
                void NotifyCmdCheckError();

                // RVA: 0x239A1F0 Offset: 0x239A2F1 VA: 0x239A1F0
                uint FixRegularMoney();

                // RVA: 0x239A340 Offset: 0x239A441 VA: 0x239A340
                void AddBonusMoney(uint volume);

                // RVA: 0x2390FB0 Offset: 0x23910B1 VA: 0x2390FB0
                uint GetBonusMoney();

                // RVA: 0x239A370 Offset: 0x239A471 VA: 0x239A370
                void SetMoneyDblUp(MoneyDblUpCause cause);

                // RVA: 0x239A2D0 Offset: 0x239A3D1 VA: 0x239A2D0
                uint calcMoneyDblUpRatio();

                // RVA: 0x239A3B0 Offset: 0x239A4B1 VA: 0x239A3B0
                uint FixLoseMoney();

                // RVA: 0x239A490 Offset: 0x239A591 VA: 0x239A490
                void lectNatsukiDead(BTL_POKEPARAM bpp, bool fLargeDiffLevel);

                // RVA: 0x239A4D0 Offset: 0x239A5D1 VA: 0x239A4D0
                void natsukiPut(BTL_POKEPARAM bpp, DaisukiType calcID);

                // RVA: 0x239A640 Offset: 0x239A741 VA: 0x239A640
                void lectPokeWazaOboe(byte pokeID);

                // RVA: 0x239A6F0 Offset: 0x239A7F1 VA: 0x239A6F0
                byte GetClientFrontPosCount(byte clientID);

                // RVA: 0x239A780 Offset: 0x239A881 VA: 0x239A780
                byte GetClientBenchPosIndex(byte clientID);

                // RVA: 0x23987F0 Offset: 0x23988F1 VA: 0x23987F0
                bool IsPlayersPokeID(byte pokeID);

                // RVA: 0x239A810 Offset: 0x239A911 VA: 0x239A810
                bool IsFriendPokeID(byte pokeID1, byte pokeID2);

                // RVA: 0x239A880 Offset: 0x239A981 VA: 0x239A880
                BtlSide PokeIDtoSide(byte pokeID);

                // RVA: 0x239A980 Offset: 0x239AA81 VA: 0x239A980
                BtlSide PokeIDtoOpponentSide(byte pokeID);

                // RVA: 0x239AA00 Offset: 0x239AB01 VA: 0x239AA00
                BtlSide GetOpponentSide(BtlSide side);

                // RVA: 0x239AA80 Offset: 0x239AB81 VA: 0x239AA80
                void SetIllusionForParty(BTL_PARTY party, byte clientID);

                // RVA: 0x238FD40 Offset: 0x238FE41 VA: 0x238FD40
                bool GetSetupStatusFlag(BTL_STATUS_FLAG flag);

                // RVA: 0x239ABD0 Offset: 0x239ACD1 VA: 0x239ABD0
                void RECORDDATA_Inc(RECORD_ID recID);

                // RVA: 0x239AC00 Offset: 0x239AD01 VA: 0x239AC00
                void RECORDDATA_Add(RECORD_ID recID, uint value);

                // RVA: 0x239AC30 Offset: 0x239AD31 VA: 0x239AC30
                bool IsShooterEnable();

                // RVA: 0x239AC40 Offset: 0x239AD41 VA: 0x239AC40
                bool IsItemEnable();

                // RVA: 0x239AC70 Offset: 0x239AD71 VA: 0x239AC70
                bool IsFriendshipActive(BTL_POKEPARAM bpp);

                // RVA: 0x238F910 Offset: 0x238FA11 VA: 0x238F910
                byte GetPokeFriendship(BTL_POKEPARAM bpp);

                // RVA: 0x239AD90 Offset: 0x239AE91 VA: 0x239AD90
                bool CanEvolveAfterBattle(BTL_POKEPARAM poke);

                // RVA: 0x239AFB0 Offset: 0x239B0B1 VA: 0x239AFB0
                void GetEvolveSituation(EvolveSituation dest, byte pokeId);

                // RVA: 0x239B010 Offset: 0x239B111 VA: 0x239B010
                void NotifyPokemonLevelup(BTL_POKEPARAM bpp);

                // RVA: 0x239B030 Offset: 0x239B131 VA: 0x239B030
                void CalcNatsukiItemUse(BTL_POKEPARAM bpp, ushort itemNo);

                // RVA: 0x239B150 Offset: 0x239B251 VA: 0x239B150
                void NotifyPokemonGetToGameSystem(BTL_POKEPARAM bpp);

                // RVA: 0x239B180 Offset: 0x239B281 VA: 0x239B180
                bool IsResultStrictMode();

                // RVA: 0x2390BF0 Offset: 0x2390CF1 VA: 0x2390BF0
                BtlResult checkWinner(byte myClientId);

                // RVA: 0x239B1A0 Offset: 0x239B2A1 VA: 0x239B1A0
                uint GetCommandLimitTime();

                // RVA: 0x239B1B0 Offset: 0x239B2B1 VA: 0x239B1B0
                uint GetClientLimitTime();

                // RVA: 0x239B1C0 Offset: 0x239B2C1 VA: 0x239B1C0
                bool IsClientLimitTimeExist();

                // RVA: 0x239B1F0 Offset: 0x239B2F1 VA: 0x239B1F0
                uint GetGameLimitTime();

                // RVA: 0x239B200 Offset: 0x239B301 VA: 0x239B200
                bool IsGameLimitTimeExist();

                // RVA: 0x239B210 Offset: 0x239B311 VA: 0x239B210
                bool CheckGameLimitTimeOver();

                // RVA: 0x239B270 Offset: 0x239B371 VA: 0x239B270
                bool CheckClientLimitTimeOver();

                // RVA: 0x239B290 Offset: 0x239B391 VA: 0x239B290
                bool IsLongEncount();

                // RVA: 0x239B2A0 Offset: 0x239B3A1 VA: 0x239B2A0
                bool CheckRecPlayError();

                // RVA: 0x2390D00 Offset: 0x2390E01 VA: 0x2390D00
                void Bspstore_RecordData();

                // RVA: 0x239B310 Offset: 0x239B411 VA: 0x239B310
                void StartFadeoutForRecPlay();

                // RVA: 0x239B460 Offset: 0x239B561 VA: 0x239B460
                void ResetForRecPlay(uint nextTurnNum);

                // RVA: 0x239B710 Offset: 0x239B811 VA: 0x239B710
                void NotifyChapterSkipEnd();

                // RVA: 0x23912E0 Offset: 0x23913E1 VA: 0x23912E0
                BTL_CLIENT GetClient(byte clientID);

                // RVA: 0x239B860 Offset: 0x239B961 VA: 0x239B860
                BTL_CLIENT GetClientByPokeID(byte pokeID);

                // RVA: 0x239B980 Offset: 0x239BA81 VA: 0x239B980
                void Kentei_ClearField(BATTLE_SETUP_PARAM sp);

                // RVA: 0x2390DB0 Offset: 0x2390EB1 VA: 0x2390DB0
                void Bspstore_KenteiData();

                // RVA: 0x239B9E0 Offset: 0x239BAE1 VA: 0x239B9E0
                void trainerParam_Init();

                // RVA: 0x23918E0 Offset: 0x23919E1 VA: 0x23918E0
                void trainerParam_Clear();

                // RVA: 0x239BA50 Offset: 0x239BB51 VA: 0x239BA50
                void trainerParam_ClearCore(TRAINER_DATA data);

                // RVA: 0x23923D0 Offset: 0x23924D1 VA: 0x23923D0
                void trainerParam_StorePlayer(TRAINER_DATA dst, MyStatus playerData);

                // RVA: 0x239BB50 Offset: 0x239BC51 VA: 0x239BB50
                void trainerParam_StoreCore(TRAINER_DATA dst);

                // RVA: 0x2392500 Offset: 0x2392601 VA: 0x2392500
                void trainerParam_StoreNPCTrainer(TRAINER_DATA dst, BSP_TRAINER_DATA trData);

                // RVA: 0x2392750 Offset: 0x2392851 VA: 0x2392750
                void trainerParam_SetupForRecPlay(byte clientID);

                // RVA: 0x239BD30 Offset: 0x239BE31 VA: 0x239BD30
                bool trainerParam_IsExist(TRAINER_DATA trData);

                // RVA: 0x239BD90 Offset: 0x239BE91 VA: 0x239BD90
                bool IsClientTrainerExist(byte clientID);

                // RVA: 0x23959D0 Offset: 0x2395AD1 VA: 0x23959D0
                bool IsClientNPC(byte clientID);

                // RVA: 0x239BE40 Offset: 0x239BF41 VA: 0x239BE40
                ushort GetClientUseItem(byte clientID, byte itemIdx);

                // RVA: 0x239BEB0 Offset: 0x239BFB1 VA: 0x239BEB0
                uint GetClientAIBit(byte clientID);

                // RVA: 0x239BF30 Offset: 0x239C031 VA: 0x239BF30
                TRAINER_DATA GetClientTrainerData(byte clientID);

                // RVA: 0x239BF80 Offset: 0x239C081 VA: 0x239BF80
                TrainerID GetClientTrainerID(byte clientID);

                // RVA: 0x239BFE0 Offset: 0x239C0E1 VA: 0x239BFE0
                void GetClientTrainerMsg(byte clientID, TrainerMessageID messageID, const char * outMessageLabel, const char * outSequenceName);

                // RVA: 0x239C190 Offset: 0x239C291 VA: 0x239C190
                const char * GetCliehtTrainerSequence(byte clientID, TrainerSequenceID sequenceID);

                // RVA: 0x239C280 Offset: 0x239C381 VA: 0x239C280
                const char * GetClientTrainerMsg(byte clientID, TrainerMessageID messageID);

                // RVA: 0x239C2B0 Offset: 0x239C3B1 VA: 0x239C2B0
                const char * GetClientTrainerName(byte clientID);

                // RVA: 0x239C2F0 Offset: 0x239C3F1 VA: 0x239C2F0
                const char * GetClientTrainerNameLabel(byte clientID);

                // RVA: 0x239C330 Offset: 0x239C431 VA: 0x239C330
                const char * GetClientTrainerTypeLabel(byte clientID);

                // RVA: 0x239C370 Offset: 0x239C471 VA: 0x239C370
                Sex GetClientTrainerSex(byte clientID);

                // RVA: 0x239C3B0 Offset: 0x239C4B1 VA: 0x239C3B0
                TrainerType GetClientTrainerType(byte clientID);

                // RVA: 0x238FD00 Offset: 0x238FE01 VA: 0x238FD00
                TrainerTypeGroup GetClientTrainerGroup(byte clientID);

                // RVA: 0x239C3F0 Offset: 0x239C4F1 VA: 0x239C3F0
                byte GetClientTrainerGold(byte clientID);

                // RVA: 0x239C430 Offset: 0x239C531 VA: 0x239C430
                const char * GetClientTrainerModelID(byte clientID);

                // RVA: 0x239C470 Offset: 0x239C571 VA: 0x239C470
                int GetClientTrainerColorID(byte clientID);

                // RVA: 0x239C4B0 Offset: 0x239C5B1 VA: 0x239C4B0
                const char * GetClientTrainerWinEffect(byte clientID);

                // RVA: 0x239C4E0 Offset: 0x239C5E1 VA: 0x239C4E0
                HandDominance GetClientTrainerHandDominance(byte clientID);

                // RVA: 0x239C650 Offset: 0x239C751 VA: 0x239C650
                HandDominance GetClientTrainerHoldBallHandDominance(byte clientID);

                // RVA: 0x239C710 Offset: 0x239C811 VA: 0x239C710
                float GetClientTrainerThrowTime(byte clientID);

                // RVA: 0x239C7F0 Offset: 0x239C8F1 VA: 0x239C7F0
                float GetClientTrainerCaptureThrowTime(byte clientID);

                // RVA: 0x239C8D0 Offset: 0x239C9D1 VA: 0x239C8D0
                float GetClientTrainerLoseLoopTime(byte clientID);

                // RVA: 0x239C9B0 Offset: 0x239CAB1 VA: 0x239C9B0
                const char * GetClientTrainefect(byte clientID);

                // RVA: 0x239CA70 Offset: 0x239CB71 VA: 0x239CA70
                TrainerTable::SheetTrainerData GetClientTrainerDataXLSX(byte clientID);

                // RVA: 0x239C5A0 Offset: 0x239C6A1 VA: 0x239C5A0
                TrainerTable::SheetTrainerType GetClientTrainerTypeDataXLSX(byte clientID);

                // RVA: 0x2395A10 Offset: 0x2395B11 VA: 0x2395A10
                MyStatus GetClientPlayerData(byte clientID);

                // RVA: 0x239CAB0 Offset: 0x239CBB1 VA: 0x239CAB0
                ushort GetClientRating(byte clientID);

                // RVA: 0x239CB10 Offset: 0x239CC11 VA: 0x239CB10
                ClientPublicInformation GetClientPublicInformation(byte clientID);

                // RVA: 0x2390BD0 Offset: 0x2390CD1 VA: 0x2390BD0
                bool IsRecordPlayMode();

                // RVA: 0x2395810 Offset: 0x2395911 VA: 0x2395810
                bool CheckImServerMachine();

                // RVA: 0x239CB90 Offset: 0x239CC91 VA: 0x239CB90
                bool HasPlayerGakusyuSouti();

                // RVA: 0x2395130 Offset: 0x2395231 VA: 0x2395130
                BtlPokePos GetClientPokePos(byte clientID, byte posIdx);

                // RVA: 0x239CBA0 Offset: 0x239CCA1 VA: 0x239CBA0
                void srcParty_Create();

                // RVA: 0x2391810 Offset: 0x2391911 VA: 0x2391810
                void srcParty_Delete();

                // RVA: 0x2395480 Offset: 0x2395581 VA: 0x2395480
                void srcParty_Set(byte clientID, PokeParty party);

                // RVA: 0x239CD10 Offset: 0x239CE11 VA: 0x239CD10
                static void srcParty_FormChangeForX(PokeParty party);

                // RVA: 0x239CDE0 Offset: 0x239CEE1 VA: 0x239CDE0
                static void srcParty_FromChange_OnBattleStart(PokemonParam pokeParam);

                // RVA: 0x2393530 Offset: 0x2393631 VA: 0x2393530
                void setupUnknownPokeNickName(PokeParty party);

                // RVA: 0x2395940 Offset: 0x2395A41 VA: 0x2395940
                PokeParty GetSrcParty(byte clientID, bool fForServer);

                // RVA: 0x2395990 Offset: 0x2395A91 VA: 0x2395990
                PartyDesc GetPartySetupParam(byte clientID);

                // RVA: 0x239CE20 Offset: 0x239CF21 VA: 0x239CE20
                RaidBattleParam GetRaidBattleParam();

                // RVA: 0x2392EF0 Offset: 0x2392FF1 VA: 0x2392EF0
                static byte GetClientBasePokeID(byte clientID);

                // RVA: 0x2399400 Offset: 0x2399501 VA: 0x2399400
                static byte PokeIDtoClientID(byte pokeID);

                // RVA: 0x2399F50 Offset: 0x239A051 VA: 0x2399F50
                static byte PokeIDtoShortID(byte pokeID);

                // RVA: 0x239CE30 Offset: 0x239CF31 VA: 0x239CE30
                static byte ShortIDtoPokeID(byte clientID, byte shortID);

                // RVA: 0x239CEB0 Offset: 0x239CFB1 VA: 0x239CEB0
                BtlPokePos GetFacedPokePos(BtlPokePos pos);

                // RVA: 0x239CF40 Offset: 0x239D041 VA: 0x239CF40
                bool IsFriendClientID(byte clientID_1, byte clientID_2);

                // RVA: 0x239D030 Offset: 0x239D131 VA: 0x239D030
                BtlSide PosToSide(BtlPokePos pos);

                // RVA: 0x239D0C0 Offset: 0x239D1C1 VA: 0x239D0C0
                BATTLE_CONVENTION_INFO GetBattleConventionInfo(byte id);

                // RVA: 0x239D110 Offset: 0x239D211 VA: 0x239D110
                void NotifyPGLRecord(BTL_POKEPARAM bpp, PGLRecord::RecParam recParam);

                // RVA: 0x239D2C0 Offset: 0x239D3C1 VA: 0x239D2C0
                void SetTvNaviData_FrontPoke(BTL_POKEPARAM bpp1, BTL_POKEPARAM bpp2);

                // RVA: 0x239D350 Offset: 0x239D451 VA: 0x239D350
                void SetTvNaviData_UseWaza(BTL_POKEPARAM bpp, ushort wazaNo);

                // RVA: 0x239D3C0 Offset: 0x239D4C1 VA: 0x239D3C0
                void NotifyPokemonDead(byte pokeID);

                // RVA: 0x239D3D0 Offset: 0x239D4D1 VA: 0x239D3D0
                bool RankUpByClient(byte pokeID, BTL_POKEPARAM::ValueID rank, byte volume);

                // RVA: 0x239D490 Offset: 0x239D591 VA: 0x239D490
                bool RankDownByClient(byte pokeID, BTL_POKEPARAM::ValueID rank, byte volume);

                // RVA: 0x239D550 Offset: 0x239D651 VA: 0x239D550
                void SetUpRandSystem();

                // RVA: 0x239D5C0 Offset: 0x239D6C1 VA: 0x239D5C0
                bool IsRaidBossRare();

                // RVA: 0x239D5D0 Offset: 0x239D6D1 VA: 0x239D5D0
                bool IsGEnableByNPC(byte pokeID);

                // RVA: 0x23909F0 Offset: 0x2390AF1 VA: 0x23909F0
                void WatchCmdAddReader();

                // RVA: 0x239D6A0 Offset: 0x239D7A1 VA: 0x239D6A0
                bool NeedEndGOnBattleEnd();

                // RVA: 0x2393190 Offset: 0x2393291 VA: 0x2393190
                void WatchDataRecvAfterFunc();

                // RVA: 0x2390980 Offset: 0x2390A81 VA: 0x2390980
                void UpdateNetClient();

                // RVA: 0x239D870 Offset: 0x239D971 VA: 0x239D870
                void NotifyPokeMemory_AllDead(byte causedPokeID);

                // RVA: 0x239D990 Offset: 0x239DA91 VA: 0x239D990
                bool IsLiveCup();

                // RVA: 0x239D9A0 Offset: 0x239DAA1 VA: 0x239D9A0
                void SyncClientLimitTimeForLiveCupWatcher(ServerSendData::CLIENT_LIMIT_TIME time);

                // RVA: 0x239DA30 Offset: 0x239DB31 VA: 0x239DA30
                void SendClientTimerForLiveCupWatcher(uint* timeBuf, uint num);

                // RVA: 0x239DA40 Offset: 0x239DB41 VA: 0x239DA40
                void PauseTimerForLiveCup();

                // RVA: 0x239DB20 Offset: 0x239DC21 VA: 0x239DB20
                void RestartTimerForLiveCup(uint gameTimeS);

                // RVA: 0x239DC20 Offset: 0x239DD21 VA: 0x239DC20
                uint GetRemainingGameTimeForLiveCup();

                // RVA: 0x239DCA0 Offset: 0x239DDA1 VA: 0x239DCA0
                BtlDetailRule GetDetailRule();

                // RVA: 0x239DEC0 Offset: 0x239DFC1 VA: 0x239DEC0
                byte GetBallDecoSeals(byte pokeID, AffixSealData** sealData);

                // RVA: 0x239E000 Offset: 0x239E101 VA: 0x239E000
                CapsuleData* GetBallDeco(byte clientID, PokemonParam pp);

                // RVA: 0x239E0E0 Offset: 0x239E1E1 VA: 0x239E0E0
                bool IsTurearukiPokemon(PokemonParam pp);

                
            };
        } // namespace Logic
        
    } // namespace Battle
    
} // namespace Dpr
