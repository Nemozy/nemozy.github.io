﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WWW
struct WWW_t2919945039;

#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPing3196351980.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PingHttp
struct  PingHttp_t4179463004  : public PhotonPing_t3196351980
{
public:
	// UnityEngine.WWW PingHttp::webRequest
	WWW_t2919945039 * ___webRequest_6;

public:
	inline static int32_t get_offset_of_webRequest_6() { return static_cast<int32_t>(offsetof(PingHttp_t4179463004, ___webRequest_6)); }
	inline WWW_t2919945039 * get_webRequest_6() const { return ___webRequest_6; }
	inline WWW_t2919945039 ** get_address_of_webRequest_6() { return &___webRequest_6; }
	inline void set_webRequest_6(WWW_t2919945039 * value)
	{
		___webRequest_6 = value;
		Il2CppCodeGenWriteBarrier(&___webRequest_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
