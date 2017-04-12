#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UserInfo/PlayerInfo>
struct Dictionary_2_t1898498358;
// UnityEngine.Transform
struct Transform_t3275118058;
// UserInfo/Step
struct Step_t934996442;
// GameInfo/WeaponsInventoryInfo
struct WeaponsInventoryInfo_t1479328260;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageEnvironment
struct  StageEnvironment_t4098467083  : public MonoBehaviour_t3914164484
{
public:
	// System.Boolean StageEnvironment::InitPlayers
	bool ___InitPlayers_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,UserInfo/PlayerInfo> StageEnvironment::Players
	Dictionary_2_t1898498358 * ___Players_4;
	// System.Single StageEnvironment::StepTime
	float ___StepTime_5;
	// System.Single StageEnvironment::StartingTime
	float ___StartingTime_6;
	// System.Boolean StageEnvironment::StartStep
	bool ___StartStep_7;
	// System.Boolean StageEnvironment::StartGame
	bool ___StartGame_8;
	// System.Boolean StageEnvironment::GameOver
	bool ___GameOver_9;
	// UnityEngine.Transform StageEnvironment::UI
	Transform_t3275118058 * ___UI_10;
	// UnityEngine.Transform StageEnvironment::UITime
	Transform_t3275118058 * ___UITime_11;
	// UnityEngine.Transform StageEnvironment::UIMessage
	Transform_t3275118058 * ___UIMessage_12;
	// UnityEngine.Transform StageEnvironment::UIBlockScreen
	Transform_t3275118058 * ___UIBlockScreen_13;
	// System.Single StageEnvironment::SleepInitPlayer
	float ___SleepInitPlayer_14;
	// UserInfo/Step StageEnvironment::StepState
	Step_t934996442 * ___StepState_15;
	// GameInfo/WeaponsInventoryInfo StageEnvironment::InventoryInfo
	WeaponsInventoryInfo_t1479328260 * ___InventoryInfo_16;
	// System.Int32 StageEnvironment::GameObjectId
	int32_t ___GameObjectId_17;
	// System.Int32 StageEnvironment::CountPlayers
	int32_t ___CountPlayers_18;

public:
	inline static int32_t get_offset_of_InitPlayers_3() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___InitPlayers_3)); }
	inline bool get_InitPlayers_3() const { return ___InitPlayers_3; }
	inline bool* get_address_of_InitPlayers_3() { return &___InitPlayers_3; }
	inline void set_InitPlayers_3(bool value)
	{
		___InitPlayers_3 = value;
	}

	inline static int32_t get_offset_of_Players_4() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___Players_4)); }
	inline Dictionary_2_t1898498358 * get_Players_4() const { return ___Players_4; }
	inline Dictionary_2_t1898498358 ** get_address_of_Players_4() { return &___Players_4; }
	inline void set_Players_4(Dictionary_2_t1898498358 * value)
	{
		___Players_4 = value;
		Il2CppCodeGenWriteBarrier(&___Players_4, value);
	}

	inline static int32_t get_offset_of_StepTime_5() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___StepTime_5)); }
	inline float get_StepTime_5() const { return ___StepTime_5; }
	inline float* get_address_of_StepTime_5() { return &___StepTime_5; }
	inline void set_StepTime_5(float value)
	{
		___StepTime_5 = value;
	}

	inline static int32_t get_offset_of_StartingTime_6() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___StartingTime_6)); }
	inline float get_StartingTime_6() const { return ___StartingTime_6; }
	inline float* get_address_of_StartingTime_6() { return &___StartingTime_6; }
	inline void set_StartingTime_6(float value)
	{
		___StartingTime_6 = value;
	}

	inline static int32_t get_offset_of_StartStep_7() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___StartStep_7)); }
	inline bool get_StartStep_7() const { return ___StartStep_7; }
	inline bool* get_address_of_StartStep_7() { return &___StartStep_7; }
	inline void set_StartStep_7(bool value)
	{
		___StartStep_7 = value;
	}

	inline static int32_t get_offset_of_StartGame_8() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___StartGame_8)); }
	inline bool get_StartGame_8() const { return ___StartGame_8; }
	inline bool* get_address_of_StartGame_8() { return &___StartGame_8; }
	inline void set_StartGame_8(bool value)
	{
		___StartGame_8 = value;
	}

	inline static int32_t get_offset_of_GameOver_9() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___GameOver_9)); }
	inline bool get_GameOver_9() const { return ___GameOver_9; }
	inline bool* get_address_of_GameOver_9() { return &___GameOver_9; }
	inline void set_GameOver_9(bool value)
	{
		___GameOver_9 = value;
	}

	inline static int32_t get_offset_of_UI_10() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___UI_10)); }
	inline Transform_t3275118058 * get_UI_10() const { return ___UI_10; }
	inline Transform_t3275118058 ** get_address_of_UI_10() { return &___UI_10; }
	inline void set_UI_10(Transform_t3275118058 * value)
	{
		___UI_10 = value;
		Il2CppCodeGenWriteBarrier(&___UI_10, value);
	}

	inline static int32_t get_offset_of_UITime_11() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___UITime_11)); }
	inline Transform_t3275118058 * get_UITime_11() const { return ___UITime_11; }
	inline Transform_t3275118058 ** get_address_of_UITime_11() { return &___UITime_11; }
	inline void set_UITime_11(Transform_t3275118058 * value)
	{
		___UITime_11 = value;
		Il2CppCodeGenWriteBarrier(&___UITime_11, value);
	}

	inline static int32_t get_offset_of_UIMessage_12() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___UIMessage_12)); }
	inline Transform_t3275118058 * get_UIMessage_12() const { return ___UIMessage_12; }
	inline Transform_t3275118058 ** get_address_of_UIMessage_12() { return &___UIMessage_12; }
	inline void set_UIMessage_12(Transform_t3275118058 * value)
	{
		___UIMessage_12 = value;
		Il2CppCodeGenWriteBarrier(&___UIMessage_12, value);
	}

	inline static int32_t get_offset_of_UIBlockScreen_13() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___UIBlockScreen_13)); }
	inline Transform_t3275118058 * get_UIBlockScreen_13() const { return ___UIBlockScreen_13; }
	inline Transform_t3275118058 ** get_address_of_UIBlockScreen_13() { return &___UIBlockScreen_13; }
	inline void set_UIBlockScreen_13(Transform_t3275118058 * value)
	{
		___UIBlockScreen_13 = value;
		Il2CppCodeGenWriteBarrier(&___UIBlockScreen_13, value);
	}

	inline static int32_t get_offset_of_SleepInitPlayer_14() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___SleepInitPlayer_14)); }
	inline float get_SleepInitPlayer_14() const { return ___SleepInitPlayer_14; }
	inline float* get_address_of_SleepInitPlayer_14() { return &___SleepInitPlayer_14; }
	inline void set_SleepInitPlayer_14(float value)
	{
		___SleepInitPlayer_14 = value;
	}

	inline static int32_t get_offset_of_StepState_15() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___StepState_15)); }
	inline Step_t934996442 * get_StepState_15() const { return ___StepState_15; }
	inline Step_t934996442 ** get_address_of_StepState_15() { return &___StepState_15; }
	inline void set_StepState_15(Step_t934996442 * value)
	{
		___StepState_15 = value;
		Il2CppCodeGenWriteBarrier(&___StepState_15, value);
	}

	inline static int32_t get_offset_of_InventoryInfo_16() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___InventoryInfo_16)); }
	inline WeaponsInventoryInfo_t1479328260 * get_InventoryInfo_16() const { return ___InventoryInfo_16; }
	inline WeaponsInventoryInfo_t1479328260 ** get_address_of_InventoryInfo_16() { return &___InventoryInfo_16; }
	inline void set_InventoryInfo_16(WeaponsInventoryInfo_t1479328260 * value)
	{
		___InventoryInfo_16 = value;
		Il2CppCodeGenWriteBarrier(&___InventoryInfo_16, value);
	}

	inline static int32_t get_offset_of_GameObjectId_17() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___GameObjectId_17)); }
	inline int32_t get_GameObjectId_17() const { return ___GameObjectId_17; }
	inline int32_t* get_address_of_GameObjectId_17() { return &___GameObjectId_17; }
	inline void set_GameObjectId_17(int32_t value)
	{
		___GameObjectId_17 = value;
	}

	inline static int32_t get_offset_of_CountPlayers_18() { return static_cast<int32_t>(offsetof(StageEnvironment_t4098467083, ___CountPlayers_18)); }
	inline int32_t get_CountPlayers_18() const { return ___CountPlayers_18; }
	inline int32_t* get_address_of_CountPlayers_18() { return &___CountPlayers_18; }
	inline void set_CountPlayers_18(int32_t value)
	{
		___CountPlayers_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
