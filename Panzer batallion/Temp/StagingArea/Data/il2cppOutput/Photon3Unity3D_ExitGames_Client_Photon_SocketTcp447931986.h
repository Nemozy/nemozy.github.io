﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Object
struct Il2CppObject;

#include "Photon3Unity3D_ExitGames_Client_Photon_IPhotonSocke429031990.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketTcp
struct  SocketTcp_t447931986  : public IPhotonSocket_t429031990
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcp::sock
	Socket_t3821512045 * ___sock_9;
	// System.Object ExitGames.Client.Photon.SocketTcp::syncer
	Il2CppObject * ___syncer_10;

public:
	inline static int32_t get_offset_of_sock_9() { return static_cast<int32_t>(offsetof(SocketTcp_t447931986, ___sock_9)); }
	inline Socket_t3821512045 * get_sock_9() const { return ___sock_9; }
	inline Socket_t3821512045 ** get_address_of_sock_9() { return &___sock_9; }
	inline void set_sock_9(Socket_t3821512045 * value)
	{
		___sock_9 = value;
		Il2CppCodeGenWriteBarrier(&___sock_9, value);
	}

	inline static int32_t get_offset_of_syncer_10() { return static_cast<int32_t>(offsetof(SocketTcp_t447931986, ___syncer_10)); }
	inline Il2CppObject * get_syncer_10() const { return ___syncer_10; }
	inline Il2CppObject ** get_address_of_syncer_10() { return &___syncer_10; }
	inline void set_syncer_10(Il2CppObject * value)
	{
		___syncer_10 = value;
		Il2CppCodeGenWriteBarrier(&___syncer_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif