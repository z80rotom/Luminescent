#include "il2cpp.hpp"
#include "Dpr/Item/ItemInfo.hpp"
#include "Dpr/UI/UIBag.hpp"
#include "PlayerWork.hpp"
#include "ItemWork.hpp"
#include "level_cap.hpp"
#include "logger.hpp"
#include "util.hpp"

namespace Dpr
{
    namespace UI {
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

        struct BagItemButton_c;
        struct BagItemButton_Fields {
            UnityEngine_MonoBehaviour_Fields super;
            struct UnityEngine_UI_Image_o* iconImage;
            struct UIText_o* nameText;
            struct UnityEngine_UI_Image_o* newIconImage;
            struct UnityEngine_UI_Image_o* favoriteIconImage;
            struct UIText_o* stockCountLabelText;
            struct UIText_o* stockCountValueText;
            struct UnityEngine_UI_Image_o* registerButtonImage;
            struct UnityEngine_Sprite_array* shortcutButonSprites;
            int32_t index;
            struct UnityEngine_RectTransform_o* rectTransform;
            Dpr::Item::ItemInfo_o* item;
        };

        struct BagItemButton_o {
            BagItemButton_c *klass;
            void *monitor;
            BagItemButton_Fields fields;
        };


        struct BagItemPanel_Fields {
            UnityEngine_MonoBehaviour_Fields super;
            struct Cursor_o* cursor;
            struct BagIconPanel_o* bagIconPanel;
            struct UIText_o* moneyValueText;
            struct UIButtonSelector_o* categoryButtonSelector;
            struct UIText_o* categoryNameText;
            struct UnityEngine_RectTransform_o* categoryLeftArrowRectTransform;
            struct UnityEngine_RectTransform_o* categoryRightArrowRectTransform;
            struct UIScrollView_o* itemListScrollView;
            struct UIText_o* noDataText;
            struct BagItemDescriptionPanel_o* bagItemDescriptionPanel;
            struct BagItemSelectAmount_o* selectAmount;
            bool isRemoveNewEnable;
            bool isBattle;
            struct Dpr_Item_ItemListMemory_o* itemListMemory;
            struct System_Collections_Generic_List_ItemInfo__o* items;
            struct BagCategoryButton_o* currentCategoryButton;
            struct UnityEngine_Coroutine_o* removeNewIconCoroutine;
            struct System_Action_int__o* onDecideSelectAmountCallback;
            struct System_Action_o* onCancelSelectAmountCallback;
            struct System_Action_int__o* onSelectAmountValueChangedCallback;
            int32_t _CurrentCategoryId_k__BackingField;
            struct BagItemButton_o* _SelectedItemButton_k__BackingField;
            struct System_Action_BagItemButton__o* OnChangeSelectItem;
        };

        struct BagItemPanel_c;
        struct BagItemPanel_o {
            BagItemPanel_c *klass;
            void *monitor;
            BagItemPanel_Fields fields;
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
            struct Pml_PokePara_PokemonParam_o* onlyViewPokemonParam;
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
        struct UIBag_o {
            UIBag_c *klass;
            void *monitor;
            UIBag_Fields fields;
        };
    }
}

// void UIBag_OnPokemonPartyClickedToUseItem
//                (UIBag_o *__this, PokemonPartyItem_o *pokemonPartyItem,int32_t index,
//                MethodInfo *method)
// {

// }

const int32_t EVERLASTING_CANDY_ID = 1825; 

uint32_t isValidRareCandy(uint32_t level, Dpr::UI::UIBag_o *__this)
{
    socket_log_fmt("isValidRareCandy\n");
    socket_log_fmt("[isValidRareCandy] level: %08X\n", level);
    socket_log_fmt("[isValidRareCandy] __this: %08X\n", __this);
    il2cpp_runtime_class_init(PlayerWork_TypeInfo);
    // Beaten Stark Mountain
    if (PlayerWork::GetBool(2538, (MethodInfo *) nullptr))
    {
        socket_log_fmt("Beaten Stark Mountain!\n");
        return 100 - level;
    }

    // Is Level Cap enabled
    if (!PlayerWork::GetBool(2197, (MethodInfo *) nullptr))
    {
        socket_log_fmt("Level cap disabled!\n");
        return 100 - level;
    }

    Dpr::Item::ItemInfo_o * item = __this->fields.bagItemPanel->fields._SelectedItemButton_k__BackingField->fields.item;
    if (item->get_Id(nullptr) != EVERLASTING_CANDY_ID)
    {
        socket_log_fmt("Not an everlasting candy!\n");
        return 100 - level;
    }

    uint32_t max_level = getMaxLevel();

    if (level >= max_level)
    {
        socket_log_fmt("Above level cap!\n");
        return 0;
    } else {
        socket_log_fmt("Below level cap!\n");
        return max_level - level;
    }
}

int32_t ItemWork_SubItem(int32_t itemno,int32_t num,MethodInfo *method)
{
    socket_log_fmt("[ItemWork_SubItem] itemno: %08X\n", itemno);
    socket_log_fmt("[ItemWork_SubItem] num: %08X\n", num);
    if (itemno != EVERLASTING_CANDY_ID)
    {
        return ItemWork::SubItem(itemno, num, method);
    }
    // More like a nullptr return. Hopefully that is valid for this. Otherwise I can always change it to call
    // PlayerWork$$GetItem
    return 0;
}
