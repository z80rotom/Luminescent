#include "il2cpp.hpp"
#include "il2cpp-api.h"
#include "System/Array.hpp"
#include "System/Collections/Generic/HashSet.hpp"
#include "System/String.hpp"
#include "logger.hpp"
#include "util.hpp"
#include "Pml/PokePara/PokemonParam.h"
#include "Dpr/UI/UIWindowID.hpp"
#include "Dpr/Message/MessageWordSetHelper.hpp"
#include "Dpr/EvScript/EvDataManager.hpp"
#include "PlayerWork.hpp"

const int32_t QUIVER_DANCE = 483;

struct System_Action_o;
struct System_Action_WazaNo__WazaNo__o
{
    // param_1 seems to be the bound "this" pointer if a delegate is a method
    // param_2 is the methodInfo of the delegate
    // param_3 is the methodInfo of the constructor
    // 02817120
    void ctor(void * __this, MethodInfo * delegate, MethodInfo * method);
};

struct System_Func_ContextMenuItem__bool__o;
struct UnityEngine_Events_UnityAction_UnityAction_UIWindow___o;

// 0x04b79600
extern void ** PTR_System_Action_WazaNo__WazaNo__TypeInfo;
// 0x04b78330
extern void ** PTR_OnInputCheckFunc_TypeInfo;
// 0x04b78348
extern void ** PTR_OnCompleteAction_TypeInfo;
// 04b78338
extern MethodInfo ** PTR_OnInputCheckFunc_MethodInfo;
// 04b78340
extern MethodInfo ** PTR_OnInputCheckFuncCtor_MethodInfo;
// EvScript Version: 04b78350
// 04b9c4b0
extern MethodInfo ** PTR_OnCompleteAction_MethodInfo;
// 04b78358
extern MethodInfo ** PTR_OnCompleteActionCtor_MethodInfo;
// 0x04b79660
extern MethodInfo ** PTR_EvCmdCallWazaOshieUi_b__0;
// 0x04b79608
extern MethodInfo ** PTR_EvCmdCallWazaOmoidashiUi_b__1539_0;
// 0x04b79610
extern MethodInfo ** PTR_System_Action_WazaNo__WazaNo__o_ctor;
// 0x04c2afd8
extern void ** PTR_DAT_04c2afd8;
// 0x04b7beb0
extern void ** PTR_DAT_04b7beb0;
extern void ** PTR_DAT_04c2afe8;
// 0x04c2b018
extern void ** PTR_DAT_04c2b018;
// 0x04b782f8
extern void ** PTR_DAT_04c29e78;
// 0x04b51e98
extern System::String ** PTR_StringLiteral_398;
// 0x04b78308
extern System::String ** PTR_StringLiteral_9187_SS_strinput_005;
// 0x04b78318
extern System::String ** PTR_StringLiteral_9185_SS_strinput_006;
// 0x04b78310
extern System::String ** PTR_StringLiteral_9186_SS_strinput_007;

static Pml::PokePara::PokemonParam_o* sPokemonParam = nullptr;
static bool sCloseWindow = false;

struct System_Func_string__SoftwareKeyboard_ErrorState__ValueTuple_bool__string___o;
struct UnityEngine_Events_UnityAction_bool__string__o;

using OnInputCheckFunc_t = System_Func_string__SoftwareKeyboard_ErrorState__ValueTuple_bool__string___o;
using OnCompleteAction_t = UnityEngine_Events_UnityAction_bool__string__o;

namespace Dpr
{
    namespace MsgWindow
    {
        struct MsgWindow_o;
    }

    namespace UI
    {
        struct ContextMenuItem_Param_Fields {
            int32_t menuId;
            System::String * messageFile;
            System::String * messageLabel;
            int32_t messageIndex;
            System::String * text;
            int32_t colorType;
        };

        struct ContextMenuItem_Param_c; // Forward decleration since it's just a pointer.

        struct ContextMenuItem_Param_o
        {
            // 022d9480
            void ctor(); // Not 100% sure this is neccessary

            ContextMenuItem_Param_c *klass;
            void *monitor;
            ContextMenuItem_Param_Fields fields;
        };

        struct UIWazaManage_Param_Fields {
            int32_t BootType;
            bool IsOpenFromFieldScript;
            Pml::PokePara::PokemonParam_o * PokemonParam;
            int32_t LearnWazaNo;
            System_Action_WazaNo__WazaNo__o * ResultCallback;
        };

        struct UIWazaManage_Param_o {
            UIWazaManage_Param_Fields fields;
        };

        struct PokemonPartyItem_o;
        struct PokemonWindow_o
        {
            void FieldWaza(int32_t fieldWazaNo, PokemonPartyItem_o * partyItem, int32_t selectIndex, MethodInfo * method);
        };

