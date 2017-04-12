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

// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t3162327146;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Xml.Serialization.XmlSerializationReadCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationReadCallback__ctor_m976504677 (XmlSerializationReadCallback_t3162327146 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::Invoke()
extern "C"  Il2CppObject * XmlSerializationReadCallback_Invoke_m114698134 (XmlSerializationReadCallback_t3162327146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationReadCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationReadCallback_BeginInvoke_m2358242874 (XmlSerializationReadCallback_t3162327146 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * XmlSerializationReadCallback_EndInvoke_m85463938 (XmlSerializationReadCallback_t3162327146 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
