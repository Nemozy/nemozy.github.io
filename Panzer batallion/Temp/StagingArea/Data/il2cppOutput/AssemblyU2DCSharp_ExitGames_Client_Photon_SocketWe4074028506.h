#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocket
struct WebSocket_t1213274227;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "Photon3Unity3D_ExitGames_Client_Photon_IPhotonSocke429031990.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketWebTcp
struct  SocketWebTcp_t4074028506  : public IPhotonSocket_t429031990
{
public:
	// WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_t1213274227 * ___sock_9;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	Il2CppObject * ___syncer_10;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_t1756533147 * ___websocketConnectionObject_11;

public:
	inline static int32_t get_offset_of_sock_9() { return static_cast<int32_t>(offsetof(SocketWebTcp_t4074028506, ___sock_9)); }
	inline WebSocket_t1213274227 * get_sock_9() const { return ___sock_9; }
	inline WebSocket_t1213274227 ** get_address_of_sock_9() { return &___sock_9; }
	inline void set_sock_9(WebSocket_t1213274227 * value)
	{
		___sock_9 = value;
		Il2CppCodeGenWriteBarrier(&___sock_9, value);
	}

	inline static int32_t get_offset_of_syncer_10() { return static_cast<int32_t>(offsetof(SocketWebTcp_t4074028506, ___syncer_10)); }
	inline Il2CppObject * get_syncer_10() const { return ___syncer_10; }
	inline Il2CppObject ** get_address_of_syncer_10() { return &___syncer_10; }
	inline void set_syncer_10(Il2CppObject * value)
	{
		___syncer_10 = value;
		Il2CppCodeGenWriteBarrier(&___syncer_10, value);
	}

	inline static int32_t get_offset_of_websocketConnectionObject_11() { return static_cast<int32_t>(offsetof(SocketWebTcp_t4074028506, ___websocketConnectionObject_11)); }
	inline GameObject_t1756533147 * get_websocketConnectionObject_11() const { return ___websocketConnectionObject_11; }
	inline GameObject_t1756533147 ** get_address_of_websocketConnectionObject_11() { return &___websocketConnectionObject_11; }
	inline void set_websocketConnectionObject_11(GameObject_t1756533147 * value)
	{
		___websocketConnectionObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___websocketConnectionObject_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
