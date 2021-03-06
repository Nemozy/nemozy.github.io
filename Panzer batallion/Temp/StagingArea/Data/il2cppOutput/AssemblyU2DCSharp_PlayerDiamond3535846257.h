﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// PhotonView
struct PhotonView_t899863581;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerDiamond
struct  PlayerDiamond_t3535846257  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform PlayerDiamond::HeadTransform
	Transform_t3275118058 * ___HeadTransform_2;
	// System.Single PlayerDiamond::HeightOffset
	float ___HeightOffset_3;
	// PhotonView PlayerDiamond::m_PhotonView
	PhotonView_t899863581 * ___m_PhotonView_4;
	// UnityEngine.Renderer PlayerDiamond::m_DiamondRenderer
	Renderer_t257310565 * ___m_DiamondRenderer_5;
	// System.Single PlayerDiamond::m_Rotation
	float ___m_Rotation_6;
	// System.Single PlayerDiamond::m_Height
	float ___m_Height_7;

public:
	inline static int32_t get_offset_of_HeadTransform_2() { return static_cast<int32_t>(offsetof(PlayerDiamond_t3535846257, ___HeadTransform_2)); }
	inline Transform_t3275118058 * get_HeadTransform_2() const { return ___HeadTransform_2; }
	inline Transform_t3275118058 ** get_address_of_HeadTransform_2() { return &___HeadTransform_2; }
	inline void set_HeadTransform_2(Transform_t3275118058 * value)
	{
		___HeadTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___HeadTransform_2, value);
	}

	inline static int32_t get_offset_of_HeightOffset_3() { return static_cast<int32_t>(offsetof(PlayerDiamond_t3535846257, ___HeightOffset_3)); }
	inline float get_HeightOffset_3() const { return ___HeightOffset_3; }
	inline float* get_address_of_HeightOffset_3() { return &___HeightOffset_3; }
	inline void set_HeightOffset_3(float value)
	{
		___HeightOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_PhotonView_4() { return static_cast<int32_t>(offsetof(PlayerDiamond_t3535846257, ___m_PhotonView_4)); }
	inline PhotonView_t899863581 * get_m_PhotonView_4() const { return ___m_PhotonView_4; }
	inline PhotonView_t899863581 ** get_address_of_m_PhotonView_4() { return &___m_PhotonView_4; }
	inline void set_m_PhotonView_4(PhotonView_t899863581 * value)
	{
		___m_PhotonView_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_4, value);
	}

	inline static int32_t get_offset_of_m_DiamondRenderer_5() { return static_cast<int32_t>(offsetof(PlayerDiamond_t3535846257, ___m_DiamondRenderer_5)); }
	inline Renderer_t257310565 * get_m_DiamondRenderer_5() const { return ___m_DiamondRenderer_5; }
	inline Renderer_t257310565 ** get_address_of_m_DiamondRenderer_5() { return &___m_DiamondRenderer_5; }
	inline void set_m_DiamondRenderer_5(Renderer_t257310565 * value)
	{
		___m_DiamondRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_DiamondRenderer_5, value);
	}

	inline static int32_t get_offset_of_m_Rotation_6() { return static_cast<int32_t>(offsetof(PlayerDiamond_t3535846257, ___m_Rotation_6)); }
	inline float get_m_Rotation_6() const { return ___m_Rotation_6; }
	inline float* get_address_of_m_Rotation_6() { return &___m_Rotation_6; }
	inline void set_m_Rotation_6(float value)
	{
		___m_Rotation_6 = value;
	}

	inline static int32_t get_offset_of_m_Height_7() { return static_cast<int32_t>(offsetof(PlayerDiamond_t3535846257, ___m_Height_7)); }
	inline float get_m_Height_7() const { return ___m_Height_7; }
	inline float* get_address_of_m_Height_7() { return &___m_Height_7; }
	inline void set_m_Height_7(float value)
	{
		___m_Height_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
