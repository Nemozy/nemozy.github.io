#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullet
struct  Bullet_t2590115616  : public MonoBehaviour_t3914164484
{
public:
	// System.Int32 Bullet::Id
	int32_t ___Id_3;
	// System.Int32 Bullet::ParentTankId
	int32_t ___ParentTankId_4;
	// System.String Bullet::NameExplosion
	String_t* ___NameExplosion_5;
	// System.Single Bullet::Delay
	float ___Delay_6;
	// System.Int32 Bullet::ScaleSizeExplosion
	int32_t ___ScaleSizeExplosion_7;
	// System.String Bullet::PlayerName
	String_t* ___PlayerName_8;
	// System.Single Bullet::DisableDuration
	float ___DisableDuration_9;
	// UnityEngine.Vector3 Bullet::correctPlayerPos
	Vector3_t2243707580  ___correctPlayerPos_10;
	// UnityEngine.Quaternion Bullet::correctPlayerRot
	Quaternion_t4030073918  ___correctPlayerRot_11;

public:
	inline static int32_t get_offset_of_Id_3() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___Id_3)); }
	inline int32_t get_Id_3() const { return ___Id_3; }
	inline int32_t* get_address_of_Id_3() { return &___Id_3; }
	inline void set_Id_3(int32_t value)
	{
		___Id_3 = value;
	}

	inline static int32_t get_offset_of_ParentTankId_4() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___ParentTankId_4)); }
	inline int32_t get_ParentTankId_4() const { return ___ParentTankId_4; }
	inline int32_t* get_address_of_ParentTankId_4() { return &___ParentTankId_4; }
	inline void set_ParentTankId_4(int32_t value)
	{
		___ParentTankId_4 = value;
	}

	inline static int32_t get_offset_of_NameExplosion_5() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___NameExplosion_5)); }
	inline String_t* get_NameExplosion_5() const { return ___NameExplosion_5; }
	inline String_t** get_address_of_NameExplosion_5() { return &___NameExplosion_5; }
	inline void set_NameExplosion_5(String_t* value)
	{
		___NameExplosion_5 = value;
		Il2CppCodeGenWriteBarrier(&___NameExplosion_5, value);
	}

	inline static int32_t get_offset_of_Delay_6() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___Delay_6)); }
	inline float get_Delay_6() const { return ___Delay_6; }
	inline float* get_address_of_Delay_6() { return &___Delay_6; }
	inline void set_Delay_6(float value)
	{
		___Delay_6 = value;
	}

	inline static int32_t get_offset_of_ScaleSizeExplosion_7() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___ScaleSizeExplosion_7)); }
	inline int32_t get_ScaleSizeExplosion_7() const { return ___ScaleSizeExplosion_7; }
	inline int32_t* get_address_of_ScaleSizeExplosion_7() { return &___ScaleSizeExplosion_7; }
	inline void set_ScaleSizeExplosion_7(int32_t value)
	{
		___ScaleSizeExplosion_7 = value;
	}

	inline static int32_t get_offset_of_PlayerName_8() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___PlayerName_8)); }
	inline String_t* get_PlayerName_8() const { return ___PlayerName_8; }
	inline String_t** get_address_of_PlayerName_8() { return &___PlayerName_8; }
	inline void set_PlayerName_8(String_t* value)
	{
		___PlayerName_8 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerName_8, value);
	}

	inline static int32_t get_offset_of_DisableDuration_9() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___DisableDuration_9)); }
	inline float get_DisableDuration_9() const { return ___DisableDuration_9; }
	inline float* get_address_of_DisableDuration_9() { return &___DisableDuration_9; }
	inline void set_DisableDuration_9(float value)
	{
		___DisableDuration_9 = value;
	}

	inline static int32_t get_offset_of_correctPlayerPos_10() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___correctPlayerPos_10)); }
	inline Vector3_t2243707580  get_correctPlayerPos_10() const { return ___correctPlayerPos_10; }
	inline Vector3_t2243707580 * get_address_of_correctPlayerPos_10() { return &___correctPlayerPos_10; }
	inline void set_correctPlayerPos_10(Vector3_t2243707580  value)
	{
		___correctPlayerPos_10 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_11() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___correctPlayerRot_11)); }
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
