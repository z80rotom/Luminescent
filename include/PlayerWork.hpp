#ifndef _GUARD_PLAYER_WORK_HPP_
#define _GUARD_PLAYER_WORK_HPP_

#include "il2cpp.hpp"

#include "Pml/PokePara/SavePokeParty.hpp"
#include "Pml/PokeParty.hpp"
#include "Dpr/BallDeco.hpp"
#include "Dpr/Box.hpp"
#include "Dpr/Item.hpp"
#include "DpData.hpp"
#include "System/String.hpp"

struct AzukariyaData_Fields {
	struct Pml::PokePara::SerializedPokemonFull_array* pokemonParam;
	bool eggExist;
	uint64_t eggSeed;
	int32_t eggStepCount;
};

struct AzukariyaData_o {
	AzukariyaData_Fields fields;
};

struct RE_DENDOU_POKEMON_DATA_INSIDE_Fields {
	System::String * nickname;
	int16_t reserved_short01;
	int32_t reserved_int01;
};

struct RE_DENDOU_POKEMON_DATA_INSIDE_o {
	RE_DENDOU_POKEMON_DATA_INSIDE_Fields fields;
};

struct RE_DENDOU_POKEMON_DATA_INSIDE_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	RE_DENDOU_POKEMON_DATA_INSIDE_o m_Items[65535];
};

struct RE_DENDOU_RECORD_Fields {
	struct RE_DENDOU_POKEMON_DATA_INSIDE_array* pokemon;
};

struct RE_DENDOU_RECORD_o {
	RE_DENDOU_RECORD_Fields fields;
};

struct RE_DENDOU_RECORD_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	RE_DENDOU_RECORD_o m_Items[65535];
};

struct ReBuffnameData_Fields {
	struct RE_DENDOU_RECORD_array* DENDOU_RECORD_record;
};

struct ReBuffnameData_o {
	ReBuffnameData_Fields fields;
};

struct PLAYREPORT_DATA_Fields {
	int64_t capture_symbol;
	int64_t capture_wild;
	int64_t capture_fishing;
	int64_t dress_up;
	int64_t training;
	int64_t personal_change;
	int64_t npc_trade;
	int64_t chain_encount;
	int64_t fossil_restore;
	int64_t wild_pokemon_encount;
	int64_t trade;
	int64_t magical_trade;
	int64_t total_walk;
	int64_t total_all_battle;
	int64_t battle_point;
	int64_t use_skill_record;
	int64_t evolution;
	int64_t net_battle;
	int64_t cooking;
	int64_t get_kinomi;
	int64_t btl_lose_cnt;
	int64_t total_money;
	int64_t btower_win_single;
	int64_t btower_win_double;
	int64_t btower_win_single_master;
	int64_t btower_win_double_master;
	int64_t go_to_underground;
	int64_t fossildigging;
	int64_t balldeko_open;
	int64_t statue_set;
	int64_t poketch_open;
};

struct PLAYREPORT_DATA_o {
	PLAYREPORT_DATA_Fields fields;
};

struct MT_DATA_Fields {
	struct System_Byte_array* buffer;
};

struct MT_DATA_o {
	MT_DATA_Fields fields;
};

struct System_Nullable_LOCATION_WORK__Fields {
	DPData::LOCATION_WORK_o value;
	bool has_value;
};

struct System_Nullable_LOCATION_WORK__o {
	System_Nullable_LOCATION_WORK__Fields fields;
};

struct PlayerWork_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
	VirtualInvokeData _4_get_key;
	VirtualInvokeData _5_Initialization;
	VirtualInvokeData _6_CustomLoadOperation;
	VirtualInvokeData _7_CustomSaveOperation;
	VirtualInvokeData _8_CustomLoadAsyncOperation;
	VirtualInvokeData _9_CustomSaveAsyncOperation;
	VirtualInvokeData _10_OnPostLoad;
	VirtualInvokeData _11_OnPreSave;
};

