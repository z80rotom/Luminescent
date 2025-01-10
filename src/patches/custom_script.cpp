#include <cmath>

#include "il2cpp.hpp"

#include "Audio/AudioManager.hpp"
#include "Dpr/Box/BoxPokemonWork.hpp"
#include "Dpr/EvScript/EvDataManager.hpp"
#include "EvData/EvCmdID.hpp"
#include "EvData/ArgType.hpp"
#include "GameData/DataManager.hpp"
#include "Pml/PokeParty.hpp"
#include "Pml/PokePara/CoreParam.h"
#include "SmartPoint/AssetAssistant/SingletonMonoBehavior.hpp"
#include "SmartPoint/AssetAssistant/Sequencer.hpp"
#include "UnityEngine/BoxCollider.hpp"
#include "UnityEngine/GameObject.hpp"

#include "AnimationPlayer.hpp"
#include "areaID.hpp"
#include "EntityManager.hpp"
#include "FieldNagisaGymGearEntity.hpp"
#include "FieldPlayerEntity.hpp"
#include "GimmickWork.hpp"
#include "PlayerWork.hpp"
#include "WeatherWork.hpp"
#include "ZukanWork.hpp"

#include "util.hpp"
#include "logger.hpp"

// EXTERNAL

extern void * AreaID_Array_TypeInfo;


// UTILITY METHODS

// Converts the IEEE-754 formatted int32 into its proper float value.
float ConvertToFloat(int32_t value)
{
    float fresult;
    std::memcpy(&fresult, &value, sizeof(value));
    return fresult;
}

// Returns either the value at the given work variable or the direct int value depending on the given argument's type.
// Returns 0 for any other argument type.
int32_t GetWorkOrIntValue(EvData::Aregment_o arg)
{
    int32_t argType = arg.fields.argType;
    int32_t data = arg.fields.data;
    int32_t result = 0;

    switch (argType)
    {
        case EvData::ArgType::Work:
            result = PlayerWork::GetInt(data, nullptr);
            break;
        case EvData::ArgType::Float:
            result = (int32_t)ConvertToFloat(data);
            break;
        default:
            break;
    }

    return result;
}

// Returns either the value at the given work variable or the direct float value depending on the given argument's type.
// Returns 0 for any other argument type.
float GetWorkOrFloatValue(EvData::Aregment_o arg)
{
    int32_t argType = arg.fields.argType;
    int32_t data = arg.fields.data;
    float result = 0;

    switch (argType)
    {
        case EvData::ArgType::Work:
            result = PlayerWork::GetInt(data, nullptr);
            break;
        case EvData::ArgType::Float:
            result = ConvertToFloat(data);
            break;
        default:
            break;
    }

    return result;
}

// If the given argument is a work variable, set it to the given value.
// Does nothing otherwise.
void SetWorkToValue(EvData::Aregment_o arg, int32_t value)
{
    int32_t argType = arg.fields.argType;
    int32_t data = arg.fields.data;

    if (argType == EvData::ArgType::Work)
    {
        socket_log_fmt("Setting work %d to value %d\n", data, value);
        PlayerWork::SetInt(data, value, nullptr);
    }
}

// Checks if the given PokemonParam is null or an egg.
bool IsNullOrEgg(Pml::PokePara::PokemonParam_o * param)
{
    Pml::PokePara::CoreParam * coreParam = (Pml::PokePara::CoreParam *)param;
    return coreParam == nullptr || coreParam->IsNull(nullptr) || coreParam->IsEgg(2, nullptr);
}

// Virtual call to GetAnimationPlayer.
typedef AnimationPlayer_o * (*GetAnimationPlayerPointer)(FieldPlayerEntity_o*, const MethodInfo*);
AnimationPlayer_o * GetAnimationPlayerVirtual(FieldPlayerEntity_o * activePlayer)
{
    GetAnimationPlayerPointer methodPtr = (GetAnimationPlayerPointer)(activePlayer->klass->vtable)._5_GetAnimationPlayer.methodPtr;
    return (AnimationPlayer_o *) (*methodPtr)(activePlayer,(activePlayer->klass->vtable)._5_GetAnimationPlayer.method);
}


