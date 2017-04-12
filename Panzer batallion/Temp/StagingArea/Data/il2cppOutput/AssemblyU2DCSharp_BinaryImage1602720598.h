#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.BitArray
struct BitArray_t4180138994;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BinaryImage
struct  BinaryImage_t1602720598 
{
public:
	// System.Int32 BinaryImage::x
	int32_t ___x_0;
	// System.Int32 BinaryImage::y
	int32_t ___y_1;
	// System.Collections.BitArray BinaryImage::b
	BitArray_t4180138994 * ___b_2;
	// System.Int32 BinaryImage::Length
	int32_t ___Length_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(BinaryImage_t1602720598, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(BinaryImage_t1602720598, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(BinaryImage_t1602720598, ___b_2)); }
	inline BitArray_t4180138994 * get_b_2() const { return ___b_2; }
	inline BitArray_t4180138994 ** get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(BitArray_t4180138994 * value)
	{
		___b_2 = value;
		Il2CppCodeGenWriteBarrier(&___b_2, value);
	}

	inline static int32_t get_offset_of_Length_3() { return static_cast<int32_t>(offsetof(BinaryImage_t1602720598, ___Length_3)); }
	inline int32_t get_Length_3() const { return ___Length_3; }
	inline int32_t* get_address_of_Length_3() { return &___Length_3; }
	inline void set_Length_3(int32_t value)
	{
		___Length_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of BinaryImage
struct BinaryImage_t1602720598_marshaled_pinvoke
{
	int32_t ___x_0;
	int32_t ___y_1;
	BitArray_t4180138994 * ___b_2;
	int32_t ___Length_3;
};
// Native definition for COM marshalling of BinaryImage
struct BinaryImage_t1602720598_marshaled_com
{
	int32_t ___x_0;
	int32_t ___y_1;
	BitArray_t4180138994 * ___b_2;
	int32_t ___Length_3;
};
