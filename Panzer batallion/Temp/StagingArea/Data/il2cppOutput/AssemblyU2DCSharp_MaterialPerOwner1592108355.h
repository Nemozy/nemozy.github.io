﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t257310565;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialPerOwner
struct  MaterialPerOwner_t1592108355  : public MonoBehaviour_t3914164484
{
public:
	// System.Int32 MaterialPerOwner::assignedColorForUserId
	int32_t ___assignedColorForUserId_3;
	// UnityEngine.Renderer MaterialPerOwner::m_Renderer
	Renderer_t257310565 * ___m_Renderer_4;

public:
	inline static int32_t get_offset_of_assignedColorForUserId_3() { return static_cast<int32_t>(offsetof(MaterialPerOwner_t1592108355, ___assignedColorForUserId_3)); }
	inline int32_t get_assignedColorForUserId_3() const { return ___assignedColorForUserId_3; }
	inline int32_t* get_address_of_assignedColorForUserId_3() { return &___assignedColorForUserId_3; }
	inline void set_assignedColorForUserId_3(int32_t value)
	{
		___assignedColorForUserId_3 = value;
	}

	inline static int32_t get_offset_of_m_Renderer_4() { return static_cast<int32_t>(offsetof(MaterialPerOwner_t1592108355, ___m_Renderer_4)); }
	inline Renderer_t257310565 * get_m_Renderer_4() const { return ___m_Renderer_4; }
	inline Renderer_t257310565 ** get_address_of_m_Renderer_4() { return &___m_Renderer_4; }
	inline void set_m_Renderer_4(Renderer_t257310565 * value)
	{
		___m_Renderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
