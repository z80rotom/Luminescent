#include "il2cpp.hpp"
#include "logger.hpp"
#include "util.hpp"
#include "System/Array.hpp"
#include "Pml/PokeParty.hpp"
#include "Dpr/Battle/Logic/BATTLE_SETUP_PARAM.hpp"
#include "Dpr/Battle/Logic/Setup.hpp"

struct Pml_PokePara_EvolveSituation_o;

namespace Dpr
{
    namespace Battle
    {
        namespace Logic
        {

            struct BattleEnv_o;

            struct MainModule_o
            {
                // 02476980
                void setSubProcForSetup(BATTLE_SETUP_PARAM_o *setup_param, MethodInfo *method);
                // 02479570
                void setup_raid_srcParty(MethodInfo *method);
                // 02479640
                void setup_raid_trainerParam(MethodInfo *method);
                // 024797b0
                void setup_raid_boss(BattleEnv_o *env, MethodInfo *method);
                // 02477e90
                void setSrcPartyToBattleEnv(BattleEnv_o *battleEnv, uint8_t clientID, bool forServer, MethodInfo *method);

            };

            struct ExPokePos_ExpandResult_o;
            struct ExPokePos_o
            {
                // 01d722c0
                void expandPokePos_raid(ExPokePos_ExpandResult_o *result,uint8_t multiMode, MethodInfo *method);
            };

            struct PokemonPosition
            {
                // 024f0080 
                static uint32_t GetClientCoverPosNum(int32_t rule, uint8_t multiMode, int32_t clientId, MethodInfo *method);
            };
        }
    }
}


using namespace Dpr::Battle::Logic;

void setSubProcForSetup(MainModule_o *__this, BATTLE_SETUP_PARAM_o *setup_param, MethodInfo *method)
{
    socket_log_fmt("setSubProcForSetupPatched\n");
    // socket_log_fmt("Rule: %08X\n", setup_param->fields.rule);
    // setup_param->fields.rule = 2; // Just for shits and giggles. Lets see what happens
    __this->setSubProcForSetup(setup_param, method);
    socket_log_fmt("setSubProcForSetup END\n");
}

void setup_raid_srcParty(MainModule_o *__this, MethodInfo *method)
{
    socket_log_fmt("setup_raid_srcParty\n");
    __this->setup_raid_srcParty(method);
}

void setup_raid_trainerParam(MainModule_o *__this, MethodInfo *method)
{
    socket_log_fmt("setup_raid_trainerParam\n");
    __this->setup_raid_trainerParam(method);
}

void setSrcPartyToBattleEnv(MainModule_o *__this, BattleEnv_o *battleEnv, uint8_t clientID, bool forServer, MethodInfo *method)
{
    socket_log_fmt("setSrcPartyToBattleEnv\n");
    __this->setSrcPartyToBattleEnv(battleEnv, clientID, forServer, method);
    __this->setup_raid_boss(battleEnv, (MethodInfo *) nullptr);
}

// BTL_STRID_STD?

// Should use this to make Setup::normalTrainer make more sense: BTL_CLIENT_ID

// // Namespace: Dpr.Battle.Logic
// public enum BtlRule // TypeDefIndex: 9779
// {
// 	// Fields
// 	public int value__; // 0x0
// 	public const BtlRule BTL_RULE_SINGLE = 0;
// 	public const BtlRule BTL_RULE_DOUBLE = 1;
// 	public const BtlRule BTL_RULE_RAID = 2;
// 	public const BtlRule BTL_RULE_SAFARI = 3;
// }

// public const BtlPokePos POS_RAID_PLAYER_0 = 0;
// public const BtlPokePos POS_RAID_PLAYER_1 = 1;
// public const BtlPokePos POS_RAID_PLAYER_2 = 2;
// public const BtlPokePos POS_RAID_PLAYER_3 = 3;
// public const BtlPokePos POS_RAID_BOSS = 4;

// public const BtlSide BTL_SIDE_RAID_PLAYERS = 0;
// public const BtlSide BTL_SIDE_RAID_BOSS = 1;
// public const BtlSide BTL_SIDE_RAID_NUM = 2;

	// public const byte BTL_POS_RAID_NUM = 5;
	// public const byte BTL_POS_RAID_NUM_PLAYERS = 4;
	// public const byte BTL_POS_RAID_NUM_BOSS = 1;


	// public const byte RAIDBOSS_GRADE_MIN = 1;
	// public const byte RAIDBOSS_GRADE_MAX = 5;
	// public const byte RAIDBOSS_ANGRY_COUNT_MAX = 2;
