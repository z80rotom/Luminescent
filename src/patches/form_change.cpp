#include "Pml/PokePara/CalcTool.h"
#include "Dpr/Battle/Logic/Common.hpp"

const int32_t ROTOM_MONSNO = 0x1DF;
const int32_t GIRATINA_MONSNO = 0x1E7;
const int32_t ARCEUS_MONSNO = 0x1ED;
const uint32_t GIRATINA_ORB_ITEMNO = 0x70;

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
        
        // Doesn't match any pokémon that changes forms, don't change
        default:
            return false;
    }

    return false;
}

bool CheckUnbreakablePokeItem(uint16_t monsno,uint16_t itemID,MethodInfo *method)
{
    // TODO: Any other form change items TTIN asks of me
    
    return Dpr::Battle::Logic::Common::CheckUnbreakablePokeItem(monsno, itemID, method);
}
