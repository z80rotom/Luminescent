#include "il2cpp.hpp"
#include "il2cpp-api.h"
#include "Dpr/Item/ItemInfo.hpp"
#include "Dpr/UI/UIBag.hpp"
#include "Pml/PokePara/PokemonParam.h"
#include "System/Array.hpp"
#include "dual_slot.hpp"
#include "ItemWork.hpp"
#include "PlayerWork.hpp"
#include "logger.hpp"
#include "util.hpp"
#include "XLSXContent/FieldEncountTable.hpp"
#include "GameManager.hpp"

struct System_Action_o;
struct System_Action_ContextMenuID__o;

namespace Dpr
{
    namespace UI
    {
        struct UIManager_o
        {
            // 17c5890
            void UseDSPlayerItem(MethodInfo * method);
        };

        struct UIMsgWindowController_o
        {
            // 1a133c0
            void OpenMsgWindow(int32_t messageFileType, System::String * labelName, bool isWait, bool isBatchDisplay, System_Action_o * onFinishedMessage, System_Action_o * onCloseWindow, MethodInfo * method);
            // 1a13610
            void CloseMsgWindow(MethodInfo * method);
        };

        struct UIWindow_Fields {
            UnityEngine_MonoBehaviour_Fields super;
            struct UIInputController_o* _input;
            struct UnityEngine_Canvas_o* _canvas;
            struct UnityEngine_Animator_o* _animator;
            struct UIAnimationEvent_o* _animEvent;
            int32_t _transitionFadeType;
            int32_t _prevWindowId;
            struct Dpr_MsgWindow_MsgWindow_o* _messageWindow;
            struct UIManager_UIInstance_o* instance;
            struct UnityEngine_Events_UnityAction_UIWindow__o* onClosed;
            struct UnityEngine_Events_UnityAction_UIWindow__o* onPreClose;
            bool _IsClosing_k__BackingField;
            int32_t _animStateIn;
            int32_t _animStateOut;
        };

        struct UIBag_Fields {
            UIWindow_Fields super;
            struct BagItemPanel_o* bagItemPanel;
            struct PokemonParty_o* pokemonParty;
            struct BagWazaSelectPanel_o* wazaSelectPanel;
            struct UnityEngine_RectTransform_o* effectRoot;
            int32_t _animStateIn;
            int32_t _animStateOut;
            int32_t bootType;
            int32_t modeType;
            Pml::PokePara::PokemonParam_o* onlyViewPokemonParam;
            int32_t onlyViewPartyIndex;
            int32_t onlyViewBattlePokemonId;
            struct UIBag_BattleBootParam_o battleBootParam;
            struct System_Action_int__o* onSelectedKinomiItem;
            struct System_Action_o* onCompleteAutoPilot;
            struct UIMsgWindowController_o* msgWindowController;
            struct PokemonParty_Param_o* pokemonPartyParam;
            int32_t displayMoney;
            bool isWaitUpdate;
            bool isWaitPokemonParty;
            bool isKinomiContact;
            bool isDontBuryNuts;
            bool isAutoPilot;
            bool _IsOpenFromBattleTeam_k__BackingField;
        };

        struct UIBag_c;

        struct UIBag_o
        {
            // 185c1f0
            void OpenContextMenu(System::Array<int32_t> * contextMenuIDs, System_Action_ContextMenuID__o * onSelected, UnityEngine_Vector2_o pivot, UnityEngine_Vector3_o pos, System_Action_o * onClosed, bool isNoDecideSe, bool isNoCancelSe, MethodInfo * method);

            UIBag_c *klass;
            void *monitor;
            UIBag_Fields fields;
        };

        struct UIBag_Displayclass_Locals_Fields {
            UIBag_o* __4__this;
            Dpr::Item::ItemInfo_o* item;
            struct System_Action_o* useItemAction;
            struct System_Action_o* equipItemAction;
            struct System_Action_o* __9__12;
            struct System_Action_o* __9__17;
            struct UnityEngine_Events_UnityAction_UnityAction_UIWindow___o* __9__13;
            struct UnityEngine_Events_UnityAction_UnityAction_UIWindow___o* __9__19;
        };

        struct UIBag_Displayclass_Locals_c;

