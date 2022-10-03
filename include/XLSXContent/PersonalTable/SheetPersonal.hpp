#pragma once

#include "il2cpp.hpp"

namespace XLSXContent
{
    namespace PersonalTable
    {
        struct SheetPersonal_Fields {
            bool valid_flag;
            uint16_t id;
            uint16_t monsno;
            uint16_t form_index;
            uint8_t form_max;
            uint8_t color;
            uint16_t gra_no;
            uint8_t basic_hp;
            uint8_t basic_atk;
            uint8_t basic_def;
            uint8_t basic_agi;
            uint8_t basic_spatk;
            uint8_t basic_spdef;
            uint8_t type1;
            uint8_t type2;
            uint8_t get_rate;
            uint8_t rank;
            uint16_t exp_value;
            uint16_t item1;
            uint16_t item2;
            uint16_t item3;
            uint8_t sex;
            uint8_t egg_birth;
            uint8_t initial_friendship;
            uint8_t egg_group1;
            uint8_t egg_group2;
            uint8_t grow;
            uint16_t tokusei1;
            uint16_t tokusei2;
            uint16_t tokusei3;
            uint16_t give_exp;
            uint16_t height;
            uint16_t weight;
            uint16_t chihou_zukan_no;
            uint32_t machine1;
            uint32_t machine2;
            uint32_t machine3;
            uint32_t machine4;
            uint32_t hiden_machine;
            uint16_t egg_monsno;
            uint16_t egg_formno;
            uint16_t egg_formno_kawarazunoishi;
            bool egg_form_inherit_kawarazunoishi;
        };

        struct SheetPersonal_c;

        struct SheetPersonal_o {
            SheetPersonal_c *klass;
            void *monitor;
            SheetPersonal_Fields fields;
        };
    }
}