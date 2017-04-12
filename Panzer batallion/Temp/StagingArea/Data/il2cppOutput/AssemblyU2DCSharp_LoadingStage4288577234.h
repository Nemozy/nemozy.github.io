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
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingStage
struct  LoadingStage_t4288577234  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean LoadingStage::loadScene
	bool ___loadScene_2;
	// System.String LoadingStage::scene
	String_t* ___scene_3;
	// UnityEngine.UI.Text LoadingStage::loadingText
	Text_t356221433 * ___loadingText_4;

public:
	inline static int32_t get_offset_of_loadScene_2() { return static_cast<int32_t>(offsetof(LoadingStage_t4288577234, ___loadScene_2)); }
	inline bool get_loadScene_2() const { return ___loadScene_2; }
	inline bool* get_address_of_loadScene_2() { return &___loadScene_2; }
	inline void set_loadScene_2(bool value)
	{
		___loadScene_2 = value;
	}

	inline static int32_t get_offset_of_scene_3() { return static_cast<int32_t>(offsetof(LoadingStage_t4288577234, ___scene_3)); }
	inline String_t* get_scene_3() const { return ___scene_3; }
	inline String_t** get_address_of_scene_3() { return &___scene_3; }
	inline void set_scene_3(String_t* value)
	{
		___scene_3 = value;
		Il2CppCodeGenWriteBarrier(&___scene_3, value);
	}

	inline static int32_t get_offset_of_loadingText_4() { return static_cast<int32_t>(offsetof(LoadingStage_t4288577234, ___loadingText_4)); }
	inline Text_t356221433 * get_loadingText_4() const { return ___loadingText_4; }
	inline Text_t356221433 ** get_address_of_loadingText_4() { return &___loadingText_4; }
	inline void set_loadingText_4(Text_t356221433 * value)
	{
		___loadingText_4 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
