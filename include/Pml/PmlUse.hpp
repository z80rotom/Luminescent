#pragma once

#include "il2cpp.hpp"

namespace XLSXContent
{
    struct PersonalTable_o* personalTotal;
    struct GrowTable_o* growTableTotal;
    struct EvolveTable_o* evolveTableTotal;
    struct WazaOboeTable_o* wazaOboeTotal;
    struct WazaTable_o* wazaDataTotal;
    struct ItemTable_o* itemPrmTotal;
    struct TamagoWazaTable_o* tamagoWazaTotal;
    struct AddPersonalTable_o* addPersonalTotal;
    struct SealTable_o* sealTotal;
    struct UgItemTable_o* ugItemPrmTotal;
    struct TamaTable_o* tamaTableTotal;
    struct PedestalTable_o* pedestalTableTotal;
    struct StoneStatuEeffect_o* stoneStatuEeffectTotal;
    struct UgFatherPos_o* ugfPosTotal;
    struct UgFatherExpansion_o* ugfExpansionTotal;
    struct UgFatherShopTable_o* ugfShopTotal;
}

namespace Pml
{
    namespace PokePara
    {
        struct EvolveManager_o;
    }

    struct PmlUse_Fields {
        bool isAutoLoad;
        XLSXContent::PersonalTable_o* personalTotal;
        XLSXContent::GrowTable_o* growTableTotal;
        XLSXContent::EvolveTable_o* evolveTableTotal;
        XLSXContent::WazaOboeTable_o* wazaOboeTotal;
        XLSXContent::WazaTable_o* wazaDataTotal;
        XLSXContent::ItemTable_o* itemPrmTotal;
        XLSXContent::TamagoWazaTable_o* tamagoWazaTotal;
        XLSXContent::AddPersonalTable_o* addPersonalTotal;
        XLSXContent::SealTable_o* sealTotal;
        XLSXContent::UgItemTable_o* ugItemPrmTotal;
        XLSXContent::TamaTable_o* tamaTableTotal;
        XLSXContent::PedestalTable_o* pedestalTableTotal;
        XLSXContent::StoneStatuEeffect_o* stoneStatuEeffectTotal;
        XLSXContent::UgFatherPos_o* ugfPosTotal;
        XLSXContent::UgFatherExpansion_o* ugfExpansionTotal;
        XLSXContent::UgFatherShopTable_o* ugfShopTotal;
        Pml::PokePara::EvolveManager_o* evolveManager;
        bool isABAppended;
        bool isInitialized;
        bool _IsPersistentTiming_k__BackingField;
    };

    struct PmlUse_c;

    struct PmlUse_o {
        // 0x027fb230
        static PmlUse_o * get_Instance(MethodInfo * method);

        PmlUse_c *klass;
        void *monitor;
        PmlUse_Fields fields;
    };
}