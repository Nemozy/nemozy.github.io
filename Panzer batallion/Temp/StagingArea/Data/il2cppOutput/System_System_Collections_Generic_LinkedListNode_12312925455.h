﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.SimulationItem
struct SimulationItem_t3416819542;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t3721527771;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t2312925455;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct  LinkedListNode_1_t2312925455  : public Il2CppObject
{
public:
	// T System.Collections.Generic.LinkedListNode`1::item
	SimulationItem_t3416819542 * ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::container
	LinkedList_1_t3721527771 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::forward
	LinkedListNode_1_t2312925455 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::back
	LinkedListNode_1_t2312925455 * ___back_3;

public:
	inline static int32_t get_offset_of_item_0() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t2312925455, ___item_0)); }
	inline SimulationItem_t3416819542 * get_item_0() const { return ___item_0; }
	inline SimulationItem_t3416819542 ** get_address_of_item_0() { return &___item_0; }
	inline void set_item_0(SimulationItem_t3416819542 * value)
	{
		___item_0 = value;
		Il2CppCodeGenWriteBarrier(&___item_0, value);
	}

	inline static int32_t get_offset_of_container_1() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t2312925455, ___container_1)); }
	inline LinkedList_1_t3721527771 * get_container_1() const { return ___container_1; }
	inline LinkedList_1_t3721527771 ** get_address_of_container_1() { return &___container_1; }
	inline void set_container_1(LinkedList_1_t3721527771 * value)
	{
		___container_1 = value;
		Il2CppCodeGenWriteBarrier(&___container_1, value);
	}

	inline static int32_t get_offset_of_forward_2() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t2312925455, ___forward_2)); }
	inline LinkedListNode_1_t2312925455 * get_forward_2() const { return ___forward_2; }
	inline LinkedListNode_1_t2312925455 ** get_address_of_forward_2() { return &___forward_2; }
	inline void set_forward_2(LinkedListNode_1_t2312925455 * value)
	{
		___forward_2 = value;
		Il2CppCodeGenWriteBarrier(&___forward_2, value);
	}

	inline static int32_t get_offset_of_back_3() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t2312925455, ___back_3)); }
	inline LinkedListNode_1_t2312925455 * get_back_3() const { return ___back_3; }
	inline LinkedListNode_1_t2312925455 ** get_address_of_back_3() { return &___back_3; }
	inline void set_back_3(LinkedListNode_1_t2312925455 * value)
	{
		___back_3 = value;
		Il2CppCodeGenWriteBarrier(&___back_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
