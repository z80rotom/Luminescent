#pragma once

#include "il2cpp.hpp"
#include "System/String.hpp"

struct System_Action_EvDataManager_EntityParam__o;
struct System_Collections_Generic_Stack_EvDataManager_EvCallData__o;
struct System_Collections_Generic_Dictionary_string__int____o;
struct System_Collections_Generic_List_FieldEventEntity__o;
struct System_Collections_Generic_List_FieldObjectEntity__o;
struct System_Collections_Generic_List_FieldObjectMoveCode__o;
struct System_Collections_Generic_List_string__o;
struct System_Collections_Generic_List_int__o;
struct System_Collections_Generic_List_FieldKinomiGrowEntity__o;
struct System_Collections_Generic_List_EvDataManager_AssetReqOpeRef__o;
struct System_Collections_Generic_List_EvDataManager_LoadObjectData__o;
struct System_Collections_Generic_Dictionary_int__GameObject__o;

struct UnityEngine_GameObject_o;

struct FieldObjectEntity_o;
struct FieldEventDoorEntity_o;
struct FieldEventLiftEntity_o;
struct FieldTobariGymWallEntity_o;
struct FieldNagisaGymGearEntity_o;
struct FieldNomoseGymSwitchEntity_o;
struct FieldEyePaintingEntity_o;
struct FieldEmbankmentEntity_o;
struct FieldMistPlate_o;
struct FieldPokemonCenter_o;
struct Telescope_o;
struct TelescopeNagisa_o;
struct FieldWazaCutIn_o;
struct InterviewWork_o;
struct FieldShip_o;
struct FieldObjectMoveCode_array; // TODO: Make System.Array
struct Balloon_array; // TODO: Make System.Array
struct FieldAnimatorController_array; // TODO: Make System.Array
struct FieldToUgInvisibleObjects_o;
struct EventCameraTable_o;
struct TairyouHasseiPokeManager_o;
struct UnityEngine_Coroutine_o;
struct System_Single_array;
struct FieldEventEntity_o;
struct FieldEventLiftEntity_o;
struct Effect_EffectInstance_o;
struct System_Text_StringBuilder_o;
struct Audio_AudioInstance_o;
struct UnityEngine_Transform_o;

struct EvScriptData_o;

namespace XLSXContent
{
    struct MapWarp_o;
    struct UgJumpPos_SheetData_o;
}

namespace SmartPoint
{
    namespace AssetAssistant
    {
        struct AssetRequestOperation_o;
    }
}

namespace EvData
{
    struct Script_o;
    struct Command_o;

    struct Aregment_Fields {
        int32_t argType;
        int32_t data;
    };

    struct Aregment_o {
        Aregment_Fields fields;
    };
}

namespace EvDataManager
{
    struct EntityParam_o;
    struct UpdateDelegate_o;
    struct EventEndDelegate_o;

    struct PlaySeData_Fields {
        System::String * name;
        Audio_AudioInstance_o* AudioInstance;
        uint32_t playEventId;
    };

    struct PlaySeData_o {
        PlaySeData_Fields fields;
    };

    struct WorpEventData_Fields {
        FieldEventDoorEntity_o* Entity;
        int32_t State;
        float Time;
    };

    struct WorpEventData_o {
        WorpEventData_Fields fields;
    };

    struct EvCallData_Fields {
        int32_t EventListIndex;
        int32_t LabelIndex;
        int32_t CommandIndex;
    };

    struct EvCallData_o {
        EvCallData_Fields fields;
    };

    struct MsgOpenParam_Fields {
        System::String MsbtFile;
        System::String Label;
        int32_t LabelIndex;
        int32_t WindowType;
        bool Input;
        System::Array<System::String *> * TrainerName;
        int32_t EndType;
        bool PlayTextFeedSe;
    };

    struct MsgOpenParam_o {
        MsgOpenParam_Fields fields;
    };
};

namespace Pml
{
    namespace PokePara
    {
        struct PokemonParam_o;
    }
}

