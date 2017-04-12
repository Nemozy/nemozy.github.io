#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t3220183178;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "AssemblyU2DCSharp_BinaryImage1602720598.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestructibleSprite
struct  DestructibleSprite_t3534315683  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.Texture2D DestructibleSprite::tex
	Texture2D_t3542995729 * ___tex_3;
	// System.Boolean DestructibleSprite::doInit
	bool ___doInit_4;
	// System.Boolean DestructibleSprite::doSplit
	bool ___doSplit_5;
	// System.Boolean DestructibleSprite::doRefresh
	bool ___doRefresh_6;
	// System.Boolean DestructibleSprite::doBI
	bool ___doBI_7;
	// System.Boolean DestructibleSprite::doErosion
	bool ___doErosion_8;
	// System.Boolean DestructibleSprite::doDilation
	bool ___doDilation_9;
	// System.Boolean DestructibleSprite::doSub
	bool ___doSub_10;
	// System.Boolean DestructibleSprite::doSub2
	bool ___doSub2_11;
	// System.Boolean DestructibleSprite::doVert
	bool ___doVert_12;
	// System.Boolean DestructibleSprite::doVertLong
	bool ___doVertLong_13;
	// System.Boolean DestructibleSprite::doComplete
	bool ___doComplete_14;
	// System.Single DestructibleSprite::pixelsToUnits
	float ___pixelsToUnits_15;
	// System.Single DestructibleSprite::pixelOffset
	float ___pixelOffset_16;
	// BinaryImage DestructibleSprite::binaryImage
	BinaryImage_t1602720598  ___binaryImage_17;
	// UnityEngine.PolygonCollider2D DestructibleSprite::poly
	PolygonCollider2D_t3220183178 * ___poly_18;
	// System.Single DestructibleSprite::xBounds
	float ___xBounds_19;
	// System.Single DestructibleSprite::yBounds
	float ___yBounds_20;
	// System.Int32 DestructibleSprite::islandCount
	int32_t ___islandCount_21;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> DestructibleSprite::tempPath
	List_1_t1612828711 * ___tempPath_22;
	// UnityEngine.Vector2 DestructibleSprite::endPoint
	Vector2_t2243707579  ___endPoint_23;