        struct UIBag_Displayclass_Locals_o {
            UIBag_Displayclass_Locals_c *klass;
            void *monitor;
            UIBag_Displayclass_Locals_Fields fields;
        };

        struct UIBag_Displayclass_Fields {
            int32_t fieldFuncType;
            struct UIBag_Displayclass_Locals_o* locals;
        };

        struct UIBag_Displayclass_c;

        struct UIBag_Displayclass_o {
            UIBag_Displayclass_c *klass;
            void *monitor;
            UIBag_Displayclass_Fields fields;
        };

        struct PokemonPartyItem_o;
        struct UIBag_Displayclass144_Fields {
            UIBag_o * __4__this;
            Pml::PokePara::PokemonParam_o* pokemonParam;
            PokemonPartyItem_o * pokemonPartyItem;
        };
        struct UIBag_Displayclass144_c;

        struct UIBag_Displayclass144_o {
            UIBag_Displayclass144_c *klass;
            void *monitor;
            UIBag_Displayclass144_Fields fields;
        };

        extern void * UIBag_Displayclass144_TypeInfo;
    }
}

struct System_Action_o
{
    void ctor(Dpr::UI::UIBag_Displayclass_Locals_o * __this, MethodInfo * delegate, MethodInfo * method);
};

struct System_Action_ContextMenuID__o
{
    // 262f9a0
    void ctor(Dpr::UI::UIBag_Displayclass144_o * __this, MethodInfo * delegate, MethodInfo * method);
};

struct ContextMenuIDList
{
    // 2a72c00
    void ctor(MethodInfo * method);
    // 2a738c0
    void Add(int32_t contextMenuID, MethodInfo * method);
    // 2a75910
    System::Array<int32_t> * ToArray(MethodInfo * method);
};

const int32_t DUAL_SLOT_INCENSE_ITEM_ID = 1833;
const int32_t INFINITE_REPEL_ITEM_ID = 1835;
// Refers to index in ContextMenu array in UIDatabase
const int32_t BASE_CONTEXT_MENU_ID = DOUBLE_SLOT_CONTEXT_MENU_ID;

// 4c801a0
// Use as a basis for creating onSelected callbacks
extern MethodInfo * BASE_FORMCHANGE_ONSELECTED_METHODINFO;
static MethodInfo * formChange_onSelected_MethodInfo;

// 4c88f78
extern MethodInfo * ContextMenuIDList_ctor_MethodInfo;
// 4c88f80
extern MethodInfo * ContextMenuIDList_Add_MethodInfo;
// 4c68900
extern MethodInfo * ContextMenuIDList_ToArray_MethodInfo;
// 4c82180
extern MethodInfo * System_Action_ContextMenuID__o_ctor_MethodInfo;
// 4c80068
extern MethodInfo * ShowItemContextMenu_EndUseAction_MethodInfo;

// 4c627d0
extern void * ContextMenuIDList_TypeInfo;
// 4c627e0
extern void * System_Action_ContextMenuID_TypeInfo;
// 4c56040
extern void * System_Action_TypeInfo;
// 3a679b8
extern void * DAT_7103a679b8;

static Dpr::UI::UIBag_Displayclass_Locals_o * sDisplayClassLocals = nullptr;
static Dpr::UI::UIBag_o * sUIBag = nullptr;
static uint16_t sWaterMons[1314] = {0};

