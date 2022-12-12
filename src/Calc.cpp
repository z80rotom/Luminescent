#include "Dpr/Battle/Logic/Calc.hpp"


bool Dpr::Battle::Logic::Calc::IsBasicSickID(int32_t sickID, MethodInfo * method)
{
    return sickID < 6;
}