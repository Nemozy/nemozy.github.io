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

// Bullet
struct Bullet_t2590115616;
// System.String
struct String_t;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// PhotonStream
struct PhotonStream_t2436786422;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Bullet::.ctor()
extern "C"  void Bullet__ctor_m2895089121 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Awake()
extern "C"  void Bullet_Awake_m3526188380 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Start()
extern "C"  void Bullet_Start_m1447617473 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::FixedUpdate()
extern "C"  void Bullet_FixedUpdate_m3718005984 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::SetId(System.Int32,System.Int32)
extern "C"  void Bullet_SetId_m3020022374 (Bullet_t2590115616 * __this, int32_t ___id0, int32_t ___tankId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::SetParentName(System.String)
extern "C"  void Bullet_SetParentName_m3079444130 (Bullet_t2590115616 * __this, String_t* ___pl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::SetExplosionName(System.String,System.Single,System.Int32)
extern "C"  void Bullet_SetExplosionName_m2305956611 (Bullet_t2590115616 * __this, String_t* ___expl0, float ___delay1, int32_t ___scaleSizeExplosion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Bullet_OnCollisionEnter2D_m1876997491 (Bullet_t2590115616 * __this, Collision2D_t1539500754 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void Bullet_OnPhotonSerializeView_m1644887776 (Bullet_t2590115616 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::SetForce(UnityEngine.Vector2)
extern "C"  void Bullet_SetForce_m1597732332 (Bullet_t2590115616 * __this, Vector2_t2243707579  ___vecPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::SetPosition(UnityEngine.Vector3)
extern "C"  void Bullet_SetPosition_m990551031 (Bullet_t2590115616 * __this, Vector3_t2243707580  ___vecPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::SetInit(System.String[])
extern "C"  void Bullet_SetInit_m930228853 (Bullet_t2590115616 * __this, StringU5BU5D_t1642385972* ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
