#ifndef _GUARD_HPP_
#define _GUARD_HPP_

#include "System/Array.hpp"
#include "System/String.hpp"
#include "il2cpp.hpp"

namespace DPData
{
	struct TR_BATTLE_DATA
	{
    	bool IsWin;
		bool IsBattleSearcher;
	};

    struct TR_BATTLE_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        TR_BATTLE_DATA m_Items[65535];
    };

    struct CON_PHOTO_EXT_DATA_Fields {
        System::String * nickname;
        uint16_t reserved_ushort01;
        int32_t reserved_int01;
    };

    struct CON_PHOTO_EXT_DATA_o {
        CON_PHOTO_EXT_DATA_Fields fields;
    };

    struct CON_PHOTO_EXT_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        CON_PHOTO_EXT_DATA_o m_Items[65535];
    };

    struct DENDOU_POKEMON_DATA_INSIDE_Fields {
        uint32_t monsno;
        uint8_t level;
        uint16_t formNumber;
        uint32_t personalRandom;
        uint32_t idNumber;
        int32_t sex;
        int32_t rareType;
        System::String * nickname;
        System::String * oyaname;
        struct System_UInt16_array* waza;
    };

    struct DENDOU_POKEMON_DATA_INSIDE_o {
        DENDOU_POKEMON_DATA_INSIDE_Fields fields;
    };

    struct DENDOU_POKEMON_DATA_INSIDE_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        DENDOU_POKEMON_DATA_INSIDE_o m_Items[65535];
    };

    struct GMS_POINT_HISTORY_EXT_DATA_Fields {
        System::String * receiveMonsNickname;
        uint16_t reserved_ushort01;
        int32_t reserved_int01;
    };

    struct GMS_POINT_HISTORY_EXT_DATA_o {
        GMS_POINT_HISTORY_EXT_DATA_Fields fields;
    };

    struct GMS_POINT_HISTORY_EXT_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        GMS_POINT_HISTORY_EXT_DATA_o m_Items[65535];
    };

    struct CON_PHOTO_DATA_array;
    struct GET_STATUS_array;
    struct TOPMENUITEM_WORK_array;

    struct CONFIG_Fields {
        int32_t msg_speed;
        int32_t msg_lang_id;
        bool is_kanji;
        int32_t window_type;
        int32_t wazaeff_mode;
        int32_t battle_rule;
        int32_t party_and_box;
        bool regist_nickname;
        bool gyrosensor;
        bool camerashake_of_fossil;
        int32_t camera_updown;
        int32_t camera_leftright;
        bool autoreport;
        int32_t input_mode;
        bool show_nickname;
        uint8_t bgm_volume;
        uint8_t se_volume;
        uint8_t voice_volume;
    };

    struct CONFIG_o {
        CONFIG_Fields fields;
    };

    struct MYSTATUS_Fields {
        System::String * name;
        uint32_t id;
        int32_t gold;
        bool sex;
        uint8_t region_code;
        uint8_t badge;
        uint8_t trainer_view;
        uint8_t rom_code;
        bool dp_clear;
        uint8_t body_type;
        uint8_t fashion;
        int32_t defaultPokeType;
        bool dsPlayerFlag;
        int32_t turewalkMemberIndex;
        struct UnityEngine_Vector2Int_o grid;
        float height;
        float rotation;
    };

    struct MYSTATUS_o {
        MYSTATUS_Fields fields;
    };

    struct PLAYTIME_Fields {
        uint16_t hour;
        uint8_t minute;
        uint8_t second;
    };

    struct PLAYTIME_o {
        PLAYTIME_Fields fields;
    };

    struct CON_PHOTO_FX_DATA_Fields {
        int32_t groupNo;
        float particlePlayTime;
        float fxPositionX;
        float fxPositionY;
        float fxPositionZ;
        float fxRotX;
        float fxRotY;
        float fxRotZ;
        float fxScaleX;
        float fxScaleY;
        float fxScaleZ;
    };

    struct CON_PHOTO_FX_DATA_o {
        CON_PHOTO_FX_DATA_Fields fields;
    };

    struct CON_PHOTO_FX_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        CON_PHOTO_FX_DATA_o m_Items[65535];
    };

    struct CON_PHOTO_DATA_Fields {
        struct CON_PHOTO_FX_DATA_array* fxDatas;
        System::String * nickname;
        float camPositionX;
        float camPositionY;
        float camPositionZ;
        float camRotX;
        float camRotY;
        float camRotZ;
        float pokePositionX;
        float pokePositionY;
        float pokePositionZ;
        float pokeRotX;
        float pokeRotY;
        float pokeRotZ;
        float pokeScaleX;
        float pokeScaleY;
        float pokeScaleZ;
        float monitorPlayTime;
        float motionPlayTime;
        float dofDistance;
        float dofFocalLength;
        float dofFarDepth;
        float dofTargetPosX;
        float dofTargetPosY;
        float dofTargetPosZ;
        int32_t monsNo;
        int32_t wazaNo;
        int32_t seqFrame;
        uint8_t seqType;
        uint8_t userRank;
        uint8_t rankID;
        uint8_t formNo;
        uint8_t sex;
        uint8_t motionIndex;
        uint8_t monitorIndex;
        bool hasData;
        bool rare;
    };

    struct CON_PHOTO_DATA_o {
        CON_PHOTO_DATA_Fields fields;
    };

    struct CON_PHOTO_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        CON_PHOTO_DATA_o m_Items[65535];
    };

    struct CONTEST_DATA_Fields {
        struct CON_PHOTO_DATA_array* photoDatas;
        uint32_t contestRankPoint;
    };

    struct CONTEST_DATA_o {
        CONTEST_DATA_Fields fields;
    };

    struct PLAYER_DATA_Fields {
        struct CONFIG_o config;
        struct MYSTATUS_o mystatus;
        struct PLAYTIME_o playtime;
        struct CONTEST_DATA_o contestdata;
    };

    struct PLAYER_DATA_o {
        PLAYER_DATA_Fields fields;
    };

    struct GET_STATUS_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        int32_t m_Items[65535];
    };

    struct ZUKAN_WORK_Fields {
        struct GET_STATUS_array* get_status;
        System::Array<bool> * male_color_flag;
        System::Array<bool> * female_color_flag;
        System::Array<bool> * male_flag;
        System::Array<bool> * female_flag;
        System::Array<bool> * UnknownTurn;
        System::Array<bool> * UnknownColor;
        System::Array<bool> * PowarunTurn;
        System::Array<bool> * PowarunColor;
        System::Array<bool> * DeokisisuTurn;
        System::Array<bool> * DeokisisuColor;
        System::Array<bool> * MinomuttiTurn;
        System::Array<bool> * MinomuttiColor;
        System::Array<bool> * MinomadamTurn;
        System::Array<bool> * MinomadamColor;
        System::Array<bool> * GaameiruTurn;
        System::Array<bool> * GaameiruColor;
        System::Array<bool> * TherimuTurn;
        System::Array<bool> * TherimuColor;
        System::Array<bool> * KaranakusiTurn;
        System::Array<bool> * KaranakusiColor;
        System::Array<bool> * ToritodonTurn;
        System::Array<bool> * ToritodonColor;
        System::Array<bool> * RotomTurn;
        System::Array<bool> * RotomColor;
        System::Array<bool> * GirathinaTurn;
        System::Array<bool> * GirathinaColor;
        System::Array<bool> * SheimiTurn;
        System::Array<bool> * SheimiColor;
        System::Array<bool> * AruseusuTurn;
        System::Array<bool> * AruseusuColor;
        struct System_Int32_array* TextVersionUp;
        bool zukan_get;
        bool zenkoku_flag;
    };

    struct ZUKAN_WORK_o {
        ZUKAN_WORK_Fields fields;
    };

    struct TOPMENUITEM_WORK_Fields {
        int32_t index;
        bool isNew;
    };

    struct TOPMENUITEM_WORK_o {
        TOPMENUITEM_WORK_Fields fields;
    };

    struct TOPMENUITEM_WORK_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        TOPMENUITEM_WORK_o m_Items[65535];
    };

    struct TOPMENU_WORK_Fields {
        struct TOPMENUITEM_WORK_array* items;
        int32_t selectType;
    };

    struct TOPMENU_WORK_o {
        TOPMENU_WORK_Fields fields;
    };

    struct FIELD_OBJ_SAVE_DATA_Fields {
        uint8_t cnt;
        int32_t name_hash;
        int32_t grid_x;
        int32_t grid_y;
        int32_t height;
        int32_t angle;
        bool active;
        int32_t movecode;
        int32_t dir_head;
        int32_t mvParam0;
        int32_t mvParam1;
        int32_t mvParam2;
        int32_t limitX;
        int32_t limitZ;
        int32_t ev_type;
        int32_t mv_old_dir;
        int32_t mv_dir;
    };

    struct FIELD_OBJ_SAVE_DATA_o {
        FIELD_OBJ_SAVE_DATA_Fields fields;
    };

    struct FIELD_OBJ_SAVE_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        FIELD_OBJ_SAVE_DATA_o m_Items[65535];
    };

    struct _FIELDOBJ_SAVE_Fields {
        struct FIELD_OBJ_SAVE_DATA_array* fldobj_sv;
    };

    struct _FIELDOBJ_SAVE_o {
        _FIELDOBJ_SAVE_Fields fields;
    };

    struct RECORD_Fields {
        struct System_UInt32_array* record;
    };

    struct RECORD_o {
        RECORD_Fields fields;
    };

    struct RECORD_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        RECORD_o m_Items[65535];
    };

    struct RECORD_ARRAY_Fields {
        struct RECORD_array* records;
    };

    struct RECORD_ARRAY_o {
        RECORD_ARRAY_Fields fields;
    };

    struct HILL_BACK_DATA_Fields {
        bool TalkFlg;
        uint16_t EncTblIdx1;
        uint16_t EncTblIdx2;
    };

    struct HILL_BACK_DATA_o {
        HILL_BACK_DATA_Fields fields;
    };

    struct HONEY_DATA_Fields {
        bool Spreaded;
        int32_t Minutes;
        uint8_t TblMonsNo;
        uint8_t RareLv;
        uint8_t SwayLv;
    };

    struct HONEY_DATA_o {
        HONEY_DATA_Fields fields;
    };

    struct HONEY_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        HONEY_DATA_o m_Items[65535];
    };

    struct HONEY_TREE_Fields {
        int64_t LastUpdateMinutes;
        uint8_t TreeNo;
        struct HONEY_DATA_array* HoneyData;
    };

    struct HONEY_TREE_o {
        HONEY_TREE_Fields fields;
    };

    struct SWAY_GRASS_REC_Fields {
        uint32_t MonsNo;
        uint32_t Chain;
    };

    struct SWAY_GRASS_REC_o {
        SWAY_GRASS_REC_Fields fields;
    };

    struct SWAY_GRASS_REC_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        SWAY_GRASS_REC_o m_Items[65535];
    };

    struct SWAY_GRASS_HIST_Fields {
        struct SWAY_GRASS_REC_array* SwayGrassRec;
    };

    struct SWAY_GRASS_HIST_o {
        SWAY_GRASS_HIST_Fields fields;
    };

    struct PLAYER_ZONE_HIST_Fields {
        int32_t BeforeZone;
        int32_t OldZone;
    };

    struct PLAYER_ZONE_HIST_o {
        PLAYER_ZONE_HIST_Fields fields;
    };

    struct MV_POKE_DATA_Fields {
        int32_t ZoneIDIndex;
        uint64_t RndSeed;
        uint32_t MonsNo;
        uint32_t Hp;
        uint8_t Lv;
        uint32_t Sick;
        uint8_t EncountStatus;
    };

    struct MV_POKE_DATA_o {
        MV_POKE_DATA_Fields fields;
    };

    struct MV_POKE_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        MV_POKE_DATA_o m_Items[65535];
    };

    struct ENC_SV_DATA_Fields {
        int32_t encountWalkCount;
        int32_t SafariRandSeed;
        int32_t GenerateRandSeed; // 0xC
        struct HILL_BACK_DATA_o HillBackData; // 0xC
        struct HONEY_TREE_o HoneyTree; // 0x108 // 8 + 4 + (COUNT_HONEYTREE * HoneyTree8b.SIZE);
        struct SWAY_GRASS_HIST_o SwayGrassHist; // 0x8 * 0x3 
        struct PLAYER_ZONE_HIST_o PlayerZoneHist; // 0x8
        struct MV_POKE_DATA_array* MovePokeData; // 0x20 * 2
        bool GenerateValid;
        int16_t SprayCount;
        uint8_t SprayType;
        uint8_t BtlSearcherCharge;
        uint8_t PokeToreCharge;
        uint8_t VidroType; // 10 + 2
    };

    struct ENC_SV_DATA_o {
        ENC_SV_DATA_Fields fields;
    };

    struct LOCATION_WORK_Fields {
        int32_t zoneID;
        float posX;
        float posY;
        float posZ;
        int32_t dir;
    };

    struct LOCATION_WORK_o {
        LOCATION_WORK_Fields fields;
    };

    struct WorpPoint_Fields {
        struct LOCATION_WORK_o teleport;
        struct LOCATION_WORK_o zenmetu;
        struct LOCATION_WORK_o ananuke;
    };

    struct WorpPoint_o {
        WorpPoint_Fields fields;
    };

    struct PLAYER_SAVE_DATA_Fields {
        bool gear_type;
        bool shoes_flag;
        uint32_t form;
        uint8_t bic_color;
        struct WorpPoint_o worpPoint;
        float walkcount;
        int32_t natuki_walkcnt;
        struct LOCATION_WORK_o TownMapLocation;
        bool isTokushuLocation;
        struct LOCATION_WORK_o TokushuLocation;
    };

    struct PLAYER_SAVE_DATA_o {
        PLAYER_SAVE_DATA_Fields fields;
    };

    struct RANDOM_SEED_Fields {
        System::String * group_name;
        System::String * name;
        int32_t sex;
        int32_t region_code;
        uint64_t seed;
        uint64_t random;
        int64_t time_stmp;
        int32_t user_id;
    };

    struct RANDOM_SEED_o {
        RANDOM_SEED_Fields fields;
    };

    struct RANDOM_SEED_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        RANDOM_SEED_o m_Items[65535];
    };

    struct _RANDOM_GROUP_Fields {
        struct RANDOM_SEED_array* group;
    };

    struct _RANDOM_GROUP_o {
        _RANDOM_GROUP_Fields fields;
    };

    struct FieldGimmickSaveData_Fields {
        struct System_Int32_array* GearRotate;
    };

    struct FieldGimmickSaveData_o {
        FieldGimmickSaveData_Fields fields;
    };

    struct KinomiGrow_Fields {
        int32_t tagNo;
        int32_t harvestCount;
        int32_t minutes;
        uint8_t _wet;
        uint8_t _selfPlant;
        uint8_t _padding0;
        uint8_t _padding1;
    };

    struct KinomiGrow_o {
        KinomiGrow_Fields fields;
    };

    struct KinomiGrow_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        KinomiGrow_o m_Items[65535];
    };

    struct KinomiGrowSaveData_Fields {
        struct KinomiGrow_array* kinomiGrows;
        int64_t LastUpdateMinutes;
    };

    struct KinomiGrowSaveData_o {
        KinomiGrowSaveData_Fields fields;
    };

    struct PoffinData_Fields {
        uint8_t MstID;
        uint8_t Level;
        uint8_t Taste;
        bool IsNew;
        struct System_Byte_array* Flavor;
    };

    struct PoffinData_o {
        PoffinData_Fields fields;
    };

    struct PoffinData_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        PoffinData_o m_Items[65535];
    };

    struct PoffinSaveData_Fields {
        struct PoffinData_array* Poffins;
        int32_t CookingCount;
    };

    struct PoffinSaveData_o {
        PoffinSaveData_Fields fields;
    };

    struct BTLTOWER_CLASSDATA_Fields {
        uint8_t clear_flag;
        bool suspension_flag;
        uint64_t btl_play_rand_seed;
        uint32_t rank;
        uint32_t rank_down_lose;
        int32_t tower_round;
        struct System_UInt64_array* trainer_random;
        uint32_t total_wins;
        uint32_t total_wins_loop;
        uint32_t total_lose;
        uint32_t old_renshou_cnt;
        uint32_t renshou_cnt;
    };

    struct BTLTOWER_CLASSDATA_o {
        BTLTOWER_CLASSDATA_Fields fields;
    };

    struct BTLTOWER_CLASSDATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        BTLTOWER_CLASSDATA_o m_Items[65535];
    };

    struct BTLTOWER_SAVEWORK_Fields {
        uint32_t max_master_rank;
        int32_t play_mode;
        int32_t old_playmode;
        uint32_t btl_point;
        uint32_t day_challeng_cnt;
        struct BTLTOWER_CLASSDATA_array* class_data;
        uint32_t challenge_cnt;
    };

    struct BTLTOWER_SAVEWORK_o {
        BTLTOWER_SAVEWORK_Fields fields;
    };

    struct GMTIME_Fields {
        uint32_t saveCount;
        int64_t timestmp;
    };

    struct GMTIME_o {
        GMTIME_Fields fields;
    };

    struct SYSTEMDATA_Fields {
        struct GMTIME_o StartTime;
        struct GMTIME_o SaveTime;
        struct GMTIME_o PenaltyTime;
        struct GMTIME_o DailyEventLastTime;
        struct System_Byte_array* nxSnapshot;
        uint32_t fd_bgmEvnet;
        int64_t reserved_long0;
        int64_t reserved_long1;
        int64_t reserved_long2;
        int64_t reserved_long3;
        // My numbers seem off so I'm just going to do this for the moment to see if that fixes things
        int64_t reserved_long4;
        int64_t reserved_long5;
    };

    struct SYSTEMDATA_o {
        SYSTEMDATA_Fields fields;
    };

    struct MARK_MAP_POS_Fields {
        uint16_t x;
        uint16_t y;
    };

    struct MARK_MAP_POS_o {
        MARK_MAP_POS_Fields fields;
    };

    struct MARK_MAP_POS_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        MARK_MAP_POS_o m_Items[65535];
    };

    struct POKETCH_POKE_HISTORY_Fields {
        uint16_t monsno;
        uint16_t iconPattern;
    };

    struct POKETCH_POKE_HISTORY_o {
        POKETCH_POKE_HISTORY_Fields fields;
    };

    struct POKETCH_POKE_HISTORY_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        POKETCH_POKE_HISTORY_o m_Items[65535];
    };

    struct POKETCH_DATA_Fields {
        bool get_flag;
        bool pedometer_flag;
        bool dotart_modified_flag;
        int32_t color_type;
        int8_t app_count;
        int8_t app_index;
        System::Array<bool> * app_flag;
        uint32_t pedometer;
        struct System_Byte_array* dotart_data;
        struct System_UInt32_array* calendar_markbit;
        struct MARK_MAP_POS_array* mark_map_pos;
        struct POKETCH_POKE_HISTORY_array* poke_history;
    };

    struct POKETCH_DATA_o {
        POKETCH_DATA_Fields fields;
    };

    struct DENDOU_RECORD_Fields {
        struct DENDOU_POKEMON_DATA_INSIDE_array* pokemon;
        struct GMTIME_o time;
    };

    struct DENDOU_RECORD_o {
        DENDOU_RECORD_Fields fields;
    };

    struct DENDOU_RECORD_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        DENDOU_RECORD_o m_Items[65535];
    };

    struct _DENDOU_SAVEDATA_Fields {
        struct DENDOU_RECORD_array* record;
        uint32_t savePoint;
        uint32_t latestNumber;
    };

    struct _DENDOU_SAVEDATA_o {
        _DENDOU_SAVEDATA_Fields fields;
    };

    struct BadgeSaveData_Fields {
        struct System_Byte_array* CleanValues;
    };

    struct BadgeSaveData_o {
        BadgeSaveData_Fields fields;
    };

    struct BoukenNote_Fields {
        struct System_Byte_array* VanishNew;
    };

    struct BoukenNote_o {
        BoukenNote_Fields fields;
    };

    struct TV_STR_DATA_Fields {
        System::String * value;
        uint8_t language;
        uint8_t genderId;
        uint8_t reserved2;
        uint8_t reserved3;
    };

    struct TV_STR_DATA_o {
        TV_STR_DATA_Fields fields;
    };

    struct TV_STR_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        TV_STR_DATA_o m_Items[65535];
    };

    struct TV_RECORD_Fields {
        struct System_Int32_array* int_data;
        struct TV_STR_DATA_array* str_data;
    };

    struct TV_RECORD_o {
        TV_RECORD_Fields fields;
    };

    struct TV_TOPIC_Fields {
        struct System_Int32_array* int_data;
        int32_t reserved_int1;
        int32_t reserved_int2;
        int32_t reserved_int3;
        System::Array<bool> * view_flag;
        uint8_t reserved_byte1;
        uint8_t reserved_byte2;
        uint8_t reserved_byte3;
    };

    struct TV_TOPIC_o {
        TV_TOPIC_Fields fields;
    };

    struct INTERVIEWER_DATA_Fields {
        struct System_Int32_array* program_data;
        struct System_Int32_array* int_data;
        struct TV_STR_DATA_array* str_data;
    };

    struct INTERVIEWER_DATA_o {
        INTERVIEWER_DATA_Fields fields;
    };

    struct TV_DATA_Fields {
        struct TV_RECORD_o UseRecord;
        struct TV_RECORD_o MyRecord;
        struct TV_TOPIC_o UseTopic;
        struct TV_TOPIC_o MyTopic;
        struct INTERVIEWER_DATA_o InterviewerData;
        int32_t TvWatchCount;
    };

    struct TV_DATA_o {
        TV_DATA_Fields fields;
    };

    struct UgStoneStatue_Fields {
        int32_t statueId;
        int32_t pedestalId;
        int32_t posX;
        int32_t posY;
        int32_t dir;
    };

    struct UgStoneStatue_o {
        UgStoneStatue_Fields fields;
    };

    struct UgStoneStatue_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        UgStoneStatue_o m_Items[65535];
    };

    struct UgSecretBase_Fields {
        int16_t zoneID;
        int16_t posX;
        int16_t posY;
        uint8_t direction;
        uint8_t expansionStatus;
        int32_t goodCount;
        struct UgStoneStatue_array* ugStoneStatue;
        bool isEnable;
    };

    struct UgSecretBase_o {
        UgSecretBase_Fields fields;
    };

    struct UGRecord_Fields {
        uint32_t talkPlayerDataID;
        uint32_t talkPlayerCount;
        struct UgSecretBase_o myBase;
    };

    struct UGRecord_o {
        UGRecord_Fields fields;
    };

    struct DigPos_Fields {
        int16_t GridX;
        int16_t GridY;
    };

    struct DigPos_o {
        DigPos_Fields fields;
    };

    struct DigPos_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        DigPos_o m_Items[65535];
    };

    struct UgPlayerInfo_Fields {
        System::String * name;
        int32_t id;
        uint8_t langID;
        uint8_t sex;
        uint8_t avatorID;
        bool isPreset;
    };

    struct UgPlayerInfo_o {
        UgPlayerInfo_Fields fields;
    };

    struct UgPlayerInfo_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        UgPlayerInfo_o m_Items[65535];
    };

    struct UgSaveData_Fields {
        int32_t ReturnZoneID;
        int32_t ReturnGridPosX;
        int32_t ReturnPosY;
        int32_t ReturnGridPosZ;
        struct LOCATION_WORK_o ReturnZenmetsu_Ground;
        struct DigPos_array* DigPoints;
        struct Pml::PokePara::SerializedPokemonFull_array* EncountPokes;
        struct UnityEngine_Vector3_array* EncountPokePositions;
        int32_t ReturnUgZoneID;
        struct UGRecord_o ugRecord;
        struct UgPlayerInfo_array* FriendPlayerList;
        struct UgPlayerInfo_array* OtherPlayerList;
        struct System_Byte_array* TalkedNPCsID;
    };

    struct UgSaveData_o {
        UgSaveData_Fields fields;
    };

    struct GMS_POINT_HISTORY_DATA_Fields {
        System::String * receiveMonsNickname;
        System::String * receiveParentName;
        uint16_t sendMonsNo;
        uint16_t receiveMonsNo;
        uint16_t year;
        uint8_t month;
        uint8_t day;
        uint8_t sendMonsFormNo;
        uint8_t sendMonsSex;
        uint8_t receiveMonsFormNo;
        uint8_t receiveMonsSex;
        uint8_t receiveMonsLanguage;
        uint8_t receiveMonsParentLanguage;
    };

    struct GMS_POINT_HISTORY_DATA_o {
        GMS_POINT_HISTORY_DATA_Fields fields;
    };

    struct GMS_POINT_HISTORY_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        GMS_POINT_HISTORY_DATA_o m_Items[65535];
    };

    struct GMS_POINT_DATA_Fields {
        struct GMS_POINT_HISTORY_DATA_array* historyDatas;
    };

    struct GMS_POINT_DATA_o {
        GMS_POINT_DATA_Fields fields;
    };

    struct GMS_POINT_DATA_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        GMS_POINT_DATA_o m_Items[65535];
    };

    struct GMS_DATA_Fields {
        struct GMS_POINT_DATA_array* pointDatas;
        uint16_t tradeListIndex;
        uint16_t browsingListIndex;
        uint8_t achievementStep;
    };

    struct GMS_DATA_o {
        GMS_DATA_Fields fields;
    };

    struct PLAYER_NETWORK_DATA_Fields {
        struct System_Byte_array* publicKeyBASE64;
        struct System_Byte_array* bcatFlagArray;
        uint64_t nexUniqueId;
        uint64_t nexUniqueIdPassword;
        uint16_t publicKeyversion;
    };

    struct PLAYER_NETWORK_DATA_o {
        PLAYER_NETWORK_DATA_Fields fields;
    };

    struct UnionSaveData_Fields {
        bool initNpcTalk;
        int32_t penartyCounter;
        float penartyTime;
    };

    struct UnionSaveData_o {
        UnionSaveData_Fields fields;
    };

    struct CON_PHOTO_LANG_DATA_Fields {
        uint8_t styleMonsLangID;
        uint8_t beautifulMonsLangID;
        uint8_t cuteMonsLangID;
        uint8_t cleverMonsLangID;
        uint8_t strongMonsLangID;
        int64_t reserved_long01;
        int64_t reserved_long02;
    };

    struct CON_PHOTO_LANG_DATA_o {
        CON_PHOTO_LANG_DATA_Fields fields;
    };

    struct ZUKAN_PERSONAL_RND_DATA_Fields {
        struct System_UInt32_array* PattiiruSeePersonalRnds;
        struct System_UInt32_array* PattiiruGetPersonalRnds;
        struct System_UInt32_array* Reserved;
    };

    struct ZUKAN_PERSONAL_RND_DATA_o {
        ZUKAN_PERSONAL_RND_DATA_Fields fields;
    };

    struct UgCountRecord_Fields {
        int16_t DigFossilPlayCount;
        int16_t NumStatueBroadcastOnTV;
        int32_t NumTimesSecretBaseBroadcastOnTVWereLiked;
        int32_t SomeoneSecretBaseLikeCount;
        int32_t NumSuccessfulLightStoneSearches;
        int64_t reserved_long01;
        int64_t reserved_long02;
    };

    struct UgCountRecord_o {
        UgCountRecord_Fields fields;
    };

    struct RECORD_HEAD_Fields {
        System::String * username;
        uint8_t reserved_byte1;
        uint8_t reserved_byte2;
        int32_t language;
        uint8_t sex;
        uint8_t reserved_byte4;
        uint8_t reserved_byte5;
        uint8_t reserved_byte6;
        int32_t body_type;
        uint32_t uniqueID;
        int32_t reserved_int2;
    };

    struct RECORD_HEAD_o {
        RECORD_HEAD_Fields fields;
    };

    struct RECORD_RANKING_Fields {
        struct System_Byte_array* activeFlag;
    };

    struct RECORD_RANKING_o {
        RECORD_RANKING_Fields fields;
    };

    struct RECORD_HEAD_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        RECORD_HEAD_o m_Items[65535];
    };

    struct RECORD_RANKING_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        RECORD_RANKING_o m_Items[65535];
    };

    struct RECORD_ADD_DATA_Fields {
        struct RECORD_HEAD_array* head;
        struct RECORD_RANKING_array* rankingFlag;
    };

    struct RECORD_ADD_DATA_o {
        RECORD_ADD_DATA_Fields fields;
    };

    struct MysteryGift_MonsData_Fields {
        uint16_t no;
        uint16_t form;
        uint16_t itemId;
        struct System_UInt16_array* wazaNos;
        System::String * parentName;
        uint8_t parentSex;
        uint8_t isEgg;
        uint8_t twoRibbonId;
        uint8_t sex;
        uint8_t pokemonLangId;
        uint8_t reserved_byte01;
        uint8_t reserved_byte02;
        uint8_t reserved_byte03;
    };

    struct MysteryGift_MonsData_o {
        MysteryGift_MonsData_Fields fields;
    };

    struct MysteryGift_ItemInfo_Fields {
        uint16_t itemNo;
        uint16_t num;
        int32_t reserved_int01;
        int32_t reserved_int02;
        int32_t reserved_int03;
    };

    struct MysteryGift_ItemInfo_o {
        MysteryGift_ItemInfo_Fields fields;
    };

    struct MysteryGift_ItemInfo_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        MysteryGift_ItemInfo_o m_Items[65535];
    };

    struct MysteryGift_RecvData_Fields {
        int64_t timestamp;
        uint16_t deliveryId;
        uint16_t textId;
        uint8_t dataType;
        uint8_t reserved_byte01;
        int16_t reserved_short01;
        struct MysteryGift_MonsData_o monsData;
        struct MysteryGift_ItemInfo_array* itemDatas;
        struct System_UInt32_array* dressIds;
        uint32_t moneyData;
        int32_t reserved_int01;
        int32_t reserved_int02;
        int32_t reserved_int03;
        int32_t reserved_int04;
    };

    struct MysteryGift_RecvData_o {
        MysteryGift_RecvData_Fields fields;
    };

    struct MysteryGift_RecvData_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        MysteryGift_RecvData_o m_Items[65535];
    };

    struct MysteryGift_OneDayData_Fields {
        int64_t timestamp;
        uint16_t deliveryId;
        int16_t reserved_short01;
        int16_t reserved_short02;
        int16_t reserved_short03;
    };

    struct MysteryGift_OneDayData_o {
        MysteryGift_OneDayData_Fields fields;
    };

    struct MysteryGift_OneDayData_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        MysteryGift_OneDayData_o m_Items[65535];
    };

    struct MysteryGiftSaveData_Fields {
        struct MysteryGift_RecvData_array* recvDatas;
        struct System_Byte_array* receiveFlag;
        struct MysteryGift_OneDayData_array* oneDayDatas;
        int64_t serialLockTimestamp;
        bool ngFlag;
        uint8_t ngCounter;
        struct System_UInt16_array* reserved_ushorts;
        struct System_UInt32_array* reserve;
    };

    struct MysteryGiftSaveData_o {
        MysteryGiftSaveData_Fields fields;
    };

    struct POKETCH_POKETORE_COUNT_Fields {
        uint16_t monsno;
        uint16_t reserve;
        int32_t count;
        int32_t reserve1;
        int32_t reserve2;
    };

    struct POKETCH_POKETORE_COUNT_o {
        POKETCH_POKETORE_COUNT_Fields fields;
    };

    struct POKETCH_POKETORE_COUNT_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        POKETCH_POKETORE_COUNT_o m_Items[65535];
    };

    struct POKETCH_POKETORE_COUNT_ARRAY_Fields {
        struct POKETCH_POKETORE_COUNT_array* data;
    };

    struct POKETCH_POKETORE_COUNT_ARRAY_o {
        POKETCH_POKETORE_COUNT_ARRAY_Fields fields;
    };

    struct DENDOU_SAVE_ADD_POKE_Fields {
        int32_t langId;
        int32_t pastParentsLangId;
    };

    struct DENDOU_SAVE_ADD_POKE_o {
        DENDOU_SAVE_ADD_POKE_Fields fields;
    };

    struct DENDOU_SAVE_ADD_POKE_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        DENDOU_SAVE_ADD_POKE_o m_Items[65535];
    };

    struct DENDOU_SAVE_ADD_POKE_MEMBER_Fields {
        struct DENDOU_SAVE_ADD_POKE_array* member;
    };

    struct DENDOU_SAVE_ADD_POKE_MEMBER_o {
        DENDOU_SAVE_ADD_POKE_MEMBER_Fields fields;
    };

    struct DENDOU_SAVE_ADD_POKE_MEMBER_array {
        Il2CppObject obj;
        Il2CppArrayBounds *bounds;
        il2cpp_array_size_t max_length;
        DENDOU_SAVE_ADD_POKE_MEMBER_o m_Items[65535];
    };

    struct DENDOU_SAVE_ADD_Fields {
        struct DENDOU_SAVE_ADD_POKE_MEMBER_array* data;
    };

    struct DENDOU_SAVE_ADD_o {
        DENDOU_SAVE_ADD_Fields fields;
    };

    // 04e4f5e8
    extern void * POKETCH_POKE_HISTORY_Array_TypeInfo;
    // 04e4f6a8
    extern void * DENDOU_RECORD_Array_TypeInfo;
    // 04e4f558
    extern void * DENDOU_POKEMON_DATA_INSIDE_Array_TypeInfo;
    // 04e4f690
    extern void * UgPlayerInfo_Array_TypeInfo;
    // 04e4f698
    extern void * UgStoneStatue_Array_TypeInfo;
    // 04e4f580
    extern void * GMS_POINT_DATA_Array_TypeInfo;
    // 04e4f588
    extern void * GMS_POINT_HISTORY_DATA_Array_TypeInfo;
    // 04e54d28
    extern void * GMS_POINT_HISTORY_EXT_DATA_Array_TypeInfo;
    // 04e53340
    extern void * CON_PHOTO_EXT_DATA_Array_TypeInfo;
    // 04e4f5d0
    extern void * MysteryGift_RecvData_Array_TypeInfo;
    // 04e4f5c0
    extern void * MysteryGift_ItemInfo_Array_TypeInfo;
    // 04e4f5d8
    extern void * MysteryGift_OneDayData_Array_TypeInfo;
    // 04e4f5f8
    extern void * POKETCH_POKETORE_COUNT_Array_TypeInfo;
    // 04e4f560
    extern void * DENDOU_SAVE_ADD_POKE_MEMBER_Array_TypeInfo;
    // 04e4f568
    extern void * DENDOU_SAVE_ADD_POKE_Array_TypeInfo;
    // 04e4f5a0
    extern void * TV_STR_DATA_Array_TypeInfo;
}


#endif