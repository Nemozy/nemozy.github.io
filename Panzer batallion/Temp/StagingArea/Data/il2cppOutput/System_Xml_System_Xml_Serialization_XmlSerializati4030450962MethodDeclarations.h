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

// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t4030450962;
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

// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationFixupCallback__ctor_m592741441 (XmlSerializationFixupCallback_t4030450962 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::Invoke(System.Object)
extern "C"  void XmlSerializationFixupCallback_Invoke_m1546254179 (XmlSerializationFixupCallback_t4030450962 * __this, Il2CppObject * ___fixup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationFixupCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationFixupCallback_BeginInvoke_m889886784 (XmlSerializationFixupCallback_t4030450962 * __this, Il2CppObject * ___fixup0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationFixupCallback::EndInvoke(System.IAsyncResult)
extern "C"  void XmlSerializationFixupCallback_EndInvoke_m403955767 (XmlSerializationFixupCallback_t4030450962 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
