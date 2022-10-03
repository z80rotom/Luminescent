#include "Pml/PokePara/CoreParam.h"
#include "Dpr/Message/MessageWordSetHelper.hpp"
#include "System/Array.hpp"
#include "System/String.hpp"

struct BoxStatusPanelUI_Fields {
	Pml::PokePara::CoreParam * pokemonParam;
	int32_t zukanNo;
	uint16_t haveItem;
};

struct BoxStatusPanelUI_c;

// Dpr_UI_BoxStatusPanel___c__DisplayClass35_0_o
struct BoxStatusPanelUI_o {
	BoxStatusPanelUI_c *klass;
	void *monitor;
	BoxStatusPanelUI_Fields fields;
};

struct Dpr_UI_PokemonStatusPanel_Fields {
	UnityEngine_MonoBehaviour_Fields super;
	struct Pml_PokePara_PokemonParam_o* _pokemonParam;
	struct UnityEngine_GameObject_o* _aButtonGuide;
	struct Dpr_UI_UIInputController_o* input;
	struct Dpr_UI_PokemonStatusWindow_Param_o* statusParam;
	struct UnityEngine_Events_UnityAction_bool__o* onChangeMemberSelectArrow;
	struct UnityEngine_Events_UnityAction_bool__string__string__o* onChangeAbuttonGuide;
	struct UnityEngine_Events_UnityAction_o* onOpenBag;
	struct UnityEngine_Events_UnityAction_bool__o* onOpenBagOfWazaMachine;
	struct UnityEngine_Events_UnityAction_o* onOpenPofinCase;
	struct UnityEngine_Events_UnityAction_MsgWindowParam__o* onOpenMessageWindow;
	struct UnityEngine_Events_UnityAction_o* onForceClosed;
};

struct Dpr_UI_PokemonStatusPanelAbility_Fields {
	Dpr_UI_PokemonStatusPanel_Fields super;
	struct Dpr_UI_PokemonStatusPanelAbility_ChartItem_array* _chartItems;
	struct Dpr_UI_UIText_o* _tokuseiName;
	struct Dpr_UI_UIText_o* _tokuseiDescription;
	struct UnityEngine_Color_array* _raderColors;
	struct UnityEngine_RectTransform_o* _raderChartRoot;
	struct Dpr_UI_RaderChart_array* _raders;
	struct UnityEngine_Sprite_array* _spriteUpDowns;
	struct UnityEngine_Color_array* _colorUpDowns;
	struct UnityEngine_AnimationCurve_o* _curveAbility;
	int32_t _selectRaderChartIndex;
	struct System_Collections_Generic_List_EffectInstance__o* _effects;
	System::Array<int32_t> * _powerIdMap;
};

struct Dpr_UI_PokemonStatusPanelAbility_c;

struct Dpr_UI_PokemonStatusPanelAbility_o {
	Dpr_UI_PokemonStatusPanelAbility_c *klass;
	void *monitor;
	Dpr_UI_PokemonStatusPanelAbility_Fields fields;
};

struct StatusPanelLocals_Fields {
	Pml::PokePara::CoreParam * pokemonParam;
	struct Dpr_UI_PokemonStatusPanelAbility_o* __4__this;
	int32_t tokuseiNo;
};

struct StatusPanelLocals_c;

struct StatusPanelLocals_o {
	StatusPanelLocals_c *klass;
	void *monitor;
	StatusPanelLocals_Fields fields;
};

struct StatusPanelUI_Fields {
	int32_t i;
	struct StatusPanelLocals_o* locals;
};

struct StatusPanelUI_c;

// Dpr_UI_PokemonStatusPanelAbility___c__DisplayClass17_1
struct StatusPanelUI_o {
	StatusPanelUI_c *klass;
	void *monitor;
	StatusPanelUI_Fields fields;
};

struct Dpr_UI_BoxStatusPanel_o;


extern void * int_TypeInfo;
extern Il2CppObject * StringLiteral_11167;

int32_t POWER_ID_HP = 0;
int32_t POWER_ID_ATK = 1;
int32_t POWER_ID_DEF = 2;
int32_t POWER_ID_SPATK = 3;
int32_t POWER_ID_SPDEF = 4;
int32_t POWER_ID_AGI = 5;

void displayPower1(BoxStatusPanelUI_o *__this, MethodInfo * method)
{
    int32_t power = __this->fields.pokemonParam->GetPower(POWER_ID_ATK, nullptr);
    Dpr::Message::MessageWordSetHelper::SetDigitWord(0, power, nullptr);
}

void displayPower2(BoxStatusPanelUI_o *__this, MethodInfo * method)
{
    int32_t power = __this->fields.pokemonParam->GetPower(POWER_ID_DEF, nullptr);
    Dpr::Message::MessageWordSetHelper::SetDigitWord(0, power, nullptr);
}

void displaySummaryPower(StatusPanelUI_o *__this, MethodInfo *method)
{
    StatusPanelLocals_o * locals = __this->fields.locals;
    Pml::PokePara::CoreParam * pokemonParam = locals->fields.pokemonParam;
    System::Array<int32_t> * _powerIdMap = locals->fields.__4__this->fields._powerIdMap;
    int32_t i = __this->fields.i;
    int32_t power = pokemonParam->GetPower(_powerIdMap->m_Items[i], nullptr);
    Dpr::Message::MessageWordSetHelper::SetDigitWord(0, power, nullptr);
}


Il2CppObject * thunk_FUN_7100252fd8(void * typeInfo, void * data);

System::String * Dpr_UI_BoxStatusPanel_GetJudgeTextCode(Dpr_UI_BoxStatusPanel_o *__this, Pml::PokePara::CoreParam * pokemonParam, int32_t powerId, MethodInfo *method)
{
    bool trainingDone = pokemonParam->IsTrainingDone(powerId, nullptr);
    int32_t messageID;
    if (trainingDone)
    {
        messageID = 0x241;
    } else {
        messageID = 0x24e + pokemonParam->GetTalentPower(powerId, nullptr);
    }

    Il2CppObject * intObject = thunk_FUN_7100252fd8(int_TypeInfo, (void *) &messageID);
    return System::String::Concat(StringLiteral_11167, intObject, nullptr);
}