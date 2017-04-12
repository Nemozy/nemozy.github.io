#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UserInfo/Step
struct Step_t934996442;

#include "codegen/il2cpp-codegen.h"

// System.Void UserInfo/Step::.ctor()
extern "C"  void Step__ctor_m426731473 (Step_t934996442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserInfo/Step::Shoot(System.Boolean)
extern "C"  void Step_Shoot_m2780540809 (Step_t934996442 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserInfo/Step::SetPlayerId(System.Int32)
extern "C"  void Step_SetPlayerId_m36832180 (Step_t934996442 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserInfo/Step::SetStartStepTime(System.Single)
extern "C"  void Step_SetStartStepTime_m433359705 (Step_t934996442 * __this, float ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserInfo/Step::UpdateState()
extern "C"  void Step_UpdateState_m2935506551 (Step_t934996442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UserInfo/Step::NewStep(System.Single,System.Int32)
extern "C"  void Step_NewStep_m911132871 (Step_t934996442 * __this, float ___time0, int32_t ___playerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