        struct ContextMenuWindow_Param_o;
        struct PokemonWindow_DisplayClass25_0_Fields {
            PokemonWindow_o* __4__this;
            int32_t selectIndex;
            PokemonPartyItem_o* partyItem;
            Pml::PokePara::PokemonParam_o* pokemonParam;
            ContextMenuWindow_Param_o* param;
            UnityEngine_Events_UnityAction_UnityAction_UIWindow___o* __9__6;
            System_Action_o* __9__5;
            UnityEngine_Events_UnityAction_UnityAction_UIWindow___o* __9__8;
            System_Action_o* __9__12;
            System_Func_ContextMenuItem__bool__o* __9__11;
        };

        struct PokemonWindow_DisplayClass25_0_c;
        
        struct PokemonWindow_DisplayClass25_0_o {
            PokemonWindow_DisplayClass25_0_c *klass;
            void *monitor;
            PokemonWindow_DisplayClass25_0_Fields fields;
        };

        struct UIManager_o {
            // 020f0e20
            void * CreateUIWindow(UIWindowID windowId, MethodInfo *method);
        };

        struct UIWazaManage_o {
            // 0220f330
            void Open(UIWazaManage_Param_o param, MethodInfo *method);
        };

        struct SoftwareKeyboard_Param_Fields {
            int32_t preset;
            int32_t keyboardMode;
            bool isPredictionEnabled;
            int32_t invalidCharFlag;
            int32_t initialCursorPos;
            int32_t textMaxLength;
            int32_t textMinLength;
            int32_t passwordMode;
            int32_t inputFormMode;
            bool isUseNewLine;
            bool isUseBlurBackground;
            System::Array<int32_t> * separateTextPos;
            System::String * text;
            System::String * guideText;
            System::String * headerText;
            System::String * subText;
            System::String * okText;
            int32_t disableErrorChecks;
        };

        struct SoftwareKeyboard_Param_c;

        struct SoftwareKeyboard_Param_o {
            // 01cc6800
            void ctor(MethodInfo * method);

            SoftwareKeyboard_Param_c *klass;
            void *monitor;
            SoftwareKeyboard_Param_Fields fields;
        };

        struct SoftwareKeyboard_Fields {
        };

        struct SoftwareKeyboard_c;

        struct SoftwareKeyboard_o {
            // 01cc6260
            static int32_t LanguageMaxLength(int32_t maxLength,int32_t langId, MethodInfo *method);
            // 01cc41d0
            static System::String * GetMessageText(System::String * messageLabel, MethodInfo *method);
            // 01cc4a80
            static bool Open(SoftwareKeyboard_Param_o *param,
                        OnInputCheckFunc_t *onInputCheck,
                        OnCompleteAction_t *onComplete,
                        MethodInfo *method);

            SoftwareKeyboard_c *klass;
            void *monitor;
            SoftwareKeyboard_Fields fields;
        };

        struct UIInputController_o;
        struct UIAnimationEvent_o;
        struct ZukanDescriptionPanel_o;
        struct UIMsgWindowController_o;

        struct UnityEngine_Canvas_o;
        struct UnityEngine_Animator_o;
        struct UnityEngine_Events_UnityAction_UIWindow__o;
        struct UnityEngine_RectTransform_o;
        struct System_Action_UIZukanRegister_AddMemberResult__o;

        struct UIWindow_Fields {
            UnityEngine_MonoBehaviour_Fields super;
            struct UIInputController_o* _input;
            struct UnityEngine_Canvas_o* _canvas;
            struct UnityEngine_Animator_o* _animator;
            struct UIAnimationEvent_o* _animEvent;
            int32_t _transitionFadeType;
            int32_t _prevWindowId;
            struct Dpr::MsgWindow::MsgWindow_o* _messageWindow;
            struct UIManager_UIInstance_o* instance;
            struct UnityEngine_Events_UnityAction_UIWindow__o* onClosed;
            struct UnityEngine_Events_UnityAction_UIWindow__o* onPreClose;
            bool _IsClosing_k__BackingField;
            int32_t _animStateIn;
            int32_t _animStateOut;
        };
        
        struct UIWindow_c;

        struct UIWindow_o {
            // 01ed5d80
            bool IsPushButton(int32_t button,bool isForce,MethodInfo *method);
            UIWindow_c *klass;
            void *monitor;
            UIWindow_Fields fields;
        };

        struct UIZukanRegister_Fields {
            UIWindow_Fields super;
            int32_t _animStateIn;
            int32_t _animStateOut;
            struct ZukanDescriptionPanel_o* descriptionPanel;
            struct UnityEngine_RectTransform_o* descriptionHideModelViewPositionRectTransform;
            struct UnityEngine_RectTransform_o* contextMenuPositionRectTransform;
            struct UIMsgWindowController_o* msgWindowController;
            int32_t bootType;
            bool isWaitUpdate;
            bool isRegisterNew;
            bool isNotAddMember;
            bool isSkipAddMemberProc;
            struct Pml::PokePara::PokemonParam_o* pokemonParam;
            int32_t addMemberResult;
            struct System_Action_UIZukanRegister_AddMemberResult__o* OnComplete;
        };