// EXTRA OVERRIDEN METHODS

// Rewrite GimmickWork$$.cctor
// Adds Eterna gym to area id list for gears
/*void GimmickWork_cctor(MethodInfo *method)
{
    system_load_typeinfo((void *)0x502f);

    int32_t GEAR_AREAS_NUM = 4;
    int32_t GEAR_AREAS[GEAR_AREAS_NUM] = {
        C08GYM0101, C08GYM0102, C08GYM0103, C04GYM0102
    };

    System::Array<int32_t>* array = system_array_new(AreaID_Array_TypeInfo, GEAR_AREAS_NUM);
    GimmickWork_TypeInfo->static_fields->GearAreaIdTable = array;
}*/


// SCRIPT COMMAND METHODS

// Sets the weather.
// Arguments:
//   [Work, Number] weather: The ID of the weather to change to.
bool SetWeather(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_SET_WEATHER\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t weather = GetWorkOrIntValue(args->m_Items[1]);
        socket_log_fmt("Calling set_WeatherID with weatherId: %d\n", weather);
        WeatherWork::set_WeatherID(weather, nullptr);
    }

    return true;
}

// Rotates a gear in the Sunyshore gym.
// Arguments:
//   [Label] gear: The gear to rotate.
bool RotateSunyshoreGymGear(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_ROTATE_ELEC_GYM_GEAR\n");
    system_load_typeinfo((void *)0x44ba);
    system_load_typeinfo((void *)0x3f7e);

    FieldPlayerEntity_o * activePlayer = EntityManager_TypeInfo->static_fields->_activeFieldPlayer_k__BackingField;
    if (activePlayer == nullptr)
    {
        return true;
    }

    FieldNagisaGymGearEntity_o * gearEntitiy = manager->fields._nagisaGymGearEntity;
    if (gearEntitiy == nullptr)
    {
        return true;
    }

    manager->fields._fieldObjectMove->Update(manager->fields._deltatime, nullptr);
    manager->fields._fieldObjectRotateYaw->Update(manager->fields._deltatime, nullptr);

    switch (manager->fields._gearSequence)
    {
        case 0:
            {
                activePlayer->PlayWalk(nullptr);
                manager->fields._fieldObjectMove->SetObjectEntity((FieldObjectEntity_o*)activePlayer, nullptr);

                float x = gearEntitiy->fields.super.super.super.worldPosition.fields.x +
                    (-gearEntitiy->fields.super.offset.fields.x - gearEntitiy->fields.super.size.fields.x * 0.5);
                float y = gearEntitiy->fields.super.super.super.worldPosition.fields.z +
                    (gearEntitiy->fields.super.offset.fields.y - gearEntitiy->fields.super.size.fields.y * 0.5);
                float z = gearEntitiy->fields.super.super.super.worldPosition.fields.z;

                UnityEngine_Vector3_Fields vectorFields = { .x = x, .y = y, .z = z };
                UnityEngine_Vector3_o vector = { .fields = vectorFields };
                manager->fields._fieldObjectMove->MoveSpeed(vector, x, nullptr);
                manager->fields._fieldObjectRotateYaw->SetObjectEntity((FieldObjectEntity_o*)activePlayer, nullptr);
                double angleRad = atan2((double)x, (double)y);
                float angleDegree = (float)angleRad * 57.29578;
                manager->fields._fieldObjectRotateYaw->MoveTime(angleDegree, 0.1, nullptr);

                Audio::AudioManager_o * audioManager = (Audio::AudioManager_o *)
                    SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance
                        (*SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_AudioManager_get_Instance);
                audioManager->PlaySe(0x2207d7db, nullptr, nullptr);

                manager->fields._gearSequence += 1;
            }
            break;

        case 1:
            {
                if (manager->fields._fieldObjectMove->get_IsBusy(nullptr)) return false;
                if (manager->fields._fieldObjectRotateYaw->get_IsBusy(nullptr)) return false;

                AnimationPlayer_o * animationPlayer = GetAnimationPlayerVirtual(activePlayer);
                animationPlayer->Play(0, 0.0, 0.0, nullptr);

                system_load_typeinfo((void *)0x3fb9);

                System::Array<FieldNagisaGymGearEntity_o*>* gears = EntityManager_TypeInfo->static_fields->_fieldNagisaGymGears_k__BackingField;
                for (int i=0; i<gears->max_length; i++)
                {
                    gears->m_Items[i]->Rotate(gearEntitiy->fields.GearRotateButton, gearEntitiy->fields.GearGroupNo, nullptr);
                }

                Audio::AudioManager_o * audioManager = (Audio::AudioManager_o *)
                    SmartPoint::AssetAssistant::SingletonMonoBehaviour::get_Instance
                        (*SmartPoint::AssetAssistant::PTR_SingletonMonoBehaviour_AudioManager_get_Instance);
                audioManager->PlaySe(0x2107d669, nullptr, nullptr);

                manager->fields._gearSequence += 1;
            }
            break;
        
        case 2:
            {
                if (gearEntitiy->IsRotating(nullptr)) return false;

                float rotateType = FieldNagisaGymGearEntity_o::GetDegRotateType(gearEntitiy->fields.GearRotateButton, nullptr);
                int32_t areaId = manager->fields._areaID;
                if (gearEntitiy->fields.GearGroupNo != 0)
                {
                    rotateType = -rotateType;
                }

                int32_t gearRotate = GimmickWork_o::GetGearRotate(areaId, nullptr);
                gearRotate = (int32_t)(rotateType + (float)gearRotate);
                if (gearRotate < 0) gearRotate += 360;
                if (gearRotate >= 360) gearRotate -= 360;
                GimmickWork_o::SetGearRotate(areaId, gearRotate, nullptr);

                manager->fields._gearSequence = -1;
            }
            break;
    }

    return manager->fields._gearSequence == -1;
}