// Probably need this to setup the parties properly
// 1 = primary enemy (unless raid boss)
// 2 = partner 
// 3 = secondary enemy (unless raid boss)
// 4 = raid boss
// Dpr.Battle.Logic.Setup$$normalTrainer(bp,2,partnerTrainerID,method_01);
// void Dpr.Battle.Logic.Setup$$BATTLE_SETUP_Wild
void BATTLE_SETUP_Wild(BATTLE_SETUP_PARAM_o *bp,
    Pml::PokeParty_o *playerParty, Pml::PokeParty_o *partyEnemy, int32_t partnerTrainerID,
    BTL_FIELD_SITUATION_o *sit,int32_t rule,MethodInfo *method)
{
    const uint8_t RAIDBOSS_GRADE_MIN = 1;
    const uint8_t RAIDBOSS_GRADE_MAX = 5;
    const int32_t RAID_BOSS_RULE = 2;
    RaidBossDesc_o* bossDesc;

    socket_log_fmt("BATTLE_SETUP_Wild\n");
    socket_log_fmt("Setup::BATTLE_SETUP_Wild: %08X\n", &Setup::BATTLE_SETUP_Wild);
    socket_log_fmt("Setup::normalTrainer: %08X\n", &Setup::normalTrainer);
    socket_log_fmt("Pml::PokeParty_o::CopyFrom: %08X\n", &Pml::PokeParty_o::CopyFrom);
    // Forcing it to be zero for partner trainer id to make sure we don't both overwrite 2
    Setup::BATTLE_SETUP_Wild(bp, playerParty, partyEnemy, 0, sit, RAID_BOSS_RULE, method);
    bp->fields.multiMode = 5; // BTL_MULTIMODE_RAID_PAAA_A
    bp->fields.raidBattleParam->fields.bossGrade = RAIDBOSS_GRADE_MAX;
    bossDesc = bp->fields.raidBattleParam->fields.bossDesc;
    socket_log_fmt("bossDesc: %08X\n", bossDesc);
    // TODO: Need to fill in the description of the raidBattleParam
    // as I think that might be contributing to the issues.
    bossDesc->fields.hpCoef = 3.0;
    bossDesc->fields.gWazaFrequency = 0;
    bossDesc->fields.actNum = 1;
    bossDesc->fields.gWallGaugeMax = 3;
    bossDesc->fields.gWallGaugeInit = 1;
    bossDesc->fields.gWallRepairTurn = 3;
    // Should probably be enough to do what I need
    Setup::normalTrainer(bp, 1, 1, (MethodInfo *) nullptr); // First partner
    Setup::normalTrainer(bp, 2, 2, (MethodInfo *) nullptr); // Second partner
    Setup::normalTrainer(bp, 3, 3, (MethodInfo *) nullptr); // Final partner
    Setup::normalTrainer(bp, 4, 483, (MethodInfo *) nullptr); // Raid Boss // I'm too lazy to do a proper ctor here.
    socket_log_fmt("Length: %08X\n", bp->fields.party->max_length);
    Pml::PokeParty_o * palmer = bp->fields.party->m_Items[3];
    socket_log_fmt("palmer: %08X\n", palmer);
    Pml::PokeParty_o * dst = bp->fields.party->m_Items[4];
    socket_log_fmt("dst: %08X\n", dst);
    dst->CopyFrom(partyEnemy, (MethodInfo *) nullptr);
    socket_log_fmt("BATTLE_SETUP_Wild END\n");

    // Need to repair some parameter gets like this:
    // uVar5 = Dpr.Battle.Logic.calc$$PERSONAL_GetParam((uint)uVar3,(uint)bVar1,0x35,(MethodInfo *)
}

void BATTLE_SETUP_WildForceDouble(BATTLE_SETUP_PARAM_o *bp,
    Pml::PokeParty_o *playerParty, Pml::PokeParty_o *partyEnemy, int32_t partnerTrainerID,
    BTL_FIELD_SITUATION_o *sit,int32_t rule,MethodInfo *method)
{
    socket_log_fmt("BATTLE_SETUP_Wild\n");
    const int32_t BTL_RULE_DOUBLE = 1;
    Setup::BATTLE_SETUP_Wild(bp, playerParty, partyEnemy, 0, sit, BTL_RULE_DOUBLE, method);
    bp->fields.multiMode = 4; // BTL_MULTIMODE_P_AA
    for (int i = 2; i < 4; i++)
    {
        Setup::normalTrainer(bp, i, i, (MethodInfo *) nullptr); // First partner
        Pml::PokeParty_o * dst = bp->fields.party->m_Items[i];
        dst->CopyFrom(partyEnemy, (MethodInfo *) nullptr);
    }
    socket_log_fmt("BATTLE_SETUP_Wild END\n");
}