struct PlayerWork_RGCTXs {
};

struct PlayerWork_StaticFields {
	bool _NoSavePlayerPos_k__BackingField;
	int32_t _capturedMonsNo_k__BackingField;
	int32_t _capturedBallCountTvTopic_k__BackingField;
	bool _encountEnable_k__BackingField;
	bool _isDebugWalk_k__BackingField;
	bool _isDebugPlayerVisible_k__BackingField;
	bool _isDebugBattleTextView_k__BackingField;
	bool _isPlayerInputActive;
	bool _isPlayerInputActive_ContactEvent;
	bool IsFieldKuruKuruStart;
	bool IsFieldFallStart;
	bool IsToUg;
	bool IsFromUg;
	bool ReserveZoneChangeNaminoriEnd;
	System::String* _FieldWorpLinkName_k__BackingField;
	System::String* _FieldWorpLabel_k__BackingField;
	bool _isDebugNpcVisble_k__BackingField;
	bool _isDebugNpcPokeVisble_k__BackingField;
	int32_t _DebugEncountMonsNo_k__BackingField;
	int32_t _FieldWeather_k__BackingField;
	int32_t _DebugWeek_k__BackingField;
	int32_t _FieldInputMode_k__BackingField;
	bool _IsZenmetuFlag_k__BackingField;
	bool _IsNeedUnloadOnFieldConnector_k__BackingField;
	int32_t _Warp_k__BackingField;
	bool _Telescope_k__BackingField;
	bool _TelescopeReturn_k__BackingField;
	bool _FieldCacheFlag_k__BackingField;
	int32_t _SafariBallNum_k__BackingField;
	int32_t _SafariStepCount_k__BackingField;
	struct System_Collections_Generic_List_MonsNo__o* _SafariCaptureMonsNo_k__BackingField;
	int32_t _IsCpuBoostMode_k__BackingField;
	struct Dpr_Item_ItemInfo_o* _UsedFieldItem_k__BackingField;
	int32_t _UsedFieldWazaNo_k__BackingField;
	int32_t _UsedFieldWazaTemotiNo_k__BackingField;
	bool _Flash_k__BackingField;
	struct System_Collections_Generic_List_WazaNo__o* UsedFieldWazaInArea;
	bool _PoketchOpen_k__BackingField;
	int32_t _MovePokemonIndex_k__BackingField;
	bool _IsD26Key_k__BackingField;
	bool isNeedFixPokemonExp;
};

struct PlayerWork_c {
	Il2CppClass_1 _1;
	struct PlayerWork_StaticFields* static_fields;
	PlayerWork_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	PlayerWork_VTable vtable;
};