// Stops a Field Effect.
// Arguments:
//   [Work, Number] index: The index of the field effect to stop. 0-10
//   [Work, Number] isForce: Unknown use.
//   [Work, Number] fadeTime: The time in seconds it takes for the effect to fade.
bool StopEffect(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_STOP_EFFECT\n");
    system_load_typeinfo((void *)0x45a2);

    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrIntValue(args->m_Items[1]);

        if (args->max_length >= 3)
        {
            int32_t isForce = GetWorkOrIntValue(args->m_Items[2]);

            float fadeTime = 0;
            if (args->max_length >= 4)
            {
                fadeTime = GetWorkOrFloatValue(args->m_Items[3]);
            }

            if (index < manager->fields._scriptEffects->max_length)
            {
                if (manager->fields._scriptEffects->m_Items[index] != nullptr)
                {
                    socket_log_fmt("Stopping Effect %d with isForce %d in %f seconds\n", index, isForce, fadeTime);
                    manager->fields._scriptEffects->m_Items[index]->Stop(fadeTime, isForce == 1, nullptr);
                }

                if (index < manager->fields._scriptScaleCorutine->max_length)
                {
                    if (manager->fields._scriptScaleCorutine->m_Items[index] != nullptr)
                    {
                        SmartPoint::AssetAssistant::Sequencer::Stop(manager->fields._scriptScaleCorutine->m_Items[index], nullptr);
                    }
                }
            }
        }
    }

    return true;
}