public:
	inline static int32_t get_offset_of_tex_3() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___tex_3)); }
	inline Texture2D_t3542995729 * get_tex_3() const { return ___tex_3; }
	inline Texture2D_t3542995729 ** get_address_of_tex_3() { return &___tex_3; }
	inline void set_tex_3(Texture2D_t3542995729 * value)
	{
		___tex_3 = value;
		Il2CppCodeGenWriteBarrier(&___tex_3, value);
	}

	inline static int32_t get_offset_of_doInit_4() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doInit_4)); }
	inline bool get_doInit_4() const { return ___doInit_4; }
	inline bool* get_address_of_doInit_4() { return &___doInit_4; }
	inline void set_doInit_4(bool value)
	{
		___doInit_4 = value;
	}

	inline static int32_t get_offset_of_doSplit_5() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doSplit_5)); }
	inline bool get_doSplit_5() const { return ___doSplit_5; }
	inline bool* get_address_of_doSplit_5() { return &___doSplit_5; }
	inline void set_doSplit_5(bool value)
	{
		___doSplit_5 = value;
	}

	inline static int32_t get_offset_of_doRefresh_6() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doRefresh_6)); }
	inline bool get_doRefresh_6() const { return ___doRefresh_6; }
	inline bool* get_address_of_doRefresh_6() { return &___doRefresh_6; }
	inline void set_doRefresh_6(bool value)
	{
		___doRefresh_6 = value;
	}

	inline static int32_t get_offset_of_doBI_7() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doBI_7)); }
	inline bool get_doBI_7() const { return ___doBI_7; }
	inline bool* get_address_of_doBI_7() { return &___doBI_7; }
	inline void set_doBI_7(bool value)
	{
		___doBI_7 = value;
	}

	inline static int32_t get_offset_of_doErosion_8() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doErosion_8)); }
	inline bool get_doErosion_8() const { return ___doErosion_8; }
	inline bool* get_address_of_doErosion_8() { return &___doErosion_8; }
	inline void set_doErosion_8(bool value)
	{
		___doErosion_8 = value;
	}

	inline static int32_t get_offset_of_doDilation_9() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doDilation_9)); }
	inline bool get_doDilation_9() const { return ___doDilation_9; }
	inline bool* get_address_of_doDilation_9() { return &___doDilation_9; }
	inline void set_doDilation_9(bool value)
	{
		___doDilation_9 = value;
	}

	inline static int32_t get_offset_of_doSub_10() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doSub_10)); }
	inline bool get_doSub_10() const { return ___doSub_10; }
	inline bool* get_address_of_doSub_10() { return &___doSub_10; }
	inline void set_doSub_10(bool value)
	{
		___doSub_10 = value;
	}

	inline static int32_t get_offset_of_doSub2_11() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doSub2_11)); }
	inline bool get_doSub2_11() const { return ___doSub2_11; }
	inline bool* get_address_of_doSub2_11() { return &___doSub2_11; }
	inline void set_doSub2_11(bool value)
	{
		___doSub2_11 = value;
	}

	inline static int32_t get_offset_of_doVert_12() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doVert_12)); }
	inline bool get_doVert_12() const { return ___doVert_12; }
	inline bool* get_address_of_doVert_12() { return &___doVert_12; }
	inline void set_doVert_12(bool value)
	{
		___doVert_12 = value;
	}

	inline static int32_t get_offset_of_doVertLong_13() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doVertLong_13)); }
	inline bool get_doVertLong_13() const { return ___doVertLong_13; }
	inline bool* get_address_of_doVertLong_13() { return &___doVertLong_13; }
	inline void set_doVertLong_13(bool value)
	{
		___doVertLong_13 = value;
	}

	inline static int32_t get_offset_of_doComplete_14() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___doComplete_14)); }
	inline bool get_doComplete_14() const { return ___doComplete_14; }
	inline bool* get_address_of_doComplete_14() { return &___doComplete_14; }
	inline void set_doComplete_14(bool value)
	{
		___doComplete_14 = value;
	}

	inline static int32_t get_offset_of_pixelsToUnits_15() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___pixelsToUnits_15)); }
	inline float get_pixelsToUnits_15() const { return ___pixelsToUnits_15; }
	inline float* get_address_of_pixelsToUnits_15() { return &___pixelsToUnits_15; }
	inline void set_pixelsToUnits_15(float value)
	{
		___pixelsToUnits_15 = value;
	}

	inline static int32_t get_offset_of_pixelOffset_16() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___pixelOffset_16)); }
	inline float get_pixelOffset_16() const { return ___pixelOffset_16; }
	inline float* get_address_of_pixelOffset_16() { return &___pixelOffset_16; }
	inline void set_pixelOffset_16(float value)
	{
		___pixelOffset_16 = value;
	}

	inline static int32_t get_offset_of_binaryImage_17() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___binaryImage_17)); }
	inline BinaryImage_t1602720598  get_binaryImage_17() const { return ___binaryImage_17; }
	inline BinaryImage_t1602720598 * get_address_of_binaryImage_17() { return &___binaryImage_17; }
	inline void set_binaryImage_17(BinaryImage_t1602720598  value)
	{
		___binaryImage_17 = value;
	}

	inline static int32_t get_offset_of_poly_18() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___poly_18)); }
	inline PolygonCollider2D_t3220183178 * get_poly_18() const { return ___poly_18; }
	inline PolygonCollider2D_t3220183178 ** get_address_of_poly_18() { return &___poly_18; }
	inline void set_poly_18(PolygonCollider2D_t3220183178 * value)
	{
		___poly_18 = value;
		Il2CppCodeGenWriteBarrier(&___poly_18, value);
	}

	inline static int32_t get_offset_of_xBounds_19() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___xBounds_19)); }
	inline float get_xBounds_19() const { return ___xBounds_19; }
	inline float* get_address_of_xBounds_19() { return &___xBounds_19; }
	inline void set_xBounds_19(float value)
	{
		___xBounds_19 = value;
	}

	inline static int32_t get_offset_of_yBounds_20() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___yBounds_20)); }
	inline float get_yBounds_20() const { return ___yBounds_20; }
	inline float* get_address_of_yBounds_20() { return &___yBounds_20; }
	inline void set_yBounds_20(float value)
	{
		___yBounds_20 = value;
	}

	inline static int32_t get_offset_of_islandCount_21() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___islandCount_21)); }
	inline int32_t get_islandCount_21() const { return ___islandCount_21; }
	inline int32_t* get_address_of_islandCount_21() { return &___islandCount_21; }
	inline void set_islandCount_21(int32_t value)
	{
		___islandCount_21 = value;
	}

	inline static int32_t get_offset_of_tempPath_22() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___tempPath_22)); }
	inline List_1_t1612828711 * get_tempPath_22() const { return ___tempPath_22; }
	inline List_1_t1612828711 ** get_address_of_tempPath_22() { return &___tempPath_22; }
	inline void set_tempPath_22(List_1_t1612828711 * value)
	{
		___tempPath_22 = value;
		Il2CppCodeGenWriteBarrier(&___tempPath_22, value);
	}

	inline static int32_t get_offset_of_endPoint_23() { return static_cast<int32_t>(offsetof(DestructibleSprite_t3534315683, ___endPoint_23)); }
	inline Vector2_t2243707579  get_endPoint_23() const { return ___endPoint_23; }
	inline Vector2_t2243707579 * get_address_of_endPoint_23() { return &___endPoint_23; }
	inline void set_endPoint_23(Vector2_t2243707579  value)
	{
		___endPoint_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
