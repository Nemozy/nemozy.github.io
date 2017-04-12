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

// UnitController
struct UnitController_t1756279298;
// Bullet
struct Bullet_t2590115616;
// PhotonStream
struct PhotonStream_t2436786422;
// System.Collections.Generic.Dictionary`2<System.Int32,Bullet>
struct Dictionary_2_t1597941251;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Bullet2590115616.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnitController::.ctor()
extern "C"  void UnitController__ctor_m2708267057 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::Awake()
extern "C"  void UnitController_Awake_m2073980558 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::Start()
extern "C"  void UnitController_Start_m3456419777 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::FixedUpdate()
extern "C"  void UnitController_FixedUpdate_m2372590014 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::AddNewBullet(Bullet)
extern "C"  void UnitController_AddNewBullet_m222965254 (UnitController_t1756279298 * __this, Bullet_t2590115616 * ___bullet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void UnitController_OnPhotonSerializeView_m2148894426 (UnitController_t1756279298 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::RemoveBullet(System.Int32)
extern "C"  void UnitController_RemoveBullet_m2883548216 (UnitController_t1756279298 * __this, int32_t ___idBullet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,Bullet> UnitController::GetAllBullets()
extern "C"  Dictionary_2_t1597941251 * UnitController_GetAllBullets_m2465619944 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::SetId(System.Int32)
extern "C"  void UnitController_SetId_m1339108823 (UnitController_t1756279298 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnitController::GetId()
extern "C"  int32_t UnitController_GetId_m4170452298 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::FreezePosition(System.Single,System.Single)
extern "C"  void UnitController_FreezePosition_m4067918815 (UnitController_t1756279298 * __this, float ___startFreeze0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::UnFreezePosition()
extern "C"  void UnitController_UnFreezePosition_m3410794174 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::SetWeapon(System.Int32)
extern "C"  void UnitController_SetWeapon_m2441258732 (UnitController_t1756279298 * __this, int32_t ___radiusDmg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::GetDamage(System.Int32)
extern "C"  void UnitController_GetDamage_m1713350961 (UnitController_t1756279298 * __this, int32_t ___dmg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::BlockControllUnit()
extern "C"  void UnitController_BlockControllUnit_m88174369 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::UnBlockControllUnit()
extern "C"  void UnitController_UnBlockControllUnit_m3892315732 (UnitController_t1756279298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::SetParent(System.Int32[])
extern "C"  void UnitController_SetParent_m2953041380 (UnitController_t1756279298 * __this, Int32U5BU5D_t3030399641* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::PlayerWalkUp(System.String)
extern "C"  void UnitController_PlayerWalkUp_m127486878 (UnitController_t1756279298 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::PlayerWalkLeft(System.String)
extern "C"  void UnitController_PlayerWalkLeft_m3434829166 (UnitController_t1756279298 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::PlayerWalkRight(System.String)
extern "C"  void UnitController_PlayerWalkRight_m1309570309 (UnitController_t1756279298 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::PlayerWalkDown(System.String)
extern "C"  void UnitController_PlayerWalkDown_m944447975 (UnitController_t1756279298 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::PlayerCellDown(System.String)
extern "C"  void UnitController_PlayerCellDown_m1208949354 (UnitController_t1756279298 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitController::PlayerShootingDown(System.String)
extern "C"  void UnitController_PlayerShootingDown_m3359824369 (UnitController_t1756279298 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
