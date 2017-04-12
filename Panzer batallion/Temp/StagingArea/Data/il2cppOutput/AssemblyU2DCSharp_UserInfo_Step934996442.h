#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserInfo/Step
struct  Step_t934996442  : public Il2CppObject
{
public:
	// System.Int32 UserInfo/Step::PlayerId
	int32_t ___PlayerId_0;
	// System.Boolean UserInfo/Step::ShootState
	bool ___ShootState_1;
	// System.Single UserInfo/Step::StartStepTime
	float ___StartStepTime_2;

public:
	inline static int32_t get_offset_of_PlayerId_0() { return static_cast<int32_t>(offsetof(Step_t934996442, ___PlayerId_0)); }
	inline int32_t get_PlayerId_0() const { return ___PlayerId_0; }
	inline int32_t* get_address_of_PlayerId_0() { return &___PlayerId_0; }
	inline void set_PlayerId_0(int32_t value)
	{
		___PlayerId_0 = value;
	}

	inline static int32_t get_offset_of_ShootState_1() { return static_cast<int32_t>(offsetof(Step_t934996442, ___ShootState_1)); }
	inline bool get_ShootState_1() const { return ___ShootState_1; }
	inline bool* get_address_of_ShootState_1() { return &___ShootState_1; }
	inline void set_ShootState_1(bool value)
	{
		___ShootState_1 = value;
	}

	inline static int32_t get_offset_of_StartStepTime_2() { return static_cast<int32_t>(offsetof(Step_t934996442, ___StartStepTime_2)); }
	inline float get_StartStepTime_2() const { return ___StartStepTime_2; }
	inline float* get_address_of_StartStepTime_2() { return &___StartStepTime_2; }
	inline void set_StartStepTime_2(float value)
	{
		___StartStepTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
