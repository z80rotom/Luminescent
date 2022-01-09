#include "il2cpp/UnityEngine/Transform.h"
#include "il2cpp/UnityEngine/Events/UnityAction<SettingMenuItem>.h"
#include "il2cpp/Dpr/UI/SettingMenuItem.h"
#include "il2cpp/System/Collections/Generic/List<SettingMenuItem>.h"
#include "il2cpp/System/String.h"
#include "il2cpp-api.h"

static int originalSize;

struct customSetting {
    Dpr_UI_SettingMenuItem_o* component;
    System_String_o* description;
    int defaultValue;
};

#define CUSTOM_SETTINGS_NUM 1
static struct customSetting settings[CUSTOM_SETTINGS_NUM] {
    {
        nullptr,
        System_String__CreateString(nullptr, (int8_t*)"SS_option_custom_001", nullptr),
        0
    }
};

int settingsChildCount(UnityEngine_Transform_o* transform) {
    originalSize = UnityEngine_Transform__get_childCount(transform, nullptr);
    return originalSize + CUSTOM_SETTINGS_NUM;
}

void settingsCustomHook(int num, Dpr_UI_SettingWindow_o* window) {
    __asm("mov x0, x23");
    if (num < originalSize) {
        // Default behavior
        __asm("b #0x0214f008");
    }

    struct customSetting* sett = &settings[num - originalSize];
    int value = sett->defaultValue;  // TODO: Try getting from config

    auto* arg = (UnityEngine_Events_UnityAction_SettingMenuItem__o*)il2cpp_object_new(*(void**)0x04bbb050);
    UnityEngine_Events_UnityAction_SettingMenuItem____ctor(arg, (Il2CppObject*)window, *(intptr_t*)0x04bbb058, nullptr);
    Dpr_UI_SettingMenuItem__Setup(sett->component, num, value, sett->description, arg, nullptr);
    System_Collections_Generic_List_SettingMenuItem___Add(window->fields._activeItems, sett->component, nullptr);

    // TODO: Set register values properly for returning
    __asm("b #0x0214ef8c");
}