namespace Dpr
{
    struct FieldObjectMove_o;
    struct FieldObjectRotateYaw_o;
    struct FieldFloatMove_o;

    namespace MsgWindow
    {
        struct MsgWindowParam_o;
        struct MsgWindow_o;
    }

    namespace UI
    {
        struct FloorWindow_o;
        struct MoneyWindow_o;
    }

    namespace EvScript
    {
        struct EvDataManager_Fields {
            System_Action_EvDataManager_EntityParam__o* OnTalkStartCallBack;
            bool _isScriptLoad;
            System::Array<EvScriptData_o *> * _eventList;
            int32_t _eventListIndex;
            System_Collections_Generic_Stack_EvDataManager_EvCallData__o* _callQueue;
            System_Collections_Generic_Dictionary_string__int____o* _findAllLabel;
            FieldObjectEntity_o* _hit_object;
            FieldObjectEntity_o* _hit_object_sub;
            UnityEngine_Vector3_o _hit_position;
            int32_t _cmp_flag;
            SmartPoint::AssetAssistant::AssetRequestOperation_o* _scriptOperation;
            int32_t _areaID;
            System_Collections_Generic_List_FieldEventEntity__o* _warpList;
            XLSXContent::MapWarp_o* _warpData;
            UnityEngine_GameObject_o* _warpRoot;
            System::Array<EvDataManager::PlaySeData_o*> * _se_datas;
            System::Array<EvDataManager::PlaySeData_o*> * _voice_datas;
            UnityEngine_Vector2Int_o _eventEndPosition;
            System::String* _posEventLabelReserve;
            System::Array<EvDataManager::EntityParam_o *> * _entityParamList;
            UnityEngine_GameObject_o* _stopRoot;
            bool _isInitFirstMap;
            FieldObjectEntity_o* __dummyPlayer_k__BackingField;
            EvDataManager::UpdateDelegate_o* _updateDelegate;
            EvDataManager::EventEndDelegate_o* _eventEndDelegate;
            FieldEventDoorEntity_o* _doorEntity;
            EvDataManager::WorpEventData_o _worpEventData;
            UnityEngine_Vector2Int_o _eqZoneWorpGrid;
            bool _isEqZoneWorp;
            FieldEventLiftEntity_o* _liftEntity;
            FieldTobariGymWallEntity_o* _tobariGymWallEntity;
            FieldNagisaGymGearEntity_o* _nagisaGymGearEntity;
            FieldNomoseGymSwitchEntity_o* _nomoseGymSwitchEntity;
            FieldEyePaintingEntity_o* _eyePaintingEntity;
            FieldEmbankmentEntity_o* _embankmentEntity;
            FieldMistPlate_o* _mistPlate;
            FieldPokemonCenter_o* _PokemonCenter_k__BackingField;
            Telescope_o* _Telescope_k__BackingField;
            TelescopeNagisa_o* _TelescopeNagisa_k__BackingField;
            bool AzukariyaInitEventFlag;
            FieldWazaCutIn_o* _FieldWazaCutIn_k__BackingField;
            InterviewWork_o* _InterviewWork_k__BackingField;
            System::Array<int32_t> * TvCommercials;
            int32_t TvCommercialsCurrentIndex;
            FieldShip_o* _FieldShip_k__BackingField;
            System::String* _callLabel_SceneChange;
            System::String* _callLabel_UpdateSP;
            System::String* _callLabel_AdjustHeroPos;
            System_Collections_Generic_List_FieldObjectMoveCode__o* FieldObjectMoveCodes;
            bool _lateUpdateMoveCode;
            bool _isCall_TrainerBtl;
            EvDataManager::EvCallData_o _battleReturnData;
            FieldObjectEntity_o* _battleReturnHitObject;
            FieldObjectMoveCode_array* _eyeEncountTarget;
            Balloon_array* _eyeEncountBallon;
            float _eyeEncountWait;
            int32_t _eyeEncountSeq;
            System::Array<int32_t> * _talkTrinerIndex;
            int32_t Btl_TrainerType1;
            int32_t Btl_TrainerType2;
            int32_t _ugSeq;
            UnityEngine_Vector3_o _ugEndPos;
            UnityEngine_Vector3_o _ugHoleRot;
            float _ugFallSpdCurrent;
            int32_t _ugDiveSeq;
            float _ugDiveUpdateTime;
            float _ugDiveRotTime;
            float _ugDiveRotStart;
            float _ugDiveRotEnd;
            float _ugDiveJumpingTime;
            int32_t _ugFromSeq;
            float _ugFromJumpTime;
            float _ugFromRotSpdCurrent;
            XLSXContent::UgJumpPos_SheetData_o* _ugNextJumpPos;
            FieldToUgInvisibleObjects_o* _toUgInvisibleObjects;
            int32_t _cacheZoneID_SceneChange;
            bool _pendingInitScripts;
            int32_t SorawotobuZoneId;
            int32_t SorawotobuLocatorIndex;
            EventCameraTable_o* _evCameraTable;
            TairyouHasseiPokeManager_o* _tairyouHasseiMane;
            bool _isFadeEventReturnInput;
            float _cloudSpeed;
            float _cloudTime;
            int32_t _switch_work_index;
            float _timeWait;
            Dpr::MsgWindow::MsgWindowParam_o* _msgWindowParam;
            Dpr::MsgWindow::MsgWindowParam_o* _msgWindowParamOther;
            EvDataManager::MsgOpenParam_o _msgOpenParam;
            bool _isAutoMsg;
            int32_t _eMsgSpeed;
            float _autoTime;
            int32_t _boardState;
            Dpr::MsgWindow::MsgWindow_o* _msgWindow;
            Dpr::MsgWindow::MsgWindow_o* _msgWindowOther;
            UnityEngine_Coroutine_o* _msgWindowCoroutine;
            int32_t _talkStart;
            int32_t _macroCmd;
            int32_t _procCmd;
            System::String* _talkOpenMsbt;
            System::String* _talkOpenLabel;
            float _turnEndFrame_Hero;
            float _turnEndFrame_Obj;
            System_Single_array* _turnTime;
            System::Array<UnityEngine_Quaternion_o> * _turnEndQuaternion;
            System::Array<bool> * _turnDiffFlag;
            float _deltatime;
            System::String* _mapChangeZoneID;
            int32_t _mapChangeIndex;
            UnityEngine_Quaternion_o _moveGridCenterStart;
            UnityEngine_Quaternion_o _moveGridCenterEnd;
            bool _isOpenSubContentsMenu;
            bool _isWaitCheckOnlineAccount;
            System::String* _custumWindow_msbt;
            System_Collections_Generic_List_string__o* _custumWindow_Labels;
            System_Collections_Generic_List_int__o* _custumWindow_RetIndex;
            FieldEventEntity_o* _selectDoorObject;
            float _fadeSpeed;
            int32_t _heroReqBit;
            int32_t _heroMoveGridCenterFrontDir;
            bool _heroMoveGridCenterFrontStat;
            Dpr::FieldObjectMove_o* _fieldObjectMove;
            Dpr::FieldObjectRotateYaw_o* _fieldObjectRotateYaw;
            Dpr::FieldFloatMove_o* _fieldFloatMove;
            int32_t _hidenSequence;
            UnityEngine_Vector3_o _takiTargetPosition;
            UnityEngine_Vector3_o _rockClimbingEndPos;
            UnityEngine_Vector3_o _rockClimbingStandPos;
            bool _hidenEffectWait;
            bool _rideBicycleReserve;
            FieldEventLiftEntity_o* _runEventLiftEntity;
            int32_t _liftSequence;
            int32_t _gearSequence;
            int32_t _waterSequence;
            int32_t _kinomiSequence;
            float _kinomiSequenceTime;
            Effect_EffectInstance_o* _kinomiEffect;
            int32_t _warpSequence;
            int32_t _warpSpeedSequence;
            float _warpSpeedSequenceTime;
            int32_t _scopeSequence;
            int32_t _azukariyaSequence;
            int32_t _pokelistSequence;
            int32_t _pokelistBox;
            int32_t _pokelistIndex;
            int32_t _trainSequence;
            int32_t _itemSequence;
            int32_t _btwrSequence;
            bool _isOpenSpecialWin;
            int32_t _openSpecialWinLabelSelected;
            int32_t _currentTvProgram;
            int32_t _cutinState;
            bool _isShopOpen;
            int32_t _bagSelectItemNo;
            Dpr::UI::FloorWindow_o* _floorWindow;
            Dpr::UI::MoneyWindow_o* _moneyWindow;
            System_Text_StringBuilder_o* matchingPassword;
            int32_t _openTownMapSeq;
            bool _isOpenBtlTowerRecode;
            int32_t _softwareKeyboardSubState;
            int32_t _effSeq;
            bool _pc_window_close;
            int32_t _dendou;
            FieldAnimatorController_array* _umaAnimatorCtr;
            bool _isOpenCustomBallTrainer;
            int32_t _nicknamePlacementSequence;
            System::Array<Effect_EffectInstance_o *> * _scriptEffects;
            System::Array<UnityEngine_Coroutine_o *> * _scriptScaleCorutine;
            System::Array<bool> * _scriptScaleVectol;
            Pml::PokePara::PokemonParam_o* _temp_PokePara;
            bool _isBattleTowerBtl;
            bool _isBattleTowerWin;
            UnityEngine_Vector2_o _playerMoveGridCenterAngle;
            EvScriptData_o* _evData;
            EvData::Script_o* _evScript;
            EvData::Command_o* _evCommand;
            System::Array<EvData::Aregment_o> * _evArg;
            int32_t btlsearchSeq;
            Audio_AudioInstance_o* btlserchAudio;
            bool _isOpenHallOfFame;
            UnityEngine_Coroutine_o* _cmdReportSaveCoroutine;
            int32_t _seqRankingView;
            bool _isOpenCertificate;
            int32_t returnSequenceID;
            bool _boukennootoTipsOpen;
            int32_t _fashionLoadSeq;
            System::String* _oldfashionAssetReqUri;
            SmartPoint::AssetAssistant::AssetRequestOperation_o* _fashionAssetReqOp;
            float _fashionYawAngle;
            UnityEngine_Vector3_o _fashionWorldpos;
            bool _isTraining;
            bool _isOpenTraining;
            System_Single_array* _setlight_timer;
            System_Single_array* _setlight_timer_limit;
            System_Single_array* _start_lightIntensity;
            System_Single_array* _end_lightIntensity;
            System::Array<bool> * _isRunningLight;
            System_Collections_Generic_List_string__o* Debug_01_DebugLabel;
            System_Collections_Generic_List_string__o* DebugSceneEventLabel;
            System_Collections_Generic_List_FieldObjectEntity__o* _fieldObjectEntity;
            System_Collections_Generic_List_FieldKinomiGrowEntity__o* _FieldKinomiGrowEntity;
            System_Collections_Generic_List_EvDataManager_AssetReqOpeRef__o* _AssetReqOpeList;
            System_Collections_Generic_List_EvDataManager_LoadObjectData__o* _loadObjectList;
            int32_t _loadObjectIndex;
            UnityEngine_Transform_o* _loadObjectParent;
            bool _nowInstantiate;
            System_Collections_Generic_Dictionary_int__GameObject__o* _poolLoadObjects;
        };

        struct EvDataManager_c;

        struct EvDataManager_o {
            // 01affd30
            static EvDataManager_o * get_Instanse(MethodInfo *method);
            // 01b54470
            void LearnWaza(Pml::PokePara::PokemonParam_o *param, int32_t learnWazaNo,int32_t unlearnWazaNo,MethodInfo *method);

            EvDataManager_c *klass;
            void *monitor;
            EvDataManager_Fields fields;
        };
    }
}