// Returns the form id of the Pokémon at the given index in the party.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work] result: The work in which to put the result in. -1 if the chosen Pokémon is null or an egg.
bool PartyFormsNo(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_TEMOTI_FORMNO\n");
    system_load_typeinfo((void *)0x44f9);
    
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrIntValue(args->m_Items[1]);

        Pml::PokeParty_o * party = PlayerWork::get_playerParty(nullptr);
        Pml::PokePara::PokemonParam_o * param = party->GetMemberPointer(index, nullptr);
        int32_t result = -1;

        if (!IsNullOrEgg(param))
        {
            socket_log_fmt("Calling GetPokemonFormNo with party index: %d\n", index);
            result = manager->GetPokemonFormNo(param, nullptr);
        }

        if (args->max_length >= 3)
        {
            SetWorkToValue(args->m_Items[2], result);
        }
    }

    return true;
}

// Returns the form id of the Pokémon at the given index and tray index.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work, Number] trayIndex: The tray index in which to look for the given Pokémon.
//   [Work] result: The work in which to put the result in. -1 if the chosen Pokémon is null or an egg.
bool PartyBoxFormsNo(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_TEMOTI_BOX_FORMNO\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrIntValue(args->m_Items[1]);

        if (args->max_length >= 3)
        {
            int32_t trayIndex = GetWorkOrIntValue(args->m_Items[2]);

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);
            int32_t result = -1;

            if (!IsNullOrEgg(param))
            {
                socket_log_fmt("Calling GetPokemonFormNo with tray index %d and index %d\n", trayIndex, index);
                result = manager->GetPokemonFormNo(param, nullptr);
            }

            if (args->max_length >= 4)
            {
                SetWorkToValue(args->m_Items[3], result);
            }
        }
    }

    return true;
}

// Returns the nature id of the Pokémon at the given index and tray index.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work, Number] trayIndex: The tray index in which to look for the given Pokémon.
//   [Work] result: The work in which to put the result in. -1 if the chosen Pokémon is null or an egg.
bool PartyBoxNature(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_GET_BOX_POKE_SEIKAKU\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrIntValue(args->m_Items[1]);

        if (args->max_length >= 3)
        {
            int32_t trayIndex = GetWorkOrIntValue(args->m_Items[2]);

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);
            int32_t result = -1;

            if (!IsNullOrEgg(param))
            {
                socket_log_fmt("Calling GetSeikaku with tray index %d and index %d\n", trayIndex, index);
                result = ((Pml::PokePara::CoreParam *)param)->GetSeikaku(nullptr);
            }

            if (args->max_length >= 4)
            {
                SetWorkToValue(args->m_Items[3], result);
            }
        }
    }

    return true;
}

// Releases the Pokémon at the given index and tray index.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work, Number] trayIndex: The tray index in which to look for the given Pokémon.
bool PartyBoxRelease(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_RELEASE_BOX_POKE\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrIntValue(args->m_Items[1]);

        if (args->max_length >= 3)
        {
            int32_t trayIndex = GetWorkOrIntValue(args->m_Items[2]);

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);

            if (!IsNullOrEgg(param))
            {
                socket_log_fmt("Calling ClearPokemon with tray index %d and index %d\n", trayIndex, index);
                Dpr::Box::BoxPokemonWork::ClearPokemon(trayIndex, index, nullptr);

            }
        }
    }

    return true;
}

// Toggles a BoxCollider of the given name on the current map.
// Arguments:
//   [Label] label: The name of the BoxCollider to toggle.
bool ToggleCollisionBox(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_TOGGLE_COLLISION_BOX\n");
    system_load_typeinfo((void *)0x5b6);
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;
    Dpr::EvScript::EvScriptData_o * evData = manager->fields._evData;

    if (args->max_length >= 2)
    {
        if (args->m_Items[1].fields.argType == EvData::ArgType::String)
        {
            System::String * objectName = evData->fields.EvData->GetString(args->m_Items[1].fields.data, nullptr);
            UnityEngine::GameObject_o* object = UnityEngine::GameObject_o::Find(objectName, nullptr);

            if (object != nullptr)
            {
                UnityEngine::BoxCollider_o * boxCollider = (UnityEngine::BoxCollider_o *)object->GetComponent(*UnityEngine::PTR_GameObject_BoxCollider_GetComponent);

                if (boxCollider != nullptr)
                {
                    UnityEngine::Collider_o * collider = (UnityEngine::Collider_o *)boxCollider;

                    if (args->max_length >= 3)
                    {
                        int32_t value = GetWorkOrIntValue(args->m_Items[2]);
                        socket_log_fmt("Setting the collider to: %0d\n", value != 0);
                        collider->set_enabled(value != 0, nullptr);
                    }
                }
            }
        }
    }

    return true;
}

