#include "il2cpp.hpp"
#include "PlayerWork.hpp"
#include "ZukanWork.hpp"
#include "Dpr/UI/ZukanInfo.hpp"
#include "System/Array.hpp"
#include "logger.hpp"
#include "util.hpp"

const int32_t IS_UWASU = 1;
const int32_t IS_SEE = 2;
const int32_t IS_GET = 3;
const uint32_t MAX_MONS = 1010;

const uint32_t NATDEX_MONS_COUNT = 11;
uint32_t NATDEX_MONS[NATDEX_MONS_COUNT] = {
    700, 862, 863, 864, 865, 866, 899, 900, 901, 903, 904
};

// External links
extern MethodInfo * Array_IndexOf_MethodInfo;
int32_t Array_IndexOf(System::Array<int32_t> * array, int32_t value, MethodInfo * method);
// End external links

int32_t GetZukanStatus(DPData::ZUKAN_WORK_o * zukanWork, uint32_t monsno)
{
    DPData::GET_STATUS_array * get_status = zukanWork->fields.get_status;
    GetStatusBitfield * bitfields = (GetStatusBitfield *) &get_status->m_Items[0];
    size_t idx = monsno / 8;
    GetStatusBitfield bitfield = bitfields[idx];
    switch (monsno % 8)
    {
        case 0:
            return bitfield.status1;
        case 1:
            return bitfield.status2;
        case 2:
            return bitfield.status3;
        case 3:
            return bitfield.status4;
        case 4:
            return bitfield.status5;
        case 5:
            return bitfield.status6;
        case 6:
            return bitfield.status7;
        case 7:
        default:
            return bitfield.status8;
    }

}

void SetZukanStatus(DPData::ZUKAN_WORK_o * zukanWork, uint32_t monsno, int32_t get)
{
    DPData::GET_STATUS_array * get_status = zukanWork->fields.get_status;
    GetStatusBitfield * bitfields = (GetStatusBitfield *) &get_status->m_Items[0];
    size_t idx = monsno / 8;
    GetStatusBitfield * bitfield = &bitfields[idx];
    switch (monsno % 8)
    {
        case 0:
            bitfield->status1 = get;
            break;
        case 1:
            bitfield->status2 = get;
            break;
        case 2:
            bitfield->status3 = get;
            break;
        case 3:
            bitfield->status4 = get;
            break;
        case 4:
            bitfield->status5 = get;
            break;
        case 5:
            bitfield->status6 = get;
            break;
        case 6:
            bitfield->status7 = get;
            break;
        case 7:
        default:
            bitfield->status8 = get;
            break;
    }

}

bool GetZukanFlag(System::Array<bool> * flags, uint32_t monsno)
{
    FlagBitfield * bitfields = (FlagBitfield *) &flags->m_Items[0];
    size_t idx = monsno / 8;
    FlagBitfield bitfield = bitfields[idx];
    
    switch (monsno % 8)
    {
        case 0:
            return bitfield.flag1;
        case 1:
            return bitfield.flag2;
        case 2:
            return bitfield.flag3;
        case 3:
            return bitfield.flag4;
        case 4:
            return bitfield.flag5;
        case 5:
            return bitfield.flag6;
        case 6:
            return bitfield.flag7;
        case 7:
        default:
            return bitfield.flag8;
    }
}

void SetZukanFlag(System::Array<bool> * flags, uint32_t monsno, bool flag)
{
    FlagBitfield * bitfields = (FlagBitfield *) &flags->m_Items[0];
    size_t idx = monsno / 8;
    FlagBitfield * bitfield = &bitfields[idx];
    
    switch (monsno % 8)
    {
        case 0:
            bitfield->flag1 = flag;
            break;
        case 1:
            bitfield->flag2 = flag;
            break;
        case 2:
            bitfield->flag3 = flag;
            break;
        case 3:
            bitfield->flag4 = flag;
            break;
        case 4:
            bitfield->flag5 = flag;
            break;
        case 5:
            bitfield->flag6 = flag;
            break;
        case 6:
            bitfield->flag7 = flag;
            break;
        case 7:
        default:
            bitfield->flag8 = flag;
            break;
    }
}

bool ZukanWork_IsGet1(uint32_t monsno,MethodInfo *method)
{
    monsno -= 1; // Real mons no
    if (monsno > MAX_MONS)
    {
        return false;
    }

    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);

    return zukanStatus == IS_GET;
}