        struct UIZukanRegister_c;

        struct UIZukanRegister_o {
            UIZukanRegister_c *klass;
            void *monitor;
            UIZukanRegister_Fields fields;
        };

        // 04b78328
        extern void ** PTR_SoftwareKeyboard_Param_TypeInfo;

        // 04b79630
        extern MethodInfo ** PTR_UIManager_CreateUIWindow_UIWazaManage;

        // 04e53890
        extern void * ContextMenuItem_Param_TypeInfo;
    }
}

using namespace Dpr::UI;

namespace System
{
    namespace Collections
    {
        namespace Generic
        {
            struct ListXMenuTopItem_o;
            struct XMenuTopItem_o;
            struct List_ContextMenuItem_Param_o;

            void ListXMenuTopItem_Clear(List_ContextMenuItem_Param_o * itemParams, MethodInfo * method);
            void ListXMenuTopItem_Add(List_ContextMenuItem_Param_o * itemParams, ContextMenuItem_Param_o * item, MethodInfo * method);
            extern MethodInfo ** List_ContextMenuItem_Param_Add_MethodInfo;
        }
    }
}

using namespace System::Collections::Generic;

namespace Dpr
{
    namespace EvScript
    {
        struct EvDataManager_DisplayClass1541_0_Fields {
            EvDataManager_o* __4__this;
            Pml::PokePara::PokemonParam_o* param;
            int32_t tray;
            int32_t idx;
        };
        struct EvDataManager_DisplayClass1541_0_c;

        struct EvDataManager_DisplayClass1541_0_o {
            EvDataManager_DisplayClass1541_0_c *klass;
            void *monitor;
            EvDataManager_DisplayClass1541_0_Fields fields;

            // 0x1E3FAB0
            void ctor(MethodInfo * method);
        };

        struct EvDataManager_DisplayClass772_0_Fields {
            Pml::PokePara::PokemonParam_o* pokemonParam;
            int32_t trayIndex;
            int32_t index;
            EvDataManager_o * __4__this;
        };

        struct EvDataManager_DisplayClass772_0_c;
        struct EvDataManager_DisplayClass772_0_o {
            EvDataManager_DisplayClass772_0_c *klass;
            void *monitor;
            EvDataManager_DisplayClass772_0_Fields fields;

            // 0x01e40380
            void ctor(MethodInfo * method);
        };

        // 0x04b78300
        extern void ** PTR_EvDataManager_DisplayClass772_0_o_TypeInfo;

        // 0x04b79658
        extern void ** PTR_EvDataManager_DisplayClass1541_0_o_TypeInfo;
    }
}

namespace SmartPoint
{
    namespace AssetAssistant
    {
        struct SingletonMonoBehaviour
        {
            static void * get_Instance(MethodInfo * method);
        };
        extern MethodInfo ** PTR_SingletonMonoBehaviour_UIManager_get_Instance;
    }
}

struct System_Func_string__SoftwareKeyboard_ErrorState__ValueTuple_bool__string___o
{
    // 0x02ab3f30
    void ctor(Dpr::EvScript::EvDataManager_o * __this, MethodInfo * delegate, MethodInfo * method);
};

struct UnityEngine_Events_UnityAction_bool__string__o
{
    // 0x02850f20
    void ctor(Dpr::EvScript::EvDataManager_DisplayClass772_0_o * __this, MethodInfo * delegate, MethodInfo * method);
};

ContextMenuItem_Param_o * patchContextMenu(void * typeInfo, List_ContextMenuItem_Param_o * list)
{
    // First thing to do: Double check this doesn't crash immediately
    // No crash: woooo;
    ContextMenuItem_Param_o * param;
    socket_log_fmt("ContextMenuItem_Param_TypeInfo: %08X\n", ContextMenuItem_Param_TypeInfo);
    socket_log_fmt("List_ContextMenuItem_Param_Add_MethodInfo: %08X\n", List_ContextMenuItem_Param_Add_MethodInfo);
    socket_log_fmt("*List_ContextMenuItem_Param_Add_MethodInfo: %08X\n", *List_ContextMenuItem_Param_Add_MethodInfo);
    socket_log_fmt("ContextMenuItem_Param_o::ctor: %08X\n", &ContextMenuItem_Param_o::ctor);

    socket_log_fmt("Restore\n");
    // Restore?
    param = (ContextMenuItem_Param_o *) il2cpp_object_new(ContextMenuItem_Param_TypeInfo);
    param->ctor();
    param->fields.menuId = 5;
    ListXMenuTopItem_Add(list, param, *List_ContextMenuItem_Param_Add_MethodInfo);

    socket_log_fmt("Walk Together\n");
    // Restore?
    param = (ContextMenuItem_Param_o *) il2cpp_object_new(ContextMenuItem_Param_TypeInfo);
    param->ctor();
    param->fields.menuId = 2;
    ListXMenuTopItem_Add(list, param, *List_ContextMenuItem_Param_Add_MethodInfo);

    socket_log_fmt("Held Item\n");
    // Held Item
    param = (ContextMenuItem_Param_o *) il2cpp_object_new(ContextMenuItem_Param_TypeInfo);
    param->ctor();
    // ListXMenuTopItem_Add(list, param, *List_ContextMenuItem_Param_Add_MethodInfo);
    // menuId gets set to 6 after returning back to our custom ASM
    return param;
}