// Sets the given work to 69. Acts as a check for a proper installation.
// Arguments:
//   [Work] work: The work to set.
bool InstallCheck(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_INSTALL_CHECK\n");
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        SetWorkToValue(args->m_Items[1], 69);
    }

    return true;
}

// Sets the form of the Pokémon at the given index and tray index.
// Arguments:
//   [Work, Number] index: The index that points to the given Pokémon.
//   [Work, Number] trayIndex: The tray index in which to look for the given Pokémon.
//   [Work, Number] formno: The form to set the Pokémon to.
bool ChangeFormNo(Dpr::EvScript::EvDataManager_o * manager)
{
    socket_log_fmt("_CHANGE_FORMNO\n");
    system_load_typeinfo((void *)0x4495);
    System::Array<EvData::Aregment_o>* args = manager->fields._evArg;

    if (args->max_length >= 2)
    {
        int32_t index = GetWorkOrIntValue(args->m_Items[1]);

        if (args->max_length >= 3)
        {
            int32_t trayIndex = GetWorkOrIntValue(args->m_Items[2]);

            Pml::PokePara::PokemonParam_o * param = manager->GetPokemonParam(trayIndex, index, nullptr);
            Pml::PokePara::CoreParam * coreparam = (Pml::PokePara::CoreParam *)param;

            if (!IsNullOrEgg(param))
            {
                if (args->max_length >= 4)
                {
                    int32_t formno = GetWorkOrIntValue(args->m_Items[3]);
                    socket_log_fmt("Changing form of Pokémon with tray index %d and index %d, to form %d\n", trayIndex, index, formno);
                    coreparam->ChangeFormNo((uint16_t) formno, nullptr, nullptr);

                    ZukanWork::SetPoke(param, 3, nullptr);
                }
            }
        }
    }

    return true;
}

// Handles overriden and new script commands, then calls the original method to handle the rest normally.
bool RunEvCmdExtended(Dpr::EvScript::EvDataManager_o *__this, EvData::EvCmdID index, MethodInfo *method)
{
    // Overriden/New Commands
    switch (index)
    {
        case EvData::EvCmdID::_SET_WEATHER:
            return SetWeather(__this);
        //case EvData::EvCmdID::_ROTATE_ELEC_GYM_GEAR:
        //    return RotateSunyshoreGymGear(__this);
        case EvData::EvCmdID::_STOP_EFFECT:
            return StopEffect(__this);
        case EvData::EvCmdID::_TEMOTI_FORMNO:
            return PartyFormsNo(__this);
        case EvData::EvCmdID::_TEMOTI_BOX_FORMNO:
            return PartyBoxFormsNo(__this);
        case EvData::EvCmdID::_GET_BOX_POKE_SEIKAKU:
            return PartyBoxNature(__this);
        case EvData::EvCmdID::_RELEASE_BOX_POKE:
            return PartyBoxRelease(__this);
        case EvData::EvCmdID::_TOGGLE_COLLISION_BOX:
            return ToggleCollisionBox(__this);
        case EvData::EvCmdID::_INSTALL_CHECK:
            return InstallCheck(__this);
        case EvData::EvCmdID::_CHANGE_FORMNO:
            return ChangeFormNo(__this);
        default:
            break;
    }

    // Call original method
    return __this->RunEvCmd(index, method);
}
