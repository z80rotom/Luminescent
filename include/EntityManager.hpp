#pragma once

#include "il2cpp.hpp"
#include "System/Array.hpp"
#include "FieldNagisaGymGearEntity.hpp"

struct EntityManager_Fields
{
};

struct EntityManager_RGCTXs
{
};

struct EntityManager_VTable
{
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};

struct EntityManager_c
{
	Il2CppClass_1 _1;
	struct EntityManager_StaticFields* static_fields;
	EntityManager_RGCTXs* rgctx_data;
	Il2CppClass_2 _2;
	EntityManager_VTable vtable;
};

struct EntityManager_o
{
	EntityManager_c *klass;
	void *monitor;
	EntityManager_Fields fields;
};

struct EntityManager_StaticFields
{
	struct System_Collections_Generic_List_BaseEntity__o* _baseEntities;
	struct BattlePlayerEntity_o* _activeBattlePlayer_k__BackingField;
	struct FieldPlayerEntity_o* _activeFieldPlayer_k__BackingField;
	struct FieldPokemonEntity_o* _activeFieldPartner_k__BackingField;
	struct FieldPlayerEntity_array* _fieldPlayers_k__BackingField;
	struct FieldPokemonEntity_array* _fieldPokemons_k__BackingField;
	struct FieldCharacterEntity_array* _fieldCharacters_k__BackingField;
	struct FieldObjectEntity_array* _fieldObjects_k__BackingField;
	struct FieldEventEntity_array* _fieldEventObjects_k__BackingField;
	struct FieldEventDoorEntity_array* _fieldDoorObjects_k__BackingField;
	struct FieldEventLiftEntity_array* _fieldLiftObjects_k__BackingField;
	struct FieldTobariGymWallEntity_array* _fieldTobariGymWalls_k__BackingField;
	struct System::Array<FieldNagisaGymGearEntity_o*>* _fieldNagisaGymGears_k__BackingField;
	struct FieldNomoseGymWaterEntity_array* _fieldNomoseGymWater_k__BackingField;
	struct FieldNomoseGymSwitchEntity_array* _fieldNomoseGymSwitches_k__BackingField;
	struct FieldElevatorBackgroundEntity_array* _fieldElevatorBackground_k__BackingField;
	struct FieldPokemonCenterEntity_array* _fieldPokemonCenter_k__BackingField;
	struct FieldPokemonCenterMonitorEntity_array* _fieldPokemonCenterMonitor_k__BackingField;
	struct FieldEventTrainEntity_array* _fieldEventTrain_k__BackingField;
	struct FieldEyePaintingEntity_array* _fieldEyePainting_k__BackingField;
	struct FieldEmbankmentEntity_array* _fieldEmbankment_k__BackingField;
	struct FieldTvEntity_array* _fieldTv_k__BackingField;
};

// 04c59d10
extern EntityManager_c * EntityManager_TypeInfo;