struct PlayerWork_SaveData_Fields {
	int32_t version; // s/d
	System_Int32_array* intValues; // s/d
	System_Boolean_array* boolValues; // s/d
	System_Boolean_array* systemFlags; // s/d
	System::String * rivalName; // s/d
	int32_t zoneID; // s/d
	float timeScale; // s/d
	Dpr::Item::SaveItem_array* saveItem; // s/d
	Dpr::Item::SaveUgItem_array* saveUgItem; // s/d
	System_UInt16_array* saveItemShortcut; // s/d
	Pml::PokePara::SavePokeParty_o playerParty; // s/d
	Dpr::Box::SaveBoxData_o boxData; // s/d
	Dpr::Box::SaveBoxTrayData_array* boxTray; // s/d
	DPData::PLAYER_DATA_o playerData; // s/d
	DPData::ZUKAN_WORK_o zukanData; // s/d
	DPData::TR_BATTLE_DATA_array* tr_battleData; // s/d // thing I actually care about
	DPData::TOPMENU_WORK_o topMenuData; // s/d
	DPData::_FIELDOBJ_SAVE_o fieldObj_Save; // s/d
	DPData::RECORD_ARRAY_o record; // s/d
	DPData::ENC_SV_DATA_o enc_sv_data; // s/d
	DPData::PLAYER_SAVE_DATA_o player_save_data; // s/d
	Dpr::BallDeco::SaveBallDecoData_o ballDecoData; // s/d
	Dpr::BallDeco::SaveSealData_array* saveSeal; // s/d
	DPData::_RANDOM_GROUP_o randomGroup; // s/d
	DPData::FieldGimmickSaveData_o fieldGimmickSaveData; // s/d
	DPData::KinomiGrowSaveData_o kinomiGrowSaveData; // s/d
	DPData::PoffinSaveData_o poffinSaveData; // s/d
	DPData::BTLTOWER_SAVEWORK_o btlTowerSave; // s/d
	DPData::SYSTEMDATA_o systemData; // s/d
	DPData::POKETCH_DATA_o poketchData; // s/d
	struct AzukariyaData_o azukariyaData; // s/d
	DPData::_DENDOU_SAVEDATA_o dendoudata; // s/d
	DPData::BadgeSaveData_o badgeSaveData; // d
	DPData::BoukenNote_o boukenNote; // d
	System_Byte_array* tvDataOld;
	DPData::UgSaveData_o ugSaveData; // s
	DPData::GMS_DATA_o gmsdata; // s
	DPData::PLAYER_NETWORK_DATA_o networkdata; // s/d // Most likely to be buggy
	DPData::UnionSaveData_o unionSaveData; // s/d
	DPData::CON_PHOTO_LANG_DATA_o contstPhotoLangData; // s/d
	DPData::ZUKAN_PERSONAL_RND_DATA_o zukanPersonalRndData; // s/d
	DPData::CON_PHOTO_EXT_DATA_array* contestPhotoExtData; // s/d
	DPData::GMS_POINT_HISTORY_EXT_DATA_array* gmsPointExtData; // s/d
	DPData::UgCountRecord_o ugCountRecord; // s/d
	struct ReBuffnameData_o reBuffNameData; // s/d
	System_Byte_array* saveDataHash; // s
	// v1.1 Additions
	DPData::RECORD_ADD_DATA_o recodeAddData; // s/d
	DPData::MysteryGiftSaveData_o mysteryGiftSaveData; // s/d
	DPData::POKETCH_POKETORE_COUNT_ARRAY_o poketoreCountArray; // s/d
	struct PLAYREPORT_DATA_o playReportData; // s/d
	struct MT_DATA_o mtData; // s/d
	DPData::DENDOU_SAVE_ADD_o dendouSaveAdd; // s/d
	// v1.2 Additions
	DPData::TV_DATA_o tvData;
	Dpr::BallDeco::SaveBallDecoExtraData_o ballDecoExtraData;
};

struct PlayerWork_SaveData_o {
	PlayerWork_SaveData_Fields fields;
};

struct SmartPoint_Components_PlayerPrefsProvider_PlayerWork__Fields {
	bool _loaded;
};

struct PlayerWork_Fields {
	SmartPoint_Components_PlayerPrefsProvider_PlayerWork__Fields super;
	struct PlayerWork_SaveData_o _saveData;
	int32_t _transitionZoneID;
	int32_t _locatorIndex;
	struct System_Nullable_LOCATION_WORK__o _transitionLocation;
	bool _isBattling;
	bool _isContest;
	bool _isSealPreview;
	bool _isEvolveDemo;
	bool _isHatchDemo;
	bool _isMass;
	bool _isEncount;
	bool _isDigFossil;
	bool _isGMS;
	int32_t _loadResult;
	struct Dpr_Battle_Logic_BATTLE_SETUP_PARAM_o* _battleSetupParam;
	struct Pml_PokeParty_o* _playerParty;
	struct Pml_PokePara_PokemonParam_o* _capturedPokemon;
	struct System_Collections_Generic_List_EvolveDemoTools_Param__o* _evolveRequets;
	struct System_Byte_array* _writeSrcBuffer;
	bool _isMainSave;
	bool _isBackupSave;
	bool _autosaveCoroutineIsBusy;
	bool _autosaveWindowCoroutineIsBusy;
	struct Dpr_UI_AutoSaveWindow_o* _autosaveWindow;
	float _autosaveWindowCloseOpenTime;
};

