#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExplosionBullet
struct  ExplosionBullet_t1205983453  : public MonoBehaviour_t3914164484
{
public:
	// System.Int32 ExplosionBullet::ParentBulletId
	int32_t ___ParentBulletId_3;
	// System.Int32 ExplosionBullet::ParentTankId
	int32_t ___ParentTankId_4;
	// System.Boolean ExplosionBullet::dead
	bool ___dead_5;
	// System.Int32 ExplosionBullet::ExplosionRadius
	int32_t ___ExplosionRadius_6;
	// System.Int32 ExplosionBullet::ExplosionDmg
	int32_t ___ExplosionDmg_7;
	// UnityEngine.Transform ExplosionBullet::Players
	Transform_t3275118058 * ___Players_8;
	// UnityEngine.Transform ExplosionBullet::Stage
	Transform_t3275118058 * ___Stage_9;
	// UnityEngine.Vector3 ExplosionBullet::correctPlayerPos
	Vector3_t2243707580  ___correctPlayerPos_10;
	// UnityEngine.Quaternion ExplosionBullet::correctPlayerRot
	Quaternion_t4030073918  ___correctPlayerRot_11;

public:
	inline static int32_t get_offset_of_ParentBulletId_3() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___ParentBulletId_3)); }
	inline int32_t get_ParentBulletId_3() const { return ___ParentBulletId_3; }
	inline int32_t* get_address_of_ParentBulletId_3() { return &___ParentBulletId_3; }
	inline void set_ParentBulletId_3(int32_t value)
	{
		___ParentBulletId_3 = value;
	}

	inline static int32_t get_offset_of_ParentTankId_4() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___ParentTankId_4)); }
	inline int32_t get_ParentTankId_4() const { return ___ParentTankId_4; }
	inline int32_t* get_address_of_ParentTankId_4() { return &___ParentTankId_4; }
	inline void set_ParentTankId_4(int32_t value)
	{
		___ParentTankId_4 = value;
	}

	inline static int32_t get_offset_of_dead_5() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___dead_5)); }
	inline bool get_dead_5() const { return ___dead_5; }
	inline bool* get_address_of_dead_5() { return &___dead_5; }
	inline void set_dead_5(bool value)
	{
		___dead_5 = value;
	}

	inline static int32_t get_offset_of_ExplosionRadius_6() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___ExplosionRadius_6)); }
	inline int32_t get_ExplosionRadius_6() const { return ___ExplosionRadius_6; }
	inline int32_t* get_address_of_ExplosionRadius_6() { return &___ExplosionRadius_6; }
	inline void set_ExplosionRadius_6(int32_t value)
	{
		___ExplosionRadius_6 = value;
	}

	inline static int32_t get_offset_of_ExplosionDmg_7() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___ExplosionDmg_7)); }
	inline int32_t get_ExplosionDmg_7() const { return ___ExplosionDmg_7; }
	inline int32_t* get_address_of_ExplosionDmg_7() { return &___ExplosionDmg_7; }
	inline void set_ExplosionDmg_7(int32_t value)
	{
		___ExplosionDmg_7 = value;
	}

	inline static int32_t get_offset_of_Players_8() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___Players_8)); }
	inline Transform_t3275118058 * get_Players_8() const { return ___Players_8; }
	inline Transform_t3275118058 ** get_address_of_Players_8() { return &___Players_8; }
	inline void set_Players_8(Transform_t3275118058 * value)
	{
		___Players_8 = value;
		Il2CppCodeGenWriteBarrier(&___Players_8, value);
	}

	inline static int32_t get_offset_of_Stage_9() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___Stage_9)); }
	inline Transform_t3275118058 * get_Stage_9() const { return ___Stage_9; }
	inline Transform_t3275118058 ** get_address_of_Stage_9() { return &___Stage_9; }
	inline void set_Stage_9(Transform_t3275118058 * value)
	{
		___Stage_9 = value;
		Il2CppCodeGenWriteBarrier(&___Stage_9, value);
	}

	inline static int32_t get_offset_of_correctPlayerPos_10() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___correctPlayerPos_10)); }
	inline Vector3_t2243707580  get_correctPlayerPos_10() const { return ___correctPlayerPos_10; }
	inline Vector3_t2243707580 * get_address_of_correctPlayerPos_10() { return &___correctPlayerPos_10; }
	inline void set_correctPlayerPos_10(Vector3_t2243707580  value)
	{
		___correctPlayerPos_10 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_11() { return static_cast<int32_t>(offsetof(ExplosionBullet_t1205983453, ___correctPlayerRot_11)); }
	inline Quaternion_t4030073918  get_correctPlayerRot_11() const { return ___correctPlayerRot_11; }
	inline Quaternion_t4030073918 * get_address_of_correctPlayerRot_11() { return &___correctPlayerRot_11; }
	inline void set_correctPlayerRot_11(Quaternion_t4030073918  value)
	{
		___correctPlayerRot_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
