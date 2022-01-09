#pragma once

#include "il2cpp.h"

void UnityEngine_ParticleSystem__Emit (UnityEngine_ParticleSystem_o* __this, UnityEngine_Vector3_o position, UnityEngine_Vector3_o velocity, float size, float lifetime, UnityEngine_Color32_o color, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Emit (UnityEngine_ParticleSystem_o* __this, UnityEngine_ParticleSystem_Particle_o particle, const MethodInfo* method_info);
bool UnityEngine_ParticleSystem__get_isPlaying (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_ParticleSystem__get_particleCount (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
float UnityEngine_ParticleSystem__get_time (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
uint32_t UnityEngine_ParticleSystem__get_randomSeed (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__set_randomSeed (UnityEngine_ParticleSystem_o* __this, uint32_t value, const MethodInfo* method_info);
bool UnityEngine_ParticleSystem__get_useAutoRandomSeed (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__set_useAutoRandomSeed (UnityEngine_ParticleSystem_o* __this, bool value, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Simulate (UnityEngine_ParticleSystem_o* __this, float t, bool withChildren, bool restart, bool fixedTimeStep, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Simulate (UnityEngine_ParticleSystem_o* __this, float t, bool withChildren, bool restart, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Simulate (UnityEngine_ParticleSystem_o* __this, float t, bool withChildren, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Simulate (UnityEngine_ParticleSystem_o* __this, float t, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Play (UnityEngine_ParticleSystem_o* __this, bool withChildren, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Play (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Pause (UnityEngine_ParticleSystem_o* __this, bool withChildren, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Pause (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Stop (UnityEngine_ParticleSystem_o* __this, bool withChildren, int32_t stopBehavior, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Stop (UnityEngine_ParticleSystem_o* __this, bool withChildren, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Stop (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
bool UnityEngine_ParticleSystem__IsAlive (UnityEngine_ParticleSystem_o* __this, bool withChildren, const MethodInfo* method_info);
bool UnityEngine_ParticleSystem__IsAlive (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Emit (UnityEngine_ParticleSystem_o* __this, int32_t count, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Emit_Internal (UnityEngine_ParticleSystem_o* __this, int32_t count, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Emit (UnityEngine_ParticleSystem_o* __this, UnityEngine_ParticleSystem_EmitParams_o emitParams, int32_t count, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__EmitOld_Internal (UnityEngine_ParticleSystem_o* __this, UnityEngine_ParticleSystem_Particle_o* particle, const MethodInfo* method_info);
UnityEngine_ParticleSystem_MainModule_o UnityEngine_ParticleSystem__get_main (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
UnityEngine_ParticleSystem_SubEmittersModule_o UnityEngine_ParticleSystem__get_subEmitters (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
UnityEngine_ParticleSystem_TrailModule_o UnityEngine_ParticleSystem__get_trails (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
void UnityEngine_ParticleSystem___ctor (UnityEngine_ParticleSystem_o* __this, const MethodInfo* method_info);
void UnityEngine_ParticleSystem__Emit_Injected (UnityEngine_ParticleSystem_o* __this, UnityEngine_ParticleSystem_EmitParams_o* emitParams, int32_t count, const MethodInfo* method_info);
