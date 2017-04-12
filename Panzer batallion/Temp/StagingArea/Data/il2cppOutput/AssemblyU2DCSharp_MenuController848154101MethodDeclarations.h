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

// MenuController
struct MenuController_t848154101;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void MenuController::.ctor()
extern "C"  void MenuController__ctor_m1077658770 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::Awake()
extern "C"  void MenuController_Awake_m451094037 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::Start()
extern "C"  void MenuController_Start_m3141389506 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::FixedUpdate()
extern "C"  void MenuController_FixedUpdate_m2811071667 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::UpdateOnline()
extern "C"  void MenuController_UpdateOnline_m3367129050 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::JoinInLobby(System.String)
extern "C"  void MenuController_JoinInLobby_m2151382733 (MenuController_t848154101 * __this, String_t* ___stageName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::CreateLobby()
extern "C"  void MenuController_CreateLobby_m269435730 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MenuController::LobbyReadyToStart()
extern "C"  bool MenuController_LobbyReadyToStart_m61496102 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::OnCreatedRoom()
extern "C"  void MenuController_OnCreatedRoom_m78266786 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::OnJoinedRoom()
extern "C"  void MenuController_OnJoinedRoom_m27527809 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::OnLeftRoom()
extern "C"  void MenuController_OnLeftRoom_m3651493393 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::OnPhotonCreateRoomFailed()
extern "C"  void MenuController_OnPhotonCreateRoomFailed_m2896773491 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::OnPhotonJoinRoomFaild()
extern "C"  void MenuController_OnPhotonJoinRoomFaild_m405165738 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::OnJoinedLobby()
extern "C"  void MenuController_OnJoinedLobby_m1762183258 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuController::OnLeftLobby()
extern "C"  void MenuController_OnLeftLobby_m319898610 (MenuController_t848154101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
