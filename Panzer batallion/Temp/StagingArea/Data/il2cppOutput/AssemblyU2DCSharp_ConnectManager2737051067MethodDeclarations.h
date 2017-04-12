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

// ConnectManager
struct ConnectManager_t2737051067;
// RoomOptions
struct RoomOptions_t590971513;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_RoomOptions590971513.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ConnectManager::.ctor()
extern "C"  void ConnectManager__ctor_m2074432656 (ConnectManager_t2737051067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectManager::FixedUpdate()
extern "C"  void ConnectManager_FixedUpdate_m1317899041 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectManager::SetSingletonSettings()
extern "C"  void ConnectManager_SetSingletonSettings_m3569331550 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectManager::ChangeLevelMaster()
extern "C"  void ConnectManager_ChangeLevelMaster_m309012432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConnectManager::CreateLobby(RoomOptions)
extern "C"  bool ConnectManager_CreateLobby_m1477502823 (Il2CppObject * __this /* static, unused */, RoomOptions_t590971513 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConnectManager::ConnectInRandomLobby()
extern "C"  bool ConnectManager_ConnectInRandomLobby_m779713182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConnectManager::GetPing()
extern "C"  int32_t ConnectManager_GetPing_m3759825886 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConnectManager::ConnectInLobbyByRating_Duel(UnityEngine.Transform)
extern "C"  bool ConnectManager_ConnectInLobbyByRating_Duel_m3834094985 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___textItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConnectManager::GetOnline()
extern "C"  int32_t ConnectManager_GetOnline_m4202430561 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConnectManager::GetLobiesCount()
extern "C"  int32_t ConnectManager_GetLobiesCount_m3124814199 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectManager::LoadLvL(System.String)
extern "C"  void ConnectManager_LoadLvL_m2748188500 (Il2CppObject * __this /* static, unused */, String_t* ___lvlName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConnectManager::.cctor()
extern "C"  void ConnectManager__cctor_m1872325901 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