void onSelected(Dpr::UI::UIBag_Displayclass144_o * __this, int32_t selectContextMenuId, MethodInfo * method)
{
    socket_log_fmt("[onSelected] UIBag_Displayclass144_o: %08X\n", __this);
    socket_log_fmt("[onSelected] selectContextMenuId: %08X\n", selectContextMenuId);
    Dpr::UI::UIBag_o * uiBag = __this->fields.__4__this;
    socket_log_fmt("[onSelected] uiBag: %08X\n", uiBag);
    socket_log_fmt("[onSelected] sUIBag: %08X\n", sUIBag);
    sUIBag->fields.msgWindowController->CloseMsgWindow(nullptr);
    System::String * labelName;
    switch (selectContextMenuId)
    {
        case BASE_CONTEXT_MENU_ID:
            // Disable
            PlayerWork::SetInt(DOUBLE_SLOT_WORK, DISABLE_SLOT, nullptr);
            labelName = System::String::CreateString("SS_bag_369");
            break;
        case BASE_CONTEXT_MENU_ID+1:
            // Unova
            PlayerWork::SetInt(DOUBLE_SLOT_WORK, UNOVA_SLOT, nullptr);
            labelName = System::String::CreateString("SS_bag_370");
            break;
        case BASE_CONTEXT_MENU_ID+2:
            PlayerWork::SetInt(DOUBLE_SLOT_WORK, KALOS_SLOT, nullptr);
            labelName = System::String::CreateString("SS_bag_370");
            break;
        case BASE_CONTEXT_MENU_ID+3:
            PlayerWork::SetInt(DOUBLE_SLOT_WORK, ALOLA_SLOT, nullptr);
            labelName = System::String::CreateString("SS_bag_370");
            break;
        case BASE_CONTEXT_MENU_ID+4:
            PlayerWork::SetInt(DOUBLE_SLOT_WORK, HISUI_SLOT, nullptr);
            labelName = System::String::CreateString("SS_bag_370");
            break;
        case BASE_CONTEXT_MENU_ID+5:
            PlayerWork::SetInt(DOUBLE_SLOT_WORK, GALAR_SLOT, nullptr);
            labelName = System::String::CreateString("SS_bag_370");
            break;
        default:
            socket_log_fmt("Cancelled: %08X\n", selectContextMenuId);
            // Cancel, just exit out.
            return;
    }


    System_Action_o * action = (System_Action_o *) il2cpp_object_new(System_Action_TypeInfo);
    action->ctor(sDisplayClassLocals, ShowItemContextMenu_EndUseAction_MethodInfo, nullptr);
    sUIBag->fields.msgWindowController->OpenMsgWindow(0, labelName, true, false, nullptr, action, nullptr);
}

MethodInfo * getFormChangeOnSelectedMethodInfo()
{
    if (formChange_onSelected_MethodInfo == nullptr)
    {
        formChange_onSelected_MethodInfo = copyMethodInfo(BASE_FORMCHANGE_ONSELECTED_METHODINFO, (Il2CppMethodPointer) &onSelected);
    }

    return formChange_onSelected_MethodInfo;
}

