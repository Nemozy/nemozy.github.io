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
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponController
struct  WeaponController_t2952407768  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.Transform WeaponController::ammoNeutralParent
	Transform_t3275118058 * ___ammoNeutralParent_3;
	// UnityEngine.Transform WeaponController::Owner
	Transform_t3275118058 * ___Owner_4;
	// UnityEngine.Transform WeaponController::Stage
	Transform_t3275118058 * ___Stage_5;
	// System.String WeaponController::NameBullet
	String_t* ___NameBullet_6;
	// System.Int32 WeaponController::RadiusDmg
	int32_t ___RadiusDmg_7;

public:
	inline static int32_t get_offset_of_ammoNeutralParent_3() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___ammoNeutralParent_3)); }
	inline Transform_t3275118058 * get_ammoNeutralParent_3() const { return ___ammoNeutralParent_3; }
	inline Transform_t3275118058 ** get_address_of_ammoNeutralParent_3() { return &___ammoNeutralParent_3; }
	inline void set_ammoNeutralParent_3(Transform_t3275118058 * value)
	{
		___ammoNeutralParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___ammoNeutralParent_3, value);
	}

	inline static int32_t get_offset_of_Owner_4() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___Owner_4)); }
	inline Transform_t3275118058 * get_Owner_4() const { return ___Owner_4; }
	inline Transform_t3275118058 ** get_address_of_Owner_4() { return &___Owner_4; }
	inline void set_Owner_4(Transform_t3275118058 * value)
	{
		___Owner_4 = value;
		Il2CppCodeGenWriteBarrier(&___Owner_4, value);
	}

	inline static int32_t get_offset_of_Stage_5() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___Stage_5)); }
	inline Transform_t3275118058 * get_Stage_5() const { return ___Stage_5; }
	inline Transform_t3275118058 ** get_address_of_Stage_5() { return &___Stage_5; }
	inline void set_Stage_5(Transform_t3275118058 * value)
	{
		___Stage_5 = value;
		Il2CppCodeGenWriteBarrier(&___Stage_5, value);
	}

	inline static int32_t get_offset_of_NameBullet_6() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___NameBullet_6)); }
	inline String_t* get_NameBullet_6() const { return ___NameBullet_6; }
	inline String_t** get_address_of_NameBullet_6() { return &___NameBullet_6; }
	inline void set_NameBullet_6(String_t* value)
	{
		___NameBullet_6 = value;
		Il2CppCodeGenWriteBarrier(&___NameBullet_6, value);
	}

	inline static int32_t get_offset_of_RadiusDmg_7() { return static_cast<int32_t>(offsetof(WeaponController_t2952407768, ___RadiusDmg_7)); }
	inline int32_t get_RadiusDmg_7() const { return ___RadiusDmg_7; }
	inline int32_t* get_address_of_RadiusDmg_7() { return &___RadiusDmg_7; }
	inline void set_RadiusDmg_7(int32_t value)
	{
		___RadiusDmg_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
