#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GameInfo/WeaponCrypt>
struct List_1_t255737279;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameInfo/WeaponsInventoryInfoLoading
struct  WeaponsInventoryInfoLoading_t957212952  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<GameInfo/WeaponCrypt> GameInfo/WeaponsInventoryInfoLoading::Weapons
	List_1_t255737279 * ___Weapons_0;

public:
	inline static int32_t get_offset_of_Weapons_0() { return static_cast<int32_t>(offsetof(WeaponsInventoryInfoLoading_t957212952, ___Weapons_0)); }
	inline List_1_t255737279 * get_Weapons_0() const { return ___Weapons_0; }
	inline List_1_t255737279 ** get_address_of_Weapons_0() { return &___Weapons_0; }
	inline void set_Weapons_0(List_1_t255737279 * value)
	{
		___Weapons_0 = value;
		Il2CppCodeGenWriteBarrier(&___Weapons_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
