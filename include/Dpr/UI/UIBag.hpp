#include "il2cpp.hpp"
#include "System/Array.hpp"

namespace Dpr
{
    namespace UI 
    {
        struct UIBag_BattleBootParam_Fields {
            int32_t TopMemberIndex;
            bool IsTrainerBattle;
            bool isDouble;
            System::Array<bool> * SasiosaeFlags;
        };

        struct UIBag_BattleBootParam_o {
            UIBag_BattleBootParam_Fields fields;
        };
    }
}