#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UserInfo/UnitInfo
struct UnitInfo_t3983494790;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// WeaponController
struct WeaponController_t2952407768;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.Dictionary`2<System.Int32,Bullet>
struct Dictionary_2_t1597941251;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitController
struct  UnitController_t1756279298  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.Vector3 UnitController::correctPlayerPos
	Vector3_t2243707580  ___correctPlayerPos_3;
	// UnityEngine.Quaternion UnitController::correctPlayerRot
	Quaternion_t4030073918  ___correctPlayerRot_4;
	// System.Single UnitController::Speed
	float ___Speed_5;
	// System.Single UnitController::DeltaSpeed
	float ___DeltaSpeed_6;
	// System.Single UnitController::MaxSpeed
	float ___MaxSpeed_7;
	// UserInfo/UnitInfo UnitController::UnitInfo
	UnitInfo_t3983494790 * ___UnitInfo_8;
	// System.Boolean UnitController::walkUp
	bool ___walkUp_9;
	// System.Boolean UnitController::walkLeft
	bool ___walkLeft_10;
	// System.Boolean UnitController::walkRight
	bool ___walkRight_11;
	// System.Boolean UnitController::walkDown
	bool ___walkDown_12;
	// System.Boolean UnitController::cellDown
	bool ___cellDown_13;
	// System.Boolean UnitController::shootingDown
	bool ___shootingDown_14;
	// System.Boolean UnitController::fire
	bool ___fire_15;
	// UnityEngine.Vector3 UnitController::moveVector
	Vector3_t2243707580  ___moveVector_16;
	// UnityEngine.Rigidbody2D UnitController::rgb
	Rigidbody2D_t502193897 * ___rgb_17;
	// UnityEngine.GameObject UnitController::Target_cell
	GameObject_t1756533147 * ___Target_cell_18;
	// UnityEngine.Ray UnitController::RayToMouse
	Ray_t2469606224  ___RayToMouse_19;
	// System.Single UnitController::MaxStretchSqr
	float ___MaxStretchSqr_20;
	// WeaponController UnitController::Weapon
	WeaponController_t2952407768 * ___Weapon_21;
	// UnityEngine.Transform UnitController::FuelBar
	Transform_t3275118058 * ___FuelBar_22;
	// UnityEngine.Transform UnitController::HpBar
	Transform_t3275118058 * ___HpBar_23;
	// System.Collections.Generic.Dictionary`2<System.Int32,Bullet> UnitController::Bullets
	Dictionary_2_t1597941251 * ___Bullets_24;
	// System.Single UnitController::StartFreeze
	float ___StartFreeze_25;
	// System.Single UnitController::FreezeDuration
	float ___FreezeDuration_26;
	// UnityEngine.Transform UnitController::Stage
	Transform_t3275118058 * ___Stage_27;
	// System.Boolean UnitController::DisableUnit
	bool ___DisableUnit_28;
	// System.Int32 UnitController::BulletIdCounter
	int32_t ___BulletIdCounter_29;
	// System.Int32 UnitController::Id
	int32_t ___Id_30;

