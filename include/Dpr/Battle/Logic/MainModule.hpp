#pragma once

#include "il2cpp.hpp"

#include "BATTLE_SETUP_PARAM.hpp"
#include "Dpr/BallDeco.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct MainModule_Fields
            {
                BATTLE_SETUP_PARAM_o* m_setupParam;
                struct BattleViewBase_o* m_viewCore;
                struct Random_o* m_randSys;
                uint64_t m_randomSeed;
                struct MainModule_pSubProc_o* m_subProc;
                int32_t m_subSeq;
                int32_t m_setupStep;
                struct MainModule_pMainProc_o* m_mainLoop;
                struct Pml_PokeParty_array* m_srcParty;
                struct Pml_PokeParty_array* m_srcPartyForServer;
                struct Pml_PokeParty_o* m_tmpParty;
                struct MyStatus_o* m_playerStatus;
                struct System_Boolean_array* m_fClientQuit;
                int32_t m_rule;
                uint32_t m_regularMoney;
                uint32_t m_bonusMoney;
                uint32_t m_loseMoney;
                int32_t m_msgSpeed;
                uint16_t m_LimitTimeGame;
                uint16_t m_LimitTimeClient;
                uint16_t m_LimitTimeCommand;
                int32_t m_serverResult;
                int32_t m_serverResultCause;
                uint8_t m_myClientID;
                uint8_t m_myOrgPos;
                int32_t m_changeMode;
                uint8_t m_MultiAIDataSeq;
                uint8_t m_MultiAIClientNum;
                struct System_Byte_array* m_MultiAIClientID;
                bool m_fCommError;
                bool m_fCommErrorMainQuit;
                bool m_fWazaEffectEnable;
                bool m_fGetMoneyFixed;
                bool m_fLoseMoneyFixed;
                bool m_padding;
                bool m_isFinalizeStarted;
                struct BTL_SERVER_o* m_server;
                struct BTL_SERVER_o* m_cmdCheckServer;
                struct BTL_CLIENT_array* m_client;
                struct BTL_CLIENT_array* m_dummyClient;
                struct TRAINER_DATA_array* m_trainerParam;
                struct ClientPublicInformation_array* m_clientPublicInformation;
                struct AdapterFactory_o* m_adapterFactory;
                struct rec_Reader_o* m_recReader;
                struct System_Boolean_array* m_moneyDblUpCause;
                struct System_Collections_Generic_Dictionary_uint__uint__o* m_zukanDataOnBattleStart;
                struct PokeIDRec_o* m_deadPokeIDRec;
                struct BattleEnv_o* m_battleEnvForClient;
                struct BattleEnv_o* m_battleEnvForServer;
                struct Net_Client_o* m_iPtrNetClient;
                bool isInitialized;
                bool isFinalized;
                struct Dpr::BallDeco::CapsuleData_o DummyCapsuleData;
            };

            struct MainModule_RGCTXs
            {
            };

            struct MainModule_VTable
            {
                VirtualInvokeData _0_Equals;
                VirtualInvokeData _1_Finalize;
                VirtualInvokeData _2_GetHashCode;
                VirtualInvokeData _3_ToString;
            };

            struct MainModule_c
            {
                Il2CppClass_1 _1;
                struct MainModule_StaticFields* static_fields;
                MainModule_RGCTXs* rgctx_data;
                Il2CppClass_2 _2;
                MainModule_VTable vtable;
            };

            struct MainModule_o
            {
                MainModule_c *klass;
                void *monitor;
                MainModule_Fields fields;
            };

            struct MainModule_StaticFields
            {
                struct BtlvPos_array_array* rule_double_vpos;
                struct BtlvPos_array_array* rule_double_vpos_PA_A;
                struct BtlvPos_array_array* rule_raid_vpos1;
                struct BtlvPos_array_array* rule_raid_vpos2;
                struct BtlvPos_array_array* rule_raid_vpos3;
                struct BtlvPos_array_array* rule_raid_vpos4;
            };
        }
    }
}
