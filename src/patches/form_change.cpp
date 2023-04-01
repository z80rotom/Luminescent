#include "Pml/PokePara/CalcTool.h"
#include "Dpr/Battle/Logic/Common.hpp"

bool DecideFormNoFromHoldItem(int32_t monsno, uint32_t holdItemno, uint16_t *formno, MethodInfo *method)
{
    // 0xf - Form Change Item field function
    // Dpr.UI.UIBag$$UseFormChangeItem for stuff like Shaymin
    // Dpr.EncountTools$$SetWildPokemonItem
    int32_t MEWTWO_MONSNO = 0x96;
    int32_t ROTOM_MONSNO = 0x1DF;
    int32_t GIRATINA_MONSNO = 0x1E7;
    int32_t ARCEUS_MONSNO = 0x1ED;
    uint32_t GIRATINA_ORB_ITEMNO = 0x70;
    uint32_t MEWTWO_ARMOR_ITEMNO = 0x72A;
    uint16_t MEWTWO_ARMOR_FORMNO = 0x3;

    if (monsno == GIRATINA_MONSNO) {
        *formno = holdItemno == GIRATINA_ORB_ITEMNO;
    } else if (monsno == ARCEUS_MONSNO) {
        *formno = Pml::PokePara::CalcTool::GetAruseusuType(holdItemno, (MethodInfo *) nullptr);
    } else if (monsno == MEWTWO_MONSNO) {
        *formno = holdItemno == MEWTWO_ARMOR_ITEMNO ? MEWTWO_ARMOR_FORMNO : 0;
    } else {
        return false;
    }

    return true;
}

bool CheckUnbreakablePokeItem(uint16_t monsno,uint16_t itemID,MethodInfo *method)
{
    uint16_t MEWTWO_MONSNO = 0x96;
    uint16_t MEWTWO_ARMOR_ITEMNO = 0x72A;
    if (monsno == MEWTWO_MONSNO && itemID == MEWTWO_ARMOR_ITEMNO) {
        return true;
    }
    // TODO: Any other form change items TTIN asks of me
    
    return Dpr::Battle::Logic::Common::CheckUnbreakablePokeItem(monsno, itemID, method);
}
