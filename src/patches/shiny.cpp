#include "Pml/PokePara/InitialSpec.hpp"
#include "ItemWork.hpp"

#include "il2cpp-api.h"
#include "util.hpp"

const int32_t SHINY_CHARM_ID = 0x278;

extern void* System_UInt16_array_TypeInfo;

uint8_t ShinyRolls() {
    uint8_t rolls = 8;

    Dpr::Item::ItemInfo_o * item = ItemWork::GetItemInfo(SHINY_CHARM_ID, nullptr);
    if (item != nullptr && item->get_count(nullptr) > 0)
    {
        rolls += 2;
    }

    return rolls;
}

void Shiny_InitialSpec_ctor(Pml::PokePara::InitialSpec_o* __this) {
    system_load_typeinfo((void *)0x53c4);

    __this->fields.id = 0xffffffffffffffff;
    __this->fields.personalRnd = 0xffffffffffffffff;
    __this->fields.rareRnd = 0x3ffffffff;
    __this->fields.monsno = 0x1ee;
    __this->fields.formno = 0;
    __this->fields.level = 1;
    __this->fields.sex = 0xff;
    __this->fields.seikaku = 0xffff;
    __this->fields.tokuseiIndex = 0xff;
    __this->fields.rareTryCount = ShinyRolls();
    __this->fields.randomSeed = 0;
    __this->fields.isRandomSeedEnable = '\0';
    __this->fields.weight = 0x100;
    __this->fields.height = 0x100;
    __this->fields.friendship = 0xffff;
    __this->fields.talentVNum = '\0';

    __this->fields.talentPower = (System_UInt16_array *)system_array_new(System_UInt16_array_TypeInfo, 6);
    for (int i=0; i<6; i++) {
        __this->fields.talentPower->m_Items[i] = 0xFFFF;
    }
}