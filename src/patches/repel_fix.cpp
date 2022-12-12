#include "il2cpp.hpp"
#include "Dpr/EvScript/EvDataManager.hpp"
#include "System/String.hpp"
#include "logger.hpp"
#include "util.hpp"

// Dpr.EvScript.EvDataManager$$
bool JumpLabel(Dpr::EvScript::EvDataManager_o *__this, System::String *label,
               Dpr::EvScript::EventEndDelegate_o *callback, MethodInfo *method)
{
    socket_log_fmt("[JumpLabel] __this->fields._eventListIndex: %08X\n", __this->fields._eventListIndex);
    socket_log_fmt("[JumpLabel] Dpr::EvScript::EvDataManager_o::JumpLabel: %08X\n", &Dpr::EvScript::EvDataManager_o::JumpLabel);
    if (__this->fields._eventListIndex == 0xFFFFFFFF)
    {
        return __this->JumpLabel(label, callback, method);
    }

    return false;
}