void patchContextMenu2(List_ContextMenuItem_Param_o * list, ContextMenuItem_Param_o * argParam, PokemonWindow_DisplayClass25_0_o * dispClass)
{
    socket_log_fmt("patchContextMenu2\n");
    ContextMenuItem_Param_o * param;
    ListXMenuTopItem_Add(list, argParam, *List_ContextMenuItem_Param_Add_MethodInfo);
    socket_log_fmt("Added default\n");
    socket_log_fmt("Pml::PokePara::CoreParam::CollectRemindableWaza: %08X\n", &Pml::PokePara::CoreParam::CollectRemindableWaza);

    socket_log_fmt("dispClass: %08X\n", dispClass);
    Pml::PokePara::CoreParam * pokemonParam;
    pokemonParam = (Pml::PokePara::CoreParam *) dispClass->fields.pokemonParam;
    socket_log_fmt("pokemonParam: %08X\n", pokemonParam);
    HashSet_WazaNo__o * remindableWaza = pokemonParam->CollectRemindableWaza( (MethodInfo *) nullptr );
    socket_log_fmt("remindableWaza: %08X\n", remindableWaza);

    if (remindableWaza->fields._count > 0)
    {
        socket_log_fmt("Adding move relearner\n");
        param = (ContextMenuItem_Param_o *) il2cpp_object_new(ContextMenuItem_Param_TypeInfo);
        param->ctor();
        param->fields.menuId = 112;
        ListXMenuTopItem_Add(list, param, *List_ContextMenuItem_Param_Add_MethodInfo);
    }

    socket_log_fmt("Adding name rater\n");
    param = (ContextMenuItem_Param_o *) il2cpp_object_new(ContextMenuItem_Param_TypeInfo);
    param->ctor();
    param->fields.menuId = 113;
    ListXMenuTopItem_Add(list, param, *List_ContextMenuItem_Param_Add_MethodInfo);
    socket_log_fmt("END patchContextMenu2\n");
}

void EvDataManager_EvCmdCallWazaOmoidashiUi_b__1539_0Orig(Dpr::EvScript::EvDataManager_o *__this, int32_t learnWazaNo, int32_t unlearnWazaNo, MethodInfo *method)
{
    // TODO: Fix this function, I can't be bothered 
    // undefined8 uVar1;
    // EvData_Aregment_array *pEVar2;
  
    // pEVar2 = (__this->fields)._evArg;
    // if (1 < *(uint *)&pEVar2->max_length) {
    //     FlagWork$$SetWork(pEVar2->m_Items[1].fields.data,learnWazaNo,(MethodInfo *)0x0);
    //     return;
    // }

    // uVar1 = thunk_FUN_00047b1c(__this,learnWazaNo,unlearnWazaNo);
    // FUN_0009adb0(uVar1,0);
}

void EvDataManager_EvCmdCallWazaOshieUi_b__0(Dpr::EvScript::EvDataManager_DisplayClass1541_0_o *__this, int32_t learnWazaNo, int32_t unlearnWazaNo, MethodInfo *method)
{
    socket_log_fmt("WazaOshieUi\n");
    socket_log_fmt("__this: %08X\n", __this);
    socket_log_fmt("learnWazaNo: %04X\n", learnWazaNo);
    socket_log_fmt("unlearnWazaNo: %04X\n", unlearnWazaNo);
    socket_log_fmt("method: %08X\n", method);

    // User decided to not learn the move.
    if (learnWazaNo == 0 || unlearnWazaNo == 0)
    {
        return;
    }

    __this->fields.__4__this->LearnWaza(__this->fields.param, learnWazaNo, unlearnWazaNo, (MethodInfo *) nullptr);
}

