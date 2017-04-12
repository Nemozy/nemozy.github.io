#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UserInfo/FuelInfo
struct FuelInfo_t2360665636;
// UserInfo/HpInfo
struct HpInfo_t305554104;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserInfo/UnitInfo
struct  UnitInfo_t3983494790  : public Il2CppObject
{
public:
	// UserInfo/FuelInfo UserInfo/UnitInfo::<Fuel>k__BackingField
	FuelInfo_t2360665636 * ___U3CFuelU3Ek__BackingField_0;
	// UserInfo/HpInfo UserInfo/UnitInfo::<Hp>k__BackingField
	HpInfo_t305554104 * ___U3CHpU3Ek__BackingField_1;
	// UnityEngine.Transform UserInfo/UnitInfo::<TransformUnit>k__BackingField
	Transform_t3275118058 * ___U3CTransformUnitU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFuelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnitInfo_t3983494790, ___U3CFuelU3Ek__BackingField_0)); }
	inline FuelInfo_t2360665636 * get_U3CFuelU3Ek__BackingField_0() const { return ___U3CFuelU3Ek__BackingField_0; }
	inline FuelInfo_t2360665636 ** get_address_of_U3CFuelU3Ek__BackingField_0() { return &___U3CFuelU3Ek__BackingField_0; }
	inline void set_U3CFuelU3Ek__BackingField_0(FuelInfo_t2360665636 * value)
	{
		___U3CFuelU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFuelU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CHpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnitInfo_t3983494790, ___U3CHpU3Ek__BackingField_1)); }
	inline HpInfo_t305554104 * get_U3CHpU3Ek__BackingField_1() const { return ___U3CHpU3Ek__BackingField_1; }
	inline HpInfo_t305554104 ** get_address_of_U3CHpU3Ek__BackingField_1() { return &___U3CHpU3Ek__BackingField_1; }
	inline void set_U3CHpU3Ek__BackingField_1(HpInfo_t305554104 * value)
	{
		___U3CHpU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHpU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CTransformUnitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnitInfo_t3983494790, ___U3CTransformUnitU3Ek__BackingField_2)); }
	inline Transform_t3275118058 * get_U3CTransformUnitU3Ek__BackingField_2() const { return ___U3CTransformUnitU3Ek__BackingField_2; }
	inline Transform_t3275118058 ** get_address_of_U3CTransformUnitU3Ek__BackingField_2() { return &___U3CTransformUnitU3Ek__BackingField_2; }
	inline void set_U3CTransformUnitU3Ek__BackingField_2(Transform_t3275118058 * value)
	{
		___U3CTransformUnitU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTransformUnitU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
