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

// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct XmlSerializationCollectionFixupCallback_t3113026122;
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

// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationCollectionFixupCallback__ctor_m3832251351 (XmlSerializationCollectionFixupCallback_t3113026122 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::Invoke(System.Object,System.Object)
extern "C"  void XmlSerializationCollectionFixupCallback_Invoke_m3737312827 (XmlSerializationCollectionFixupCallback_t3113026122 * __this, Il2CppObject * ___collection0, Il2CppObject * ___collectionItems1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationCollectionFixupCallback::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationCollectionFixupCallback_BeginInvoke_m976728350 (XmlSerializationCollectionFixupCallback_t3113026122 * __this, Il2CppObject * ___collection0, Il2CppObject * ___collectionItems1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::EndInvoke(System.IAsyncResult)
extern "C"  void XmlSerializationCollectionFixupCallback_EndInvoke_m1299468921 (XmlSerializationCollectionFixupCallback_t3113026122 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