class PlayerWork
{
public:
  // void ToBytes<T>(T obj, System_Byte_array ** bytes); // void ToBytes<T>(T obj, ref byte[] bytes);
  void ToBytes(PlayerWork_SaveData_o * obj, System_Byte_array ** bytes, uint64_t param_4);
  // 
  void LoadBytes(System_Byte_array *bytes, PlayerWork_SaveData_o *obj, MethodInfo *method);
  void Initialization(MethodInfo *method);
  
  // 023775a0
  bool VerifySaveData(System_Byte_array *byteArray,MethodInfo *method);

  void makeSaveDataHash(System_Byte_array ** buf, MethodInfo *method);
  static DPData::TR_BATTLE_DATA_array * get_tr_battleData();
  static void set_tr_battleData(DPData::TR_BATTLE_DATA_array * tr_battleData);
  bool CustomSaveAsyncOperation(MethodInfo *method);
  // 0x02377aa0
  bool CustomSaveOperation(MethodInfo *method);
  bool CustomLoadAsyncOperation(MethodInfo *method);
  void OnPreSave(MethodInfo *method);
  // 02cf2c00
  static void set_WalkEncountCount(int32_t value, MethodInfo *method);


  static DPData::ENC_SV_DATA_o get_Enc_SV_Data(DPData::ENC_SV_DATA_o *__return_storage_ptr__, MethodInfo * method);
  static void set_Enc_SV_Data(DPData::ENC_SV_DATA_o value);

  static int32_t get_defaultPokeNo(MethodInfo *method);

  static int32_t get_rivalPokeNo(MethodInfo *method);

  static int32_t get_supportPokeNo(MethodInfo *method);

  static int32_t get_rivalPokeType(MethodInfo *method);

  static Pml::PokeParty_o * get_playerParty(MethodInfo *method);

  static int32_t get_zoneID(MethodInfo *method);

  static DPData::ZUKAN_WORK_o get_zukan(DPData::ZUKAN_WORK_o *__return_storage_ptr__, MethodInfo * method);

  // 0236e9f0
  static int32_t GetInt(int32_t index, MethodInfo *method);
  // 02379290
  static void SetInt(int32_t index, int32_t value, MethodInfo *method);
  // 0236fa10
  static bool GetBool(int32_t index, MethodInfo *method);
  // 2ced9a0
  static void SetBool(int32_t index, bool flag, MethodInfo * method);
  // 023793a0
  static bool GetSytemFlag(int32_t index, MethodInfo *method);
  PlayerWork_c *klass;
  void *monitor;
  PlayerWork_Fields fields;
};

// 04e4ec58
extern void * PlayerWork_TypeInfo;

extern "C"
{

struct TrBattleData
{
  bool IsWin1:1;
  bool IsBattleSearcher1:1;
  bool IsWin2:1;
  bool IsBattleSearcher2:1;
  bool IsWin3:1;
  bool IsBattleSearcher3:1;
  bool IsWin4:1;
  bool IsBattleSearcher4:1;
};

struct GetStatusBitfield
{
    int32_t status1: 4;
    int32_t status2: 4;
    int32_t status3: 4;
    int32_t status4: 4;
    int32_t status5: 4;
    int32_t status6: 4;
    int32_t status7: 4;
    int32_t status8: 4;
};

struct FlagBitfield
{
    bool flag1: 1;
    bool flag2: 1;
    bool flag3: 1;
    bool flag4: 1;
    bool flag5: 1;
    bool flag6: 1;
    bool flag7: 1;
    bool flag8: 1;
};

}

#endif
