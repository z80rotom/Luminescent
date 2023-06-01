#include "Pml/PokePara/CalcTool.h"
#include "Dpr/Battle/Logic/Common.hpp"

const int32_t MEWTWO_MONSNO = 0x96;
const int32_t ROTOM_MONSNO = 0x1DF;
const int32_t GIRATINA_MONSNO = 0x1E7;
const int32_t ARCEUS_MONSNO = 0x1ED;
const uint32_t GIRATINA_ORB_ITEMNO = 0x70;
const uint32_t MEWTWO_ARMOR_MK1_ITEMNO = 0x72C;
const uint16_t MEWTWO_ARMOR_MK1_FORMNO = 0x4;
const uint32_t MEWTWO_ARMOR_MK2_ITEMNO = 0x72A;
const uint16_t MEWTWO_ARMOR_MK2_FORMNO = 0x3;

bool DecideFormNoFromHoldItem(int32_t monsno, uint32_t holdItemno, uint16_t *formno, MethodInfo *method)
{
    // 0xf - Form Change Item field function
    // Dpr.UI.UIBag$$UseFormChangeItem for stuff like Shaymin
    // Dpr.EncountTools$$SetWildPokemonItem
    switch (monsno)
    {
        case GIRATINA_MONSNO:
            *formno = holdItemno == GIRATINA_ORB_ITEMNO;
            return true;

        case ARCEUS_MONSNO:
            *formno = Pml::PokePara::CalcTool::GetAruseusuType(holdItemno, (MethodInfo *) nullptr);
            return true;

        case MEWTWO_MONSNO:
            if (holdItemno == MEWTWO_ARMOR_MK2_ITEMNO)
            {
                *formno = MEWTWO_ARMOR_MK2_FORMNO;
            }
            else if (holdItemno == MEWTWO_ARMOR_MK1_ITEMNO)
            {
                *formno = MEWTWO_ARMOR_MK1_FORMNO;
            }
            else *formno = 0;
            return true;
        
        // Doesn't match any pokémon that changes forms, don't change
        default:
            return false;
    }

    return false;
}

bool CheckUnbreakablePokeItem(uint16_t monsno,uint16_t itemID,MethodInfo *method)
{
    if (monsno == MEWTWO_MONSNO && itemID == MEWTWO_ARMOR_MK2_ITEMNO) return true;
    if (monsno == MEWTWO_MONSNO && itemID == MEWTWO_ARMOR_MK1_ITEMNO) return true;
    // TODO: Any other form change items TTIN asks of me
    
    return Dpr::Battle::Logic::Common::CheckUnbreakablePokeItem(monsno, itemID, method);
}
