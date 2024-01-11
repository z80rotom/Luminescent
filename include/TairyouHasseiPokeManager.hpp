#pragma once

#include "il2cpp.hpp"
#include "UnityEngine/GameObject.hpp"

struct TairyouHasseiPokeManager_Fields {
	struct TairyouHasseiPoke_array* _objects;
	struct SmartPoint_AssetAssistant_AssetRequestOperation_o* _operation;
	float _defaultScale;
	uint8_t _loadingState;
	struct UnityEngine::GameObject_o* _parent;
	int32_t _targetZone;
};

struct TairyouHasseiPokeManager_c;

struct TairyouHasseiPokeManager_o {
	TairyouHasseiPokeManager_c *klass;
	void *monitor;
	TairyouHasseiPokeManager_Fields fields;
};
