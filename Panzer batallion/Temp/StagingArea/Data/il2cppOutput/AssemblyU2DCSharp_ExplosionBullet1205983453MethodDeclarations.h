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

// ExplosionBullet
struct ExplosionBullet_t1205983453;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"

// System.Void ExplosionBullet::.ctor()
extern "C"  void ExplosionBullet__ctor_m1998690582 (ExplosionBullet_t1205983453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplosionBullet::Awake()
extern "C"  void ExplosionBullet_Awake_m3641609069 (ExplosionBullet_t1205983453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplosionBullet::Start()
extern "C"  void ExplosionBullet_Start_m1179002638 (ExplosionBullet_t1205983453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplosionBullet::SetParentBulletId(System.Int32)
extern "C"  void ExplosionBullet_SetParentBulletId_m856752782 (ExplosionBullet_t1205983453 * __this, int32_t ___parentBulletId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplosionBullet::SetParentTankId(System.Int32)
extern "C"  void ExplosionBullet_SetParentTankId_m4135664354 (ExplosionBullet_t1205983453 * __this, int32_t ___parentTankId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplosionBullet::SetExplosionRadius(System.Int32)
extern "C"  void ExplosionBullet_SetExplosionRadius_m2798641964 (ExplosionBullet_t1205983453 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplosionBullet::SetExplosionDamage(System.Int32)
extern "C"  void ExplosionBullet_SetExplosionDamage_m1103154197 (ExplosionBullet_t1205983453 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplosionBullet::OnDestroy()
extern "C"  void ExplosionBullet_OnDestroy_m1426592883 (ExplosionBullet_t1205983453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExplosionBullet::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void ExplosionBullet_OnPhotonSerializeView_m1163713465 (ExplosionBullet_t1205983453 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
