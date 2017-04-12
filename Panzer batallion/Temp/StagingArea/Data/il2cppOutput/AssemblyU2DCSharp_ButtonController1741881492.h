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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonController
struct  ButtonController_t1741881492  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.Transform ButtonController::objConntrolled
	Transform_t3275118058 * ___objConntrolled_3;

public:
	inline static int32_t get_offset_of_objConntrolled_3() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___objConntrolled_3)); }
	inline Transform_t3275118058 * get_objConntrolled_3() const { return ___objConntrolled_3; }
	inline Transform_t3275118058 ** get_address_of_objConntrolled_3() { return &___objConntrolled_3; }
	inline void set_objConntrolled_3(Transform_t3275118058 * value)
	{
		___objConntrolled_3 = value;
		Il2CppCodeGenWriteBarrier(&___objConntrolled_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
