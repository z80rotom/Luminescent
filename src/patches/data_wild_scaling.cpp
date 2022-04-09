#include "PlayerWork.hpp"
#include "zoneID.hpp"
#include "data_wild_scaling.hpp"


const size_t NUM_ENCOUNTER_ZONES = 158;

const EncounterScaleInfo ENCOUNTER_SCALE_INFO_TABLE[NUM_ENCOUNTER_ZONES] = {
    {
        .zoneID = R201,
        .level = 3,
    },
    {
        .zoneID = R202,
        .level = 4,
    },
    {
        .zoneID = D14R0101,
        .level = 6,
    },
    {
        .zoneID = D01R0101,
        .level = 7,
    },
    {
        .zoneID = R207,
        .level = 7,
    },
    {
        .zoneID = C04,
        .level = 8,
    },
    {
        .zoneID = C06,
        .level = 8,
    },
    {
        .zoneID = D01R0102,
        .level = 8,
    },
    {
        .zoneID = T05,
        .level = 8,
    },
    {
        .zoneID = T01,
        .level = 10,
    },
    {
        .zoneID = C02,
        .level = 11,
    },
    {
        .zoneID = D03R0101,
        .level = 11,
    },
    {
        .zoneID = D24,
        .level = 11,
    },
    {
        .zoneID = R219,
        .level = 11,
    },
    {
        .zoneID = W220,
        .level = 11,
    },
    {
        .zoneID = D05R0112,
        .level = 12,
    },
    {
        .zoneID = D25R0101,
        .level = 12,
    },
    {
        .zoneID = D25R0102,
        .level = 12,
    },
    {
        .zoneID = D25R0103,
        .level = 12,
    },
    {
        .zoneID = D25R0104,
        .level = 12,
    },
    {
        .zoneID = D25R0105,
        .level = 12,
    },
    {
        .zoneID = D25R0106,
        .level = 12,
    },
    {
        .zoneID = D25R0107,
        .level = 12,
    },
    {
        .zoneID = D25R0108,
        .level = 12,
    },
    {
        .zoneID = D25R0109,
        .level = 12,
    },
    {
        .zoneID = R211A,
        .level = 12,
    },
    {
        .zoneID = D05R0110,
        .level = 13,
    },
    {
        .zoneID = D05R0111,
        .level = 13,
    },
    {
        .zoneID = D12R0101,
        .level = 13,
    },
    {
        .zoneID = D27R0101,
        .level = 13,
    },
    {
        .zoneID = D27R0102,
        .level = 13,
    },
    {
        .zoneID = R203,
        .level = 13,
    },
    {
        .zoneID = R204A,
        .level = 13,
    },
    {
        .zoneID = R211B,
        .level = 13,
    },
    {
        .zoneID = R216,
        .level = 13,
    },
    // Unknown chambers, don't really matter
    // {
    //     .zoneID = D07R0101,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0103,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0104,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0105,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0106,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0107,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0108,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0109,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0110,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0111,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0112,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0113,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0114,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0115,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0116,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0117,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0118,
    //     .level = 14,
    // },
    // {
    //     .zoneID = D07R0119,
    //     .level = 14,
    // },
    {
        .zoneID = D14R0102,
        .level = 15,
    },
    {
        .zoneID = D21R0101,
        .level = 15,
    },
    {
        .zoneID = D21R0102,
        .level = 15,
    },
    {
        .zoneID = R206,
        .level = 15,
    },
    {
        .zoneID = T07,
        .level = 15,
    },
    {
        .zoneID = C08,
        .level = 16,
    },
    {
        .zoneID = C10,
        .level = 16,
    },
    {
        .zoneID = R204B,
        .level = 16,
    },
    {
        .zoneID = W223,
        .level = 16,
    },
    {
        .zoneID = D02,
        .level = 17,
    },
    {
        .zoneID = D23R0101,
        .level = 17,
    },
    {
        .zoneID = R205A,
        .level = 17,
    },
    {
        .zoneID = R209R0101,
        .level = 19,
    },
    {
        .zoneID = R209R0102,
        .level = 19,
    },
    {
        .zoneID = R205B,
        .level = 20,
    },
    {
        .zoneID = R209R0103,
        .level = 20,
    },
    {
        .zoneID = R209R0104,
        .level = 20,
    },
    {
        .zoneID = R210A,
        .level = 20,
    },
    {
        .zoneID = D22R0101,
        .level = 21,
    },
    {
        .zoneID = D22R0102,
        .level = 21,
    },
    {
        .zoneID = D22R0103,
        .level = 21,
    },
    {
        .zoneID = R209R0105,
        .level = 21,
    },
    {
        .zoneID = L02,
        .level = 23,
    },
    {
        .zoneID = R215,
        .level = 23,
    },
    {
        .zoneID = D05R0101,
        .level = 24,
    },
    {
        .zoneID = D05R0113,
        .level = 25,
    },
    {
        .zoneID = R208,
        .level = 25,
    },
    {
        .zoneID = R209,
        .level = 26,
    },
    {
        .zoneID = R212A,
        .level = 26,
    },
    {
        .zoneID = R214,
        .level = 29,
    },
    {
        .zoneID = D24R0101,
        .level = 30,
    },
    {
        .zoneID = D24R0102,
        .level = 30,
    },
    {
        .zoneID = D24R0103,
        .level = 30,
    },
    {
        .zoneID = D24R0104,
        .level = 31,
    },
    {
        .zoneID = D24R0105,
        .level = 31,
    },
    {
        .zoneID = D24R0106,
        .level = 31,
    },
    {
        .zoneID = R213,
        .level = 31,
    },
    {
        .zoneID = D06R0201,
        .level = 33,
    },
    {
        .zoneID = D06R0202,
        .level = 33,
    },
    {
        .zoneID = D06R0203,
        .level = 33,
    },
    {
        .zoneID = D06R0204,
        .level = 33,
    },
    {
        .zoneID = D06R0205,
        .level = 33,
    },
    {
        .zoneID = D06R0206,
        .level = 33,
    },
    {
        .zoneID = R212B,
        .level = 33,
    },
    {
        .zoneID = R217,
        .level = 33,
    },
    {
        .zoneID = D20R0101,
        .level = 34,
    },
    {
        .zoneID = D20R0102,
        .level = 34,
    },
    {
        .zoneID = D20R0103,
        .level = 34,
    },
    {
        .zoneID = D20R0104,
        .level = 34,
    },
    {
        .zoneID = D20R0105,
        .level = 34,
    },
    {
        .zoneID = D20R0106,
        .level = 34,
    },
    {
        .zoneID = L03,
        .level = 34,
    },
    {
        .zoneID = R210B,
        .level = 34,
    },
    {
        .zoneID = D05R0102,
        .level = 35,
    },
    {
        .zoneID = D05R0103,
        .level = 35,
    },
    {
        .zoneID = D05R0105,
        .level = 36,
    },
    {
        .zoneID = D05R0104,
        .level = 37,
    },
    {
        .zoneID = D05R0106,
        .level = 37,
    },
    {
        .zoneID = D05R0107,
        .level = 37,
    },
    {
        .zoneID = D05R0108,
        .level = 37,
    },
    {
        .zoneID = D05R0109,
        .level = 37,
    },
    {
        .zoneID = R218,
        .level = 37,
    },
    {
        .zoneID = D04,
        .level = 39,
    },
    {
        .zoneID = R221,
        .level = 39,
    },
    {
        .zoneID = D09R0101,
        .level = 41,
    },
    {
        .zoneID = D09R0102,
        .level = 42,
    },
    {
        .zoneID = D09R0105,
        .level = 42,
    },
    {
        .zoneID = D09R0106,
        .level = 42,
    },
    {
        .zoneID = D17R0102,
        .level = 46,
    },
    // {
    //     .zoneID = D17R0103,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0104,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0105,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0106,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0107,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0108,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0109,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0110,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0111,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0112,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0113,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0114,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0115,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0116,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0117,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0118,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0119,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0120,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0121,
    //     .level = 46,
    // },
    // {
    //     .zoneID = D17R0122,
    //     .level = 46,
    // },
    {
        .zoneID = D16,
        .level = 47,
    },
    {
        .zoneID = D16R0102,
        .level = 47,
    },
    {
        .zoneID = D16R0101,
        .level = 48,
    },
    {
        .zoneID = D29R0102,
        .level = 49,
    },
    {
        .zoneID = D28R0102,
        .level = 51,
    },
    {
        .zoneID = R222,
        .level = 51,
    },
    {
        .zoneID = D17R0101,
        .level = 53,
    },
    {
        .zoneID = D09R0103,
        .level = 58,
    },
    {
        .zoneID = D09R0104,
        .level = 58,
    },
    {
        .zoneID = R224,
        .level = 58,
    },
    {
        .zoneID = R225,
        .level = 66,
    },
    {
        .zoneID = R227,
        .level = 66,
    },
    {
        .zoneID = R228,
        .level = 66,
    },
    {
        .zoneID = R229,
        .level = 66,
    },
    {
        .zoneID = W226,
        .level = 66,
    },
    {
        .zoneID = W230,
        .level = 66,
    }
};

size_t getArrivedZones()
{
    const int32_t ARRIVE_SYS_FLAG_OFFSET = 0x86;
    size_t arrived_zones = 0;
    for (size_t i = 0; i < NUM_ENCOUNTER_ZONES; i++)
    {
        int32_t sys_flag_num = ARRIVE_SYS_FLAG_OFFSET + ENCOUNTER_SCALE_INFO_TABLE[i].zoneID;
        if (PlayerWork::GetSytemFlag(sys_flag_num, nullptr))
        {
            arrived_zones += 1;
        } 
    }
    return arrived_zones;
}

int32_t getScaledLevel()
{
    size_t arrived_zones = getArrivedZones();
    return ENCOUNTER_SCALE_INFO_TABLE[arrived_zones].level;
}