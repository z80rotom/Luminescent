#include "il2cpp.hpp"
#include <cstdlib>
#include "util.hpp"
#include "PlayerWork.hpp"
#include "data_wild_scaling.hpp"

struct MonsLv_Fields {
    int32_t maxlv;
    int32_t minlv;
    int32_t monsNo;
};

struct MonsLv_o {
    MonsLv_Fields fields;
};

struct MonsLv_array {
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
    MonsLv_o m_Items[65535];
};

namespace XLSXContent
{
    namespace FieldEncountTable
    {
        struct Sheettable_Fields {
            int32_t zoneID;
            int32_t encRate_gr;
            MonsLv_array* ground_mons;
            MonsLv_array* tairyo;
            MonsLv_array* day;
            MonsLv_array* night;
            MonsLv_array* swayGrass;
            System_Int32_array* FormProb;
            System_Int32_array* Nazo;
            System_Int32_array* AnnoonTable;
            MonsLv_array* gbaRuby;
            MonsLv_array* gbaSapp;
            MonsLv_array* gbaEme;
            MonsLv_array* gbaFire;
            MonsLv_array* gbaLeaf;
            int32_t encRate_wat;
            MonsLv_array* water_mons;
            int32_t encRate_turi_boro;
            MonsLv_array* boro_mons;
            int32_t encRate_turi_ii;
            MonsLv_array* ii_mons;
            int32_t encRate_sugoi;
            MonsLv_array* sugoi_mons;
        };
        struct Sheettable_VTable {
            VirtualInvokeData _0_Equals;
            VirtualInvokeData _1_Finalize;
            VirtualInvokeData _2_GetHashCode;
            VirtualInvokeData _3_ToString;
        };
        struct Sheettable_c {
            Il2CppClass_1 _1;
            void* static_fields;
            Il2CppRGCTXData* rgctx_data;
            Il2CppClass_2 _2;
            Sheettable_VTable vtable;
        };
        struct Sheettable_o {
            Sheettable_c *klass;
            void *monitor;
            Sheettable_Fields fields;
        };
    }
}

using namespace XLSXContent::FieldEncountTable;

struct GameManager
{
    // 01e1a2e0
    static Sheettable_o * GetFieldEncountData(int32_t zoneID, MethodInfo *method);
};

// 04e54300
extern void * MonsLv_Array_TypeInfo;
// 04e4a4e0
extern void * System_Int32_array_TypeInfo;

// TODO: Move this to utils or the regular correct place
static uint32_t GetBadgeCount()
{
  bool bVar1 = PlayerWork::GetSytemFlag(0x81, (MethodInfo *)nullptr);
  bool bVar2 = PlayerWork::GetSytemFlag(0x7c, (MethodInfo *)nullptr);
  bool bVar3 = PlayerWork::GetSytemFlag(0x7d, (MethodInfo *)nullptr);
  bool bVar4 = PlayerWork::GetSytemFlag(0x80, (MethodInfo *)nullptr);
  bool bVar5 = PlayerWork::GetSytemFlag(0x7f, (MethodInfo *)nullptr);
  bool bVar6 = PlayerWork::GetSytemFlag(0x7e, (MethodInfo *)nullptr);
  bool bVar7 = PlayerWork::GetSytemFlag(0x83, (MethodInfo *)nullptr);
  bool bVar8 = PlayerWork::GetSytemFlag(0x82, (MethodInfo *)nullptr);
  return (bVar2 & 1) + (bVar1 & 1) + (bVar3 & 1) + (bVar4 & 1) + (bVar5 & 1) + (bVar6 & 1) +
         (bVar7 & 1) + (bVar8 & 1);
}

Sheettable_o * createDummySheetTable(int32_t zoneID)
{
    int32_t badgeCount = (int32_t) GetBadgeCount();
    uint32_t MonsLvlLen = 12;
    // Please don't try to use the virtual functions on this stupid thing
    Sheettable_o * sheetTable = (Sheettable_o *) malloc(sizeof(Sheettable_o));
    MonsLv_array* ground_mons = (MonsLv_array*) system_array_new(MonsLv_Array_TypeInfo, MonsLvlLen);
    MonsLv_array* tairyo = (MonsLv_array*) system_array_new(MonsLv_Array_TypeInfo, 2);
    System_Int32_array* FormProb = (System_Int32_array*) system_array_new(System_Int32_array_TypeInfo, 2);
    FormProb->m_Items[0] = 0;
    FormProb->m_Items[1] = 1;
    
    for (size_t i = 0; i < 12; i++)
    {
        ground_mons->m_Items[i].fields = (MonsLv_Fields) {
            .maxlv = 100 / badgeCount,
            .minlv = 1 + badgeCount,
            .monsNo = 181
        };
    }

    for (size_t i = 0; i < 2; i++)
    {
        ground_mons->m_Items[i].fields = (MonsLv_Fields) {
            .maxlv = 25,
            .minlv = 1,
            .monsNo = 179
        };
    }

    sheetTable->fields.zoneID = zoneID;
    sheetTable->fields.ground_mons = ground_mons;
    sheetTable->fields.tairyo = tairyo;
    sheetTable->fields.day = tairyo;
    sheetTable->fields.night = tairyo;
    sheetTable->fields.swayGrass = ground_mons;

    sheetTable->fields.gbaRuby = ground_mons;
    sheetTable->fields.gbaSapp = ground_mons;
    sheetTable->fields.gbaEme = ground_mons;
    sheetTable->fields.gbaFire = ground_mons;
    sheetTable->fields.gbaLeaf = ground_mons;

    sheetTable->fields.water_mons = ground_mons;
    sheetTable->fields.boro_mons = ground_mons;
    sheetTable->fields.ii_mons = ground_mons;
    sheetTable->fields.sugoi_mons = ground_mons;

    sheetTable->fields.encRate_gr = 10;
    sheetTable->fields.encRate_wat = 10;
    sheetTable->fields.encRate_turi_boro = 100;
    sheetTable->fields.encRate_turi_ii = 100;
    sheetTable->fields.encRate_sugoi = 100;

    return sheetTable;
}

Sheettable_o * createDummySheetTable2(int32_t zoneID, MethodInfo *method)
{
    Sheettable_o * fieldEncData = GameManager::GetFieldEncountData(zoneID, method);

    int32_t lv = getScaledLevel();
    int32_t minlv = std::max(lv-2, 1);
    int32_t maxlv = std::min(lv+2, 100);

    for (size_t i = 0; i < 12; i++)
    {
        fieldEncData->fields.ground_mons->m_Items[i].fields.minlv = minlv;
        fieldEncData->fields.ground_mons->m_Items[i].fields.maxlv = maxlv;
    }

    return fieldEncData;
}

Sheettable_o * GameManager_GetFieldEncountData(int32_t zoneID, MethodInfo *method)
{
    return createDummySheetTable2(zoneID, method);
}