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

// StageEnvironment
struct StageEnvironment_t4098467083;
// UserInfo/PlayerInfo
struct PlayerInfo_t2890672723;
// System.Collections.Generic.Dictionary`2<System.Int32,UserInfo/PlayerInfo>
struct Dictionary_2_t1898498358;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,GameInfo/Weapon>
struct Dictionary_2_t1716731161;

#include "codegen/il2cpp-codegen.h"

// System.Void StageEnvironment::.ctor()
extern "C"  void StageEnvironment__ctor_m3127881526 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::Awake()
extern "C"  void StageEnvironment_Awake_m3754623275 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::Start()
extern "C"  void StageEnvironment_Start_m270041418 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::FixedUpdate()
extern "C"  void StageEnvironment_FixedUpdate_m434693833 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageEnvironment::ConnectionPlayers()
extern "C"  bool StageEnvironment_ConnectionPlayers_m1198344794 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageEnvironment::InstantiatePlayersObjects()
extern "C"  bool StageEnvironment_InstantiatePlayersObjects_m835675430 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageEnvironment::CheckWinner()
extern "C"  int32_t StageEnvironment_CheckWinner_m1619774227 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageEnvironment::GetGameObjectId()
extern "C"  int32_t StageEnvironment_GetGameObjectId_m3992311316 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UserInfo/PlayerInfo StageEnvironment::GetPlayerInfo(System.Int32)
extern "C"  PlayerInfo_t2890672723 * StageEnvironment_GetPlayerInfo_m1422584808 (StageEnvironment_t4098467083 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,UserInfo/PlayerInfo> StageEnvironment::GetPlayers()
extern "C"  Dictionary_2_t1898498358 * StageEnvironment_GetPlayers_m3318188474 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::BlockShoot()
extern "C"  void StageEnvironment_BlockShoot_m368354384 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::UnBlockShoot()
extern "C"  void StageEnvironment_UnBlockShoot_m937381663 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageEnvironment::BlockShootState()
extern "C"  bool StageEnvironment_BlockShootState_m3539668319 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::BlockScreen(System.Boolean)
extern "C"  void StageEnvironment_BlockScreen_m2636327166 (StageEnvironment_t4098467083 * __this, bool ___lockState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageEnvironment::GetGameOverState()
extern "C"  bool StageEnvironment_GetGameOverState_m1471709447 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageEnvironment::GetStartStepState()
extern "C"  bool StageEnvironment_GetStartStepState_m2069376757 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::SetWeapon(System.Int32,System.Int32,System.Int32)
extern "C"  void StageEnvironment_SetWeapon_m1303537939 (StageEnvironment_t4098467083 * __this, int32_t ___radiusDmg0, int32_t ___dmgMin1, int32_t ___dmgMax2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::BlockAllTanks()
extern "C"  void StageEnvironment_BlockAllTanks_m2666875345 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::UnBlockAllTank_IdPlayer(System.Int32)
extern "C"  void StageEnvironment_UnBlockAllTank_IdPlayer_m2431159145 (StageEnvironment_t4098467083 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String StageEnvironment::SetNewTimeInWidget(System.Single)
extern "C"  String_t* StageEnvironment_SetNewTimeInWidget_m2688007586 (StageEnvironment_t4098467083 * __this, float ___dur0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,GameInfo/Weapon> StageEnvironment::GetWeaponsDefault_SlotKey()
extern "C"  Dictionary_2_t1716731161 * StageEnvironment_GetWeaponsDefault_SlotKey_m1261557237 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageEnvironment::OnJoinedRoom()
extern "C"  void StageEnvironment_OnJoinedRoom_m3149694079 (StageEnvironment_t4098467083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