public:
	inline static int32_t get_offset_of_correctPlayerPos_3() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___correctPlayerPos_3)); }
	inline Vector3_t2243707580  get_correctPlayerPos_3() const { return ___correctPlayerPos_3; }
	inline Vector3_t2243707580 * get_address_of_correctPlayerPos_3() { return &___correctPlayerPos_3; }
	inline void set_correctPlayerPos_3(Vector3_t2243707580  value)
	{
		___correctPlayerPos_3 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_4() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___correctPlayerRot_4)); }
	inline Quaternion_t4030073918  get_correctPlayerRot_4() const { return ___correctPlayerRot_4; }
	inline Quaternion_t4030073918 * get_address_of_correctPlayerRot_4() { return &___correctPlayerRot_4; }
	inline void set_correctPlayerRot_4(Quaternion_t4030073918  value)
	{
		___correctPlayerRot_4 = value;
	}

	inline static int32_t get_offset_of_Speed_5() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___Speed_5)); }
	inline float get_Speed_5() const { return ___Speed_5; }
	inline float* get_address_of_Speed_5() { return &___Speed_5; }
	inline void set_Speed_5(float value)
	{
		___Speed_5 = value;
	}

	inline static int32_t get_offset_of_DeltaSpeed_6() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___DeltaSpeed_6)); }
	inline float get_DeltaSpeed_6() const { return ___DeltaSpeed_6; }
	inline float* get_address_of_DeltaSpeed_6() { return &___DeltaSpeed_6; }
	inline void set_DeltaSpeed_6(float value)
	{
		___DeltaSpeed_6 = value;
	}

	inline static int32_t get_offset_of_MaxSpeed_7() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___MaxSpeed_7)); }
	inline float get_MaxSpeed_7() const { return ___MaxSpeed_7; }
	inline float* get_address_of_MaxSpeed_7() { return &___MaxSpeed_7; }
	inline void set_MaxSpeed_7(float value)
	{
		___MaxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_UnitInfo_8() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___UnitInfo_8)); }
	inline UnitInfo_t3983494790 * get_UnitInfo_8() const { return ___UnitInfo_8; }
	inline UnitInfo_t3983494790 ** get_address_of_UnitInfo_8() { return &___UnitInfo_8; }
	inline void set_UnitInfo_8(UnitInfo_t3983494790 * value)
	{
		___UnitInfo_8 = value;
		Il2CppCodeGenWriteBarrier(&___UnitInfo_8, value);
	}

	inline static int32_t get_offset_of_walkUp_9() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___walkUp_9)); }
	inline bool get_walkUp_9() const { return ___walkUp_9; }
	inline bool* get_address_of_walkUp_9() { return &___walkUp_9; }
	inline void set_walkUp_9(bool value)
	{
		___walkUp_9 = value;
	}

	inline static int32_t get_offset_of_walkLeft_10() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___walkLeft_10)); }
	inline bool get_walkLeft_10() const { return ___walkLeft_10; }
	inline bool* get_address_of_walkLeft_10() { return &___walkLeft_10; }
	inline void set_walkLeft_10(bool value)
	{
		___walkLeft_10 = value;
	}

	inline static int32_t get_offset_of_walkRight_11() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___walkRight_11)); }
	inline bool get_walkRight_11() const { return ___walkRight_11; }
	inline bool* get_address_of_walkRight_11() { return &___walkRight_11; }
	inline void set_walkRight_11(bool value)
	{
		___walkRight_11 = value;
	}

	inline static int32_t get_offset_of_walkDown_12() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___walkDown_12)); }
	inline bool get_walkDown_12() const { return ___walkDown_12; }
	inline bool* get_address_of_walkDown_12() { return &___walkDown_12; }
	inline void set_walkDown_12(bool value)
	{
		___walkDown_12 = value;
	}

	inline static int32_t get_offset_of_cellDown_13() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___cellDown_13)); }
	inline bool get_cellDown_13() const { return ___cellDown_13; }
	inline bool* get_address_of_cellDown_13() { return &___cellDown_13; }
	inline void set_cellDown_13(bool value)
	{
		___cellDown_13 = value;
	}

	inline static int32_t get_offset_of_shootingDown_14() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___shootingDown_14)); }
	inline bool get_shootingDown_14() const { return ___shootingDown_14; }
	inline bool* get_address_of_shootingDown_14() { return &___shootingDown_14; }
	inline void set_shootingDown_14(bool value)
	{
		___shootingDown_14 = value;
	}

	inline static int32_t get_offset_of_fire_15() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___fire_15)); }
	inline bool get_fire_15() const { return ___fire_15; }
	inline bool* get_address_of_fire_15() { return &___fire_15; }
	inline void set_fire_15(bool value)
	{
		___fire_15 = value;
	}

	inline static int32_t get_offset_of_moveVector_16() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___moveVector_16)); }
	inline Vector3_t2243707580  get_moveVector_16() const { return ___moveVector_16; }
	inline Vector3_t2243707580 * get_address_of_moveVector_16() { return &___moveVector_16; }
	inline void set_moveVector_16(Vector3_t2243707580  value)
	{
		___moveVector_16 = value;
	}

	inline static int32_t get_offset_of_rgb_17() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___rgb_17)); }
	inline Rigidbody2D_t502193897 * get_rgb_17() const { return ___rgb_17; }
	inline Rigidbody2D_t502193897 ** get_address_of_rgb_17() { return &___rgb_17; }
	inline void set_rgb_17(Rigidbody2D_t502193897 * value)
	{
		___rgb_17 = value;
		Il2CppCodeGenWriteBarrier(&___rgb_17, value);
	}

	inline static int32_t get_offset_of_Target_cell_18() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___Target_cell_18)); }
	inline GameObject_t1756533147 * get_Target_cell_18() const { return ___Target_cell_18; }
	inline GameObject_t1756533147 ** get_address_of_Target_cell_18() { return &___Target_cell_18; }
	inline void set_Target_cell_18(GameObject_t1756533147 * value)
	{
		___Target_cell_18 = value;
		Il2CppCodeGenWriteBarrier(&___Target_cell_18, value);
	}

	inline static int32_t get_offset_of_RayToMouse_19() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___RayToMouse_19)); }
	inline Ray_t2469606224  get_RayToMouse_19() const { return ___RayToMouse_19; }
	inline Ray_t2469606224 * get_address_of_RayToMouse_19() { return &___RayToMouse_19; }
	inline void set_RayToMouse_19(Ray_t2469606224  value)
	{
		___RayToMouse_19 = value;
	}

	inline static int32_t get_offset_of_MaxStretchSqr_20() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___MaxStretchSqr_20)); }
	inline float get_MaxStretchSqr_20() const { return ___MaxStretchSqr_20; }
	inline float* get_address_of_MaxStretchSqr_20() { return &___MaxStretchSqr_20; }
	inline void set_MaxStretchSqr_20(float value)
	{
		___MaxStretchSqr_20 = value;
	}

	inline static int32_t get_offset_of_Weapon_21() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___Weapon_21)); }
	inline WeaponController_t2952407768 * get_Weapon_21() const { return ___Weapon_21; }
	inline WeaponController_t2952407768 ** get_address_of_Weapon_21() { return &___Weapon_21; }
	inline void set_Weapon_21(WeaponController_t2952407768 * value)
	{
		___Weapon_21 = value;
		Il2CppCodeGenWriteBarrier(&___Weapon_21, value);
	}

	inline static int32_t get_offset_of_FuelBar_22() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___FuelBar_22)); }
	inline Transform_t3275118058 * get_FuelBar_22() const { return ___FuelBar_22; }
	inline Transform_t3275118058 ** get_address_of_FuelBar_22() { return &___FuelBar_22; }
	inline void set_FuelBar_22(Transform_t3275118058 * value)
	{
		___FuelBar_22 = value;
		Il2CppCodeGenWriteBarrier(&___FuelBar_22, value);
	}

	inline static int32_t get_offset_of_HpBar_23() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___HpBar_23)); }
	inline Transform_t3275118058 * get_HpBar_23() const { return ___HpBar_23; }
	inline Transform_t3275118058 ** get_address_of_HpBar_23() { return &___HpBar_23; }
	inline void set_HpBar_23(Transform_t3275118058 * value)
	{
		___HpBar_23 = value;
		Il2CppCodeGenWriteBarrier(&___HpBar_23, value);
	}

	inline static int32_t get_offset_of_Bullets_24() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___Bullets_24)); }
	inline Dictionary_2_t1597941251 * get_Bullets_24() const { return ___Bullets_24; }
	inline Dictionary_2_t1597941251 ** get_address_of_Bullets_24() { return &___Bullets_24; }
	inline void set_Bullets_24(Dictionary_2_t1597941251 * value)
	{
		___Bullets_24 = value;
		Il2CppCodeGenWriteBarrier(&___Bullets_24, value);
	}

	inline static int32_t get_offset_of_StartFreeze_25() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___StartFreeze_25)); }
	inline float get_StartFreeze_25() const { return ___StartFreeze_25; }
	inline float* get_address_of_StartFreeze_25() { return &___StartFreeze_25; }
	inline void set_StartFreeze_25(float value)
	{
		___StartFreeze_25 = value;
	}

	inline static int32_t get_offset_of_FreezeDuration_26() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___FreezeDuration_26)); }
	inline float get_FreezeDuration_26() const { return ___FreezeDuration_26; }
	inline float* get_address_of_FreezeDuration_26() { return &___FreezeDuration_26; }
	inline void set_FreezeDuration_26(float value)
	{
		___FreezeDuration_26 = value;
	}

	inline static int32_t get_offset_of_Stage_27() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___Stage_27)); }
	inline Transform_t3275118058 * get_Stage_27() const { return ___Stage_27; }
	inline Transform_t3275118058 ** get_address_of_Stage_27() { return &___Stage_27; }
	inline void set_Stage_27(Transform_t3275118058 * value)
	{
		___Stage_27 = value;
		Il2CppCodeGenWriteBarrier(&___Stage_27, value);
	}

	inline static int32_t get_offset_of_DisableUnit_28() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___DisableUnit_28)); }
	inline bool get_DisableUnit_28() const { return ___DisableUnit_28; }
	inline bool* get_address_of_DisableUnit_28() { return &___DisableUnit_28; }
	inline void set_DisableUnit_28(bool value)
	{
		___DisableUnit_28 = value;
	}

	inline static int32_t get_offset_of_BulletIdCounter_29() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___BulletIdCounter_29)); }
	inline int32_t get_BulletIdCounter_29() const { return ___BulletIdCounter_29; }
	inline int32_t* get_address_of_BulletIdCounter_29() { return &___BulletIdCounter_29; }
	inline void set_BulletIdCounter_29(int32_t value)
	{
		___BulletIdCounter_29 = value;
	}

	inline static int32_t get_offset_of_Id_30() { return static_cast<int32_t>(offsetof(UnitController_t1756279298, ___Id_30)); }
	inline int32_t get_Id_30() const { return ___Id_30; }
	inline int32_t* get_address_of_Id_30() { return &___Id_30; }
	inline void set_Id_30(int32_t value)
	{
		___Id_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
