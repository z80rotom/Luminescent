#include "mod_globals.hpp"
#include "PlayerWork.hpp"

int getGBASlotNum() {
    return PlayerWork::GetInt(DS_SLOT_TYPE, (MethodInfo *)nullptr);
}
