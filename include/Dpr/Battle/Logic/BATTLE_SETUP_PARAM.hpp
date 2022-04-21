#pragma once

#include "il2cpp.hpp"
#include "Pml/PokeParty.hpp"

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {
            struct RaidRewardItemData_array;
            struct Pml_Personal_RaidBossAngryWazaTiming_array;

            struct RaidBossDesc_Fields {
                float hpCoef;
                uint8_t gWazaFrequency;
                uint8_t actNum;
                uint8_t gWallGaugeMax;
                uint8_t gWallGaugeInit;
                uint8_t gWallRepairTurn;
                System::Array<uint8_t> * angryHPThreshold;
                System::Array<int32_t> * angryWazaNo;
                Pml_Personal_RaidBossAngryWazaTiming_array* angryWazaTimming;
            };

            struct RaidBossDesc_c;

            struct RaidBossDesc_o {
                RaidBossDesc_c *klass;
                void *monitor;
                RaidBossDesc_Fields fields;
            };

            struct RaidBattleParam_Fields {
                uint8_t bossGrade;
                bool isBossRare;
                RaidRewardItemData_array* rewards;
                RaidBossDesc_o* bossDesc;
                uint8_t bossCaptureDifficulty;
                bool needApplyCaptureCoefForSpGDuplication;
            };

            struct RaidBattleParam_c;

            struct RaidBattleParam_o {
                RaidBattleParam_c *klass;
                void *monitor;
                RaidBattleParam_Fields fields;
            };

            struct RaidBattleParam_o;
            struct BTL_FIELD_SITUATION_o;
            struct BattleEffectComponentData_o;
            struct MiseaiData_array;

            struct BATTLE_SETUP_PARAM_Fields {
                int32_t competitor;
                int32_t rule;
                struct RaidBattleParam_o* raidBattleParam;
                struct BTL_FIELD_SITUATION_o* fieldSituation;
                struct BattleEffectComponentData_o* btlEffComponent;
                struct Pml_PokePara_EvolveSituation_o* evolveSituation;
                uint8_t commMode;
                uint8_t multiMode;
                uint8_t commPos;
                uint8_t recordDataMode;
                MiseaiData_array* miseaiData;
                System::Array<int32_t> * stations;
                bool isPlayerRatingDisplay;
                bool isLiveRecSendEnable;
                System::Array<Pml::PokeParty_o *> * party;
                // struct PartyDesc_array* partyDesc;
                // struct MyStatus_array* playerStatus;
                // struct System_UInt16_array* playerRating;
                // struct Dpr_BallDeco_CapsuleData_array_array* ballDecoDesc;
                // struct BSP_TRAINER_DATA_array* tr_data;
                // bool bGakusyuSouti;
                // uint16_t LimitTimeGame;
                // uint16_t LimitTimeClient;
                // uint16_t LimitTimeCommand;
                // bool bEnableTimeStop;
                // struct SHOOTER_ITEM_BIT_WORK_o* shooterBitWork;
                // bool reduceHighLevelCaptureRate;
                // uint8_t maxFollowPokeLevel;
                // uint8_t captureLevelCap;
                // uint8_t expLevelCap;
                // uint16_t commNetIDBit;
                // uint32_t btl_status_flag;
                // uint32_t wildPokeAiBitFlag;
                // float moneyRate;
                // uint8_t forceQuitTurnCount;
                // bool bSkyBattle;
                // bool bSakasaBattle;
                // bool bMustCapture;
                // bool bNoGainBattle;
                // int32_t safariBallNum;
                // bool bVoiceChat;
                // struct BATTLE_CONVENTION_INFO_array* conventionInfo;
                // int32_t getMoney;
                // int32_t result;
                // uint8_t fairyGymResult;
                // bool honooGymResult_wonByPlayer;
                // uint8_t capturedPokeIdx;
                // uint8_t capturedClientID;
                // uint8_t commServerVer;
                // int32_t commError;
                // bool isDisplayedCommError;
                // uint8_t* recBuffer;
                // uint32_t recDataSize;
                // uint64_t recRandSeed;
                // struct BattleRecordHeader_o* recHeader;
                // struct BATTLE_KENTEI_RESULT_o* kenteiResult;
                // bool cmdIllegalFlag;
                // bool recPlayCompleteFlag;
                // bool WifiBadNameFlag;
                // bool isDisconnectOccur;
                // bool isWatchMember;
                // struct System_Boolean_array* fightPokeIndex;
                // struct System_Boolean_array* turnedLvUpPokeIndex;
                // struct PokeResult_array* pokeResult;
                // struct System_Byte_array_array* party_state;
                // struct System_UInt32_array* restHPRatio;
                // struct BATTLE_PGL_RECORD_SET_o* PGL_Record;
                // struct BATTLE_TVNAVI_DATA_o* tvNaviData;
                // struct PokeMemoryResult_o* pokeMemoryResult;
                // int32_t _throwBallNum_k__BackingField;
            };

            struct BATTLE_SETUP_PARAM_c;

            struct BATTLE_SETUP_PARAM_o
            {
                BATTLE_SETUP_PARAM_c *klass;
                void *monitor;
                BATTLE_SETUP_PARAM_Fields fields;
            };
        }
    }
}