#include "il2cpp.hpp"

#include "Dpr/EvScript/EvDataManager.hpp"
#include "ItemWork.hpp"
#include "PlayerWork.hpp"
#include "System/String.hpp"

#include "logger.hpp"
#include "util.hpp"

const int32_t REPEL_ITEM_ID = 79;
const int32_t SUPER_REPEL_ITEM_ID = 76;
const int32_t MAX_REPEL_ITEM_ID = 77;

const int32_t INFINITE_REPEL_FLAG = 2195;

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

bool EncDataSave_CanUseSpray(MethodInfo *method)
{
    system_load_typeinfo((void *)0x3f33);

    DPData::ENC_SV_DATA_o encData = PlayerWork::get_Enc_SV_Data(nullptr, nullptr);
    bool repelRemaining = encData.fields.SprayCount > 0;
    bool infiniteRepelOn = PlayerWork::GetBool(INFINITE_REPEL_FLAG, nullptr);
    return repelRemaining || infiniteRepelOn;

}

bool IsUseSpray(uint16_t *itemno, MethodInfo *method)
{
    bool isRegularRepelInUse = ItemWork::IsUseSpray(itemno, nullptr);
    bool infiniteRepelOn = PlayerWork::GetBool(INFINITE_REPEL_FLAG, nullptr);
    return isRegularRepelInUse || infiniteRepelOn;
}
