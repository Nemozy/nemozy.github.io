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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tutorial.Worm
struct  Worm_t494299549  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Tutorial.Worm::weapon
	Transform_t3275118058 * ___weapon_2;
	// System.Single Tutorial.Worm::weaponRotationSpeed
	float ___weaponRotationSpeed_3;
	// System.Single Tutorial.Worm::weaponMinAngle
	float ___weaponMinAngle_4;
	// System.Single Tutorial.Worm::weaponMaxAngle
	float ___weaponMaxAngle_5;

public:
	inline static int32_t get_offset_of_weapon_2() { return static_cast<int32_t>(offsetof(Worm_t494299549, ___weapon_2)); }
	inline Transform_t3275118058 * get_weapon_2() const { return ___weapon_2; }
	inline Transform_t3275118058 ** get_address_of_weapon_2() { return &___weapon_2; }
	inline void set_weapon_2(Transform_t3275118058 * value)
	{
		___weapon_2 = value;
		Il2CppCodeGenWriteBarrier(&___weapon_2, value);
	}

	inline static int32_t get_offset_of_weaponRotationSpeed_3() { return static_cast<int32_t>(offsetof(Worm_t494299549, ___weaponRotationSpeed_3)); }
	inline float get_weaponRotationSpeed_3() const { return ___weaponRotationSpeed_3; }
	inline float* get_address_of_weaponRotationSpeed_3() { return &___weaponRotationSpeed_3; }
	inline void set_weaponRotationSpeed_3(float value)
	{
		___weaponRotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_weaponMinAngle_4() { return static_cast<int32_t>(offsetof(Worm_t494299549, ___weaponMinAngle_4)); }
	inline float get_weaponMinAngle_4() const { return ___weaponMinAngle_4; }
	inline float* get_address_of_weaponMinAngle_4() { return &___weaponMinAngle_4; }
	inline void set_weaponMinAngle_4(float value)
	{
		___weaponMinAngle_4 = value;
	}

	inline static int32_t get_offset_of_weaponMaxAngle_5() { return static_cast<int32_t>(offsetof(Worm_t494299549, ___weaponMaxAngle_5)); }
	inline float get_weaponMaxAngle_5() const { return ___weaponMaxAngle_5; }
	inline float* get_address_of_weaponMaxAngle_5() { return &___weaponMaxAngle_5; }
	inline void set_weaponMaxAngle_5(float value)
	{
		___weaponMaxAngle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
