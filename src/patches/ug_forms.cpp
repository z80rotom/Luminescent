#include "il2cpp.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "Pml/Local/Random.h"
#include "System/Array.hpp"
#include "logger.hpp"


namespace XLSXContent
{
    struct UgEncount_Sheettable_Fields
    {
        int32_t monsno;
        int32_t version;
        int32_t zukanflag;
    };

    struct UgEncount_Sheettable_c;
    struct UgEncount_Sheettable_o {
        UgEncount_Sheettable_c *klass;
        void *monitor;
        UgEncount_Sheettable_Fields fields;
    };

    struct UgRandMark_Sheettable_o;


    struct UgEncount_Fields {
        UnityEngine_ScriptableObject_Fields super;
        System::Array<XLSXContent::UgEncount_Sheettable_o *> * table;
    };

    struct UgEncount_c;

    struct UgEncount_o {
        UgEncount_c *klass;
        void *monitor;
        UgEncount_Fields fields;
    };
}

struct System_Collections_Generic_List_KeyValuePair_UgPokeLottery_TypeAndSize__int___o;
struct System_Collections_Generic_List_ushort__o;

namespace Dpr
{
    namespace UnderGround
    {

        struct UgPokeLottery_Fields {
            XLSXContent::UgRandMark_Sheettable_o* randMarkData;
            XLSXContent::UgEncount_o* monsData;
            System_Collections_Generic_List_KeyValuePair_UgPokeLottery_TypeAndSize__int___o* MonsDataIndexs;
            System_Collections_Generic_List_ushort__o* buf_wazaTable;
        };

        struct UgPokeLottery_c;

        struct UgPokeLottery_o
        {
            Pml::PokePara::CoreParam * CreatePokemonParam_by_Tokusei(int32_t monsNo, uint8_t rareTryCount, MethodInfo * method);
            System::Array<XLSXContent::UgEncount_Sheettable_o *> * GetEnablePokes(int32_t versionNo,int32_t storyNo, MethodInfo *method);

            UgPokeLottery_c *klass;
            void *monitor;
            UgPokeLottery_Fields fields;
        };

        struct UgPokeLottery_TypeAndSize_Fields {
            int32_t size;
            uint8_t type;
            int32_t value;
        };

        struct UgPokeLottery_TypeAndSize_o {
            UgPokeLottery_TypeAndSize_Fields fields;
        };

        struct UgPokeLottery_PokeSlot_Fields {
            Pml::PokePara::CoreParam * param;
            UgPokeLottery_TypeAndSize_o ts;
        };

        struct UgPokeLottery_PokeSlot_c;

        struct UgPokeLottery_PokeSlot_o {
            UgPokeLottery_PokeSlot_c *klass;
            void *monitor;
            UgPokeLottery_PokeSlot_Fields fields;
        };
    }
}

using namespace Dpr::UnderGround;

struct System_Collections_Generic_List_UgPokeLottery_PokeSlot__Fields {
	System::Array<UgPokeLottery_PokeSlot_o *>* _items;
	int32_t _size;
	int32_t _version;
	Il2CppObject* _syncRoot;
};

struct System_Collections_Generic_List_UgPokeLottery_PokeSlot__c;

struct System_Collections_Generic_List_UgPokeLottery_PokeSlot__o {
	System_Collections_Generic_List_UgPokeLottery_PokeSlot__c *klass;
	void *monitor;
	System_Collections_Generic_List_UgPokeLottery_PokeSlot__Fields fields;
};

System::Array<XLSXContent::UgEncount_Sheettable_o *> * Dpr_UnderGround_UgPokeLottery_GetEnablePokes(UgPokeLottery_o *__this,
        int32_t versionNo,int32_t storyNo, MethodInfo *method)
{
    socket_log_fmt("Dpr_UnderGround_UgPokeLottery_GetEnablePokes\n");
    // socket_log_fmt("__this: %08X\n", __this);
    // socket_log_fmt("__this->fields.monsData: %08X\n", __this->fields.monsData);
    // socket_log_fmt("__this->fields.monsData->fields.table: %08X\n", __this->fields.monsData->fields.table);
    __this->GetEnablePokes(versionNo, storyNo, method);
    socket_log_fmt("Dpr_UnderGround_UgPokeLottery_GetEnablePokes END\n");
    return __this->fields.monsData->fields.table;
}

void Dpr_UnderGround_UgPokeLottery_LotteryPoke(UgPokeLottery_o *__this,
               System::Array<XLSXContent::UgEncount_Sheettable_o *> *origList,
               System_Collections_Generic_List_UgPokeLottery_PokeSlot__o *slots, uint8_t rareTryCount,
               MethodInfo *method)
{
    socket_log_fmt("Dpr_UnderGround_UgPokeLottery_LotteryPoke\n");
    // socket_log_fmt("Pml::Local::Random::GetValue: %08X\n", &Pml::Local::Random::GetValue);
    socket_log_fmt("Dpr::UnderGround::UgPokeLottery::CreatePokemonParam_by_Tokusei: %08X\n", &UgPokeLottery_o::CreatePokemonParam_by_Tokusei);
    socket_log_fmt("Pml::PokePara::CoreParam::ChangeFormNo: %08X\n", &Pml::PokePara::CoreParam::ChangeFormNo);
    socket_log_fmt("origList->max_length: %08X\n", origList->max_length);
    for (int i = 0; i < slots->fields._size; i++)
    {
        socket_log_fmt("Slot: %i\n", i);
        uint32_t origListIdx = Pml::Local::Random::GetValue((MethodInfo *) nullptr) % origList->max_length;
        socket_log_fmt("origListIdx: %X\n", origListIdx);
        // int32_t version = origList->m_Items[origListIdx]->fields.version;
        int32_t inMonsNo = origList->m_Items[origListIdx]->fields.monsno;
        int32_t monsNo = inMonsNo & 0x0000FFFF;
        int32_t formNo = (inMonsNo & 0xFFFF0000) >> 16;
        // socket_log_fmt("Version: %X\n", version);
        socket_log_fmt("MonsNo: %X\n", monsNo);
        Pml::PokePara::CoreParam * poke_param = __this->CreatePokemonParam_by_Tokusei(monsNo, rareTryCount, (MethodInfo *) nullptr);
        socket_log_fmt("Poke Param: %X\n", poke_param);
        if (formNo != 0)
        {
            socket_log_fmt("Changing form of pokemon\n");
            poke_param->ChangeFormNo((uint16_t) formNo, nullptr, (MethodInfo *) nullptr);
        }
        slots->fields._items->m_Items[i]->fields.param = poke_param;
    }
    socket_log_fmt("Dpr_UnderGround_UgPokeLottery_LotteryPoke END\n");
}

bool GetEnablePokes_b0(void *__this, void *x, MethodInfo *method)
{
    return true;
}