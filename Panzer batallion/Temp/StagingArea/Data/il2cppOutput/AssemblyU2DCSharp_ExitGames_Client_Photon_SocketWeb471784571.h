#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t4074028506;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator0
struct  U3CReceiveLoopU3Ec__Iterator0_t471784571  : public Il2CppObject
{
public:
	// System.Byte[] ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator0::<inBuff>__0
	ByteU5BU5D_t3397334013* ___U3CinBuffU3E__0_0;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator0::$this
	SocketWebTcp_t4074028506 * ___U24this_1;
	// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CinBuffU3E__0_0() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator0_t471784571, ___U3CinBuffU3E__0_0)); }
	inline ByteU5BU5D_t3397334013* get_U3CinBuffU3E__0_0() const { return ___U3CinBuffU3E__0_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CinBuffU3E__0_0() { return &___U3CinBuffU3E__0_0; }
	inline void set_U3CinBuffU3E__0_0(ByteU5BU5D_t3397334013* value)
	{
		___U3CinBuffU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinBuffU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator0_t471784571, ___U24this_1)); }
	inline SocketWebTcp_t4074028506 * get_U24this_1() const { return ___U24this_1; }
	inline SocketWebTcp_t4074028506 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(SocketWebTcp_t4074028506 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator0_t471784571, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator0_t471784571, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ec__Iterator0_t471784571, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
