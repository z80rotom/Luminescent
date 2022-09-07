#include "il2cpp.hpp"
#include "PlayerWork.hpp"
#include "System/Array.hpp"

const int32_t IS_UWASU = 1;
const int32_t IS_SEE = 2;
const int32_t IS_GET = 3;
const uint32_t MAX_MONS = 898;

struct ZukanWork
{
    static System::Array<bool> * GetFormFlags(uint32_t monsno,uint8_t sex,bool color,MethodInfo *method);
};

System::Array<bool> * ZukanWork_GetFormFlags(uint32_t monsno,uint8_t sex,bool color,MethodInfo *method)
{
    return nullptr;
}

int32_t GetZukanStatus(DPData::ZUKAN_WORK_o * zukanWork, uint32_t monsno)
{
    DPData::GET_STATUS_array * get_status = zukanWork->fields.get_status;
    GetStatusBitfield * bitfields = (GetStatusBitfield *) get_status->m_Items;
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
    GetStatusBitfield * bitfields = (GetStatusBitfield *) get_status->m_Items;
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
    FlagBitfield * bitfields = (FlagBitfield *) flags->m_Items;
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
    FlagBitfield * bitfields = (FlagBitfield *) flags->m_Items;
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
            flags = zukanWork.fields.male_flag;
        } else {
            flags = zukanWork.fields.male_color_flag;
        }
    } else {
        if (color == 0) {
            flags = zukanWork.fields.female_flag;
        } else {
            flags = zukanWork.fields.female_color_flag;
        }
    }

    if (flags == nullptr)
    {
        return false;
    }

    return GetZukanFlag(flags, monsno);
}

int32_t ZukanWork_GetStatus(uint32_t monsno, MethodInfo *method)
{
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
            flags = zukanWork.fields.male_flag;
        } else {
            flags = zukanWork.fields.male_color_flag;
        }
    } else {
        if (color == 0) {
            flags = zukanWork.fields.female_flag;
        } else {
            flags = zukanWork.fields.female_color_flag;
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
    return 0;
}

int32_t ZukanWork_SeeSinouCount(bool isRating,MethodInfo *method)
{
    return 0;
}