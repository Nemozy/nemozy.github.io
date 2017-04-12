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
// System.Collections.Generic.Dictionary`2<System.String,GameInfo/Weapon>
struct Dictionary_2_t1716731161;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameInfo/WeaponsInventoryInfo
struct  WeaponsInventoryInfo_t1479328260  : public Il2CppObject
{
public:
	// System.String GameInfo/WeaponsInventoryInfo::secretKey
	String_t* ___secretKey_0;
	// System.Collections.Generic.Dictionary`2<System.String,GameInfo/Weapon> GameInfo/WeaponsInventoryInfo::AllWeapons
	Dictionary_2_t1716731161 * ___AllWeapons_3;

public:
	inline static int32_t get_offset_of_secretKey_0() { return static_cast<int32_t>(offsetof(WeaponsInventoryInfo_t1479328260, ___secretKey_0)); }
	inline String_t* get_secretKey_0() const { return ___secretKey_0; }
	inline String_t** get_address_of_secretKey_0() { return &___secretKey_0; }
	inline void set_secretKey_0(String_t* value)
	{
		___secretKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___secretKey_0, value);
	}

	inline static int32_t get_offset_of_AllWeapons_3() { return static_cast<int32_t>(offsetof(WeaponsInventoryInfo_t1479328260, ___AllWeapons_3)); }
	inline Dictionary_2_t1716731161 * get_AllWeapons_3() const { return ___AllWeapons_3; }
	inline Dictionary_2_t1716731161 ** get_address_of_AllWeapons_3() { return &___AllWeapons_3; }
	inline void set_AllWeapons_3(Dictionary_2_t1716731161 * value)
	{
		___AllWeapons_3 = value;
		Il2CppCodeGenWriteBarrier(&___AllWeapons_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
