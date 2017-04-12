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

// MenuController
struct  MenuController_t848154101  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.Transform MenuController::OnlineBox_text
	Transform_t3275118058 * ___OnlineBox_text_3;
	// UnityEngine.Transform MenuController::LobiesBox_text
	Transform_t3275118058 * ___LobiesBox_text_4;

public:
	inline static int32_t get_offset_of_OnlineBox_text_3() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___OnlineBox_text_3)); }
	inline Transform_t3275118058 * get_OnlineBox_text_3() const { return ___OnlineBox_text_3; }
	inline Transform_t3275118058 ** get_address_of_OnlineBox_text_3() { return &___OnlineBox_text_3; }
	inline void set_OnlineBox_text_3(Transform_t3275118058 * value)
	{
		___OnlineBox_text_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnlineBox_text_3, value);
	}

	inline static int32_t get_offset_of_LobiesBox_text_4() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___LobiesBox_text_4)); }
	inline Transform_t3275118058 * get_LobiesBox_text_4() const { return ___LobiesBox_text_4; }
	inline Transform_t3275118058 ** get_address_of_LobiesBox_text_4() { return &___LobiesBox_text_4; }
	inline void set_LobiesBox_text_4(Transform_t3275118058 * value)
	{
		___LobiesBox_text_4 = value;
		Il2CppCodeGenWriteBarrier(&___LobiesBox_text_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