void UseDualSlotIncense(Dpr::UI::UIManager_o * uiManager, Dpr::UI::UIBag_Displayclass_o * dispClass)
{
    socket_log_fmt("UseDualSlotIncense\n");
    socket_log_fmt("Dpr::UI::UIBag_Displayclass144_TypeInfo: %08X\n", Dpr::UI::UIBag_Displayclass144_TypeInfo);
    socket_log_fmt("BASE_FORMCHANGE_ONSELECTED_METHODINFO: %08X\n", BASE_FORMCHANGE_ONSELECTED_METHODINFO);
    // Base on Dpr.UI.UIBag$$UseFormChangeItem
    // TODO: Populate context menu
    // and route to onSelected method. Hope it properly handles inputs

    // Needs to be this disp class to match the System.Action I am copying
    Dpr::UI::UIBag_Displayclass144_o * dispClass144 = (Dpr::UI::UIBag_Displayclass144_o *) il2cpp_object_new(Dpr::UI::UIBag_Displayclass144_TypeInfo);
    // Copy over the UIBag object to this dispClass
    // Don't need to copy over the other fields because we don't use them in our custom function
    // Use sytem_array_init on this to ensure that there is no stone unturned
    dispClass144->fields.__4__this = sUIBag;
    il2cpp_object_init(&dispClass->fields, sUIBag);

    ContextMenuIDList* contextMenuID_List = (ContextMenuIDList *) il2cpp_object_new(ContextMenuIDList_TypeInfo);
    contextMenuID_List->ctor(ContextMenuIDList_ctor_MethodInfo);

    // Build the menu so that you have every option except what you have currently selected.
    int32_t work = PlayerWork::GetInt(DOUBLE_SLOT_WORK, nullptr);
    if (work != 0)
    {
        contextMenuID_List->Add(DOUBLE_SLOT_CONTEXT_MENU_ID, ContextMenuIDList_Add_MethodInfo);
    }

    for (int i = 1; i <= 5; i++)
    {
        bool flowerEnabled = PlayerWork::GetBool(DOUBLE_SLOT_FLAG + i - 1, nullptr);
        if (i == work || !flowerEnabled)
        {
            continue;
        }
        contextMenuID_List->Add(DOUBLE_SLOT_CONTEXT_MENU_ID + i, ContextMenuIDList_Add_MethodInfo);
    }
    contextMenuID_List->Add(DOUBLE_SLOT_CONTEXT_MENU_ID + 6, ContextMenuIDList_Add_MethodInfo);

    System_Action_ContextMenuID__o * onSelected = (System_Action_ContextMenuID__o *) il2cpp_object_new(System_Action_ContextMenuID_TypeInfo);
    onSelected->ctor(dispClass144, getFormChangeOnSelectedMethodInfo(), System_Action_ContextMenuID__o_ctor_MethodInfo);
    System_Action_o * onClosed = nullptr; // Don't need to do anything on close
    bool isNoDecideSe = false;
    bool isNoCancelSe = false;

    UnityEngine_Vector2_o pivot = (UnityEngine_Vector2_o) {
        .fields = {
            .x = 0.5,
            .y = 0.5,
        }
    };

    UnityEngine_Vector3_o pos = (UnityEngine_Vector3_o) {
        .fields = {
            .x = 1040.0,
            .y = 360.0,
            .z = 0.0
        }
    };

    System::Array<int32_t> * contextMenuIDs = contextMenuID_List->ToArray(ContextMenuIDList_ToArray_MethodInfo);

    // Open up our context menu we've spent so much time trying to make.
    sUIBag->OpenContextMenu(contextMenuIDs, onSelected, pivot, pos, onClosed, isNoDecideSe, isNoCancelSe, nullptr);
    System::String * SS_bag_368 = System::String::CreateString("SS_bag_368");
    sUIBag->fields.msgWindowController->OpenMsgWindow(0, SS_bag_368, false, true, nullptr, nullptr, nullptr);
}

bool UseInfiniteRepelItem()
{
    bool flag = PlayerWork::GetBool(INFINITE_REPEL_FLAG, nullptr);
    flag = !flag;
    PlayerWork::SetBool(INFINITE_REPEL_FLAG, flag, nullptr);
    return flag;
}

void UIManager_UseDSPlayerItem(Dpr::UI::UIManager_o * __this, Dpr::UI::UIBag_Displayclass_o * dispClass)
{
    system_load_typeinfo(DAT_7103a679b8);
    // TODO: Fix DS Slots item and maybe update to give some text when you use it
    socket_log_fmt("UIManager_UseDSPlayerItem\n");
    sDisplayClassLocals = dispClass->fields.locals;
    Dpr::UI::UIBag_o * uiBag = dispClass->fields.locals->fields.__4__this;
    // Currently used item
    Dpr::Item::ItemInfo_o* item = dispClass->fields.locals->fields.item;
    sUIBag = uiBag;
    int32_t itemId = item->get_Id(nullptr);
    if (itemId == DUAL_SLOT_INCENSE_ITEM_ID)
    {
        UseDualSlotIncense(__this, dispClass);
    } else if (itemId == INFINITE_REPEL_ITEM_ID)
    {
        bool flag = UseInfiniteRepelItem();
        System_Action_o * action = (System_Action_o *) il2cpp_object_new(System_Action_TypeInfo);
        action->ctor(dispClass->fields.locals, ShowItemContextMenu_EndUseAction_MethodInfo, nullptr);
        System::String * labelName;
        if (flag)
        {
            labelName = System::String::CreateString("SS_bag_353");
        } else {
            labelName = System::String::CreateString("SS_bag_354");
        }
        uiBag->fields.msgWindowController->OpenMsgWindow(0, labelName, true, false, nullptr, action, nullptr);
    } else {
        __this->UseDSPlayerItem(nullptr);
        System_Action_o * action = (System_Action_o *) il2cpp_object_new(System_Action_TypeInfo);
        action->ctor(dispClass->fields.locals, ShowItemContextMenu_EndUseAction_MethodInfo, nullptr);
        System::String * labelName;
        if (ItemWork::IsDsPlayer(nullptr))
        {
            labelName = System::String::CreateString("SS_bag_353");
        } else {
            labelName = System::String::CreateString("SS_bag_354");
        }
        uiBag->fields.msgWindowController->OpenMsgWindow(0, labelName, true, false, nullptr, action, nullptr);
    }
}


