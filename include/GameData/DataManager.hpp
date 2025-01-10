#pragma once

#include "il2cpp.hpp"
#include "XLSXContent/FieldCommonParam.hpp"
#include "XLSXContent/LocalKoukanData.hpp"
#include "XLSXContent/MonohiroiTable.hpp"
#include "XLSXContent/PokemonInfo.hpp"

namespace GameData
{
    struct DataManager_Fields
    {
    };

    struct DataManager_RGCTXs
    {
    };

    struct DataManager_VTable
    {
        VirtualInvokeData _0_Equals;
        VirtualInvokeData _1_Finalize;
        VirtualInvokeData _2_GetHashCode;
        VirtualInvokeData _3_ToString;
    };

    struct DataManager_c
    {
        Il2CppClass_1 _1;
        struct DataManager_StaticFields* static_fields;
        DataManager_RGCTXs* rgctx_data;
        Il2CppClass_2 _2;
        DataManager_VTable vtable;
    };

    struct DataManager_StaticFields
    {
        struct XLSXContent_CharacterGraphics_o* CharacterGraphics;
        struct XLSXContent_TrainerTable_o* TrainerTable;
        struct System_Collections_Generic_Dictionary_string__PlaceData__o* PlaceData;
        struct System_Collections_Generic_Dictionary_string__MapWarp__o* MapWarpData;
        struct System_Collections_Generic_Dictionary_string__StopData__o* StopData;
        struct XLSXContent_GimmickGraphics_o* GimmickGraphics;
        struct XLSXContent_PokemonInfo_o* PokemonInfo;
        struct XLSXContent_ContestWazaInfo_o* ContestWazaInfo;
        struct XLSXContent_ShopTable_o* ShopTable;
        struct XLSXContent_CharacterDressData_o* CharacterDressData;
        struct XLSXContent_KinomiData_o* KinomiData;
        struct XLSXContent_KinomiPlaceData_o* KinomiPlaceData;
        struct XLSXContent_HoneyTree_o* HoneyTree;
        XLSXContent::MonohiroiTable_o* MonohiroiTable;
        struct XLSXContent_UgJumpPos_o* UgJumpPos;
        struct XLSXContent_TowerTrainerTable_o* TowerTrainerTable;
        struct XLSXContent_TowerMatchingTable_o* TowerMatchingTable;
        struct XLSXContent_TowerSingleStockTable_o* TowerSingleStockTable;
        struct XLSXContent_TowerDoubleStockTable_o* TowerDoubleStockTable;
        struct XLSXContent_AdventureNoteData_o* AdventureNoteData;
        struct System_Collections_Generic_Dictionary_int__List_AdventureNoteData_SheetData___o* AdventureNoteDataDict;
        struct XLSXContent_TowerBattlePoint_o* TowerBattlePoint;
        struct TagPlaceData_o* TagPlaceData;
        XLSXContent::LocalKoukanData_o* LocalKoukanData;
        struct XLSXContent_ContestCommonData_o* ContestCommonData;
        struct XLSXContent_TvDataTable_o* TvDataTable;
        struct XLSXContent_TvSchedule_o* TvSchedule;
        struct DataManager_OnPostLoadDataDelegate_o* onPostLoadData;
        XLSXContent::FieldCommonParam_o* FieldCommonParam;
        struct XLSXContent_FieldWazaCutInParam_o* FieldWazaCutInParam;
        struct XLSXContent_ZenmetuZone_o* ZenmetuZone;
        struct XLSXContent_MoveAfterSaveGrid_o* MoveAfterSaveGrid;
        struct DataManager_ComparerCatalog_o* _comparerCatalog;
        struct DataManager_ComparerKinomi_o* _comparerKinomi;
        struct XLSXContent_StatueEffectRawData_o* statueEffectRawData;
    };

    struct DataManager
    {
        DataManager_c *klass;
        void *monitor;
        DataManager_Fields fields;

        // 2cccf00
        // static int32_t GetUniqueID(int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare, bool isEgg, MethodInfo *method);
        // 2cc76a0
        static XLSXContent::PokemonInfo::SheetCatalog_o * GetPokemonCatalog(int32_t monsNo,int32_t formNo,uint8_t sex,bool isRare,bool isEgg,MethodInfo *method);

    };

    // 04c59d70
    extern DataManager_c * DataManager_TypeInfo;
}