void EvDataManager_EvCmdCallWazaOmoidashiUi_b__1539_0(Dpr::EvScript::EvDataManager_o *__this, int32_t learnWazaNo, int32_t unlearnWazaNo, MethodInfo *method)
{
    socket_log_fmt("WazaOmoidashiUi\n");
    socket_log_fmt("__this: %08X\n", __this);
    socket_log_fmt("learnWazaNo: %04X\n", learnWazaNo);
    socket_log_fmt("unlearnWazaNo: %04X\n", unlearnWazaNo);
    socket_log_fmt("method: %08X\n", method);

    // unlearnWazaNo is always zero, because this is just selecting the move to learn.
    if (learnWazaNo == 0)
    {
        return;
    }
    
    socket_log_fmt("Pml::PokePara::CoreParam::AddWazaIfEmptyExist: %08X\n", &Pml::PokePara::CoreParam::AddWazaIfEmptyExist);

    Pml::PokePara::CoreParam * corePokeParam = (Pml::PokePara::CoreParam *) sPokemonParam;
    if (corePokeParam->AddWazaIfEmptyExist(learnWazaNo, (MethodInfo *) nullptr) == 0)
    {
        socket_log_fmt("Added move\n");
        // Already learned the move because you had less than 4 moves
        return;
    }


    System_Action_WazaNo__WazaNo__o * resultCallback;
    Dpr::EvScript::EvDataManager_DisplayClass1541_0_o * evDataManagerDispClass;


    socket_log_fmt("Dpr::EvScript::PTR_EvDataManager_DisplayClass1541_0_o_TypeInfo: %08X\n", Dpr::EvScript::PTR_EvDataManager_DisplayClass1541_0_o_TypeInfo);
    socket_log_fmt("*Dpr::EvScript::PTR_EvDataManager_DisplayClass1541_0_o_TypeInfo: %08X\n", *Dpr::EvScript::PTR_EvDataManager_DisplayClass1541_0_o_TypeInfo);
    evDataManagerDispClass = (Dpr::EvScript::EvDataManager_DisplayClass1541_0_o *)
        il2cpp_object_new(*Dpr::EvScript::PTR_EvDataManager_DisplayClass1541_0_o_TypeInfo);
    
    socket_log_fmt("Dpr::EvScript::EvDataManager_DisplayClass1541_0_o::ctor: %08X\n", &Dpr::EvScript::EvDataManager_DisplayClass1541_0_o::ctor);
    evDataManagerDispClass->ctor((MethodInfo *) nullptr);
    evDataManagerDispClass->fields.__4__this = __this;
    evDataManagerDispClass->fields.param = sPokemonParam;
    evDataManagerDispClass->fields.tray = 0;
    evDataManagerDispClass->fields.idx = 0;

    resultCallback = (System_Action_WazaNo__WazaNo__o *) 
        il2cpp_object_new(*PTR_System_Action_WazaNo__WazaNo__TypeInfo);  
    
    socket_log_fmt("PTR_EvCmdCallWazaOshieUi_b__0: %08X\n", PTR_EvCmdCallWazaOshieUi_b__0);
    socket_log_fmt("*PTR_EvCmdCallWazaOshieUi_b__0: %08X\n", *PTR_EvCmdCallWazaOshieUi_b__0);
    // PTR_Method$Dpr.EvScript.EvDataManager.<>c__DisplayClass1541_0.<EvCmdCallWazaOshi eUi>b__0()_04b79660
    resultCallback->ctor(evDataManagerDispClass, 
                        *PTR_EvCmdCallWazaOshieUi_b__0,
                        *PTR_System_Action_WazaNo__WazaNo__o_ctor);

    socket_log_fmt("resultCallback: %08X\n", resultCallback);

    UIWazaManage_Param_Fields paramFields = (UIWazaManage_Param_Fields) {
        .BootType = 2,
        .IsOpenFromFieldScript = true,
        .PokemonParam = sPokemonParam, // TODO: Set this static variable in the caller function.
        .LearnWazaNo = learnWazaNo,
        .ResultCallback = resultCallback,
    };

    UIWazaManage_Param_o param = (UIWazaManage_Param_o) {
        .fields = paramFields,
    };

    socket_log_fmt("UIWazaManage_Param_o: %08X\n", &param);
    UIManager_o * uiManager;
    UIWazaManage_o * uiWazaManage;

    socket_log_fmt("SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance: %08X\n", 
                    &SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance);
    socket_log_fmt("SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance: %08X\n", 
                    SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance);
    socket_log_fmt("*SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance: %08X\n", 
                    *SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance);

    uiManager = (UIManager_o *)
            SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance
                        (*SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance);
    
    socket_log_fmt("uiManager: %08X\n", uiManager);
    socket_log_fmt("UIManager_o::CreateUIWindow: %08X\n", 
                    &UIManager_o::CreateUIWindow);
    socket_log_fmt("PTR_UIManager_CreateUIWindow_UIWazaManage: %08X\n", 
                    PTR_UIManager_CreateUIWindow_UIWazaManage);
    socket_log_fmt("*PTR_UIManager_CreateUIWindow_UIWazaManage: %08X\n", 
                    *PTR_UIManager_CreateUIWindow_UIWazaManage);
    uiWazaManage = (UIWazaManage_o *)
            uiManager->CreateUIWindow(UIWindowID::WAZA_MANAGE, *PTR_UIManager_CreateUIWindow_UIWazaManage);
    
    socket_log_fmt("uiWazaManage: %08X\n", uiWazaManage);
    socket_log_fmt("UIWazaManage_o::Open: %08X\n", 
                    &UIWazaManage_o::Open);
    // Welp time for a nullptr I guess?
    uiWazaManage->Open(param, (MethodInfo *) nullptr);
    // EvDataManager_EvCmdCallWazaOmoidashiUi_b__1539_0Orig(__this, learnWazaNo, unlearnWazaNo, method);
}

