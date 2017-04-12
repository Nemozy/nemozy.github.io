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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConnectManager
struct  ConnectManager_t2737051067  : public Il2CppObject
{
public:

public:
};

struct ConnectManager_t2737051067_StaticFields
{
public:
	// System.String ConnectManager::GameVersion
	String_t* ___GameVersion_0;

public:
	inline static int32_t get_offset_of_GameVersion_0() { return static_cast<int32_t>(offsetof(ConnectManager_t2737051067_StaticFields, ___GameVersion_0)); }
	inline String_t* get_GameVersion_0() const { return ___GameVersion_0; }
	inline String_t** get_address_of_GameVersion_0() { return &___GameVersion_0; }
	inline void set_GameVersion_0(String_t* value)
	{
		___GameVersion_0 = value;
		Il2CppCodeGenWriteBarrier(&___GameVersion_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
