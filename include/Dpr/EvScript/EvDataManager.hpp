#pragma once

#include "il2cpp.hpp"
#include "Dpr/FieldObjectMove.hpp"
#include "Dpr/FieldObjectRotateYaw.hpp"
#include "System/String.hpp"
#include "System/Array.hpp"

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
struct FieldObjectMoveCode_o;
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

namespace Pml
{
    namespace PokePara
    {
        struct PokemonParam_o;
    }
}

namespace Dpr
{

    namespace EvScript
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
            System::String* MsbtFile;
            System::String* Label;
            int32_t LabelIndex;
            int32_t WindowType;
            bool Input;
            System::Array<System::String*>* TrainerName;
            int32_t EndType;
            bool PlayTextFeedSe;
        };

        struct MsgOpenParam_o {
            MsgOpenParam_Fields fields;
        };

        struct EvDataManager_Fields {
            struct System_Action_EvDataManager_EntityParam__o* OnTalkStartCallBack;
            bool _isScriptLoad;
            struct System::Array<EvScriptData_o*>* _eventList;
            int32_t _eventListIndex;
            struct System_Collections_Generic_Stack_EvDataManager_EvCallData__o* _callQueue;
            struct System_Collections_Generic_Dictionary_string__int____o* _findAllLabel;
            struct FieldObjectEntity_o* _hit_object;
            struct FieldObjectEntity_o* _hit_object_sub;
            struct UnityEngine_Vector3_o _hit_position;
            int32_t _cmp_flag;
            struct SmartPoint_AssetAssistant_AssetRequestOperation_o* _scriptOperation;
            int32_t _areaID;
            struct System_Collections_Generic_List_FieldEventEntity__o* _warpList;
            struct XLSXContent_MapWarp_o* _warpData;
            struct UnityEngine_GameObject_o* _warpRoot;
            struct System::Array<PlaySeData_o*>* _se_datas;
            struct System::Array<PlaySeData_o*>* _voice_datas;
            struct UnityEngine_Vector2Int_o _eventEndPosition;
            struct System::String* _posEventLabelReserve;
            struct System::Array<EntityParam_o*>* _entityParamList;
            struct UnityEngine_GameObject_o* _stopRoot;
            bool _isInitFirstMap;
            struct FieldObjectEntity_o* __dummyPlayer_k__BackingField;
            struct UpdateDelegate_o* _updateDelegate;
            struct EventEndDelegate_o* _eventEndDelegate;
            struct FieldEventDoorEntity_o* _doorEntity;
            struct WorpEventData_o _worpEventData;
            struct UnityEngine_Vector2Int_o _eqZoneWorpGrid;
            bool _isEqZoneWorp;
            struct FieldEventLiftEntity_o* _liftEntity;
            struct FieldTobariGymWallEntity_o* _tobariGymWallEntity;
            struct FieldNagisaGymGearEntity_o* _nagisaGymGearEntity;
            struct FieldNomoseGymSwitchEntity_o* _nomoseGymSwitchEntity;
            struct FieldEyePaintingEntity_o* _eyePaintingEntity;
            struct FieldEmbankmentEntity_o* _embankmentEntity;
            struct FieldMistPlate_o* _mistPlate;
            struct FieldPokemonCenter_o* _PokemonCenter_k__BackingField;
            struct Telescope_o* _Telescope_k__BackingField;
            struct TelescopeNagisa_o* _TelescopeNagisa_k__BackingField;
            bool AzukariyaInitEventFlag;
            struct FieldWazaCutIn_o* _FieldWazaCutIn_k__BackingField;
            struct InterviewWork_o* _InterviewWork_k__BackingField;
            struct System_Int32_array* TvCommercials;
            int32_t TvCommercialsCurrentIndex;
            struct FieldShip_o* _FieldShip_k__BackingField;
            struct System::String* _callLabel_SceneChange;
            struct System::String* _callLabel_UpdateSP;
            struct System::String* _callLabel_AdjustHeroPos;
            struct System_Collections_Generic_List_FieldObjectMoveCode__o* FieldObjectMoveCodes;
            bool _lateUpdateMoveCode;
            bool _isCall_TrainerBtl;
            struct EvCallData_o _battleReturnData;
            struct FieldObjectEntity_o* _battleReturnHitObject;
            struct System::Array<FieldObjectMoveCode_o*>* _eyeEncountTarget;
            struct Balloon_array* _eyeEncountBallon;
            float _eyeEncountWait;
            int32_t _eyeEncountSeq;
            struct System_Int32_array* _talkTrinerIndex;
            int32_t Btl_TrainerType1;
            int32_t Btl_TrainerType2;
            int32_t _ugSeq;
            struct UnityEngine_Vector3_o _ugEndPos;
            struct UnityEngine_Vector3_o _ugHoleRot;
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
            struct XLSXContent_UgJumpPos_SheetData_o* _ugNextJumpPos;
            struct FieldToUgInvisibleObjects_o* _toUgInvisibleObjects;
            int32_t _cacheZoneID_SceneChange;
            bool _pendingInitScripts;
            int32_t SorawotobuZoneId;
            int32_t SorawotobuLocatorIndex;
            struct EventCameraTable_o* _evCameraTable;
            struct TairyouHasseiPokeManager_o* _tairyouHasseiMane;
            bool _isFadeEventReturnInput;
            float _cloudSpeed;
            float _cloudTime;
            int32_t _switch_work_index;
            float _timeWait;
            struct Dpr_MsgWindow_MsgWindowParam_o* _msgWindowParam;
            struct Dpr_MsgWindow_MsgWindowParam_o* _msgWindowParamOther;
            struct MsgOpenParam_o _msgOpenParam;
            bool _isAutoMsg;
            int32_t _eMsgSpeed;
            float _autoTime;
            int32_t _boardState;
            struct Dpr_MsgWindow_MsgWindow_o* _msgWindow;
            struct Dpr_MsgWindow_MsgWindow_o* _msgWindowOther;
            struct UnityEngine_Coroutine_o* _msgWindowCoroutine;
            int32_t _talkStart;
            int32_t _macroCmd;
            int32_t _procCmd;
            struct System::String* _talkOpenMsbt;
            struct System::String* _talkOpenLabel;
            float _turnEndFrame_Hero;
            float _turnEndFrame_Obj;
            struct System_Single_array* _turnTime;
            struct UnityEngine_Quaternion_array* _turnEndQuaternion;
            struct System_Boolean_array* _turnDiffFlag;
            float _deltatime;
            struct System::String* _mapChangeZoneID;
            int32_t _mapChangeIndex;
            struct UnityEngine_Quaternion_o _moveGridCenterStart;
            struct UnityEngine_Quaternion_o _moveGridCenterEnd;
            bool _isOpenSubContentsMenu;
            bool _isWaitCheckOnlineAccount;
            struct System::String* _custumWindow_msbt;
            struct System_Collections_Generic_List_string__o* _custumWindow_Labels;
            struct System_Collections_Generic_List_int__o* _custumWindow_RetIndex;
            struct FieldEventEntity_o* _selectDoorObject;
            float _fadeSpeed;
            int32_t _heroReqBit;
            int32_t _heroMoveGridCenterFrontDir;
            bool _heroMoveGridCenterFrontStat;
            struct Dpr::FieldObjectMove_o* _fieldObjectMove;
            struct Dpr::FieldObjectRotateYaw_o* _fieldObjectRotateYaw;
            struct Dpr_FieldFloatMove_o* _fieldFloatMove;
            int32_t _hidenSequence;
            struct UnityEngine_Vector3_o _takiTargetPosition;
            struct UnityEngine_Vector3_o _rockClimbingEndPos;
            struct UnityEngine_Vector3_o _rockClimbingStandPos;
            bool _hidenEffectWait;
            bool _rideBicycleReserve;
            struct FieldEventLiftEntity_o* _runEventLiftEntity;
            int32_t _liftSequence;
            int32_t _gearSequence;
            int32_t _waterSequence;
            int32_t _kinomiSequence;
            float _kinomiSequenceTime;
            struct Effect_EffectInstance_o* _kinomiEffect;
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
            struct Dpr_UI_FloorWindow_o* _floorWindow;
            struct Dpr_UI_MoneyWindow_o* _moneyWindow;
            struct System_Text_StringBuilder_o* matchingPassword;
            int32_t _openTownMapSeq;
            bool _isOpenBtlTowerRecode;
            int32_t _softwareKeyboardSubState;
            int32_t _effSeq;
            bool _pc_window_close;
            int32_t _dendou;
            struct FieldAnimatorController_array* _umaAnimatorCtr;
            bool _isOpenCustomBallTrainer;
            int32_t _nicknamePlacementSequence;
            struct Effect_EffectInstance_array* _scriptEffects;
            struct UnityEngine_Coroutine_array* _scriptScaleCorutine;
            struct System_Boolean_array* _scriptScaleVectol;
            struct Pml_PokePara_PokemonParam_o* _temp_PokePara;
            bool _isBattleTowerBtl;
            bool _isBattleTowerWin;
            struct UnityEngine_Vector2_o _playerMoveGridCenterAngle;
            struct Dpr_EvScript_EvScriptData_o* _evData;
            struct EvData_Script_o* _evScript;
            struct EvData_Command_o* _evCommand;
            struct System::Array<EvData::Aregment_o> * _evArg;
            int32_t btlsearchSeq;
            struct Audio_AudioInstance_o* btlserchAudio;
            bool _isOpenHallOfFame;
            struct UnityEngine_Coroutine_o* _cmdReportSaveCoroutine;
            int32_t _seqRankingView;
            bool _isOpenCertificate;
            int32_t returnSequenceID;
            bool _boukennootoTipsOpen;
            int32_t _fashionLoadSeq;
            struct System::String* _oldfashionAssetReqUri;
            struct SmartPoint_AssetAssistant_AssetRequestOperation_o* _fashionAssetReqOp;
            float _fashionYawAngle;
            struct UnityEngine_Vector3_o _fashionWorldpos;
            bool _isTraining;
            bool _isOpenTraining;
            struct System_Single_array* _setlight_timer;
            struct System_Single_array* _setlight_timer_limit;
            struct System_Single_array* _start_lightIntensity;
            struct System_Single_array* _end_lightIntensity;
            struct System_Boolean_array* _isRunningLight;
            bool isSpBtlAruseus;
            struct System_Collections_Generic_List_string__o* Debug_01_DebugLabel;
            struct System_Collections_Generic_List_string__o* DebugSceneEventLabel;
            struct System_Collections_Generic_List_FieldObjectEntity__o* _fieldObjectEntity;
            struct System_Collections_Generic_List_FieldKinomiGrowEntity__o* _FieldKinomiGrowEntity;
            struct System_Collections_Generic_List_EvDataManager_AssetReqOpeRef__o* _AssetReqOpeList;
            struct System_Collections_Generic_List_EvDataManager_LoadObjectData__o* _loadObjectList;
            int32_t _loadObjectIndex;
            struct UnityEngine_Transform_o* _loadObjectParent;
            bool _nowInstantiate;
            struct System_Collections_Generic_Dictionary_int__GameObject__o* _poolLoadObjects;
        };

        struct EvDataManager_c;

        struct EvDataManager_o {
            // 01affd30
            static EvDataManager_o * get_Instanse(MethodInfo *method);
            // 01b54470
            void LearnWaza(Pml::PokePara::PokemonParam_o *param, int32_t learnWazaNo,int32_t unlearnWazaNo,MethodInfo *method);
            // 02c423c0
            bool JumpLabel(System::String *label, EventEndDelegate_o *callback, MethodInfo *method);
            // 02c42ea0
            bool UpdateEvdata(float time, bool sp_script, MethodInfo *method);
            // 02c5b290
            bool RunEvCmd(int32_t index, MethodInfo *method);
            // 02c67ff0
            int32_t GetPokemonFormNo(Pml::PokePara::PokemonParam_o *param, MethodInfo *method);
            // 02c67f20
            Pml::PokePara::PokemonParam_o * GetPokemonParam(int32_t trayIndex, int32_t index, MethodInfo *method);

            EvDataManager_c *klass;
            void *monitor;
            EvDataManager_Fields fields;
        };
    }
}