// int32_t PlayerWork_get_DoubleSlot(MethodInfo *method)
// {
//     int32_t work = PlayerWork::GetInt(DOUBLE_SLOT_WORK, nullptr);

//     if (work > 5)
//     {
//         return 0;
//     }

//     return work;
// }

int32_t PlayerWork_set_DoubleSlot(System::Array<MonsLv_o> * monsLv)
{
    int32_t zoneID = PlayerWork::get_zoneID((MethodInfo *) nullptr);
    XLSXContent::FieldEncountTable::Sheettable_o * inData = GameManager::GetFieldEncountData(zoneID, nullptr);

    // Time of Day encounters on slots 11/12
    int32_t periodOfDay = GameManager::get_currentPeriodOfDay(nullptr);
    // Daytime
    if (periodOfDay == 1 || periodOfDay == 2)
    {
        monsLv->m_Items[10] = inData->fields.day->m_Items[0];
        monsLv->m_Items[11] = inData->fields.day->m_Items[1];
    }
    // Night
    if (periodOfDay == 3)
    {
        monsLv->m_Items[10] = inData->fields.night->m_Items[0];
        monsLv->m_Items[11] = inData->fields.night->m_Items[1];
    }

    // Dual Slot encounters on slots 3/4
    int32_t work = PlayerWork::GetInt(DOUBLE_SLOT_WORK, nullptr);
    System::Array<MonsLv_o>* gbaDualSlot;
    switch (work)
    {
        case 1:
            gbaDualSlot = inData->fields.gbaRuby;
            break;
        case 2:
            gbaDualSlot = inData->fields.gbaSapp;
            break;
        case 3:
            gbaDualSlot = inData->fields.gbaEme;
            break;
        case 4:
            gbaDualSlot = inData->fields.gbaFire;
            break;
        case 5:
            gbaDualSlot = inData->fields.gbaLeaf;
            break;
        default:
            return 0;
    }

    monsLv->m_Items[2] = gbaDualSlot->m_Items[0];
    monsLv->m_Items[3] = gbaDualSlot->m_Items[1];

    return 0;
}


XLSXContent::FieldEncountTable::Sheettable_o * Incense_GameManager_GetFieldEncountData(int32_t zoneID, MethodInfo *method)
{
    XLSXContent::FieldEncountTable::Sheettable_o * inData = GameManager::GetFieldEncountData(zoneID, nullptr);

    // Be careful returning nullptr from here. It stops fishing and swarms from working.
    // Only return nullptr if not doing so will crash this function.
    if (inData == nullptr)
    {
        return nullptr;
    }

    if (inData->fields.water_mons->max_length < 2)
    {
        return nullptr;
    }

    if (sWaterMons[zoneID] == 0)
    {
        sWaterMons[zoneID] = inData->fields.water_mons->m_Items[1].fields.monsNo;
    }

    int32_t work = PlayerWork::GetInt(DOUBLE_SLOT_WORK, nullptr);
    System::Array<MonsLv_o>* gbaDualSlot;
    switch (work)
    {
        case 1:
            gbaDualSlot = inData->fields.gbaRuby;
            break;
        case 2:
            gbaDualSlot = inData->fields.gbaSapp;
            break;
        case 3:
            gbaDualSlot = inData->fields.gbaEme;
            break;
        case 4:
            gbaDualSlot = inData->fields.gbaFire;
            break;
        case 5:
            gbaDualSlot = inData->fields.gbaLeaf;
            break;
        default:
            inData->fields.water_mons->m_Items[1].fields.monsNo = sWaterMons[zoneID];
            return inData;
    }

    if (gbaDualSlot->max_length < 3)
    {
        // Don't overwrite water mons
        return inData;
    }

    inData->fields.water_mons->m_Items[1] = gbaDualSlot->m_Items[2];

    return inData;
}
