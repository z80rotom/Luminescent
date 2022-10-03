#pragma once

#include "il2cpp.hpp"
#include "MonsLv.hpp"
#include "System/Array.hpp"

namespace XLSXContent
{
    namespace FieldEncountTable
    {
        struct Sheettable_Fields {
            int32_t zoneID;
            int32_t encRate_gr;
            System::Array<MonsLv_o>* ground_mons;
            System::Array<MonsLv_o>* tairyo;
            System::Array<MonsLv_o>* day;
            System::Array<MonsLv_o>* night;
            System::Array<MonsLv_o>* swayGrass;
            System_Int32_array* FormProb;
            System_Int32_array* Nazo;
            System_Int32_array* AnnoonTable;
            System::Array<MonsLv_o>* gbaRuby;
            System::Array<MonsLv_o>* gbaSapp;
            System::Array<MonsLv_o>* gbaEme;
            System::Array<MonsLv_o>* gbaFire;
            System::Array<MonsLv_o>* gbaLeaf;
            int32_t encRate_wat;
            System::Array<MonsLv_o>* water_mons;
            int32_t encRate_turi_boro;
            System::Array<MonsLv_o>* boro_mons;
            int32_t encRate_turi_ii;
            System::Array<MonsLv_o>* ii_mons;
            int32_t encRate_sugoi;
            System::Array<MonsLv_o>* sugoi_mons;
        };

        struct Sheettable_c;
        
        struct Sheettable_o {
            Sheettable_c *klass;
            void *monitor;
            Sheettable_Fields fields;
        };
    }
}
