﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// PhotonStreamQueue
struct PhotonStreamQueue_t4116903749;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t2038791948;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t2781148666;
// PhotonView
struct PhotonView_t899863581;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonAnimatorView
struct  PhotonAnimatorView_t66394406  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator PhotonAnimatorView::m_Animator
	Animator_t69676727 * ___m_Animator_2;
	// PhotonStreamQueue PhotonAnimatorView::m_StreamQueue
	PhotonStreamQueue_t4116903749 * ___m_StreamQueue_3;
	// System.Boolean PhotonAnimatorView::ShowLayerWeightsInspector
	bool ___ShowLayerWeightsInspector_4;
	// System.Boolean PhotonAnimatorView::ShowParameterInspector
	bool ___ShowParameterInspector_5;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::m_SynchronizeParameters
	List_1_t2038791948 * ___m_SynchronizeParameters_6;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::m_SynchronizeLayers
	List_1_t2781148666 * ___m_SynchronizeLayers_7;
	// UnityEngine.Vector3 PhotonAnimatorView::m_ReceiverPosition
	Vector3_t2243707580  ___m_ReceiverPosition_8;
	// System.Single PhotonAnimatorView::m_LastDeserializeTime
	float ___m_LastDeserializeTime_9;
	// System.Boolean PhotonAnimatorView::m_WasSynchronizeTypeChanged
	bool ___m_WasSynchronizeTypeChanged_10;
	// PhotonView PhotonAnimatorView::m_PhotonView
	PhotonView_t899863581 * ___m_PhotonView_11;
	// System.Collections.Generic.List`1<System.String> PhotonAnimatorView::m_raisedDiscreteTriggersCache
	List_1_t1398341365 * ___m_raisedDiscreteTriggersCache_12;

public:
	inline static int32_t get_offset_of_m_Animator_2() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_Animator_2)); }
	inline Animator_t69676727 * get_m_Animator_2() const { return ___m_Animator_2; }
	inline Animator_t69676727 ** get_address_of_m_Animator_2() { return &___m_Animator_2; }
	inline void set_m_Animator_2(Animator_t69676727 * value)
	{
		___m_Animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_2, value);
	}

	inline static int32_t get_offset_of_m_StreamQueue_3() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_StreamQueue_3)); }
	inline PhotonStreamQueue_t4116903749 * get_m_StreamQueue_3() const { return ___m_StreamQueue_3; }
	inline PhotonStreamQueue_t4116903749 ** get_address_of_m_StreamQueue_3() { return &___m_StreamQueue_3; }
	inline void set_m_StreamQueue_3(PhotonStreamQueue_t4116903749 * value)
	{
		___m_StreamQueue_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_StreamQueue_3, value);
	}

	inline static int32_t get_offset_of_ShowLayerWeightsInspector_4() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___ShowLayerWeightsInspector_4)); }
	inline bool get_ShowLayerWeightsInspector_4() const { return ___ShowLayerWeightsInspector_4; }
	inline bool* get_address_of_ShowLayerWeightsInspector_4() { return &___ShowLayerWeightsInspector_4; }
	inline void set_ShowLayerWeightsInspector_4(bool value)
	{
		___ShowLayerWeightsInspector_4 = value;
	}

	inline static int32_t get_offset_of_ShowParameterInspector_5() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___ShowParameterInspector_5)); }
	inline bool get_ShowParameterInspector_5() const { return ___ShowParameterInspector_5; }
	inline bool* get_address_of_ShowParameterInspector_5() { return &___ShowParameterInspector_5; }
	inline void set_ShowParameterInspector_5(bool value)
	{
		___ShowParameterInspector_5 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizeParameters_6() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_SynchronizeParameters_6)); }
	inline List_1_t2038791948 * get_m_SynchronizeParameters_6() const { return ___m_SynchronizeParameters_6; }
	inline List_1_t2038791948 ** get_address_of_m_SynchronizeParameters_6() { return &___m_SynchronizeParameters_6; }
	inline void set_m_SynchronizeParameters_6(List_1_t2038791948 * value)
	{
		___m_SynchronizeParameters_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_SynchronizeParameters_6, value);
	}

	inline static int32_t get_offset_of_m_SynchronizeLayers_7() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_SynchronizeLayers_7)); }
	inline List_1_t2781148666 * get_m_SynchronizeLayers_7() const { return ___m_SynchronizeLayers_7; }
	inline List_1_t2781148666 ** get_address_of_m_SynchronizeLayers_7() { return &___m_SynchronizeLayers_7; }
	inline void set_m_SynchronizeLayers_7(List_1_t2781148666 * value)
	{
		___m_SynchronizeLayers_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_SynchronizeLayers_7, value);
	}

	inline static int32_t get_offset_of_m_ReceiverPosition_8() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_ReceiverPosition_8)); }
	inline Vector3_t2243707580  get_m_ReceiverPosition_8() const { return ___m_ReceiverPosition_8; }
	inline Vector3_t2243707580 * get_address_of_m_ReceiverPosition_8() { return &___m_ReceiverPosition_8; }
	inline void set_m_ReceiverPosition_8(Vector3_t2243707580  value)
	{
		___m_ReceiverPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_LastDeserializeTime_9() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_LastDeserializeTime_9)); }
	inline float get_m_LastDeserializeTime_9() const { return ___m_LastDeserializeTime_9; }
	inline float* get_address_of_m_LastDeserializeTime_9() { return &___m_LastDeserializeTime_9; }
	inline void set_m_LastDeserializeTime_9(float value)
	{
		___m_LastDeserializeTime_9 = value;
	}

	inline static int32_t get_offset_of_m_WasSynchronizeTypeChanged_10() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_WasSynchronizeTypeChanged_10)); }
	inline bool get_m_WasSynchronizeTypeChanged_10() const { return ___m_WasSynchronizeTypeChanged_10; }
	inline bool* get_address_of_m_WasSynchronizeTypeChanged_10() { return &___m_WasSynchronizeTypeChanged_10; }
	inline void set_m_WasSynchronizeTypeChanged_10(bool value)
	{
		___m_WasSynchronizeTypeChanged_10 = value;
	}

	inline static int32_t get_offset_of_m_PhotonView_11() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_PhotonView_11)); }
	inline PhotonView_t899863581 * get_m_PhotonView_11() const { return ___m_PhotonView_11; }
	inline PhotonView_t899863581 ** get_address_of_m_PhotonView_11() { return &___m_PhotonView_11; }
	inline void set_m_PhotonView_11(PhotonView_t899863581 * value)
	{
		___m_PhotonView_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_11, value);
	}

	inline static int32_t get_offset_of_m_raisedDiscreteTriggersCache_12() { return static_cast<int32_t>(offsetof(PhotonAnimatorView_t66394406, ___m_raisedDiscreteTriggersCache_12)); }
	inline List_1_t1398341365 * get_m_raisedDiscreteTriggersCache_12() const { return ___m_raisedDiscreteTriggersCache_12; }
	inline List_1_t1398341365 ** get_address_of_m_raisedDiscreteTriggersCache_12() { return &___m_raisedDiscreteTriggersCache_12; }
	inline void set_m_raisedDiscreteTriggersCache_12(List_1_t1398341365 * value)
	{
		___m_raisedDiscreteTriggersCache_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_raisedDiscreteTriggersCache_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
