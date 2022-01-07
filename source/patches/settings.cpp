#include "il2cpp/UnityEngine/Transform.h"
#include "il2cpp/UnityEngine/Events/UnityAction<SettingMenuItem>.h"
#include "il2cpp/Dpr/UI/SettingMenuItem.h"
#include "il2cpp/System/Collections/Generic/List<SettingMenuItem>.h"
#include "il2cpp/System/String.h"
#include "il2cpp-api.h"

static int custom = 0;
static int originalSize;


int settingsChildCount(UnityEngine_Transform_o* transform) {
    originalSize = UnityEngine_Transform__get_childCount(transform, nullptr);
    return originalSize + custom;
}

void settingsCustomHook(int num, Dpr_UI_SettingWindow_o* window) {
    __asm("mov x0, x23");
    if (num < originalSize) {
        // Default behavior
        __asm("b #0x0214f008");
    }

    Dpr_UI_SettingMenuItem_o* component = nullptr;  // TODO: Create somehow
    int valueIndex = 0;  // TODO: From config
    System_String_o* description = System_String__CreateString(nullptr, (int8_t*)"SS_option_custom_001", nullptr);

    auto* arg = (UnityEngine_Events_UnityAction_SettingMenuItem__o*)il2cpp_object_new(*(void**)0x04bbb050);
    UnityEngine_Events_UnityAction_SettingMenuItem____ctor(arg, (Il2CppObject*)window, *(intptr_t*)0x04bbb058, nullptr);
    Dpr_UI_SettingMenuItem__Setup(component, num, valueIndex, description, arg, nullptr);
    System_Collections_Generic_List_SettingMenuItem___Add(window->fields._activeItems, component, nullptr);

    // TODO: Set register values properly for returning
    __asm("b #0x0214ef8c");
}
