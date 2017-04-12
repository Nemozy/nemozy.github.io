#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageInventoryController
struct  StageInventoryController_t709026682  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.Transform StageInventoryController::Stage
	Transform_t3275118058 * ___Stage_3;
	// System.Int32 StageInventoryController::DmgRadius
	int32_t ___DmgRadius_4;
	// System.Int32 StageInventoryController::DmgMin
	int32_t ___DmgMin_5;
	// System.Int32 StageInventoryController::DmgMax
	int32_t ___DmgMax_6;

public:
	inline static int32_t get_offset_of_Stage_3() { return static_cast<int32_t>(offsetof(StageInventoryController_t709026682, ___Stage_3)); }
	inline Transform_t3275118058 * get_Stage_3() const { return ___Stage_3; }
	inline Transform_t3275118058 ** get_address_of_Stage_3() { return &___Stage_3; }
	inline void set_Stage_3(Transform_t3275118058 * value)
	{
		___Stage_3 = value;
		Il2CppCodeGenWriteBarrier(&___Stage_3, value);
	}

	inline static int32_t get_offset_of_DmgRadius_4() { return static_cast<int32_t>(offsetof(StageInventoryController_t709026682, ___DmgRadius_4)); }
	inline int32_t get_DmgRadius_4() const { return ___DmgRadius_4; }
	inline int32_t* get_address_of_DmgRadius_4() { return &___DmgRadius_4; }
	inline void set_DmgRadius_4(int32_t value)
	{
		___DmgRadius_4 = value;
	}

	inline static int32_t get_offset_of_DmgMin_5() { return static_cast<int32_t>(offsetof(StageInventoryController_t709026682, ___DmgMin_5)); }
	inline int32_t get_DmgMin_5() const { return ___DmgMin_5; }
	inline int32_t* get_address_of_DmgMin_5() { return &___DmgMin_5; }
	inline void set_DmgMin_5(int32_t value)
	{
		___DmgMin_5 = value;
	}

	inline static int32_t get_offset_of_DmgMax_6() { return static_cast<int32_t>(offsetof(StageInventoryController_t709026682, ___DmgMax_6)); }
	inline int32_t get_DmgMax_6() const { return ___DmgMax_6; }
	inline int32_t* get_address_of_DmgMax_6() { return &___DmgMax_6; }
	inline void set_DmgMax_6(int32_t value)
	{
		___DmgMax_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
