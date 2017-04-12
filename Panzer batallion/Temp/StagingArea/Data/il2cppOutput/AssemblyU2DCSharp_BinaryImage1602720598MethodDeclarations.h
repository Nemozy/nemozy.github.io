#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BinaryImage
struct BinaryImage_t1602720598;
struct BinaryImage_t1602720598_marshaled_pinvoke;
struct BinaryImage_t1602720598_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BinaryImage1602720598.h"

// System.Void BinaryImage::.ctor(System.Int32,System.Int32)
extern "C"  void BinaryImage__ctor_m205140951 (BinaryImage_t1602720598 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BinaryImage::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void BinaryImage__ctor_m3597370874 (BinaryImage_t1602720598 * __this, int32_t ___x0, int32_t ___y1, bool ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BinaryImage::Set(System.Int32,System.Boolean)
extern "C"  void BinaryImage_Set_m3239615431 (BinaryImage_t1602720598 * __this, int32_t ___i0, bool ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BinaryImage::Get(System.Int32)
extern "C"  bool BinaryImage_Get_m182093498 (BinaryImage_t1602720598 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct BinaryImage_t1602720598;
struct BinaryImage_t1602720598_marshaled_pinvoke;

extern "C" void BinaryImage_t1602720598_marshal_pinvoke(const BinaryImage_t1602720598& unmarshaled, BinaryImage_t1602720598_marshaled_pinvoke& marshaled);
extern "C" void BinaryImage_t1602720598_marshal_pinvoke_back(const BinaryImage_t1602720598_marshaled_pinvoke& marshaled, BinaryImage_t1602720598& unmarshaled);
extern "C" void BinaryImage_t1602720598_marshal_pinvoke_cleanup(BinaryImage_t1602720598_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct BinaryImage_t1602720598;
struct BinaryImage_t1602720598_marshaled_com;

extern "C" void BinaryImage_t1602720598_marshal_com(const BinaryImage_t1602720598& unmarshaled, BinaryImage_t1602720598_marshaled_com& marshaled);
extern "C" void BinaryImage_t1602720598_marshal_com_back(const BinaryImage_t1602720598_marshaled_com& marshaled, BinaryImage_t1602720598& unmarshaled);
extern "C" void BinaryImage_t1602720598_marshal_com_cleanup(BinaryImage_t1602720598_marshaled_com& marshaled);
