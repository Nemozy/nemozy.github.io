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

// WeaponController
struct WeaponController_t2952407768;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// Bullet
struct Bullet_t2590115616;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void WeaponController::.ctor(UnityEngine.Transform,System.String)
extern "C"  void WeaponController__ctor_m1210290876 (WeaponController_t2952407768 * __this, Transform_t3275118058 * ___owner0, String_t* ___nameBullet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WeaponController::SetWeapon(System.Int32)
extern "C"  void WeaponController_SetWeapon_m94596662 (WeaponController_t2952407768 * __this, int32_t ___radiusDmg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Bullet WeaponController::StartFire(UnityEngine.Vector3,UnityEngine.Vector2,System.String)
extern "C"  Bullet_t2590115616 * WeaponController_StartFire_m3268901811 (WeaponController_t2952407768 * __this, Vector3_t2243707580  ___vecPos0, Vector2_t2243707579  ___vecFire1, String_t* ___player2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