bool ZukanWork_IsGet2(uint32_t monsno,uint8_t sex,int32_t form,bool color,MethodInfo *method)
{
    System::Array<bool> * formFlags = ZukanWork::GetFormFlags(monsno, sex, color, (MethodInfo *) nullptr);
    if (formFlags != nullptr)
    {
        return formFlags->m_Items[form];
    }

    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    System::Array<bool> * flags = nullptr;
    if (sex == 1)
    {
        if (color == 0) {
            flags = zukanWork.fields.female_flag;
        } else {
            flags = zukanWork.fields.female_color_flag;
        }
    } else {
        if (color == 0) {
            flags = zukanWork.fields.male_flag;
        } else {
            flags = zukanWork.fields.male_color_flag;
        }
    }

    if (flags == nullptr)
    {
        return false;
    }

    monsno -= 1;
    return GetZukanFlag(flags, monsno);
}

int32_t ZukanWork_GetStatus(uint32_t monsno, MethodInfo *method)
{
    monsno -= 1;
    if (monsno > MAX_MONS)
    {
        return 0;
    }

    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);
    return zukanStatus;
}

bool ZukanWork_IsSee(uint32_t monsno, MethodInfo *method)
{
    monsno -= 1;
    if (monsno > MAX_MONS)
    {
        return false;
    }

    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);

    return zukanStatus == IS_SEE;
}

bool ZukanWork_IsUwasa(uint32_t monsno, MethodInfo *method)
{
    monsno -= 1;
    if (monsno > MAX_MONS)
    {
        return false;
    }

    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);

    return zukanStatus == IS_UWASU;
}

void ZukanWork_SetPoke(uint32_t monsno, int32_t get, uint8_t sex, int32_t form, bool color, MethodInfo *method)
{
    if (monsno > MAX_MONS)
    {
        return;
    }

    System::Array<bool> * formFlags = ZukanWork::GetFormFlags(monsno, sex, color, (MethodInfo *) nullptr);
    if (formFlags != nullptr)
    {
        formFlags->m_Items[form] = true;
    }

    monsno -= 1;
    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);
    if (zukanStatus <= get)
    {
        zukanStatus = get;
    }
    SetZukanStatus(&zukanWork, monsno, zukanStatus);
    
    System::Array<bool> * flags = nullptr;
    if (sex == 1)
    {
        if (color == 0) {
            flags = zukanWork.fields.female_flag;
        } else {
            flags = zukanWork.fields.female_color_flag;
        }
    } else {
        if (color == 0) {
            flags = zukanWork.fields.male_flag;
        } else {
            flags = zukanWork.fields.male_color_flag;
        }
    }

    if (flags == nullptr)
    {
        return;
    }
    SetZukanFlag(flags, monsno, true);
}

int32_t ZukanWork_SeeCount(bool isRating, MethodInfo *method)
{
    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    if (!zukanWork.fields.zukan_get)
    {
        return 0;
    }

    int32_t seeCount = 0;
    for (uint32_t monsno = 0; monsno < MAX_MONS; monsno++)
    {
        if (isRating)
        {
            int32_t index = Array_IndexOf(ZukanWork_TypeInfo->static_fields->ZukanRatingExcludeNos, monsno+1, Array_IndexOf_MethodInfo);
            if (index >= 0)
            {
                continue;
            }
        }

        int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);
        if (zukanStatus >= IS_SEE)
        {
            seeCount += 1;
        }
    }

    return seeCount;
}

int32_t ZukanWork_SeeSinouCount(bool isRating, MethodInfo *method)
{
    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    if (!zukanWork.fields.zukan_get)
    {
        return 0;
    }

    int32_t seeCount = 0;
    System::Array<int32_t> * ShinouZukanNos = ZukanWork_TypeInfo->static_fields->ShinouZukanNos;
    for (il2cpp_array_size_t i = 0; i < ShinouZukanNos->max_length; i++)
    {
        int32_t monsno = ShinouZukanNos->m_Items[i];
        if (isRating)
        {
            int32_t index = Array_IndexOf(ZukanWork_TypeInfo->static_fields->ZukanRatingExcludeNos, monsno+1, Array_IndexOf_MethodInfo);
            if (index >= 0)
            {
                continue;
            }
        }

        int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);
        if (zukanStatus >= IS_SEE)
        {
            seeCount += 1;
        }
    }

    return seeCount;
}