// Dpr.Battle.Logic.PokemonPosition$$
uint32_t GetClientCoverPosNum(int32_t rule,uint8_t multiMode,int32_t clientId,MethodInfo *method)
{
    socket_log_fmt("GetClientCoverPosNum\n");
    socket_log_fmt("rule: %08X\n", rule);
    socket_log_fmt("multiMode: %08X\n", multiMode);
    socket_log_fmt("clientId: %08X\n", clientId);
    return PokemonPosition::GetClientCoverPosNum(rule, multiMode, clientId, method);
}

void expandPokePos_raid(ExPokePos_o *__this, ExPokePos_ExpandResult_o *result,uint8_t multiMode, MethodInfo *method)
{
    // Never called atm
    socket_log_fmt("expandPokePos_raid\n");
    __this->expandPokePos_raid(result, multiMode, method);
}

void FUN_00047b1c(void)
{
    socket_log_fmt("IndexOutOfRangeException\n");
}

namespace SmartPoint
{
    namespace AssetAssistant
    {
        struct AssetBundleMemory
        {
            // 017f3640
            static bool LoadFromFile(System::String *path,MethodInfo *method);
        };
    }
}

bool LoadFromFile(System::String *path,MethodInfo *method)
{
    socket_log_fmt("LoadFromFile\n");
    return SmartPoint::AssetAssistant::AssetBundleMemory::LoadFromFile(path, method);
}
extern void * System_Byte_array_typeInfo;

// Namespace: 
// public enum ExPokePos.ExPosType // TypeDefIndex: 9862
// {
// 	// Fields
// 	public int value__; // 0x0
// 	public const ExPokePos.ExPosType BASE_POS = 0;
// 	public const ExPokePos.ExPosType NEXT_FRIENDS = 1;
// 	public const ExPokePos.ExPosType AREA_ENEMY = 2;
// 	public const ExPokePos.ExPosType AREA_OTHERS = 3;
// 	public const ExPokePos.ExPosType AREA_MYTEAM = 4;
// 	public const ExPokePos.ExPosType AREA_FRIENDS = 5;
// 	public const ExPokePos.ExPosType AREA_ALL = 6;
//     	public const ExPokePos.ExPosType FULL_ENEMY = 7;
// 	public const ExPokePos.ExPosType FULL_FRIENDS = 8;
// 	public const ExPokePos.ExPosType FULL_ALL = 9;
// }

// Probably worth logging this function:
// uint8_t Dpr.Battle.Logic.ExPokePos$$ExpandExistPokeID

// Namespace: Dpr.Battle.Logic
// public enum BtlMultiMode // TypeDefIndex: 9780
// {
// 	// Fields
// 	public byte value__; // 0x0
// 	public const BtlMultiMode BTL_MULTIMODE_NONE = 0;
// 	public const BtlMultiMode BTL_MULTIMODE_PP_PP = 1;
// 	public const BtlMultiMode BTL_MULTIMODE_PP_AA = 2;
// 	public const BtlMultiMode BTL_MULTIMODE_PA_AA = 3;
// 	public const BtlMultiMode BTL_MULTIMODE_P_AA = 4;
// 	public const BtlMultiMode BTL_MULTIMODE_PA_A = 5;
// 	public const BtlMultiMode BTL_MULTIMODE_PA_A2 = 6;	
//     public const BtlMultiMode BTL_MULTIMODE_RAID_PPPP_A = 0;
// 	public const BtlMultiMode BTL_MULTIMODE_RAID_PPP_A = 1;
// 	public const BtlMultiMode BTL_MULTIMODE_RAID_PP_A = 2;
// 	public const BtlMultiMode BTL_MULTIMODE_RAID_P_A = 3;
// 	public const BtlMultiMode BTL_MULTIMODE_RAID_PA_A = 4;
// 	public const BtlMultiMode BTL_MULTIMODE_RAID_PAAA_A = 5;
// 	public const BtlMultiMode BTL_MULTIMODE_RAID_PPAA_A = 6;
// 	public const BtlMultiMode BTL_MULTIMODE_RAID_PPPA_A = 7;
// }