void patchPokemonSwap(PokemonWindow_DisplayClass25_0_o * displayClass, MethodInfo *method)
{
    socket_log_fmt("Patched Pokemon Swap\n");

    // Dpr.EvScript.EvDataManager$$EvCmdCallWazaOshieUi
    socket_log_fmt("PTR_DAT_04c2b018: %08X\n", PTR_DAT_04c2b018);
    socket_log_fmt("*PTR_DAT_04c2b018: %08X\n", *PTR_DAT_04c2b018);
    system_load_typeinfo(*PTR_DAT_04c2b018);

    // PTR_Method$System.Action<WazaNo,-WazaNo>..ctor?
    socket_log_fmt("PTR_DAT_04b7beb0: %08X\n", PTR_DAT_04b7beb0);
    socket_log_fmt("*PTR_DAT_04b7beb0: %08X\n", *PTR_DAT_04b7beb0);

    socket_log_fmt("PTR_DAT_04c2afe8: %08X\n", PTR_DAT_04c2afe8);
    socket_log_fmt("*PTR_DAT_04c2afe8: %08X\n", *PTR_DAT_04c2afe8);

    // Dpr.EvScript.EvDataManager$$EvCmdCallWazaOmoidashiUi
    socket_log_fmt("PTR_DAT_04c2afd8: %08X\n", PTR_DAT_04c2afd8);
    socket_log_fmt("*PTR_DAT_04c2afd8: %08X\n", *PTR_DAT_04c2afd8);
    system_load_typeinfo(*PTR_DAT_04c2afe8);
    system_load_typeinfo(*PTR_DAT_04c2afd8);
    system_load_typeinfo(*PTR_DAT_04b7beb0);
    socket_log_fmt("displayClass: %08X\n", displayClass);

    socket_log_fmt("PTR_System_Action_WazaNo__WazaNo__TypeInfo: %08X\n", PTR_System_Action_WazaNo__WazaNo__TypeInfo);
    socket_log_fmt("*PTR_System_Action_WazaNo__WazaNo__TypeInfo: %08X\n", *PTR_System_Action_WazaNo__WazaNo__TypeInfo);
    // Might be the best thing to put for the result callback.
    System_Action_WazaNo__WazaNo__o * resultCallback = (System_Action_WazaNo__WazaNo__o *) 
        il2cpp_object_new(*PTR_System_Action_WazaNo__WazaNo__TypeInfo);  
    
    socket_log_fmt("PTR_EvCmdCallWazaOmoidashiUi_b__1539_0: %08X\n", PTR_EvCmdCallWazaOmoidashiUi_b__1539_0);
    socket_log_fmt("*PTR_EvCmdCallWazaOmoidashiUi_b__1539_0: %08X\n", *PTR_EvCmdCallWazaOmoidashiUi_b__1539_0);
    socket_log_fmt("PTR_System_Action_WazaNo__WazaNo__o_ctor: %08X\n", PTR_System_Action_WazaNo__WazaNo__o_ctor);
    socket_log_fmt("*PTR_System_Action_WazaNo__WazaNo__o_ctor: %08X\n", *PTR_System_Action_WazaNo__WazaNo__o_ctor);
    socket_log_fmt("System_Action_WazaNo__WazaNo__o_ctor: %08X\n", &System_Action_WazaNo__WazaNo__o::ctor);

    // We're not actuall passing in EvDataManager
    socket_log_fmt("Dpr::EvScript::EvDataManager_o::get_Instanse: %08X\n", &Dpr::EvScript::EvDataManager_o::get_Instanse);
    Dpr::EvScript::EvDataManager_o * evDataManager = Dpr::EvScript::EvDataManager_o::get_Instanse((MethodInfo *) nullptr);
    socket_log_fmt("evDataManager: %08X\n", evDataManager);

    resultCallback->ctor(evDataManager, 
                        *PTR_EvCmdCallWazaOmoidashiUi_b__1539_0,
                        *PTR_System_Action_WazaNo__WazaNo__o_ctor);

    socket_log_fmt("resultCallback: %08X\n", resultCallback);

    sPokemonParam = displayClass->fields.pokemonParam;

    UIWazaManage_Param_Fields paramFields = (UIWazaManage_Param_Fields) {
        .BootType = 0,
        .IsOpenFromFieldScript = true,
        .PokemonParam = displayClass->fields.pokemonParam,
        .LearnWazaNo = 0,
        .ResultCallback = resultCallback,
    };

    UIWazaManage_Param_o param = (UIWazaManage_Param_o) {
        .fields = paramFields,
    };

    socket_log_fmt("UIWazaManage_Param_o: %08X\n", &param);
    UIManager_o * uiManager;
    UIWazaManage_o * uiWazaManage;

    socket_log_fmt("SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance: %08X\n", 
                    &SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance);
    socket_log_fmt("SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance: %08X\n", 
                    SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance);
    socket_log_fmt("*SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance: %08X\n", 
                    *SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance);

    uiManager = (UIManager_o *)
            SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance
                        (*SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_UIManager_get_Instance);
    
    socket_log_fmt("uiManager: %08X\n", uiManager);
    socket_log_fmt("UIManager_o::CreateUIWindow: %08X\n", 
                    &UIManager_o::CreateUIWindow);
    socket_log_fmt("PTR_UIManager_CreateUIWindow_UIWazaManage: %08X\n", 
                    PTR_UIManager_CreateUIWindow_UIWazaManage);
    socket_log_fmt("*PTR_UIManager_CreateUIWindow_UIWazaManage: %08X\n", 
                    *PTR_UIManager_CreateUIWindow_UIWazaManage);
    uiWazaManage = (UIWazaManage_o *)
            uiManager->CreateUIWindow(UIWindowID::WAZA_MANAGE, *PTR_UIManager_CreateUIWindow_UIWazaManage);
    
    socket_log_fmt("uiWazaManage: %08X\n", uiWazaManage);
    socket_log_fmt("UIWazaManage_o::Open: %08X\n", 
                    &UIWazaManage_o::Open);
    uiWazaManage->Open(param, (MethodInfo *) nullptr);
}