int32_t ZukanWork_GetCount(bool isRating, MethodInfo *method)
{
    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    if (!zukanWork.fields.zukan_get)
    {
        return 0;
    }

    int32_t seeCount = 0;
    for (uint32_t monsno = 0; monsno < MAX_MONS; monsno++)
    {
        if (isRating)
        {
            int32_t index = Array_IndexOf(ZukanWork_TypeInfo->static_fields->ZukanRatingExcludeNos, monsno+1, Array_IndexOf_MethodInfo);
            if (index >= 0)
            {
                continue;
            }
        }

        int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);
        if (zukanStatus == IS_GET)
        {
            seeCount += 1;
        }
    }

    return seeCount;
}

int32_t ZukanWork_GetSinouCount(bool isRating, MethodInfo *method)
{
    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    if (!zukanWork.fields.zukan_get)
    {
        return 0;
    }

    int32_t seeCount = 0;
    System::Array<int32_t> * ShinouZukanNos = ZukanWork_TypeInfo->static_fields->ShinouZukanNos;
    for (il2cpp_array_size_t i = 0; i < ShinouZukanNos->max_length; i++)
    {
        int32_t monsno = ShinouZukanNos->m_Items[i];
        if (isRating)
        {
            int32_t index = Array_IndexOf(ZukanWork_TypeInfo->static_fields->ZukanRatingExcludeNos, monsno+1, Array_IndexOf_MethodInfo);
            if (index >= 0)
            {
                continue;
            }
        }

        int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);
        if (zukanStatus == IS_GET)
        {
            seeCount += 1;
        }
    }

    return seeCount;
}

bool ZukanWork_CheckShinouZukanCompSee(MethodInfo *method)
{
    system_load_typeinfo((void *)0xac6c);
    
    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    if (!zukanWork.fields.zukan_get)
    {
        return false;
    }

    System::Array<int32_t> * ShinouZukanNos = ZukanWork_TypeInfo->static_fields->ShinouZukanNos;
    for (il2cpp_array_size_t i = 0; i < ShinouZukanNos->max_length; i++)
    {
        int32_t monsno = ShinouZukanNos->m_Items[i];
        int32_t index = Array_IndexOf(ZukanWork_TypeInfo->static_fields->ZukanRatingExcludeNos, monsno+1, Array_IndexOf_MethodInfo);
        if (index >= 0)
        {
            continue;
        }

        int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);
        if (zukanStatus < IS_SEE)
        {
            return false;
        }
    }

    return true;
}

bool ZukanWork_CheckZenkokuZukanCompGet(MethodInfo *method)
{
    system_load_typeinfo((void *)0xac6d);
    
    DPData::ZUKAN_WORK_o zukanWork = PlayerWork::get_zukan(nullptr, nullptr);
    if (!zukanWork.fields.zukan_get)
    {
        return false;
    }

    for (uint32_t monsno = 0; monsno < 493; monsno++)
    {
        int32_t index = Array_IndexOf(ZukanWork_TypeInfo->static_fields->ZukanRatingExcludeNos, monsno+1, Array_IndexOf_MethodInfo);
        
        if (index >= 0)
        {
            continue;
        }

        int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno);
        if (zukanStatus != IS_GET)
        {
            return false;
        }
    }

    for (uint32_t i=0; i<NATDEX_MONS_COUNT; i++)
    {
        int32_t monsno = NATDEX_MONS[i];
        int32_t index = Array_IndexOf(ZukanWork_TypeInfo->static_fields->ZukanRatingExcludeNos, monsno, Array_IndexOf_MethodInfo);
        if (index >= 0)
        {
            continue;
        }

        int32_t zukanStatus = GetZukanStatus(&zukanWork, monsno-1);
        if (zukanStatus != IS_GET)
        {
            return false;
        }
    }

    return true;
}

struct Dpr_UI_UIText_o
{
    void SetupMessage(System::String * messageFile, int32_t messageIndex, MethodInfo * method);
};

void DescText_SetupMessage(Dpr_UI_UIText_o * __this, System::String * messageFile, int32_t monsno, Dpr::UI::ZukanInfo_o * zukanInfo)
{
    int32_t currentIndex = zukanInfo->fields.modelIndexSelector->fields.currentIndex;
    Dpr::UI::ZukanInfo_ModelParam_o * modelParam = zukanInfo->fields.modelParams->m_Items[currentIndex];

    int32_t messageIndex;
    if (modelParam->fields.FormNo == 0 || zukanInfo->fields.formIndex == 0)
    {
        messageIndex = monsno;
    } else {
        messageIndex = zukanInfo->fields.formIndex + modelParam->fields.FormNo - 1;
    }

    __this->SetupMessage(messageFile, messageIndex, nullptr);
}