void DisplayClass772_0_EvCmdNameInPoke_b__1(Dpr::EvScript::EvDataManager_DisplayClass772_0_o *__this,
    bool isSuccess, System::String *resultText,MethodInfo *method)
{
    socket_log_fmt("DisplayClass772_0_EvCmdNameInPoke_b__1\n");
    socket_log_fmt("nameRater_onComplete\n");
    socket_log_fmt("__this: %08X\n", __this);

    if (!isSuccess)
    {
        socket_log_fmt("Game considered bad nickname\n");
        // return;
    }

    isSuccess &= resultText->IsNullOrEmpty((MethodInfo *) nullptr);
    if (!isSuccess)
    {
        socket_log_fmt("Nickname is null or empty\n");
        return;
    }

    Pml::PokePara::PokemonParam_o * pokeParam = __this->fields.pokemonParam;
    Pml::PokePara::CoreParam * corePokeParam = (Pml::PokePara::CoreParam *) pokeParam;

    socket_log_fmt("pokeParam: %08X\n", pokeParam);
    socket_log_fmt("resultText: %08X\n", resultText);
    sCloseWindow = true;
    corePokeParam->SetNickName(resultText, (MethodInfo *) nullptr);
    return;
}

void nameRater(PokemonWindow_DisplayClass25_0_o * displayClass, ContextMenuItem_Param_o * ctxMenuParam, MethodInfo *method)
{
    // Hopefully this is the right replacement for PTR_DAT_04b782f8
    system_load_typeinfo(*PTR_DAT_04c29e78);

    socket_log_fmt("Dpr::EvScript::EvDataManager_o::get_Instanse: %08X\n", &Dpr::EvScript::EvDataManager_o::get_Instanse);
    Dpr::EvScript::EvDataManager_o * evDataManager = Dpr::EvScript::EvDataManager_o::get_Instanse((MethodInfo *) nullptr);
    socket_log_fmt("evDataManager: %08X\n", evDataManager);
    Pml::PokePara::PokemonParam_o * pokeParam = displayClass->fields.pokemonParam;
    Pml::PokePara::CoreParam * corePokeParam = (Pml::PokePara::CoreParam *) pokeParam;
    SoftwareKeyboard_Param_o * swKeyboardParam;
    System::String * headerLabel;

    Dpr::EvScript::EvDataManager_DisplayClass772_0_o * dispClass772;

    socket_log_fmt("Dpr::EvScript::PTR_EvDataManager_DisplayClass772_0_o_TypeInfo: %08X\n", Dpr::EvScript::PTR_EvDataManager_DisplayClass772_0_o_TypeInfo);
    dispClass772 = (Dpr::EvScript::EvDataManager_DisplayClass772_0_o *) il2cpp_object_new(*Dpr::EvScript::PTR_EvDataManager_DisplayClass772_0_o_TypeInfo);
    dispClass772->ctor((MethodInfo *) nullptr);
    dispClass772->fields.pokemonParam = pokeParam;

    switch (corePokeParam->GetSex((MethodInfo *) nullptr))
    {
        case 0:
            headerLabel = *PTR_StringLiteral_9187_SS_strinput_005;
            break;
        case 1:
            headerLabel = *PTR_StringLiteral_9185_SS_strinput_006;
            break;
        case 2:
        default:
            headerLabel = *PTR_StringLiteral_9186_SS_strinput_007;
            break;
    }

    Dpr::Message::MessageWordSetHelper::SetPokemonNickNameWord(0, corePokeParam, true, (MethodInfo *) nullptr);
    socket_log_fmt("PTR_SoftwareKeyboard_Param_TypeInfo: %08X\n", PTR_SoftwareKeyboard_Param_TypeInfo);
    swKeyboardParam = (SoftwareKeyboard_Param_o *) il2cpp_object_new(*PTR_SoftwareKeyboard_Param_TypeInfo);
    swKeyboardParam->ctor((MethodInfo *) nullptr);
    // Not sure why it was being set to a string literaly instead of the nickname that was set earlier.
    swKeyboardParam->fields.text = *PTR_StringLiteral_398; // corePokeParam->GetNickName((MethodInfo *) nullptr); //
    swKeyboardParam->fields.textMinLength = 1;
    swKeyboardParam->fields.textMaxLength = SoftwareKeyboard_o::LanguageMaxLength(6, -1, (MethodInfo *) nullptr);
    swKeyboardParam->fields.headerText = SoftwareKeyboard_o::GetMessageText(headerLabel, (MethodInfo *) nullptr);
    swKeyboardParam->fields.subText = nullptr;
    swKeyboardParam->fields.guideText = nullptr;
    swKeyboardParam->fields.okText = nullptr;
    swKeyboardParam->fields.invalidCharFlag = 4;

    OnInputCheckFunc_t * onInputCheck;
    OnCompleteAction_t * onComplete;

    socket_log_fmt("PTR_OnInputCheckFunc_TypeInfo: %08X\n", PTR_OnInputCheckFunc_TypeInfo);
    onInputCheck = (OnInputCheckFunc_t *)il2cpp_object_new(*PTR_OnInputCheckFunc_TypeInfo);

    onInputCheck->ctor(evDataManager,
            *PTR_OnInputCheckFunc_MethodInfo,
            *PTR_OnInputCheckFuncCtor_MethodInfo
    );

    socket_log_fmt("PTR_OnCompleteAction_TypeInfo: %08X\n", PTR_OnCompleteAction_TypeInfo);
    onComplete = (OnCompleteAction_t *) il2cpp_object_new(*PTR_OnCompleteAction_TypeInfo);

    onComplete->ctor(dispClass772,
            *PTR_OnCompleteAction_MethodInfo,
            *PTR_OnCompleteActionCtor_MethodInfo
    );

    socket_log_fmt("Dpr::UI::SoftwareKeyboard_o::Open: %08X\n", &Dpr::UI::SoftwareKeyboard_o::Open);
    Dpr::UI::SoftwareKeyboard_o::Open(swKeyboardParam, onInputCheck, onComplete, (MethodInfo *) nullptr);
}

void patchFieldWaza(PokemonWindow_DisplayClass25_0_o * displayClass, ContextMenuItem_Param_o * ctxMenuParam, MethodInfo *method)
{
    const int32_t MOVE_TUTOR = 112;
    const int32_t NAME_RATER = 113;
 
    if ((ctxMenuParam->fields.menuId) - 0x23 < 4)
    {
        displayClass->fields.__4__this->FieldWaza(ctxMenuParam->fields.messageIndex, displayClass->fields.partyItem, displayClass->fields.selectIndex, (MethodInfo *) nullptr);
    }

    if (ctxMenuParam->fields.menuId == MOVE_TUTOR)
    {
        patchPokemonSwap(displayClass, (MethodInfo *) nullptr);
    } else if (ctxMenuParam->fields.menuId == NAME_RATER)
    {
        nameRater(displayClass, ctxMenuParam, (MethodInfo *) nullptr);
    }

    // TODO: Restore FieldWaza
}

bool IsPushButton_Patch(UIWindow_o *__this,int32_t button,bool isForce,MethodInfo *method)
{
    if (__this->IsPushButton(button, isForce, method))
    {
        return true;
    }

    if (sCloseWindow)
    {
        sCloseWindow = false;
        return true;
    }

    return false;
}